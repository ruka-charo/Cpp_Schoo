#include <iostream>
using namespace std;

int main(){
    int k = 20;
    int c[k];

    c[0] = 1;
    c[1] = 1;

    for (int i = 2; i < k; i++){
        c[i] = c[i-1] + c[i-2];
    }

    for (int i = 0; i < k; i++){
        cout << c[i] << endl;
    } 
}