#include <iostream>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    
    double distance, fuel_100;
    double price1, price2, price3;

    std::cout << "Ââĺäčňĺ đŕńńňî˙íčĺ ďîĺçäęč (ęě): ";
    std::cin >> distance;

    std::cout << "Ââĺäčňĺ đŕńőîä áĺíçčíŕ íŕ 100 ęě: ";
    std::cin >> fuel_100;

    std::cout << "Ââĺäčňĺ öĺíó áĺíçčíŕ A: ";
    std::cin >> price1;

    std::cout << "Ââĺäčňĺ öĺíó áĺíçčíŕ B: ";
    std::cin >> price2;

    std::cout << "Ââĺäčňĺ öĺíó áĺíçčíŕ C: ";
    std::cin >> price3;

    double fuelNeeded = distance / 100 * fuel_100; // ńęîëüęî ďîňđĺáóĺňń˙ ňîďëčâŕ

    std::cout << "\n--- Ńňîčěîńňü ďîĺçäęč ---\n";
    std::cout << "Áĺíçčí A: " << fuelNeeded * price1 << " ăđí\n";
    std::cout << "Áĺíçčí B: " << fuelNeeded * price2 << " ăđí\n";
    std::cout << "Áĺíçčí C: " << fuelNeeded * price3 << " ăđí\n";

    return 0;
}
