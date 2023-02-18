#include <iostream>
#include <memory>
using namespace std;

class Person{
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
    
    // virtual → 小クラスで実装することを意味する
    virtual double exercise(){
        return 0;
    }
};


class RunningPerson: public Person{
    using Person::Person;

    public:
        double exercise(){
            m_weight -= 1;

            return m_weight;
        };
};

class WalkingPerson: public Person{
    using Person::Person;

    public:
        double exercise(){
            m_weight -= 0.5;

            return m_weight;
        };
};


int main(){

    unique_ptr<Person> person1;
    person1 = make_unique<RunningPerson>("Ken", 170, 70);

    // virtualで関数を定義しているので動作する
    double a = person1 -> exercise();
    cout << a << '\n';


    unique_ptr<Person> person2;
    person2 = make_unique<WalkingPerson>("Emi", 150, 50);

    double b = person2 -> exercise();
    cout << b << '\n';
}