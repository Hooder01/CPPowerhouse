#include <iostream>


/* 1. Write a program in C++ to print welcome text on a separate line.
int main()
{
    std::cout << "\n" << "Welcome!!" << "\n";
}*/

/* 2. Write a program in C++ to print the sum of two numbers
int main() 
{
    int userinput1;
    int userinput2;

    std::cout << "Enter your first number"; std::cin >> userinput1;
    std::cout << "Enter your second number"; std::cin >> userinput2;

    std::cout << "\n" << "...LOADING...";
    std::cout << "\n" << "\n" << "---------------------------------" << "\n";

    std::cout << "The sum of these numbers are" << " " << userinput1 + userinput2 << "\n";
    
}
*/

// 3. Write a in C++ program to find the size of fundamental data types

int main() 
{
    std::cout << "Finding sizes of fundamental data types" << "\n" << "----------------------------------------" << "\n";

    std::cout << "Size of (char) is: " << sizeof(char); std::cout << " " << "bytes" << std::endl;
    std::cout << "Size of (short) is: " << sizeof(short); std::cout << " " << "bytes" << std::endl;
    std::cout << "Size of (int) is: " << sizeof(int); std::cout << " " << "bytes" << std::endl;
    std::cout << "Size of (long) is: " << sizeof(long); std::cout << " " << "bytes " << "(should be 8 bytes)" << std::endl;
    std::cout << "Size of (long long) is: " << sizeof(long long); std::cout << " " << "bytes" << std::endl;
    std::cout << "Size of (float) is: " << sizeof(float); std::cout << " " << "bytes" << std::endl;
    std::cout << "Size of (double) is: " << sizeof(double); std::cout << " " << "bytes" << std::endl;
    std::cout << "Size of (long double) is: " << sizeof(long double); std::cout << " " << "bytes " << "(should be 16 bytes)" << std::endl;
    std::cout << "Size of (bool) is: " << sizeof(bool); std::cout << " " << "bytes" << std::endl;
}

