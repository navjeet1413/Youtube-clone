#include <bits/stdc++.h>
#include<sstream>
using namespace std;
  
int main()
{
    string S, T;
  
    getline(cin, S);
  
    stringstream X(S);
  
    while (getline(X, T, ' ')) {
        cout << T << endl;
    }
  
    return 0;
    
    
}

// C++ program to count words in 
// a string using stringstream.
// #include <iostream>
// #include <sstream>
// #include<string>
// using namespace std;
 
// int countWords(string str)
// {
//     // Breaking input into word
//     // using string stream
   
//     // Used for breaking words
//     stringstream s(str);
   
//     // To store individual words
//     string word;
 
//     int count = 0;
//     while (s >> word){
//             count++;
//     }
        
//     return count;
// }
 
// // Driver code
// int main()

// {
//     string s = "geeks for geeks geeks "
//                "contribution placements";
//     cout << " Number of words are: " << countWords(s);
//     return 0;
// }
