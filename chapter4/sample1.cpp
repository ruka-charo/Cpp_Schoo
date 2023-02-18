#include <iostream>
using namespace std;

class ExercisePerson{
    // 値の取得は関数を経由する → カプセル化
    private:
        string m_name;
        double m_weight;
    public:
        // コンストラクタ → オブジェクトが生成されたときに自動で実行される
        // classの同じ名前にする
        ExercisePerson(string name, double weight){
            m_name = name;
            m_weight = weight;
        }

        string get_name(){

            return m_name;
        }

        double exercise(){
            m_weight -= 1;
            
            return m_weight;
        }
};


int main(){
    
    ExercisePerson person1 = ExercisePerson("Ken", 70);
    ExercisePerson person2 = ExercisePerson("Emi", 50);

    // 関数で経由することで不意の更新を防ぐ
    cout << person1.get_name() << '\n';
    cout << person2.get_name() << '\n';

    double a = person1.exercise();
    double b = person2.exercise();

    cout << person1.get_name() << "の体重は" << a << "になりました。" << '\n';
    cout << person2.get_name() << "の体重は" << b << "になりました。" << '\n';
}