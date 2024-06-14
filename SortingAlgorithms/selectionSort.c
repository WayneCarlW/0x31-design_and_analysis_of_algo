#include <stdio.h>

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main(){
    int arr[] = {10, 7, 6, 9, 5};
    int i;
    int j;
    
    for(i = 0; i < 5; i++)
    {
        int min = i;
        for (j = i + 1; j < 5; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
    
        if (min != i)
        {
            swap(&arr[i], &arr[min]);
        }
        
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("%i ", arr[i]);
    }


    return 0;
}
