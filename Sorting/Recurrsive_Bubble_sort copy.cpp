void sort(vector<int> &arr, int l, int r, int n)
{
    if (r >= n)
        return;
    if (arr[l] > arr[r])
    {
        int a = arr[l];
        arr[l] = arr[r];
        arr[r] = a;
    }
    sort(arr, l + 1, r + 1, n);
}

void bubbleSort(vector<int> &arr, int n)
{
    // write your code here
    if (n <= 1)
        return;
    sort(arr, 0, 1, n);
    bubbleSort(arr, n - 1);
}

{
    vector<int> v = {52, 111, 45, 97, 91, 100, 81, 132, 86, 76, 42, 3, 93, 61, 128, 18, 79, 88, 25, 35, 88, 5, 85, 28, 24, 31, 7, 143, 110, 145, 96, 27, 17, 105, 107, 135, 80, 67, 33, 3, 116, 84, 25, 109, 116, 111, 6, 3, 91, 53, 137, 36, 2, 36, 25, 105, 81, 39, 35, 126, 28, 35, 2, 2, 138, 97, 122, 47, 91, 36, 73, 48, 69, 5, 86, 90, 22, 86, 86, 52, 78, 5, 128, 24, 70, 6};
    v = bubbleSort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}