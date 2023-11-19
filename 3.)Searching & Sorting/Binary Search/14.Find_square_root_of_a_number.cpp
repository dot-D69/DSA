#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n)
{
    int low=0,high=n;
    int ans=1;
    while(low<=high){
        long long mid=(low+high)/2;
        long long square = mid*mid;

        if(square<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int main() {
    
    cout << "Enter a number: ";
    int num;
    cin >> num;

    cout << "Square root of " << num << ": " << floorSqrt(num) << endl;

    return 0;
}

