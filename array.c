#include <stdio.h>

void display_array(int arr[],int size)
{
    printf("array elements are:");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[5]={1,2,3,4,5};
    display_array(arr,5);
    return 0;
}