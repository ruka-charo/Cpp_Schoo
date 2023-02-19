#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>> x;
    vector<int> tmp1 = {1, 2, 3};
    vector<int> tmp2 = {4, 5, 6};
    vector<int> tmp3 = {-11, -12, -13};

    x.push_back(tmp1);
    x.push_back(tmp2);
    x.push_back(tmp3);

    int length = x.size();
    for (int i = 0; i < length; i++){
        // j < x.at(i).size()でも良い
        for (int j = 0; j < x[i].size(); j++){
            cout << x.at(i).at(j) << '\n';
        }
    }
}