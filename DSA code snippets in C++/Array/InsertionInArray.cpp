/******************************************************************************
Insertion on an Array
*******************************************************************************/

#include <iostream>

using namespace std;


void display(int arr[], int n){
    
    //Traversing through the Array
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
        
    }
}

int indInsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i= size-1; i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

 

int main()
{
    int arr[100] = {1,2,4,9,119};
    int size = 5, element = 45,index = 3;
    display(arr,size);
    
    
    indInsertion(arr,size,element,100,index);
    size +=1;
    display(arr,size);

    return 0;
}
