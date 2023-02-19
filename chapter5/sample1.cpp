#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> x;
    x.push_back(20);
    x.push_back(10);
    x.push_back(30);
    x.push_back(100);

    int length = x.size();
    for (int i = 0; i < length; i++){
        // x.at(i) → x[i]でも良い
        // x.at(i)は範囲外を指定した時にエラーになるがx[i]はエラーにならず予期しない値を出力する。
        cout << x.at(i) << '\n';
    }

}