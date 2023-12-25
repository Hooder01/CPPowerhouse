using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// Based on A Hat In Time, console app that helps the user detect time pieces (random)
// open project table link: https://github.com/users/Hooder01/projects/10/views/1


namespace TimePieceTracker
{


    class Dectector // parent class for the tracker dectector
    {

    }


    class Program
    {

        static void Menu() // menu on start up for the user
        {
            Console.WriteLine("    1.      *MENU*            ");

            Console.WriteLine("    2.      *Login*           ");

            Console.WriteLine("    3.      *Quit*            ");

            string userInput;

            Console.WriteLine("\nEnter number for selection");
            
        }



        static void Main(string[] args)
        {

            Menu();

            Console.ReadKey(); // captures user input from the keyboard, allowing programs to wait for and respond to specific key presses (also stops crashing)
        }
    }

}
