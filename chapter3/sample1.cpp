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
    
    ExercisePerson person1 = ExercisePerson("Ken", 70);
    ExercisePerson person2 = ExercisePerson("Emi", 50);

    // public → .nameなどで取り出せる
    // private → .nameなどで取り出せない

    // cout << person1.m_name << "さんの体重は" << person1.m_weight << '\n';
    cout << person1.m_name << '\n';
    cout << person2.m_name << '\n';

    double a = person1.exercise();
    double b = person2.exercise();

    cout << person1.m_name << "の体重は" << a << "になりました。" << '\n';
    cout << person2.m_name << "の体重は" << b << "になりました。" << '\n';
}