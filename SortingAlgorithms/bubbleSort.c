#include <stdio.h>

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int i;
    int j;
    int arr[] = {5, 1, 4, 2, 8};
    size_t arr_length = sizeof(arr)/sizeof(arr[0]);
    
    for(i = 0; i < arr_length-1; i++)
    {
        for(j = 0; j < arr_length-1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    for (i = 0; i < arr_length; i++)
    {
        printf("%i ", arr[i]);
    }
    return 0;
}
