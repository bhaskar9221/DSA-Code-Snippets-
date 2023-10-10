/******************************************************************************
Array Traversal 
*******************************************************************************/

#include <stdio.h>
 
void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    
    display(arr,5);
    return 0;
}
