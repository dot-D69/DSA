// Q. Find the sum of n natural numbers using recursion.

// Parameterised Recursion

#include<iostream>
using namespace std;

void sum(int i,int ans){
    if(i<1){
        cout<<ans<<endl;
        return;
    }
    sum(i-1,ans+i);
}

int main(){
    int n;
    cin>>n;
    sum(n,0);
    return 0;
}


// Functional Recursion

#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
