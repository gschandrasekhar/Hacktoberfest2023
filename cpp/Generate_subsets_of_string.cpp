/*
    Given a set of strings 's'.
    Out task is to create all the subsets or 
    subsequence of string s.

    eg. 
        I/P: s='ABC'
        O/P: "","A","B","C","AB","AC","BC","ABC"
*/

/*
    Idea:
    If I have subsets of string "AB", then I can generate
    subsets of string "ABC".

         -> ""           (not include C)
    "" -|   
         -> "C"          (include C)

         -> "A"
    "A"-|
         -> "AC"

         -> "B"
    "B"-|
         -> "BC"

          -> "AB"
    "AB"-|
          -> "ABC"

    file:///C:/Users/Asus/Documents/dsa/GFG/resources/3.9.png
*/


#include<iostream>
using namespace std;

void subsets(string s, string curr="", int i=0)
{
    if(i==s.size())
    {
        cout<<curr<<endl;
        return;
    }
    else
    {
        subsets(s, curr, i+1);
        curr += s[i];
        subsets(s, curr, i+1);
    }
}

int main()
{
    subsets("ABC");
    return 0;
}
