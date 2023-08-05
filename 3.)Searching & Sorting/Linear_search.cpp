#include<iostream>
using namespace std;

int search(int arr[],int s,int key)
{
    for(int i=0;i<s;i++){
        if(key==arr[i])
        {
            return i;
        }
    }
    return 0;
}

int main(){
    int arr[10]={6,9,-14,0,-89,2,69,-3,1};
    cout<<"Enter the key to be searched"<<endl;
    int key;
    cin>>key;

    bool found = search(arr,10,key);

    if (found!=0)
    {
        cout<<"Key found at position "<<search(arr,10,key) <<endl;
    }
    else{
        cout<<"Key not Found"<<endl;
    }
    
    return 0;
}