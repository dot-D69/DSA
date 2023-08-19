// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        int size=arr.size();
        vector<int>res;    // intialize an res vector to store the count of each element
        sort(arr.begin(),arr.end());   // sort the array so that it is easier to iterate and thus saves time
        int i=0;
        while(i<size){
            int cnt=1;     // don't intialize cnt outside the first loop else the will value will be carried over to the next iteration
            for(int j = i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    cnt++;
                }
                else{
                    break;      // add break else it will form an infinite loop
                }
            }
            res.push_back(cnt);    

            //can't use res[i]=cnt because  because the res vector has not been initialized to any size, so trying to access its elements using the [] operator will result in an out-of-bounds error. Instead you should use res.push_back(cnt) in order to add the count of the current element to the res vector. This will automatically increase the size of the res vector and add the count of the current element to the end of the vector.

            i+=cnt;
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){         // still having issues,  what is it i dont know will fix later
            if(res[i]==res[i+1]){
                return false;
            }
        }
        return true;
    }

int main(){
    vector<int> arr = {1,2,2,1,1,3};
    cout<<uniqueOccurrences(arr);
    return 0;
}

// 1 meanns true