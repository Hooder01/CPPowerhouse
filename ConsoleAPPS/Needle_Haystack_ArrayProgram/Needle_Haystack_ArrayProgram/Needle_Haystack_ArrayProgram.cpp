#include <iostream>
using namespace std; // Enables access to Standard Library functions and objects //


string findNeedle() // User defined String function for finding a needle in a Haystack // 
{
    string haystack[10]{ "hay" , "hay" , "junk" , "hay" , "junk" , "junk" , "hay" , "needle!" , "hay" , "hay" };
    // an array holding ten objects 

    return 0;
}


int main()
{
    findNeedle(string haystack[10]);

    cout << "\n" << haystack[8] -- > "found the needle at position 8";
}


