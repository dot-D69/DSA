#include<bits/stdc++.h>
using namespace std;

int main(){
    // builtin_popcount(x) : returns the number of set bits in x.
    // In simple words, count the number of bit positions in binary representation of an integer which is set to 1
    // For example, the binary representation of 12 is 1100, so the function should return 2 as there are two set bits in this binary representation.

    int n = 7;
    cout<<__builtin_popcount(n)<<endl;

    // for long long int use __builtin_popcountll(n);

    long long x = 77777777777777;
    cout<<__builtin_popcountll(x)<<endl;

    // next_permutation() : This function eturns the next lexicographically greater permutation of the elements in the container passed to it as an argument.
    string s = "bac";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    // it will only print the next permutation not all the permutations
    // example if string s started like "bac" then it will only print "bca" ,"cab", "cba" not "acb" and "abc"

    
    // prev_permutation() : This function returns the previous lexicographically smaller permutation of the elements in the container passed to it as an argument.
    // it will only print the previous permutation not all the permutations

    string s1 = "bac";
    do{
        cout<<s1<<endl;
    }while(prev_permutation(s1.begin(),s1.end()));

    return 0;
}