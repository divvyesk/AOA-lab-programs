#include<stdio.h>

int n;

void merge(int arr[], int low, int mid, int high)
{
    int temp[n]; //temp array to store elements
    int l=0; //to make a counter for the index
    
    int left=low; //for the first array
    int right = mid+1; //for the second array
    
    while(left<=mid && right<=high)
    {
        if(arr[left] < arr[right])
        {
            temp[l] = arr[left];
            left++;
            l++;
        }
        
        else
        {
            temp[l] = arr[right];
            right++;
            l++;
        }
    }
    
    //what if there are elements remaining in the first array
    for(int i=left; i<=mid; i++)
    {
        temp[l] = arr[i];
        l++;
    }
    
    //what if there are elements remaining in the second array
    for(int i=right; i<=high; i++)
    {
        temp[l] = arr[i];
        l++;
    }
    
    for (int i = 0; i < l; i++)
    {
        arr[low + i] = temp[i];
    }
    
    
}


void mergeSort(int arr[], int low, int high)
{
    if(low >= high) return;
    
    int mid = (low+high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main()
{
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nBefore Merge Sort: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    mergeSort(arr, 0, n-1);
    
    printf("\nAfter Merge Sort: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}