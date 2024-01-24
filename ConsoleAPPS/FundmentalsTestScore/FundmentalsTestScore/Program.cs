using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


/* There was a test in your class and you passed it. Congratulations!
But you're an ambitious person. You want to know if you're better than the average student in your class.

You receive an array with your peers' test scores. Now calculate the average and compare your score!

Return True if you're better, else False! */


namespace FundmentalsTestScore
{
    public class program // global open class
    {

        static bool IsBetterThanAverage(int userScore, int[] classScores)
        // bool method holding two integer data types (classScores being an array)
        {
            double averageClassScore = classScores.Average();
            // declared double data type to calculate the Average score in the array using the Average() method

            return userScore > averageClassScore;
            // will return score if is "true" otherwise "false"
        }


        static void main() // main method of opreation
        {
            int[] classScores = { 23, 45, 10, 16, 54 };

            int userScore = 
        }









        /*static void Main(string[] args)
        {
            int[] classScores = { 23, 45, 10, 16, 54 }; // class mates scores
            int classSum = 0;

            foreach (int classScore in classScores)
            {
                classSum += classScore;
            }

            Console.WriteLine(classSum);

            int userScore = 48; // user (aka you) score

            
           
            
            Console.ReadLine(); // Debug
        }*/

    }

  
}
