#include <iostream>
using namespace std;

int main(){
    int x = 100;
    int y = 200;
    bool z = x < y;

    if (z){
        cout << "yのほうが大きいです" << endl;
        cout << y << endl;
    }
    else if (x == y){
        cout << "xとyが等しいです" << endl;
        cout << x << y << endl;
    }
    else {
        cout << "xの方が大きいです" << endl;
        cout << x << endl;
    }
}