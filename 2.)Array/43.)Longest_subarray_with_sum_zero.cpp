#include <bits/stdc++.h>
using namespace std;

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	int n =arr.size();
	unordered_map<int,int> hash;
	int sum=0;
	int maxi=0;

	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum==0){
			maxi=i+1;
		}
		else{
			if(hash.find(sum)!=hash.end()){
				maxi=max(maxi,i-hash[sum]);
			}
			else{
				hash[sum]=i;
			}
		}
	}
	return maxi;
	
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<getLongestZeroSumSubarrayLength(arr)<<endl;
    return 0;
}

/*
1. The goal of the algorithm is to find the longest subarray within the given array that has a sum of zero.

2. The algorithm uses a cumulative sum approach to identify subarrays with a sum of zero.

3. It iterates through the array and maintains a running sum of the elements encountered so far.

4. If the running sum is zero at any point, it means that the subarray from the beginning of the array to the current index has a sum of zero. In this case, it updates the maxi variable to the current index plus one.

5. If the running sum is not zero, it checks if the sum already exists in a hash map called hash. The hash map stores the running sum as the key and the index as the value.

6. If the sum exists in the hash map, it means that there is a subarray with a sum of zero between the current index and the index stored in the hash map for that sum. In this case, it updates the maxi variable with the maximum length of the subarray found so far.

7. If the sum does not exist in the hash map, it means that it is a new sum encountered for the first time. In this case, it adds the sum and its corresponding index to the hash map.

8. By continuously updating the maxi variable whenever a subarray with a sum of zero is found, the algorithm ensures that it keeps track of the longest subarray with a sum of zero.

9. Finally, the algorithm returns the value of maxi, which represents the length of the longest subarray with a sum of zero.

*/