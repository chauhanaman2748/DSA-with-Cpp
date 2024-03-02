// Time complexity is O(N²) and Space complexity is O(1).
//  Selection Sort: https://www.geeksforgeeks.org/selection-sort/

// Advantages of Selection Sort Algorithm:
// Simple and easy to understand.
// Works well with small datasets.

// Disadvantages of the Selection Sort Algorithm:
// Selection sort has a time complexity of O(n^2) in the worst and average case.
// Does not work well on large datasets.
// Does not preserve the relative order of items with equal keys which means it is not stable.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        if (arr[i] > arr[min] && i <= min)
        {
            int a = arr[i];
            arr[i] = arr[min];
            arr[min] = a;
        }
    }
    return arr;
}

int main()
{
    vector<int> v = {52, 111, 45, 97, 91, 100, 81, 132, 86, 76, 42, 3, 93, 61, 128, 18, 79, 88, 25, 35, 88, 5, 85, 28, 24, 31, 7, 143, 110, 145, 96, 27, 17, 105, 107, 135, 80, 67, 33, 3, 116, 84, 25, 109, 116, 111, 6, 3, 91, 53, 137, 36, 2, 36, 25, 105, 81, 39, 35, 126, 28, 35, 2, 2, 138, 97, 122, 47, 91, 36, 73, 48, 69, 5, 86, 90, 22, 86, 86, 52, 78, 5, 128, 24, 70, 6};
    v = selectionSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}