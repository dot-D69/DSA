// 1 

#include<iostream>
// #include <climits>
using namespace std;

int main(){
    int mx = -1999999;
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        mx= max(mx,arr[i]);
        cout << mx << endl;
    }

    return 0;
}


// given an array arr[] of size n . output sum of each subaaray of the given arrya


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        sum =0;
        for (int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}


// LONGEST AIRTHMETIC SUBARRAY  (kickstart)
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans =2;
    int pd = arr[1]-arr[0];
    int j=2;
    int curr=2;

    while(j<n)
    {
        if(pd ==arr[j]-arr[j-1])
        {
            curr++;
        }
        else
        {
            pd =arr[j]-arr[j-1];
            curr = 2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}


// RECORD BREAKER (KICKSTART)
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }

    int ans =0;
    int mx = -1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx = max(mx,arr[i]);
    }
    cout<<ans<<endl;
    return 0;
}

