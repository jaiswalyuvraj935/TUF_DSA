#include <iostream>
#include <vector>
using namespace std;

// using merge sort for this problem
//  Merges two subarrays of arr[].
//  First subarray is arr[left..mid]
//  Second subarray is arr[mid+1..right]
void merge(std::vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp vectors
    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // Merge the temp vectors back into arr[left..right]
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[], if any
    while (i < n1)
        arr[k++] = L[i++];
    // Copy remaining elements of R[], if any
    while (j < n2)
        arr[k++] = R[j++];
}

// Main function that sorts arr[left..right] using merge()
void mergeSort(std::vector<int> &arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

// method1 brute force
int method1(vector<int> &arr)
{

    // first step sort the arrays use any sorting algorithm of your choice
    mergeSort(arr, 0, arr.size() - 1);
    int n = arr.size();

    // finding second largest element from an array
    int largest = arr[n - 1];
    int slargest;
    for (int i = n - 2; i > 0; i--)
    {
        if (arr[i] != largest)
        {
            slargest = arr[i];
            break;
        }
    }
    return slargest;
}

// method 2

int method2(vector<int> &arr)
{
    // first finding largest

    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int slargest = -1;

    // if someone is greater than the slargest and smaller than the largest then we will find salrgest

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > slargest && arr[i] < largest)
        {
            slargest = arr[i];
        }
    }

    return slargest;
}

// method 2

int method3(vector<int> &arr)
{
    // if in a class student A is always in position 1 then student B works harder and secure position 1 then automatically student A comes in position 2

    int largest=arr[0];
    int slargest = INT_MIN;
    for(int i =0;i<arr.size();i++){

        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    return slargest;
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 4, 3, 2, 1, 7, 7};

    // calling method1
    int result1 = method3(arr);
    cout << result1;

    return 0;
}