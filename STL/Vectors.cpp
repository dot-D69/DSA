#include<bits/stdc++.h>
using namespace std;

// Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them. Vector elements can be easily accessed and traversed using iterators. A vector stores elements in contiguous memory locations.

// Syntax:
// vector<object_type> variable_name;

void Vectors(){
//1.) Declaring a vector

    vector<int> v;
    v.push_back(1);   //  push_back() function is used to push elements into a vector from the back
    v.emplace_back(2); // emplace_back() is also used to push elements into a vector it is faster than push_back()

    // In summary, the key difference between push_back() and emplace_back() is that the former adds a copy of an existing object to the vector, while the latter constructs a new object directly within the vector

    // we can define a pair in vector
    vector<pair<int ,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    // another way to define a vector
    vector<int> v1(5, 50); // 5 elements with value 0 i.e. {50, 50, 50, 50, 50}

    // copy of a vector
    vector<int> v1(5,100);
    vector<int> v2(v1); // copy of v1




//2.) Accessing elements of a vector
    vector<int> v = {1, 2, 3, 4, 5};
    cout << v[0] << " " << v[1] << endl; // 1 2




//3.) Iterating over a vector
    vector<int> v = {1, 2, 3, 4, 5};

    vector<int>:: iterator it = v.begin();
    cout<<*(it)<<" ";
    it++;


    vector<int>::iterator it=v.end();  // it returns an iterator pointing to the element theoretically after the last element of the vector.

    it--; // now it points to the last element of the vector
    cout<<*(it)<<" ";


    /* 
    apart from v.begin() and v.end() we have
    i.)v.rend() : it returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    i.e. {5, 4, 3, 2, 1}  so the pointer points to theoretical element before 5
    on doing it-- it points to 5

    ii.)v.rbegin() : it returns a reverse iterator pointing to the last element in the vector (reverse beginning)
    i.e. {5, 4, 3, 2, 1}  so the pointer points to 1 on doing it++ it points to 2
    */


    // we can also use auto keyword to define an iterator
    vector<int> v = {1, 2, 3, 4, 5};
    for(auto it = v.begin(); it != v.end(); it++)
        cout << *(it) << " ";


    // we can also use for each loop
    vector<int> v = {1, 2, 3, 4, 5};
    for(auto x : v)
        cout << x << " "; 




//4.) To delete an element from vector

    // v={1,2,3,4,5}
    v.erase(v.begin()+1);
    // so the  vector will become v={1,3,4,5}


    // v={1,2,3,4,5} to delete {2,3}
    v.erase(v.begin()+1,v.begin()+4); // it does not includes the 4th  element from begin

    v.clear(); // erases the entire vector




// 5.) Inserting in a vector
    vector<int> v (2,100);  //{100 100}
    v.insert(v.begin(),300); // {300 100 100}
    v.insert(v.begin()+1,2,10); //{300 10 10 100 100}

    // to insert a vector into a vector
    vector<int> copy(4, 69); //{69,69,69,69}
    v.insert(v.begin(),copy.begin(),copy.begin()+2); // {69,69,300,10,10,100,100}


}

int main(){
    
    Vectors();
    return 0;
}