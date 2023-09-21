//Brute force approach 

#include<bits/stdc++.h>
using namespace std;


int longestSubarrayWithSumK(vector<int> a, long long k) {
    int len = 0;
    int n = a.size();

    for(int i =0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum==k){
                len = max(len,j-i+1);
            }
        }
    }

    return len;
}

int main(){
    vector<int> a = {1,2,3,3,4,5,6,7,8,9,10};
    long long k = 15;
    cout<<longestSubarrayWithSumK(a,k)<<endl;
    return 0;
}


// Better approach (works for all positives and negatives whereas the optimal approach only works for positive and 0's in the array)

#include<bits/stdc++.h>
using namespace std;


int longestSubarrayWithSumK(vector<int> a, long long k) {
    long long sum=0;
    int len =0;
    int n = a.size();

    map<long long,int> mp;

    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==k){
            len=max(len,i+1);
        }
        
        int rest = sum-k;
        if(mp.find(rest)!=mp.end()){
            int map_len = i-mp[rest];
            len=max(len,map_len);
        }

        if(mp.find(sum)==mp.end()){  // this is to check if the sum is not already present in the map in order to not overwrite the sum index in map
            mp[sum]=i;
        }
        
    }
    return len;
}

int main(){
    vector<int> a = {1,2,3,3,4,5,6,7,8,9,10};
    long long k = 15;
    cout<<longestSubarrayWithSumK(a,k)<<endl;
    return 0;
}

/*
Input: arr[] = {1, 2, 3, 3, 4, 5, 6, 7, 8, 9}, K = 15
Output: 4
The subarray is {3, 3, 4, 5}

// we are basically using a hashmap then in which we will store the count of the subarrays that come

// before we start iterating through the input array, we haven't encountered any elements yet, so our cumulative sum is 0. By initializing sumFrequency[0] to 1, we are essentially saying that there is one subarray found so far with a sum of 0, which represents an empty subarray at the beginning of the input array.

Loop through the input array nums from left to right using the index i.

Update the cumulative sum sum by adding the current element nums[i] to it.

Calculate rest, which represents the difference between the current cumulative sum sum and the target sum k. In other words, rest = sum - k. This step identifies how much we need to subtract from the current cumulative sum to get the desired sum k.

Check if rest exists in the mp map. If it does, it means that there are subarrays before the current index whose cumulative sum is rest. So, you increment cnt by the frequency associated with rest in the map. This step counts the subarrays that have a sum equal to k.

Increment the frequency of the current cumulative sum  in the mp map to keep track of it for future iterations.

Repeat steps 4 to 7 for all elements in the input array.

After the loop, return the final value of cnt, which represents the count of subarrays with a sum equal to k.

we use rest to see if we have reached our target sum or if we need to remove or add values
suppose our target is k=3 and we have iterated the array  till sum = 9;
so we are currently at ith index and we want to check if the current array(till 9) contains any sub-array whihc is equal to 3  

we can only find this if we subtrac the 3 from 9 (9-3 =6) now we need to subtract the subarray of sum 6 from our array ( of sum 9) to get a value of  3 sum subarray

now we check if there is any subarray of sum=6 in the map if there is then we get the count of the times it is present if it is preset two times so it means  that in the current array we have two such subarrays where sum =3 (cause we will minus the 6 sum subarray two times)

now we add the current sum to the map to keep track of it for future iterations

*/ 


// Time complexity: O(n)
// Space complexity: O(n)


//Optimal approach (this only works for positive and 0's in the array)
// The above approach will not work for negative numbers in the array also 
// Two pointer approach
#include<bits/stdc++.h>
using namespace std;


int longestSubarrayWithSumK(vector<int> a, long long k) {
    int left = 0;
    int right = 0;
    int n = a.size();
    long long sum = 0;
    int len = 0;

    while (right < n) {
        sum += a[right];

        while (sum > k) {
            sum -= a[left];
            left++;
        }

        if (sum == k) {
            len = max(len, right - left + 1); // Update len correctly
        }

        right++; // Move right pointer
    }

    return len;
}


int main(){
    vector<int> a = {1,2,3,3,4,5,6,7,8,9,10};
    long long k = 15;
    cout<<longestSubarrayWithSumK(a,k)<<endl;
    return 0;
}



