#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> score;

    score.insert(make_pair("Ken", 96));
    score.insert(make_pair("Emi", 86));
    score.insert(make_pair("Tom", 76));

    cout << score["Ken"] << '\n';
    cout << score["Emi"] << '\n';
    cout << score["Tom"] << '\n';
}