

/*
hashing refers to the process of taking a piece of data (like a string or a number) and converting it into a fixed-size value or key, typically a number.
The purpose of hashing is to make data retrieval and storage more efficient.

*/

//Basic exampe of counting frequency of elements in an array using hashing
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // precompute
    int hashh[12]={0};
    for(int i =0;i<n;i++){
        hashh[arr[i]]++;
    }

    for(int i=0;i<12;i++){
        cout<<"Enter the number to find the frequency of: ";
        int x;
        cin>>x;
        cout<<"Frequency of "<<x<<" is "<<hashh[x]<<endl;
    }
    
    return 0;
}


//Maximum hash array size (Main vs Global)

// inside the main function the maximum size of the integer array can be 10^6 
// but outside the main function the maximum size of the integer array can be 10^7

// int hashh[10000000]={0}; // this will give segmentation fault (while inside main function)
// But if declared outside the main function it will work fine only for 10^7 size of array

// What if the size of array is very large like (10^9)?
// In this case we can use unordered_map



// Character frequency using hashing
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    // precompute
    int hash[26]={0};  // we take 26 size array when we know that the string contains only lowercase letters but when it is not specified then we take 256 size array
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++;
    }

    int query;
    cout<<"Enter the number of queries: ";
    cin>>query;
    while(query--){
        char c;
        cout<<"Enter the character to find the frequency of: ";
        cin>>c;

        //fetch
        cout<<"Frequency of "<<c<<" is "<<hash[c-'a']<<endl;
    }
}
