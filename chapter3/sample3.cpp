#include <iostream>
#include <memory>
using namespace std;

class ExercisePerson{
    public:
        string m_name;
    private:
        double m_weight;
    public:
        // コンストラクタ → オブジェクトが生成されたときに自動で実行される
        // classの同じ名前にする
        ExercisePerson(string name, double weight){
            m_name = name;
            m_weight = weight;
        }

        double exercise(){
            m_weight -= 1;
            
            return m_weight;
        }
};


int main(){
    // スマートポインタ (メモリ管理などを自動で行ってくれる)
    unique_ptr<ExercisePerson> person1;
    person1 = make_unique<ExercisePerson>("Ken", 70);

    cout << person1 -> m_name << '\n';

    unique_ptr<ExercisePerson> person2 = make_unique<ExercisePerson>("Emi", 50);
    
    cout << person2 -> m_name << '\n';

    double a = person1 -> exercise();
    double b = person2 -> exercise();

    cout << person1 -> m_name << "の体重は" << a << "になりました。" << '\n';
    cout << person2 -> m_name << "の体重は" << b << "になりました。" << '\n';

    // deleteは必要なし
}