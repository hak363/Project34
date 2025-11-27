#include <iostream>

int main() 
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    
    int h1, m1, s1, h2, m2, s2;

    std::cout << "Ââåäèòå âðåìÿ íà÷àëà (÷àñ ìèí ñåê): ";
    std::cin >> h1 >> m1 >> s1;

    std::cout << "Ââåäèòå âðåìÿ îêîí÷àíèÿ (÷àñ ìèí ñåê): ";
    std::cin >> h2 >> m2 >> s2;

    int start = h1 * 3600 + m1 * 60 + s1;
    int end = h2 * 3600 + m2 * 60 + s2;

    int duration = (end - start) / 60;   // ìèíóòû
    double cost = duration * 2.0;        // öåíà: 2 ãðí/ìèí

    std::cout << "Ïðîäîëæèòåëüíîñòü: " << duration << " ìèíóò\n";
    std::cout << "Ñòîèìîñòü ïîåçäêè: " << cost << " ãðí\n";

    return 0;
}
