#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> score;

    score.insert(make_pair(96, "Ken"));
    score.insert(make_pair(86, "Emi"));
    score.insert(make_pair(76, "Tom"));

    cout << score[96] << '\n';
    cout << score[86] << '\n';
    cout << score[76] << '\n';
}