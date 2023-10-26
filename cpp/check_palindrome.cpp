#include<iostream>
using namespace std;

bool isPalindrome(string &str, int start, int end)
{
    if(end-start == 0 || end-start==1)
        return true;
    if(str[start]!=str[end])
        return false;
    return isPalindrome(str, start+1, end-1);
}

int main()
{
    string str= "bad";
    cout<<isPalindrome(str,0, str.size()-1);
    return 0;
}