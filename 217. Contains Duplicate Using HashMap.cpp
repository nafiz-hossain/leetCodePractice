#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums)
{
    int length = nums.size();
    map <int, int> myMap;
    for (int i = 0; i < length; i++)
    {
        if (myMap.find(nums[i])!=myMap.end())
        return true;
        else 
        myMap.insert(make_pair(nums[i],1));
    }

    return false;
}

//[1,2,3,1]

int main()
{
    vector <int> numbers;
    numbers = {-100000000, 2, 3,1, 1};
    //int lenn = sizeof(numbers)/sizeof(numbers[0]);


    // for (int i = 0; nums[i]; i++)
    //     cout << nums[i] << endl;
    bool isDuplicate = containsDuplicate(numbers);
    cout << isDuplicate << endl;

}