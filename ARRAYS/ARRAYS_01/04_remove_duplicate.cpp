#include <iostream>
#include <vector>
#include <set>
using namespace std;

// method1 using set
vector<int> method1(vector<int> &arr)
{
    set<int> unique;

    for (int i = 0; i < arr.size(); i++)
    {
        unique.insert(arr[i]);
    }

    vector<int> result;
    for (auto it : unique)
    {
        result.push_back(it);
    }

    return result;
}

// method 2 using two pointers

int method2(vector<int> &nums)
{

    if (nums.empty()) {
        return 0;
    }

    int k = 1;
    int n = nums.size();
    int right = 1;
    int left = 0;

    while (right < n)
    {
        if (nums[left] != nums[right])
        {

            left++;

            nums[left] = nums[right];

            k++;
        }
        right++;
    }
    return k;
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 4, 3, 2, 1, 7, 7};
    vector<int> main_result = method1(arr);
    for (auto s : main_result)
    {
        cout << s;
    }
    return 0;
}