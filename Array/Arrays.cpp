// Array


#include<iostream>
using namespace std;

void printarray(int arr[]){
    for(int i =0;i<10;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printarray(arr);
    return 0;
}



// // Maximum And Minimum

#include<iostream>
using namespace std;

int getmax(int a[],int s);
int getmin(int a[],int s);

int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    int arr[100];

    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i<<"th element of array";
        cin>>arr[i];
    }

    cout<<"The max element of array is "<<getmax(arr,size)<<endl;
    cout<<"The min element of array is "<<getmin(arr,size)<<endl;
    return 0;
}


int getmax(int a[],int s){
    int maxi = INT8_MIN;
    for(int i=0;i<s;i++){
        maxi = max(maxi,a[i]);
    }
    return maxi;
}

int getmin(int a[],int s){
    int minm = INT8_MAX;
    for(int i=0;i<s;i++){
        minm=min(minm,a[i]);
    }
    return minm;
}



// // Array_Scope

#include<iostream>
using namespace std;

void update(int arr[],int s){
    cout<<"Inside the function "<<endl;
    arr[0]=69;                  // If we update the index it also get updated in the main function
    for(int i=0;i<s;i++){
        cout<<arr[i];
    }cout<<endl;

    cout<<"Returning to main"<<endl;
}

int main(){
    int arr[3]={1,2,3};

    update(arr,3);

    for(int i=0;i<3;i++){
        cout<<arr[i];
    }
    return 0;
}


// Find maximum and second maximum

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,-3,4,1,6,-5,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    int max1,max2;
    max1=0;
    max2=0;
    for(int i=0;i<n;i++){
        if (arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2){
            max2 = arr[i];
        }
    }
    cout<<"The largest number  is "<<max1<<endl;
    cout<<"The 2nd largest number  is "<<max2<<endl;
    return 0;
}