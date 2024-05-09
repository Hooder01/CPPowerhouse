/*
Task: Rotate the Sun Around the Lego Brick
Description:
In this task, your goal is to input the correct coordinates to make the sun rotate around a Lego brick, effectively providing it with a light source. This exercise challenges your understanding of coordinate systems, rotations, and light simulation within a virtual environment. Remember to carefully analyze the relationships between the sun, the Lego brick, and their respective positions in space. Good luck!
*/

#include <iostream>


class SunClass 
{
 public: // anything below can be used outside this class
    
     void LightSource()
     {
         int coox, cooy, cooz; // coo standing for coordinates

         std::cout << "Please enter coordinates for \nx"; std::cin >> coox; std::cout << std::endl;
         std::cout << "y"; std::cin >> cooy; std::cout << std::endl; std::cout << "z"; std::cin >> cooz;
     }


     void Brickfunc() 
     {
         int x;
         int y;
         int z;

         int brickSetCoor = x, y, z;
     }
};


int main()
{

    std::cout << "Welcome! you've been chosen to test our new AI powered S.U.N \n You'll be pointing the sun over to the lego brick using the coordinates x y and z." << std::endl;
    // welcoming player message 

    SunClass myobj;

    myobj.LightSource();
}

