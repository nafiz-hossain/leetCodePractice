#include <bits/stdc++.h>
#include <string>
#include <stack>
using namespace std;



bool isValid(string s)
{
    stack<char> myStack;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            myStack.push(s[i]);

        else {
            char topChar = myStack.top();
            if (myStack.empty()) return false; 

            else if ((topChar == '(' && s[i]== ')') || (topChar == '{' && s[i] == '}') || (topChar == '[' && s[i] == ']')){
                myStack.pop();
            }
            else{

                return false;
            }
        }
    }
    
    if (myStack.empty())
    return true;
    else
    return false;
}


int main()
{
    string strs = "()[]{}";


    cout << isValid(strs);
    return 0;
}