#include <iostream>
using namespace std;

void print(int a){
    cout << a << endl;
}

void print(string a){
    cout << a << endl;
}

// 保存場所を受け取っている
void print(int* a){
    cout << a << endl;
}

// 保存場所を受け取っている (ポインタ)
int sample(int* a){
    // print(a);
    // 保存場所から保存されている値を取り出す
    // print(*a);

    // 保存場所の値を書き換えていることになる
    *a = *a + 20;

    return *a;
}

// sampleの参照渡しver
int sample2(int& a){
    // print(a);

    // 保存場所の値を書き換えていることになる
    a = a + 20;

    return a;
}

int main(){
    int x = 10;
    // &x → xの保存場所
    int z = sample(&x);
    // 値を入れているが、渡されているのは保存場所
    int z2 = sample2(x);

    print(x);
    print(z);
    print(z2);
}