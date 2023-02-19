#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> score;

    score.insert(make_pair("Ken", 96));
    score.insert(make_pair("Emi", 86));
    score.insert(make_pair("Tom", 76));

    // scoreのそれぞれの要素について繰り返し処理をしてくれる
    for (auto x: score){
        // .first →　keyを取り出す
        cout << x.first << '\n';
        // .second → valueを取り出す
        cout << x.second << '\n';
    }
}