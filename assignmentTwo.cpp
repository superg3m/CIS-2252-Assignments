#include <iostream>
#include <string>

void assignmentTwo(int n1, int n2);

int main() {
    std::string inputOne;
    std::cin >> inputOne;

    std::string inputTwo;
    std::cin >> inputTwo;
    int numberOne = std::stoi(inputOne);
    int numberTwo = std::stoi(inputTwo);
    
    assignmentTwo(numberOne, numberTwo);
    return 0;
}

void assignmentTwo(int n1, int n2) {
    bool outOfRange;
    for(int i = n1; i <= n2; i++) {
        outOfRange = (i > 9) ? true : false;
        if(outOfRange) {
            switch (i % 2) {
                case 0:
                    std::cout << "even \n";
                    break;
                default: 
                    std::cout << "odd \n";
                    break;
            }
        }
        else {
            switch(i) {
                case 1:
                    std::cout << "one" << "\n";
                    break;
                case 2:
                    std::cout << "two" << "\n";
                    break;
                case 3:
                    std::cout << "three" << "\n";
                    break;
                case 4:
                    std::cout << "four" << "\n";
                    break;
                case 5:
                    std::cout << "five" << "\n";
                    break;
                case 6:
                    std::cout << "six" << "\n";
                    break;
                case 7:
                    std::cout << "seven" << "\n"; 
                    break;
                case 8:
                    std::cout << "eight" << "\n";
                    break;
                case 9:
                    std::cout << "nine" << "\n";
                    break;
                default:
                    break;
            }
        }
    }    
}
