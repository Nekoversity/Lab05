#include <stdio.h>
#include <ctype.h>

int strcompare(char* s1, char* s2)
{
    int index = 0;
    while (1)
    {
        char c1 = tolower(s1[index]);
        char c2 = tolower(s2[index]);

        if (c1 != c2)
            return -1;

        if (c1 == '\0' && c2 == '\0')
            return 1;

        ++index;
    }
}

int mystrcopy(char* from, char* to)
{
    int fromLen = 0, toLen = 0;
    char* fp;
    char* tp;

    for (fp = from; *fp; ++fp)
        ++fromLen;

    for (tp = to; *tp; ++tp)
        ++toLen;

    if (toLen > fromLen)
        return -1;

    for (int i = 0; i < fromLen; ++i)
        to[i] = from[i];

    return 0;
}

int fib_tail(int n, int a, int b)
{
    if (n == 0)
        return a;
    return fib_tail(n - 1, b, a + b);
}

int fib_straight(int n)
{
    if (n <= 1)
        return n;
    return fib_straight(n-1) + fib_straight(n-2);
}

void quicksort(int *arr, int low, int high)
{
    int pivot, i, j, temp;
    if(low < high) {
        pivot = low;
        i = low;
        j = high;
        while(i < j) {
            while(arr[i] <= arr[pivot] && i <= high)
                i++;
            while(arr[j] > arr[pivot] && j >= low)
                j--;
            if(i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;

        quicksort(arr, low, j-1);
        quicksort(arr, j+1, high);
    }
}

void insertation_sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++){
            if (arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void choose_sort(int arr[], int size)
{
    int temp, min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[min])
                min = j;

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void merge_sorted_arrays(int *arr1, int size1, int *arr2, int size2, int *result)
{
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            ++k;
            ++i;
        } else {
            result[k] = arr2[j];
            ++k;
            ++j;
        }
    }
    while (i < size1) {
        result[k] = arr1[i];
        ++k;
        ++i;
    }
    while (j < size2) {
        result[k] = arr2[j];
        ++k;
        ++j;
    }
}

void merge_array(int *arr, int low, int a, int b, int high) {
    int tmp[5];
    int i = low, j = b, k = 0;

    while (i <= a && j <= high)
        if (arr[i] < arr[j])
            tmp[k++] = arr[i++];
        else
            tmp[k++] = arr[j++];

    while (i <= a)
        tmp[k++] = arr[i++];

    while (j <= high)
        tmp[k++] = arr[j++];

    for (i = low, j = 0; i <= high; i++, j++)
        arr[i] = tmp[j];
}

void merge_sort(int *arr, int low, int high) {
    int mid;

    if (low < high) {
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr,mid + 1, high);
        merge_array(arr, low, mid, mid + 1, high);
    }
}

int main() {


    return 0;
}
