#include <iostream>

int main() {
    int h1, m1, s1, h2, m2, s2;

    std::cout << "Введите время начала (час мин сек): ";
    std::cin >> h1 >> m1 >> s1;

    std::cout << "Введите время окончания (час мин сек): ";
    std::cin >> h2 >> m2 >> s2;

    int start = h1 * 3600 + m1 * 60 + s1;
    int end = h2 * 3600 + m2 * 60 + s2;

    int duration = (end - start) / 60;   // минуты
    double cost = duration * 2.0;        // цена: 2 грн/мин

    std::cout << "Продолжительность: " << duration << " минут\n";
    std::cout << "Стоимость поездки: " << cost << " грн\n";

    return 0;
}
