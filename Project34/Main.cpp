#include <iostream>

int main() {
    double distance, time, speed;

    std::cout << "Введите расстояние до аэропорта (км): ";
    std::cin >> distance;

    std::cout << "Введите время поездки (в часах): ";
    std::cin >> time;

    speed = distance / time;

    std::cout << "Скорость: " << speed << " км/ч\n";
    return 0;
}
