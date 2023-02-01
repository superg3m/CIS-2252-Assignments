#include<iostream>
#include<algorithm>
#include<string>

void solution(int integerArr[], std::string userInput_elements, int arrSize);

int main()
{
    std::string userInput_size;
    int arrSize;
    std::cout << "Enter the size of the Dynamic Array: ";
    std::getline(std::cin, userInput_size);
    std::cout << "\n";
    arrSize = std::stoi(userInput_size);

    std::cout << "Enter the elements of the Dynamic Array: ";
    std::string userInput_elements;
    std::getline(std::cin, userInput_elements);
    std::cout << "\n";

    int *integerArr = new int[arrSize];

    solution(integerArr, userInput_elements, arrSize);
    
    delete integerArr;
}

void solution(int integerArr[], std::string userInput_elements, int arrSize)
{
    int index = 0;
    std::string numberBuilder;

    for (int i = 0; i < userInput_elements.length() + 1; i++)
    {
        if(userInput_elements[i] == ' ' || i == userInput_elements.length()) 
        {
            integerArr[index] = std::stoi(numberBuilder);
            numberBuilder.clear();
            index++;
        }
        else
        {
            numberBuilder += userInput_elements[i];
        } 
    }
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << integerArr[i] << "\n";
    }
    std::reverse(integerArr, integerArr + arrSize);
    std::cout << "=========== Reversing Array ===========\n";
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << integerArr[i] << "\n";
    }
}