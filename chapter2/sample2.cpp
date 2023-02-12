#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 12; i++){
        if (i % 2 == 1){
            continue;
        }
        
        cout << i << "月" << endl;

        if (i == 8){
            break;
        }
    }
}