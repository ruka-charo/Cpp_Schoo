#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Exercise{
    protected:
        double m_weight;
    
    public:
        Exercise(double weight){
            m_weight = weight;
        }

        double cal_down_weight(double cal){
            double down_weight = cal / 7200;
            m_weight -= down_weight;

            return m_weight;
        }

    virtual double cal_calory(double time){
        return 0;
    }
};

// Runningのクラス
class RunningExercise: public Exercise{
    using Exercise::Exercise;

    public:
        double cal_calory(double time){
            double cal = 9 * time * m_weight * 1.05 / 60;

            return cal;
        }
};

// Walkingのクラス
class WalkingExercise: public Exercise{
    using Exercise::Exercise;

    public:
        double cal_calory(double time){
            double cal = 3 * time * m_weight * 1.05 / 60;

            return cal;
        }
};

// Cyclingのクラス
class CyclingExercise: public Exercise{
    using Exercise::Exercise;

    public:
        double cal_calory(double time){
            double cal = 5 * time * m_weight * 1.05 / 60;

            return cal;
        }
};


int main(){
    int e_type;
    cout << "運動タイプに対応した番号を入力してください。" << '\n';
    cout << "1: running, 2: walking, 3: cycling" << '\n';
    cin >> e_type;

    double w;
    cout << "体重を入力してください。" << '\n';
    cin >> w;

    double e_counts;
    cout << "運動を何回行ったか入力してください。" << '\n';
    cin >> e_counts;

    double t;
    cout << "平均の運動時間を入力してください(分)。" << '\n';
    cin >> t;


    // 体重の推移を格納する
    vector<double> weight_list;

    // インスタンスを作成
    unique_ptr<Exercise> exercise;
    if (e_type == 1){
        exercise = make_unique<RunningExercise>(w);
    }
    else if (e_type == 2){
        exercise = make_unique<WalkingExercise>(w);
    }
    else if (e_type == 3){
        exercise = make_unique<CyclingExercise>(w);
    }

    // 運動前の体重を格納しておく
    weight_list.push_back(w);
    for (int i = 1; i <= e_counts; i++){
        // その時のm_weightと運動時間からカロリーを計算
        int cal = exercise -> cal_calory(t);
        
        // その消費カロリーで減少したm_weightを格納
        weight_list.push_back(exercise -> cal_down_weight(cal));
    }

    // 運動前と運動後の体重を表示する
    int length = weight_list.size();

    try{
        cout << "運動前の体重: " << weight_list.at(0) << "kg" << '\n';
        cout << "運動後の体重: " << weight_list.at(length - 1) << "kg" << '\n';
    }
    catch(...){
        cout << "運動回数の入力が正しくありません。" << '\n';
        cout << "1以上の整数で入力してください" << '\n';
    }

}