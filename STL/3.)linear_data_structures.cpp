#include<bits/stdc++.h>
using namespace std;

// Stack
// Syntax:
// stack<object_type> variable_name;

void Stack(){
    stack<int> s;
    s.push(0); // push() function is used to insert elements into the stack
    for(int i=1;i<=5;i++)
    s.push(i);

    s.emplace(6); // emplace() function is used to insert elements into the stack it is faster than push()


    cout<<"Size of stack is: "<<s.size()<<endl; // size() function is used to find the size of the stack


//  Accessing elements of a stack
    cout<<"Elements of Stack are: ";
    while(!s.empty()){ // empty() function is used to check if the stack is empty or not
        cout<<"The top element of the queue:"<<s.top()<<" "; // top() function is used to print the topmost element of the stack
        s.pop(); // pop() function is used to delete the topmost element of the stack
    }
}

// Queue
// Syntax:
// queue<object_type> variable_name;

void Queue(){
    queue<int> q;
    q.push(0); // push() function is used to insert elements into the queue
    for(int i=1;i<=5;i++)
    q.push(i);

    q.emplace(6); // emplace() function is used to insert elements into the queue it is faster than push()

    cout<<"Size of queue is: "<<q.size()<<endl; // size() function is used to find the size of the queue

//  Accessing elements of a queue

    cout<<"Elements of Queue are: ";
    while(!q.empty()){ // empty() function is used to check if the queue is empty or not
        cout<<"The front element of the queue:"<<q.front()<<" "; // front() function is used to print the frontmost element of the queue
        q.pop(); // pop() function is used to delete the frontmost element of the queue
    }
}

// Deque (Double Ended Queue)

// Syntax:
// deque<object_type> variable_name;

void Deque(){
    deque<int> dq;
    dq.push_back(0); // push_back() function is used to insert elements into the back of the deque
    dq.push_front(1); // push_front() function is used to insert elements into the front of the deque
    for(int i=2;i<=5;i++)
    dq.push_back(i);

    cout<<"Size of dequeue is: "<<dq.size()<<endl; // size() function is used to find the size of the dequeue

//  Accessing elements of a deque
    cout<<"The first element of the dequeue is: "<<dq.front()<<endl; // front() function is used to print the frontmost element of the deque
    cout<<"The last element of the dequeue is: "<<dq.back()<<endl; // back() function is used to print the backmost element of the deque

    cout<<"Elements of Dequeue are: ";
    while(!dq.empty()){ 
        cout<<"The front element of the dequeue:"<<dq.front()<<" "; 
        dq.pop_front(); // pop_front() function is used to delete the frontmost element of the deque
    }
}

// List
// Syntax:
// list<object_type> variable_name;

void printlist(list<int> l){
    for(auto it:l){ // auto keyword is used to automatically detect the data type of the variable
    cout<<it<<" ";
    cout<<endl;
    }
}

void List(){
    list<int> l;
    l.push_back(0); // push_back() function is used to insert elements into the back of the list
    l.push_front(1); // push_front() function is used to insert elements into the front of the list
    for(int i=2;i<=5;i++)
    l.push_back(i);

    cout<<"Size of list is: "<<l.size()<<endl; // size() function is used to find the size of the list

    cout<<"Elements of List are: ";
    printlist(l); // begin() function is used to return an iterator pointing to the first element of the list

    cout<<"Reversing the list: ";

    l.reverse(); // reverse() function is used to reverse the list
    printlist(l);

    cout<<"Sorting the list: ";
    l.sort(); // sort() function is used to sort the list
    printlist(l);

    cout<<"First element of the list: "<<l.front()<<endl; // front() function is used to print the frontmost element of the list
    cout<<"Last element of the list: "<<l.back()<<endl; // back() function is used to print the backmost element of the list

    cout<<"Deleting the first element of the list: "<<endl;
    l.pop_front(); // pop_front() function is used to delete the frontmost element of the list
    cout<<"Deleting the last element of the list: "<<endl;
    l.pop_back(); // pop_back() function is used to delete the backmost element of the list

    printlist(l);
}



int main(){
    Stack();
    Queue();
    Deque();
    List();
    return 0;
}