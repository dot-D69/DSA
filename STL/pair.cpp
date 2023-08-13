#include <bits/stdc++.h>
using namespace std;

void pairs()
{
    // to store 2 data types in a single variable we use pair
    pair<int, int> p = {1, 3};
    cout<< "Pair p: " << p.first << " " << p.second<<endl;

    pair<int, string> student = {1, "Bob"};
    cout<<"Student: " << student.first << " " << student.second<<endl;

    // if we want to sotore more than two then we use nested pair
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout<<"Pair p1: " << p1.first << " " << p1.second.first << " " << p1.second.second<<endl;

    // we can also make pair of array

    pair<int,int> arr[]={{1,2},{2,3},{4,5}}; // array of pair
    cout<<"Array of pairs: "<<arr[0].first<<" "<<arr[0].second<<endl;
    cout<<"Accessing second element of the second pair: "<<arr[1].second;
}

int main()
{
    pairs();
    return 0;
}