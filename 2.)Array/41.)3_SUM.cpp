// Better Solution (using set)
#include<bits/stdc++.h>
using namespace std;



    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> unique;
        for(int i=0;i<n;i++){
            set<int>hashset; // since we want an empty et after every new iteration of i
            for(int j =i+1;j<n;j++){
                int k =-(nums[i]+nums[j]);
                if(hashset.find(k)!=hashset.end()){
                    vector<int>temp = {nums[i],nums[j],k}; // the triplet that we found
                    sort(temp.begin(),temp.end());
                    unique.insert(temp);
                }

                hashset.insert(nums[j]); // to insert the j before moving to new index
            }
        }
        
         vector<vector<int>> res;
         res.insert(res.end(),unique.begin(),unique.end());
         return res; 
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    vector<vector<int>> res = threeSum(nums);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// we can i +j+k=0 as k = -(i+j)
// so using that logic we will move forward
// we start from i=0 and j=i+1 
// -1,0,1,2,-1,-4
// currently the hashset is empty []
// so if we check for k that is i-j = -(1-0) = -1 not in set 
// so we move j forward and we put the previous j into the hashset , so now the hashset is [0] i=-1 and j=1
// again k =i-j= 0 , which  is present in the hashset  so now it means we have foud the triplet 
// so we sort the triplet it becomes [-1,0,1] and push the triplet into a set so any other similar triplet is not added 
// again we move j++ add prev j to hsh set , Hashset =[0,1] ,i=-1,j=2
//k=-(-1+2) = 1 , we have 1 in hasset we found another triplet
//sort the triple as [-1,1,2] and add to unique set
// and so on until j <n 

// now for the second iteration i , after evvery new iteration of i we will empty the hashset =[]
// So i =0,j=1, hashset =[], Now k =-(0+1)=-1 , not in hashset move  j forward and add prev j to hashset =[1]
//k=-(0+2) = -2 ,not inn hashset move j and add 
// Hashset =[1,2]
//k=-(0+(-1))=1 , it ispresent in hashet so we found a triplet [0,-1,1]
// we sort it so it becomes [-1,0,1] and we add to the unique set this triplet is already present so it won't be consider and then we move forward
// Similarlity we will traverse the whole array and later return a vecotr of vector as answer; 








//######################################################//







//Optimal Solution (two pointer approach)
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue; // this is to check if the previous element of i is same as curr element then move also if the the i si at the first element sot here will be no prevous element so  to check that i>0
            int j=i+1;
            int k =n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum<0){    
                    j++;    // since the array is sorted and if we get negative so we need to increase thus we move j so as to get 0
                }
                else if(sum>0){
                    k--;  //  since the array is sorted and if we get more than 0  so we need to decrease the k so as to get 0
                }
                else{   // this means the sum is zero and we have found our triplet
                    vector<int> temp ={nums[i],nums[j],nums[k]};
                    res.push_back(temp);
                    j++;      // since we will not again start from the j and k that we have just pushed into the res so we move them one ahead
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--; 
                }
            }
        }
        
        return res; 
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    vector<vector<int>> res = threeSum(nums);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}