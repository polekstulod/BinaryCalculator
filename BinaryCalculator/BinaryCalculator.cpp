#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string input;
    int checker;
    do
    {
        std::cout << "===========================================================\n";
        std::cout << "=============== Welome to Binary Calculator ===============\n";
        std::cout << "===========================================================\n\n";

        std::cout << "1. Decimal to Binary\n";
        std::cout << "2. Binary to Decimal\n";
        std::cout << "3. Exit\n\n";

        std::cout << "Enter a Number Option: ";
        std::getline(std::cin, input);

        std::stringstream stream(input);
        if (stream >> checker) {
            if (checker == 0)
                std::cout << "Exited Successfully\n";
            else if (checker == 1)
                std::cout << "1. Decimal to Binary\n";
            else if (checker == 2)
                std::cout << "2. Binary to Decimal\n";
        }
        else {
            std::cout << "Please Enter a valid number\n";
            checker = 1;
        }


    } while (checker > 0);
    
}

