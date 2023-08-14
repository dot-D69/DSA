#include <bits/stdc++.h>
using namespace std;

// A set in STL is a container that stores unique elements in a particular order. Every operation on a set takes O(1) complexity in the average case and takes O(n) in the worst case
// Syntax:
// set<object_type> variable_name;

int main()
{
    set<int> s;
    for (int i = 1; i <= 5; i++)
    {
        s.insert(i);
    }
    for (auto it : s)
    {
        cout << it << " ";
    }

    // Finding an element in a set
    // set.find() returns an iterator to the element if it is found in the set container. If the element is not found, then the iterator points to the position just after the last element in the set.
    auto it = s.find(5);
    if (it == s.end())
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found";
    }

    // Erasing an element from a set
    // set.erase() removes the element from the set container pointed by the iterator. If the iterator points to the last element, then the set.erase() function deletes the last element in the set.
    s.erase(5);
    for (auto it : s)
    {
        cout << it << " ";
    }

    s.erase(s.begin());
    for (auto it : s)
    {
        cout << it << " ";
    }

    // Removing all elements from a set
    // set.clear() removes all the elements from the set container, which deletes the set completely.

    s.clear();

    // Finding the size of a set
    // set.size() returns the number of elements in the set container.
    cout << s.size();

    // Checking if a set is empty
    // set.empty() returns true if the set container is empty and returns false if the set container has at least one element.
    if (s.empty())
    {
        cout << "Set is empty";
    }
    else
    {
        cout << "Set is not empty";
    }

    // Lower bound and upper bound in a set
    // set.lower_bound() returns an iterator pointing to the element in the set which is equivalent to the given element. If the set contains multiple elements which are equivalent to the given element, then the iterator points to the first element. If there is no equivalent element in the set, then the iterator points to the first element which is greater than the given element.
    // set.upper_bound() returns an iterator pointing to the first element in the set which is greater than the given element. If there is no element greater than the given element, then the iterator points to the position just after the last element in the set.

    set<int> s = {2, 4, 6, 8, 10};
    auto it = s.lower_bound(5);
    cout << *it << endl; // it returns 6 because 6 is the smallest element in the set which is greater than 5
    it = s.lower_bound(6);
    cout << *it << endl; // it returns 6 because 6 is the smallest element in the set which is greater than or equal to 6

    unorderedSet();
    Multiset();
    return 0;
}

// An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.
// All the operations are same as mentioned above for set except the order of elements is not fixed in unordered set
// lower bound and upper bound function do not work in unordered set

void unorderedSet()
{
    unordered_set<int> s;
    for (int i = 1; i <= 5; i++)
    {
        s.insert(i);
    }
    for (auto it : s)
    {
        cout << it << " ";
    }

    auto it = s.find(5);
    if (it == s.end())
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found";
    }

    s.erase(5);
    for (auto it : s)
    {
        cout << it << " ";
    }

    s.erase(s.begin());
    cout << "The elements of the set are: ";
    for (auto it : s)
    {
        cout << it << " ";
    }

    s.clear();
    cout << "The size of the set is: " << s.size();

    if (s.empty())
    {
        cout << "Set is empty";
    }
    else
    {
        cout << "Set is not empty";
    }
}

void Multiset()
{
    // A multiset in STL is an associative container just like a set the only difference is it can store duplicate elements in it.
    // Syntax:
    // multiset<object_type> variable_name;

    multiset<int> m;
    m.insert(1);
    m.insert(2);
    m.insert(2);
    m.insert(3);
    m.insert(3);
    m.insert(4);
    m.insert(5);
    m.insert(5);

    cout << "The multiset elements are:";
    for (auto it : m)
    {
        cout << it << " ";
    }

    // Finding an element in a multiset
    // multiset.find() returns an iterator to the element if it is found in the multiset container. If the element is not found, then the iterator points to the position just after the last element in the multiset.
    auto it = m.find(5);
    if (it == m.end())
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found";
    }

    // Erasing an element from a multiset
    // multiset.erase() removes the element from the multiset container pointed by the iterator. If the iterator points to the last element, then the multiset.erase() function deletes the last element in the multiset.
    
    m.erase(m.begin()); // it will erase the first element from the multiset
    cout << "The multiset elements after deleting the first element: ";
    for (auto it : m)
    {
        cout << it << " ";
    }

    cout << "The size of the multiset is: ";
    cout << m.size(); // returns the number of elements in the multiset container.

    // Removing all elements from a multiset
    // multiset.clear() removes all the elements from the multiset container, which deletes the multiset completely.
    m.clear();
}
