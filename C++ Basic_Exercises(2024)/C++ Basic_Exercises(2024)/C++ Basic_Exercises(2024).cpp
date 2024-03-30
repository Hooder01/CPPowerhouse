#include <iostream>


/* 1. Write a program in C++ to print welcome text on a separate line.
int main()
{
    std::cout << "\n" << "Welcome!!" << "\n";
}*/

// 2. Write a program in C++ to print the sum of two numbers
int main() 
{
    int userinput1;
    int userinput2;

    std::cout << "Enter your first number"; std::cin >> userinput1;
    std::cout << "Enter your second number"; std::cin >> userinput2;

    std::cout << "...LOADING...";
    std::cout << "\n" << "---------------------------------" << "\n";

    std::cout << "The sum of these numbers are" << " " << userinput1 + userinput2;
    
}


