# include <iostream>

int main(){
    double w;
    std::cout << "体重を入力してください" << std::endl;
    std::cin >> w;

    double t;
    std::cout << "運動時間を入力してください(分)" << std::endl;
    std::cin >> t;

    double cal = 3 * w * t * 1.05 / 60;

    std::cout << "ウォーキングの消費カロリーは" << cal << "(cal)です。" << std::endl;
}