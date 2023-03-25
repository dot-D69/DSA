// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// Brute Force Approach

#include<iostream>
#include<map>
using namespace std;

int main(){
    int num[]={1,2,4,1,2};
    int n = sizeof(num)/sizeof(int);

    map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[num[i]]++;
    }

    for(auto x: freq){
        if(x.second==1){
            cout<<x.first<<endl;
        }
    }


    return 0;
}



// linear runtime complexity 

#include<iostream>
using namespace std;

int main(){
    int num[]={1,2,8,9,7,8,6,7,9,4,6,1,2};
    int n = sizeof(num)/sizeof(int);
    int ans = 0;

    for (int i = 0; i <n ; i++)
    {
        ans=ans^num[i];
    }
    
    cout<<ans<<endl;;
    return 0;
}
