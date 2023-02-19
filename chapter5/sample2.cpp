#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> x;
    x.push_back("aaa");
    x.push_back("bbb");
    x.push_back("Hello!");

    int length = x.size();
    for (int i = 0; i < length; i++){
        cout << x.at(i) << '\n';
    }
}