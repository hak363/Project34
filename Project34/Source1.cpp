#include <iostream>

int main() {
    double distance, fuel_100;
    double price1, price2, price3;

    std::cout << "Введите расстояние поездки (км): ";
    std::cin >> distance;

    std::cout << "Введите расход бензина на 100 км: ";
    std::cin >> fuel_100;

    std::cout << "Введите цену бензина A: ";
    std::cin >> price1;

    std::cout << "Введите цену бензина B: ";
    std::cin >> price2;

    std::cout << "Введите цену бензина C: ";
    std::cin >> price3;

    double fuelNeeded = distance / 100 * fuel_100; // сколько потребуется топлива

    std::cout << "\n--- Стоимость поездки ---\n";
    std::cout << "Бензин A: " << fuelNeeded * price1 << " грн\n";
    std::cout << "Бензин B: " << fuelNeeded * price2 << " грн\n";
    std::cout << "Бензин C: " << fuelNeeded * price3 << " грн\n";

    return 0;
}
