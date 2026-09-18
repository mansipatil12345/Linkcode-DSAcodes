#include <stdio.h>

// Function to find maximum element
int getMax(int arr[], int len)
{
    int max = arr[0];

    for (int i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// Counting Sort for a particular digit
void countingSort(int arr[], int len, int expo)
{
    // arr -> 34 56 78 234 99

    int count[10] = {0};

    // Count occurrence of each digit
    for (int i = 0; i < len; i++)
    {
        int digit = (arr[i] / expo) % 10;
        count[digit]++;
    }

    // Cumulative count
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i] + count[i - 1];
    }

    int output[len];

    // Traverse from right to left
    for (int i = len - 1; i >= 0; i--)
    {
        int digit = (arr[i] / expo) % 10;

        output[count[digit] - 1] = arr[i];

        count[digit]--;
    }

    // Original array update
    for (int i = 0; i < len; i++)
    {
        arr[i] = output[i];
    }
}

// Radix Sort
void expo(int arr[], int len)
{
    // 34 56 78 234 99

    int max = getMax(arr, len);   // 234

    // 234 / 1 % 10  -> 4
    // 234 / 10 % 10 -> 3
    // 234 / 100 % 10 -> 2

    for (int i = 1; max / i > 0; i = i * 10)
    {
        countingSort(arr, len, i);
    }
}

// Display array
void display(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {34, 78, 56, 234, 99};
    int len = 5;

    printf("Before Sorting : ");
    display(arr, len);

    expo(arr, len);

    printf("\nAfter Sorting : ");
    display(arr, len);

    return 0;
}