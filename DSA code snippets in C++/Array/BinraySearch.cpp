/******************************************************************************
Binary Search on an Array
*******************************************************************************/

#include <iostream>

using namespace std;

int BinarySearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high = size-1;

    //Starting our Binary Search.
    while (low<=high)
    {
        /* Logic code for Binary Search. */
    mid = (low+high)/2;
    if(arr[mid]==element){
        return mid;
    }

    if(arr[mid]<element){
        low = mid+1;
    }

    else{
        high = mid-1;
    }

    }
    //Binary Search ends.
    return -1;

}



int main()
{
    int arr[] = {16,27,38,49,50,61,72,83,94,1194}; //Our Sorted array example for Binary Search.
    int size = sizeof(arr)/sizeof(int);
    int element = 94; 
    int searchIndex = BinarySearch(arr,size,element);
    printf("The element %d was found at an index %d \n",element,searchIndex);
    return 0;

}