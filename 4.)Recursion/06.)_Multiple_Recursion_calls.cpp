// Fibonacci series using recursion

#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }

    return fib(n-1) + fib(n-2); // this is called multiple recursion calls as there are two calls to the function
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}