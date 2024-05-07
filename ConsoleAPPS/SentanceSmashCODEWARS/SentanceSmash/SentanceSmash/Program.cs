using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SentanceSmash
{

    class Program
    {
        static void Main(string[] args)
        {
            string[] Sentance01 = { "Hello", "world", "this", "is", "great" };

            string word1 = Sentance01[0];
            string word2 = Sentance01[1];
            string word3 = Sentance01[2];
            string word4 = Sentance01[3];
            string word5 = Sentance01[4];

            Console.WriteLine(word1, word2 , word3 , word4 , word5);

            Console.ReadLine();
        }
        
    }
}
