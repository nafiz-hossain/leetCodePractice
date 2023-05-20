#include <bits/stdc++.h>
#include <string>
using namespace std;
string longestCommonPrefix(string myString[], int strsLength)
{
    string result = "";
    char ch;
    int iii = 0;
    for (int j = 0; j < myString[0].length(); j++)
    {

        for (int i = 0; i < strsLength; i++)
        {
            if (i == 0)
                ch = myString[i][j];

            if (ch!=myString[i][j])
            {
                iii = 1;
                break;
            }
        

        }
        
        if (iii == 1)
        break;
        result+=ch;

    }
    return result;
}
int main()
{
    string strs[3] = {"flow", "flower", "flight"};
    int strsLength = sizeof(strs) / sizeof(strs[0]);
    sort(strs, strs + strsLength);

    cout << longestCommonPrefix(strs, strsLength);
    return 0;
}