#include <iostream>
using namespace std;

void print(int a){
    cout << a << endl;
}

void print(string a){
    cout << a << endl;
}

int add(int a, int b){
    return a + b;
}

int main(){
    int x = 10;
    cout << x << endl;

    int y = 20;
    print(y);

    string z = "z";
    print(z);

    int a = add(x, y);
    print(a);
}