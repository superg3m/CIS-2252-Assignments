#include <iostream>
#include <string>
#include <cmath>

double solution(double wizardYears, double Dragon) {
    wizardYears -= 2;
    Dragon += (wizardYears * 4) + 21;
    std::cout << Dragon << "\n";
    return Dragon;
}

void printAnswer(std::string name, double dragonYears) {
    std::cout << "The dragon named " << name << " is " << dragonYears << " years old in wizard years. \n";
}

int main() {
    std::string name = "";
    std::cin >> name;

    std::string x = "";
    std::cin >> x;

    double wizardYears = std::stod(x);

    printAnswer(name, solution(wizardYears, 0.0));
    return 0;
}


