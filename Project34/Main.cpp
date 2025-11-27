#include <iostream>

int main() 
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    
    double distance, time, speed;

    std::cout << "Ââåäèòå ðàññòîÿíèå äî àýðîïîðòà (êì): ";
    std::cin >> distance;

    std::cout << "Ââåäèòå âðåìÿ ïîåçäêè (â ÷àñàõ): ";
    std::cin >> time;

    speed = distance / time;

    std::cout << "Ñêîðîñòü: " << speed << " êì/÷\n";
    return 0;
}
