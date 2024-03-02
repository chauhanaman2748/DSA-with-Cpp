// Complexity Analysis of Merge Sort
// Time Complexity: O(N log(N)),  Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation.

// T(n) = 2T(n/2) + θ(n)

// The above recurrence can be solved either using the Recurrence Tree method or the Master method. It falls in case II of the Master Method and the solution of the recurrence is θ(Nlog(N)). The time complexity of Merge Sort isθ(Nlog(N)) in all 3 cases (worst, average, and best) as merge sort always divides the array into two halves and takes linear time to merge two halves.

// Auxiliary Space: O(N), In merge sort all elements are copied into an auxiliary array. So N auxiliary space is required for merge sort.

// Applications of Merge Sort:
// Sorting large datasets: Merge sort is particularly well-suited for sorting large datasets due to its guaranteed worst-case time complexity of O(n log n).
// External sorting: Merge sort is commonly used in external sorting, where the data to be sorted is too large to fit into memory.
// Custom sorting: Merge sort can be adapted to handle different input distributions, such as partially sorted, nearly sorted, or completely unsorted data.
// Inversion Count Problem

// Advantages of Merge Sort:
// Stability: Merge sort is a stable sorting algorithm, which means it maintains the relative order of equal elements in the input array.
// Guaranteed worst-case performance: Merge sort has a worst-case time complexity of O(N logN), which means it performs well even on large datasets.
// Parallelizable: Merge sort is a naturally parallelizable algorithm, which means it can be easily parallelized to take advantage of multiple processors or threads.

// Drawbacks of Merge Sort:
// Space complexity: Merge sort requires additional memory to store the merged sub-arrays during the sorting process.
// Not in-place: Merge sort is not an in-place sorting algorithm, which means it requires additional memory to store the sorted data. This can be a disadvantage in applications where memory usage is a concern.
// Not always optimal for small datasets: For small datasets, Merge sort has a higher time complexity than some other sorting algorithms, such as insertion sort. This can result in slower performance for very small datasets.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int left = l, right = mid + 1;
    vector<int> v;
    while (left <= mid && right <= r)
    {
        if (arr[left] <= arr[right])
        {
            v.push_back(arr[left]);
            left++;
        }
        else
        {
            v.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        v.push_back(arr[left]);
        left++;
    }
    while (right <= r)
    {
        v.push_back(arr[right]);
        right++;
    }

    for (int i = 0; i < v.size(); i++)
    {
        arr[l + i] = v[i];
    }
    return;
}

void mergeSort(int arr[], int l, int r)
{
    // Write Your Code Here
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
    return;
}

int main()
{
    int v[] = {52, 111, 45, 97, 91, 100, 81, 132, 86, 76, 42, 3, 93, 61, 128, 18, 79, 88, 25, 35, 88, 5, 85, 28, 24, 31, 7, 143, 110, 145, 96, 27, 17, 105, 107, 135, 80, 67, 33, 3, 116, 84, 25, 109, 116, 111, 6, 3, 91, 53, 137, 36, 2, 36, 25, 105, 81, 39, 35, 126, 28, 35, 2, 2, 138, 97, 122, 47, 91, 36, 73, 48, 69, 5, 86, 90, 22, 86, 86, 52, 78, 5, 128, 24, 70, 6};
    int size = sizeof(v) / sizeof(v[0]);
    int l = 0, r = size - 1;

    mergeSort(v, l, r);

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}