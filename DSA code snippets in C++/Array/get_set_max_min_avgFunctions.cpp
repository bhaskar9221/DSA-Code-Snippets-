#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main(){
    
    int arr[10] = {8,3,9,15,6,10,7,2,12,4};

    //For finding the Maximum Element
    int max = arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    //For finding the Minimum Element.
    int min = arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    

    
    cout<<max<<endl;
    cout<<min<<endl;
    

    return 0;
}  