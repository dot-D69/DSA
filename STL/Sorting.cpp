#include<bits/stdc++.h>
using namespace std;

//  STL provides us with a standard inbuilt function to sort any container very easily.
// it’s one of the most efficient functions with a N*logN time complexity and uses a mix of quicksort and mergesort in its internal implementation.
// The sort() function in STL accepts two mandatory parameters: begin, and end, and sorts the range with-in the container in ascending order by default.

void Sort(){
        vector<int> v = {1, 5, 3, 2, 4};
    sort(v.begin(), v.end());
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
    // The above sort() function will sort the vector in ascending order.

    // To sort the vector in descending order, we can use the greater<int>() function as the third parameter to the sort() function.
    sort(v.begin(), v.end(), greater<int>());
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    // To sort a part of the vector, we can pass the starting and ending index of the range as the first two parameters to the sort() function.
    sort(v.begin()+1, v.end()-1);
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;

    // If we want to sort the elements in a particular rather than increasing or decreasing order, we can pass a custom comparator function as the third parameter to the sort() function.
    // For Example
    // I have a pair {4,1},{1,2},{2,1}

    // Sort it according to the second element of the pair in ascending order.
    // if the second element is same then sort it according to the first element of the pair in descending order.


    pair<int,int> a[] = {{4,1},{1,2},{2,1}};
    int n= sizeof(a)/sizeof(a[0]);
    sort(a,a+n,comp); 
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    } 
}

bool comp (pair<int,int> a, pair<int,int> b){
        if(a.second < b.second){
            return true;      // if true then it knows that a should come before b so 
        }
        if(a.second > b.second){
            return false;   // if false then it knows the condition is breaking hence it will swap the elements to make it true
        }
        if(a.second == b.second){
            return a.first > b.first;   
        }
        return false;
}



int main(){
    Sort();
    
    return 0;
}

