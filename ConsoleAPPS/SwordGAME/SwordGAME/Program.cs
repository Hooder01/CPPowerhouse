using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SwordGAME
{
    class Program
    {
        static void Main(string[] args) // main applaction of usage through here 
        {
            Console.WriteLine("Clash Of Warriors And Swords"); // start up title

            Console.WriteLine("\n\n  Begin Game? (yes/no)     "); // prompts user question


            // Creates a string variable and gets user input storing it in the variable
            string UserInput = Console.ReadLine();

            if(UserInput != "no")
            {
                Console.WriteLine("Exiting Program!!");


            }




            Console.ReadLine();
        }
    }
}
