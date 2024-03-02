void Isort(int arr[], int l, int n)
{
    int r = l;
    while (r > 0 && arr[r] < arr[r - 1])
    {
        int temp = arr[r];
        arr[r] = arr[r - 1];
        arr[r - 1] = temp;
        r--;
    }

    if (l + 1 < n)
        Isort(arr, l + 1, n);
}

void insertionSort(int arr[], int n)
{
    // write your code here
    if (n <= 1)
        return;
    Isort(arr, 1, n);
}
