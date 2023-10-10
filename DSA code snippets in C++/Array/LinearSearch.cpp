/******************************************************************************
Linear Search on an Array
*******************************************************************************/

#include <iostream>

using namespace std;


int LinearSearch(int arr[], int size, int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}



int main()
{
    int arr[] = {1,23,2,42,24,1341,97};
    int size = sizeof(arr)/sizeof(int);
    int element = 97;
    int searchIndex = LinearSearch(arr,size ,element);
    printf("The element %d was found at index %d \n", element,searchIndex);
    return 0;
}
 