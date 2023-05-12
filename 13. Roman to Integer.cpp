#include <bits/stdc++.h>
#include <string>
using namespace std;
int romanToInteger(string s)
{
    char valueArray[s.length() + 1];
    strcpy(valueArray, s.c_str());
    long long Integer = 0;
    char roman[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int valueOfroman[7] = {1, 5, 10, 50, 100, 500, 1000};
    int resultArray[s.length() + 1];

    // int I = 1;
    // int V = 5;
    // int X = 10;
    // int L = 50;
    // int C = 100;
    // int D = 500;
    // int M = 1000;   LVII

    for (int i = 0; valueArray[i]; i++)
    {

        for (int j = 0; j < 7; j++)
        {

            if (valueArray[i] == roman[j])
            {
                resultArray[i] = valueOfroman[j];
            }
        }
    }
    for (int i = 0; s[i]; i++)
    {
        if (s[i + 1] && resultArray[i] < resultArray[i + 1])
        {
            Integer -= resultArray[i];
       }
        else
        {
            Integer += resultArray[i];
        }
    }

    return Integer;
}

int main()
{
    string input;
    cin >> input;

    int X = romanToInteger(input);
    cout << X;

    return 0;
}