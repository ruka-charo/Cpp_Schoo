#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> x;

    x.push_back(100);
    x.push_back(20);

    try{
        cout << x.at(0) << '\n';
        cout << x.at(2) << '\n';
    }
    catch(...){
        cout << "エラーが発生しました" << '\n';
    }
}