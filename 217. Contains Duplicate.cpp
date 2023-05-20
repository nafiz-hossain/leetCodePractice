#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums)
{
    int length = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < length - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
    }

    return false;
}

int main()
{
    vector <int> numbers;
    numbers = {1, 2, 3, 4};
    //int lenn = sizeof(numbers)/sizeof(numbers[0]);


    // for (int i = 0; nums[i]; i++)
    //     cout << nums[i] << endl;
    bool isDuplicate = containsDuplicate(numbers);
    cout << isDuplicate << endl;

}