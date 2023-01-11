#include<iostream>
using namespace std;

void printarray(int arr[],int s){
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void reversearray(int arr[],int s){

    int start =0;
    int end = s-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }


}

int main(){
    int arr[5]={1,2,3,4,5};

    reversearray(arr,5);
    printarray(arr,5);

    return 0;
}