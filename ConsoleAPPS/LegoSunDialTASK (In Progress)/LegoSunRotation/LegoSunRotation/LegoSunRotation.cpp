/*
Task: Rotate the Sun Around the Lego Brick
Description:
In this task, your goal is to input the correct coordinates to make the sun rotate around a Lego brick, effectively providing it with a light source. This exercise challenges your understanding of coordinate systems, rotations, and light simulation within a virtual environment. Remember to carefully analyze the relationships between the sun, the Lego brick, and their respective positions in space. Good luck!
*/

#include <iostream>


class SunClass // parent class
{
public: // can be used outside this class

    int x, y, z; // declared interger types 

    void Roation() 
    {
        std::cout << "Please Input the X Y and Z coordinates for the device rotation (this needs to be exact same as the brick location) \n\n";
        std::cout << "Input X:"; std::cin >> x; std::cout << std::endl;

        std::cout << "Input Y:"; std::cin >> y; std::cout << std::endl;
        std::cout << "Input Z:"; std::cin >> z; std::cout << std::endl;
    }


    int brickX, brickY, brickZ;
    std::string checkLoc = "Location matches";

    void brickLocation()
    {
        std::cout << "Now please input the location coordinates of this lego brick (these also use X Y and Z)" << std::endl;

        std::cout << "Input X:"; std::cin >> brickX; std::cout << std::endl;
        std::cout << "Input Y:"; std::cin >> brickY; std::cout << std::endl;
        std::cout << "Input Z:"; std::cin >> brickZ; std::cout << std::endl;

        if (brickX == x && brickY == y && brickZ == z)
        {
            std::cout << checkLoc << std::endl;
        }
        else
        {
            std::cout << "Location is incorrect! please try again";
        }
    }



    /*void lightEmission()
    {
     double userPesentage;
     std::cout << "------Adjust LightEmissionPower here-----";
     std::cout << "\n   (adjust by adding any decimal number)  \n";

     std::cout << "EmissionPower: "; std::cin >> userPesentage;
    }*/
};


int main()
{
    std::cout << "-----Welcome to the Sun LightEmission Project!-----" << std::endl; // Welcoming user

    SunClass classinquestion;

    classinquestion.Roation(); classinquestion.brickLocation();
   
}

