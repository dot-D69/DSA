// given an array of characters we have to tell if the array is an palindrome


#include<iostream>
using namespace std;

void palindrome(char arr[], int n){
    int i = 0;
    int j = n-1;
    while (i<=j)
    {
        if(arr[i]!=arr[j]){
            cout<<"Not a palindrome";
        }
        i++;
        j--;
    }
    cout<<"Palindrome"<<endl;
    
}

int main(){
    char arr[] = {'a','b','d','e','d','b','a'};
    int n = sizeof(arr)/sizeof(char);
    palindrome(arr,n);
    return 0;
}



// Time complexity  O(n)