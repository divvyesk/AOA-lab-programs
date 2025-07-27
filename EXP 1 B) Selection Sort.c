#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int i, j, k;

    printf("Before Sorting: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            k = i; 
            if(arr[j] < arr[k]) //finding the min
            {
                int temp = arr[j]; //swapping 
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }

    printf("\nAfter Sorting: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    printf("Divvye Kansara\nDiv: C21\nRoll no: 2403080\n");

    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    return 0;
}
