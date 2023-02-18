#include <iostream>
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
    // オブジェクト作成以降のところで違いが出る
    ExercisePerson* person1 = new ExercisePerson("Ken", 70);
    ExercisePerson* person2 = new ExercisePerson("Emi", 50);

    // .ではなく -> で取り出し
    cout << person1 -> m_name << '\n';
    cout << person2 -> m_name << '\n';

    double a = person1 -> exercise();
    double b = person1 -> exercise();

    cout << person1 -> m_name << "の体重は" << a << "になりました。" << '\n';
    cout << person2 -> m_name << "の体重は" << b << "になりました。" << '\n';

    // 忘れないよう注意
    delete person1;
    delete person2;
}