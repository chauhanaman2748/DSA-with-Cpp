// Time complexity is O(N²) and Space complexity is O(1).
// Bubble Sort: https://www.geeksforgeeks.org/bubble-sort/

// Advantages of Bubble Sort:
// Bubble sort is easy to understand and implement.
// It does not require any additional memory space.
// It is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order in the sorted output.

// Disadvantages of Bubble Sort:
// Bubble sort has a time complexity of O(N²) which makes it very slow for large data sets.
// Bubble sort is a comparison-based sorting algorithm, which means that it requires a comparison operator to determine the relative order of elements in the input data set. It can limit the efficiency of the algorithm in certain cases.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &arr)
{
    // write your code here
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int a = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = a;
            }
        }
    }
    return arr;
}

int main()
{
    vector<int> v = {52, 111, 45, 97, 91, 100, 81, 132, 86, 76, 42, 3, 93, 61, 128, 18, 79, 88, 25, 35, 88, 5, 85, 28, 24, 31, 7, 143, 110, 145, 96, 27, 17, 105, 107, 135, 80, 67, 33, 3, 116, 84, 25, 109, 116, 111, 6, 3, 91, 53, 137, 36, 2, 36, 25, 105, 81, 39, 35, 126, 28, 35, 2, 2, 138, 97, 122, 47, 91, 36, 73, 48, 69, 5, 86, 90, 22, 86, 86, 52, 78, 5, 128, 24, 70, 6};
    v = bubbleSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}