// //print your name n times

#include<iostream>
using namespace std;

void print_name(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Dhruv"<<endl;
    print_name(i+1,n);
}

int main(){
    print_name(1,5);
    return 0;
}


// // print linearly form 1 to n using recursion

#include<iostream>
using namespace std;

void display(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    display(i+1,n);
}

int main(){
    display(1,5);
    return 0;
}

// // print from 1 to N using backtracking

#include<iostream>
using namespace std;

void display(int  n){
        if(n<1){
            return;
        }
        display(n-1);
        cout<<n<<endl;
    }

int main(){
    display(5);
    return 0;
}


// print  form N to 1 using recursion
#include<iostream>
using namespace std;

void display_rev(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    display_rev(n-1);
}

int main(){
    display_rev(5);
    return 0;
}

// print N to 1 using backtracking

#include<iostream>
using namespace std;
void Display_rev2(int i,int n){
    if(i>n){
        return;
    }
    Display_rev2(i+1,n);
    cout<<i<<endl;
}

int main(){
    Display_rev2(1,5);
    return 0;
}