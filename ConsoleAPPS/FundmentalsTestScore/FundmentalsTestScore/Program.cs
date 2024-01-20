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
        static void Main(string[] args)
        {
            int[] classScores = { 23, 45, 10, 16, 54 }; // class mates scores

            int userScore = 48; // user (aka you) score

            
            double averageScore = CalculateAverage(classScores);
            // Note: Using double for average allows for precision in case the average is not an integer.

            // Compare user score with the average
            bool isBetterThanAverage = userScore > averageScore;
            // Note: This line determines if the user's score is higher than the calculated average creating a bool data type

            Console.ReadLine(); // Debug
        }
        
    }

  
}
