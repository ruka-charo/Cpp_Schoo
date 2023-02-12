# include <iostream>
using namespace std;

double calculate_func(int e, double w, double t){
    double cal;

    if (e == 1){
        cal = 9 * w * t * 1.05 / 60;
    }
    else if (e == 2){
        cal = 3 * w * t * 1.05 / 60;
    }
    else if (e == 3){
        cal = 5 * w * t * 1.05 / 60;
    }

    return cal;
}

int main(){
    int e;
    cout << "運動タイプに対応した番号を入力してください。" << endl;
    cout << "1: running, 2: walking, 3: cycling" << endl;
    cin >> e;

    double w;
    cout << "体重を入力してください。" << endl;
    cin >> w;

    double t;
    cout << "運動時間を入力してください(分)。" << endl;
    cin >> t;

    double cal = calculate_func(e, w, t);

    cout << "消費カロリーは" << cal << "(cal)です。" << endl;
}