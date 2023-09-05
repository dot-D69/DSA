// Two pointer approach
#include<iostream>
using namespace std;

bool isPalindrome(string s,int left,int right){
    if(left>=right){
        return true;
    }

    if(s[left]!=s[right]){
        return false;
    }

    return isPalindrome(s,left+1,right-1);
}

int main(){
    string s;
    cin>>s;
    int n = s.length()-1;

    if(isPalindrome(s,0,n)){
        cout<<"Is a Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    
    return 0;
}


// Single Pointer approach

#include<iostream>
using namespace std;

bool isPalindrome(string s, int i, int n){
    if(i>=n/2){
        return true;
    }

    if(s[i]!=s[n-i-1]) return false;

    return isPalindrome(s,i+1,n);
}

int main(){
    string s;
    cin>>s;
    int n = s.length();
    if(isPalindrome(s,0,n)){
        cout<<"Is a Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
    
    return 0;
}