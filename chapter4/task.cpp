#include <iostream>
#include <memory>
using namespace std;


class Exercise{
    protected:
        int m_e;
        double m_w;
        double m_t;
        double m_cal;

    public:
        Exercise(int e, double w, double t){
            m_e = e;
            m_w = w;
            m_t = t;
        }

        double cal_down_weight(){
            double down_weight = m_cal / 7200;
            m_w -= down_weight;

                return m_w;
        }

    virtual double cal_calory(){
            return 0;
    }
};

class RunningExercise: public Exercise{
    using Exercise::Exercise;

    public:
        double cal_calory(){
            m_cal = 9 * m_w * m_t * 1.05 / 60;

            return m_cal;
        };
};

class WalkingExercise: public Exercise{
    using Exercise::Exercise;

    public:
        double cal_calory(){
            m_cal = 3 * m_w * m_t * 1.05 / 60;

            return m_cal;
        };
};

class CyclingExercise: public Exercise{
    using Exercise::Exercise;

    public:
        double cal_calory(){
            m_cal = 5 * m_w * m_t * 1.05 / 60;

            return m_cal;
        };
};

int main(){

    int e;
    cout << "運動タイプに対応した番号を入力してください。" << '\n';
    cout << "1: running, 2: walking, 3: cycling" << '\n';
    cin >> e;

    double w;
    cout << "体重を入力してください。" << endl;
    cin >> w;

    double t;
    cout << "運動時間を入力してください(分)。" << endl;
    cin >> t;

    // インスタンスの呼び出し (スマートポインタ)
    unique_ptr<Exercise> exercise;

    if (e == 1){
        exercise = make_unique<RunningExercise>(e, w, t);
    }
    else if (e == 2){
        exercise = make_unique<WalkingExercise>(e, w, t);
    }
    else if (e == 3){
        exercise = make_unique<CyclingExercise>(e, w, t);
    }

    double cal = exercise -> cal_calory();
    double down_weight = exercise -> cal_down_weight();

    cout << "消費したカロリーは" << cal << "calです。" << '\n';
    cout << "体重は" << down_weight << "kgです。" << '\n';

}