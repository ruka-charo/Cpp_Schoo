#include <iostream>
#include <memory>
using namespace std;


class Exercise{
    public:
        int m_e;
        double m_w;
        double m_t;
        double m_cal;

        Exercise(int e, double w, double t){
            m_e = e;
            m_w = w;
            m_t = t;
        }

        double cal_calory(){
            double cal;

            if (m_e == 1){
                cal = 9 * m_w * m_t * 1.05 / 60;
            }
            else if (m_e = 2){
                cal = 3 * m_w * m_t * 1.05 / 60;
            }
            else if (m_e = 3){
                cal = 5 * m_w * m_t * 1.05 / 60;
            }

            return cal;
        }

        double cal_down_weight(){
            // どのくらいカロリーを消費するか
            m_cal = cal_calory();

            // 消費カロリーによってどのくらい体重が減るか
            double down_weight = m_cal / 7200;
            m_w -= down_weight;

            return m_w;
        }
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
    exercise = make_unique<Exercise>(e, w, t);

    // 減少後の体重を表示
    double d_w = exercise -> cal_down_weight();

    cout << "消費カロリーは" << exercise -> m_cal << "calです。" << '\n';
    cout << "運動後の体重は" << d_w << "kgです。" << '\n';

}