#include <iostream>
#include <string>

int main()
{
    std::string input;

    while (true) {
        std::cout << "===========================================================\n";
        std::cout << "=============== Welome to Binary Calculator ===============\n";
        std::cout << "===========================================================\n\n";

        std::cout << "1. Decimal to Binary\n";
        std::cout << "2. Binary to Decimal\n";
        std::cout << "3. Exit\n\n";

        std::cout << "Enter a Number Option: ";
        getline(std::cin, input);
        
        if (input[0] == '1') {
            std::cout << "Decimal to Binary Conversion\n\n";
        }
        else if (input[0] == '2') {
            std::cout << "Binary to Decimal Conversion\n\n";
        }
        else if (input[0] == '3') {
            return 0;
        }
        else {
            std::cout << "Invalid input, Please try again!\n\n";
        }
    }
}

