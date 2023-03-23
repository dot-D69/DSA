// Q.1
// Print the pattern
/*
    1 2 3 4  cols
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
            cout << "*";
        }
        cout << endl;
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