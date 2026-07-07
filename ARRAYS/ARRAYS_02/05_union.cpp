#include <iostream>
#include <vector>
#include <set>
using namespace std;

// method1 BRUTE FORCE USING SET
vector<int> method1(vector<int> &arr1, vector<int> &arr2)
{

    vector<int> temp;
    set<int> s;
    for (int i = 0; i < arr1.size(); i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        s.insert(arr2[i]);
    }
    for (int i : s)
    {
        temp.push_back(i);
    }
    return temp;
}

// method2 OPTIMAL TWO POINTERS

vector<int> method2(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> result;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (result.size() == 0 || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (result.size() == 0 || result.back() != arr1[j])
            {
                result.push_back(arr1[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (result.size() == 0 || result.back() != arr1[i])
        {
            result.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (result.size() == 0 || result.back() != arr1[j])
        {
            result.push_back(arr1[j]);
        }
        j++;
    }
    return result;
}

int main()
{

    vector<int> arr1 = {1, 2, 3, 4, 5, 5};
    vector<int> arr2 = {4, 5, 6, 7, 8, 8};
    vector<int> result = method1(arr1, arr2);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}