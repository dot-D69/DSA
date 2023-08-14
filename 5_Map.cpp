#include <bits/stdc++.h>
using namespace std;

// Map in STL are associative containers where each element consists of a key value and a mapped value. Two mapped values cannot have the same key value.
// Map stores the elements in sorted order of keys and all keys are unique.

int main()
{
    // Declaring a map
    map<int, string> m;
    map<int, int> mp;
    map<pair<int, int>, int> mpp;

    // Inserting elements in a map
    m.insert({1, "Bob"});
    mp.insert({1, 4});
    mp.insert({3, 5});
    mp.insert({2, 8});

    mpp.insert({{1, 2}, 3});

    // Accessing elements in a map
    // map[key] returns the mapped value of the key if it is present in the map container. If the key is not present in the map container, then map[key] inserts the key in the map container with a mapped value of 0.

    cout << mp[1] << endl;
    cout << mpp[{1, 2}] << endl;

    cout << mp[4] << endl;

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    // Finding an element in a map
    // map.find() returns an iterator to the element if it is found in the map container. If the element is not found, then the iterator points to the position just after the last element in the map.

    auto it = mp.find(3);
    cout << it->second << endl;

    // Erasing an element from a map
    // map.erase() removes the element from the map container pointed by the iterator.

    mp.erase(mp.end()); // deletes the last element
    mp.erase(3);        // deletes the element with key 3

    // Finding the size of a map
    cout << mp.size();

    // Removing all elements from a map
    mp.clear();

    // Checking if a map is empty
    if (mp.empty())
    {
        cout << "Map is empty";
    }
    else
    {
        cout << "Map is not empty";
    }
    return 0;
}


// multimap in STL are associative containers like maps where each element consists of a key value and a mapped value, the only difference is multimaps can store duplicate elements.
void Multimap()
{
    multimap<int, int> mp;
    for (int i = 1; i <= 5; i++)
    {
        mp.insert({i, i * 10});
    }
    mp.insert({4, 40});

    cout << "Elements present in the multimap: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    int n = 2;
    if (mp.find(2) != mp.end())
        cout << n << " is present in multimap" << endl;

    mp.erase(mp.begin());
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    cout << "The size of the multimap is: " << mp.size() << endl;

    if (mp.empty() == false)
        cout << "The multimap is not empty " << endl;
    else
        cout << "The multimap is empty" << endl;
    mp.clear();
    cout << "Size of the multimap after clearing all the elements: " << mp.size();
}

// unordered_map in STL are associative containers where each element consists of a key value and a mapped value. Two mapped values cannot have the same key value. The elements can be in any order.

void Unordered_map()
{
    unordered_map<int, int> mp;
    for (int i = 1; i <= 5; i++)
    {
        mp.insert({i, i * 10});
    }

    cout << "Elements present in the map: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    int n = 2;
    if (mp.find(2) != mp.end())
        cout << n << " is present in map" << endl;

    mp.erase(mp.begin());
    cout << "Elements after deleting the first element: " << endl;
    cout << "Key\tElement" << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    cout << "The size of the map is: " << mp.size() << endl;

    if (mp.empty() == false)
        cout << "The map is not empty " << endl;
    else
        cout << "The map is empty" << endl;
    mp.clear();
    cout << "Size of the set after clearing all the elements: " << mp.size();
}
