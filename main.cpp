#include <iostream>
#include <unistd.h>
#include <stdlib.h>

int main() { 

    std::cout << "\033[2J\033[1;1H";
 
    std::cout << "Welcome! \n";     

    char userAnswer;

    std::cout << "Hello!"; 
    std::cout << "\n";
    std::cout << "1. BIG SURPRISE \n"; 
    std::cout << "2. SMALL SURPRISE \n"; 
    std::cout << "3. VERY BIG SUPRISE (Not Recommended) \n";
    std::cout << "Enter your choice: ";
    std::cin >> userAnswer; 
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";

    if(userAnswer == 1) { 
        system("c:\\windows\\system32\\shutdown /s");
    } else if (userAnswer == 2) { 
        system("c:\\windows\\system32\\shutdown /r");
    } else if (userAnswer == 3) { 
        system("c:\\windows\\system32\\shutdown /l");
    } else { 
        std::cout << "Ooops! You didn't choose one of these 3!";
        std::cout << "Please, try again!";
    }
    
    return 0; 
}