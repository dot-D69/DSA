#include<iostream>
using namespace std;

// Recursion is when a function calls itself until a base condition is met.
// Recursion is used to solve problems that can be broken down into smaller, repetitive problems.

int cnt =0;
void print(){
    if(cnt==5){  //Base condition
        return; //returning to the previous function call
    }
    cout<<cnt<<endl; 
    cnt++;  
    print(); //calling the function again
}

int main(){
    print();    //calling the function
    return 0;
}

