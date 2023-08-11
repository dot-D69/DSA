// Q.1
// Print the pattern
/*
    1 2 3 4  
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// Q.2
// Print the pattern
/*
    4 3 2 1
    4 3 2 1
    4 3 2 1
    4 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << n - j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.3
// Print the pattern
/*
1 2 3
4 5 6
7 8 9
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    int cnt = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // cout<<j+(3*i)<<" ";   // This also works
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}

// Q.4
// Print the pattern
/*
 *
 * *
 * * *
 * * * *
 */

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << '*' << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.5
// Print the pattern
/*
    1
    2 2
    3 3 3
    4 4 4 4
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.6
// Print the pattern
/*
    1
    1 2
    1 2 3
    1 2 3 4
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.7
// Print the pattern
/*
    1
    2 3
    4 5 6
    7 8 9 10
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int cnt = 1;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}

// Q.8
// Print the pattern
/*
1
1 2
1 2 3
1 2 3 4
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)     
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.9
// Print the pattern
/*
    1
    2 3
    3 4 5
    4 5 6
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + i + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.10
// Print the pattern
/*
    1
    2 1
    3 2 1
    4 3 2 1
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.11
// Print the pattern
/*
A A A
B B B
C C C
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char S = 'A' + i - 1;
            cout << S << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.12
// Print the pattern
/*
A B C
A B C
A B C
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char S = 'A' + j - 1;
            cout << S << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.13
// Print the pattern
/*
A B C D
E F G H
I J K L
M N O P
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    char S = 'A';
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << S << " ";
            S++;
        }
        cout << endl;
    }
    return 0;
}

// Q.14
// Print the pattern
/*
A B C
B C D
C D E
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char S = 'A' + i + j;
            cout << S << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.15
// Print the pattern
/*
A
B B
C C C

*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char S = 'A' + i;
            cout << S << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.16
// Print the pattern
/*
    A
    B C
    C D E
    D E F G
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char S = 'A' + i + j;
            cout << S << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.17
// Print the pattern
/*
D
C D
B C D
A B C D
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            char S = 'A' + m - 1;
            cout << char(S - i + j) << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q.18
// Print the pattern
/*
 *
 **
 ***
 ****
 */

#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the no of rows ";
    cin>>m;
    cout<<"Enter the no of cols ";
    cin>>n;
    for(int i=0;i<=m;i++){
        for(int j=00;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

// Q.19
// Print the pattern
/*
****
***
**
*
*
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// Q.20
// Print the pattern
/*
****
***
**
*
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        int space = i;
        while (space)
        {
            cout << " ";
            space--;
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// Q.21
// Print the pattern
/*
1111
 222
  33
   4
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        int space = i;
        while (space)
        {
            cout << " ";
            space--;
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    return 0;
}

// Q.22
// Print the pattern
/*
   1
  22
 333
4444
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

// Q.23
// Print the pattern
/*
1234
 234
  34
   4
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        int space = i;
        while (space)
        {
            cout << " ";
            space--;
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << j + i;
        }
        cout << endl;
    }
    return 0;
}

// Q.24
// Print the pattern
/*
   1
  23
 456
78910
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    int cnt = 1;
    for (int i = 1; i <= m; i++)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << cnt;
            cnt++;
        }
        cout << endl;
    }
    return 0;
}

// Q.25
// Print the pattern
/*
   1
  12
 123
1234
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows";
    cin >> m;
    cout << "Enter the number of cols";
    cin >> n;

    for (int i = 1; i <= m; i++)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

// Q.26
// Print the pattern
/*
   1
  121
 12321
1234321
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows";
    cin >> m;
    cout << "Enter the number of cols";
    cin >> n;

    for (int i = 1; i <= m; i++)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        int start = i - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        cout << endl;
    }
    return 0;
}

// Q.27
// Print the pattern
/*
   *       [4,1,4]
  ***      [3,3,3]
 *****     [2,5,2]
*******    [1,7,1]
*********   [0,9,0]
*/



#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows";
    cin >> m;
    cout << "Enter the number of cols";
    cin >> n;

    for(int i =1;i<=m;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<"*";
        }
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


// Q.28
// Print the pattern
/*
*********    [0,9,0]
 *******     [1,7,1]
  *****      [2,5,2]
   ***       [3,3,3]
    *        [4,1,4]
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows";
    cin >> m;
    cout << "Enter the number of cols";
    cin >> n;

    for(int i =5;i>0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<"*";
        }
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

// Q.29
// Print the pattern
/*
    *   
   ***  
  ***** 
 *******
*********
*********
 *******
  ***** 
   ***  
    *
*/ 


#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows";
    cin>>m;
    cout<<"Enter the number of cols";
    cin>>n;

    for(int i =1;i<=m;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<"*";
        }
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i =5;i>0;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<"*";
        }
        for(int j=1;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Q.30
// Print the pattern
/*
*
**
***
****
*****
****
***
**
*
*/


#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows";
    cin>>m;
    cout<<"Enter the number of cols";
    cin>>n;

    for(int i =1;i<=2*m-1;i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;       //  2*5-6=4 , 2*5-7=3  2*5-8=2  2*5-9=1  2*5-10=0
        }
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}


// Q.31
// Print the pattern
/*
0
10
010
1010
01010
*/

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows";
    cin>>m;
    cout<<"Enter the number of cols";
    cin>>n;

    for(int i=1;i<=m;i++){
        int start =1;
        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<i;j++){
            cout<<start;
            start=1-start;
        }cout<<endl;
    }
    
    return 0;
}


// Q.32
// Print the pattern
/*
1        1
12      21
123    321
1234  4321
1234554321
*/

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows";
    cin>>m;
    cout<<"Enter the number of cols";
    cin>>n;

int space = 2*(m-1);
    for(int i =1;i<=m;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=space;k++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
    
    return 0;
}


// Q.33
// Print the pattern
/*              [star space star]
**********      [5 0 5]
****  ****      [4 2 4]
***    ***      [3 4 3]
**      **      [2 6 2]
*        *      [1 8 1]
----- Symmetrically opposite of above -----
*        *      [1 8 1]
**      **      [2 6 2]
***    ***      [3 4 3]
****  ****      [4 2 4]
**********      [5 0 5]
 */


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows";
    cin>>n;

    int space=0;
    for(int i=0;i<n;i++){
        // stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<space;j++){
            cout<<" ";
        } 
        // stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        space+=2;
        cout<<endl;
    }
    int space2=2*n-2;
    for(int i=0;i<n;i++){
        // stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<space2;j++){
            cout<<" ";
        } 
        // stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        space2-=2;
        cout<<endl;
    }
    return 0;
}



// Q.34
// Print the pattern
/*
*        *      [1 8 1]
**      **       [2 6 2]
***    ***       [3 4 3]
****  ****       [4 2 4]
**********       [5 0 5]
****  ****       [4 2 4]
***    ***       [3 4 3]
**      **       [2 6 2]
*        *       [1 8 1]
 */


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows";
    cin>>n;

    int space =2*n-2;
    for(int i =1;i<=2*n-1;i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;       //  2*5-6=4 , 2*5-7=3  2*5-8=2  2*5-9=1  2*5-10=0
        }
        // stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        // spaces
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        // stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n){
            space-=2;
        }
        else{
            space+=2;
        }
    }
    return 0;
}



// Q.35
// Print the pattern
/*
****
*  *
*  *
****
 */



#include <iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number of rows";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}



// Q.36
// Print the pattern
/*
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4 
 */



#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows";
    cin>>n;

    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout<<(n-min(min(top,bottom),min(left,right)));
            cout<<" ";
        }
        cout<<endl;
    }
}



// Q.37
// Print the pattern
/*

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of cols ";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }

        int start = i - 1;
        while (start)
        {
            cout << "*"
                 << " ";
            start--;
        }
        int strt = i - 1;
        while (strt)
        {
            cout << "*"
                 << " ";
            strt--;
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}


// // Q.38
// // Print the pattern
// /*
// if n=5
//     1 2 3 4 5
//     11 12 13 14 15
//     21 22 23 24 25
//     16 17 18 19 20
//     6 7 8 9 10

// if n=4
//     1 2 3 4
//     9 10 11 12
//     13 14 15 16
//     5 6 7 8
// */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of rows ";
    cin >> n;
    int count = 1;
    for (int row = 1; row <= n; row++)
    {
        int current=count;
        for (int col = 1; col <=n; col++){
                cout << current << " ";
                current++;
            }
            if(row==(n+1)/2){
                if(n%2!=0){
                    count=n*(n-2)+1;
                }
                else{
                    count=n*(n+1)+1;
                }
            }
            else if(row>(n+1)/2){
                count=count-2*n;
            }
            else{
                count=count+2*n;
            }
        cout << endl;
    }
    return 0;
}
