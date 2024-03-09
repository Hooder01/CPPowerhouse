
#include <iostream>

/* Fantasy Inventory Management

Create a program that allows users to perform the following tasks :

 1. Add a new item to the magical inventory.
 2. Remove an item from the magical inventory.
 3. Display the list of all items in the magical inventory.
 4. Search for an item by name in the magical inventory.

 5. Exit the program. */

void TitlescreenANDOptions() 
{
    int userinput;
    char options = 'O'; // ????????????????????

    std::cout << "_FINAL FRONTIER FANSTAY II_" << "\n" << "\n"; // Title
    

    std::cout << " -PRESS ANY KEY TO BEGIN-    " << "\n" << "\n"; // will procede further into the program

    std::cout << "    -Options (O)-      " << "\n" << "\n"; // options screen selcetion

    std::cout << "      -EXIT-            "; // Exit selection

    std::cin >> userinput;

    if (userinput == options) // NOT WORKING!?
    {
        std::cout << "    -Options-    " << "\n";
    }

}

void OpenInventory() 
{
    
}

int main()
{
    TitlescreenANDOptions();
}

