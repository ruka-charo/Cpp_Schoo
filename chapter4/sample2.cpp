#include <iostream>
#include <memory>
using namespace std;


class Person{
    // 子クラスの中で変数を使用したい場合 private → protected
    protected:
        string m_name;
        double m_height;
        double m_weight;

    public:
        Person(string name, double height, double weight){
            m_name = name;
            m_height = height;
            m_weight = weight;
        };

        string get_name(){
            return m_name;
        }
};

class ExercisePerson: public Person{
    public:
        // 親クラスのコンストラクタをそのまま使用する場合
        // 独自に作成しても良い
        using Person::Person;

        // 親クラスから追加した関数
        double exercise(){
            m_weight -= 1;
            
            return m_weight;
        };
};


int main(){
    // 小クラスのスマートポインタを用意して、そこに小クラスのメモリを確保
    unique_ptr<ExercisePerson> person1;
    person1 = make_unique<ExercisePerson>("Ken", 170, 70);

    double a = person1 -> exercise();
    cout << person1 -> get_name() << "の体重は" << a << "kgです。" << '\n';

    // 親クラスのスマートポインタを用意して、そこに小クラスのメモリを確保
    // 親クラスで定義していない関数は使用できない
    unique_ptr<Person> person2;
    person2 = make_unique<ExercisePerson>("Emi", 150, 50);

    // double b = person2 -> exercise();
}