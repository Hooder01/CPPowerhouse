using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// Based on A Hat In Time, console app that helps the user detect time pieces (random)
// open project table link: https://github.com/users/Hooder01/projects/10/views/1


namespace TimePieceTracker
{
    class Program
    {

        static void StartMenu() // method that will create a menu on opening
        {
            Console.WriteLine("      *MENU*      ", "\n", "      *Login*     ");
            Console.WriteLine("\n", "    *Options*     ", "\n", "     *Quit*    ");
        }



        static void Main(string[] args)
        {
            StartMenu();


            Console.ReadKey(); // captures user input from the keyboard, allowing programs to wait for and respond to specific key presses (also stops crashing)
        }
    }

}
