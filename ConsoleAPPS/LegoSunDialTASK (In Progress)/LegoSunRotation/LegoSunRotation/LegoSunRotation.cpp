/*
Task: Rotate the Sun Around the Lego Brick
Description:
In this task, your goal is to input the correct coordinates to make the sun rotate around a Lego brick, effectively providing it with a light source. This exercise challenges your understanding of coordinate systems, rotations, and light simulation within a virtual environment. Remember to carefully analyze the relationships between the sun, the Lego brick, and their respective positions in space. Good luck!
*/

#include <iostream>


class SunClass 
{
 public:

    void Roation() // This method will be used for the user and how they control the movement?
    {
        int x, y, z;

        std::cout << "Please Input the X Y and Z coordinates for the device rotation (this needs to be exact same as the brick location) \n\n";
        std::cout << "Input X:"; std::cin >> x; std::cout << std::endl;

        std::cout << "Input Y:"; std::cin >> y; std::cout << std::endl;
        std::cout << "Input Z:"; std::cin >> z; std::cout << std::endl;
    }

    void lightEmission() 
    {
     double userPesentage;
     std::cout << "------Adjust LightEmissionPower here-----";
     std::cout << "\n   (adjust by adding any decimal number)  \n";

     std::cout << "EmissionPower: "; std::cin >> userPesentage;
    }
};



class Brick: public SunClass
{
    void brickLocation() 
    {
        std::cout << "Now please input the location coordinates"; // WRITE HERE NEXT
    }

    void isTrue() // this method will be used if both X Y and Z locations from both child and parent are the same!
    {

    }
};



int main()
{
    SunClass myobj; // testing

    myobj.Roation(); // testing
}

