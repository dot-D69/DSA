//Brute force 

#include <bits/stdc++.h>
using namespace std;

vector<int> Intersection(vector<int> &arr1,vector<int> arr2,int n,int m){
    vector<int> ans;
    int visited[m] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i] == arr2[j] && visited[j] == 0){
                ans.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }

            if(arr2[j] > arr1[i]){
                break;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,3,4,5,6};
    vector<int> ans = Intersection(arr1,arr2,arr1.size(),arr2.size());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}


//Optimized solution
// Two pointer approach
// First we initialize two pointers i and j pointing to the first element of both the arrays.
// If the element at index i of array a is less than the element at index j of array b, then we increment i by 1.
// If the element at index i of array a is greater than the element at index j of array b, then we increment j by 1.
// If the element at index i of array a is equal to the element at index j of array b, then we push the element at index i of array a into the vector and increment i and j by 1.



#include <bits/stdc++.h> 
using namespace std;


vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i =0;
	int j=0;
	vector<int> intersection;

	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			intersection.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
		else {
			j++;
		}
	}

	return intersection;
	
}

int main() 
{ 
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,3,4,5,6};
    vector<int> intersection = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());
    for(int i=0;i<intersection.size();i++){
        cout<<intersection[i]<<" ";
    }
    return 0; 
}

//Time Complexity: O(n+m)
//Auxiliary Space: O(1)
//Space Complexity: O(n+m)