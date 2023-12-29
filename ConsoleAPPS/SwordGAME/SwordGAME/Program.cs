using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SwordGAME
{
    /*Alright, imagine you're building a text-based game where players wield swords in epic battles. 
    Your task is to create a class representing a sword. 
    This class should have properties like "Name," "Damage," and "Durability." 
    The "Damage" property determines how much harm the sword inflicts, while "Durability" indicates how much wear and tear the sword can endure before it breaks. 
    You might want to add methods like "Attack" to simulate the sword's usage and potentially decrease its durability with each use. 
    Bonus points if you incorporate different types of swords with unique characteristics! */

    // task taken from chatGPT (non published applaction)


    class SwordGame // parent class
    {

        public

        static void SwordClass01() // method/functions rep each diffrent sword (four can be chosen by the user)
        {
           const string Name = "Longsword"; // name of sword/blade


        }

        static void SwordClass02()
        {
            const string Name = "Claymore";
        }

        static void SwordClass03()
        {
           const string Name = "Rapier";
        }
    }




    class Program
    {
        static void Main(string[] args) // main applaction of usage through here 
        {
            Console.WriteLine("Clash Of Warriors And Swords"); // start up title

            Console.WriteLine("\n\n  Begin Game? (yes/no)     "); // prompts user question


            // Creates a string variable and gets user input storing it in the variable
            string UserInput = Console.ReadLine();

            if (UserInput == "no") // if user types "no" into console, app will close off!
            {
                Console.WriteLine("Exiting Program!!");
                System.Environment.Exit(0);
            }
            else // if user "yes" the program
                Console.WriteLine("Please select from the selection of swords below"); // will prompt user another question

                Console.WriteLine("\n 1. Longsword \n 2. Claymore \n 3. Rapier"); 


           /* SwordGame myOBJ = new SwordGame();

            SwordGame.SwordClass01(); */

            Console.ReadLine();
        }
    }
}
