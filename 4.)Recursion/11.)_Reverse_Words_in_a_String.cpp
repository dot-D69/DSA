#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    stringstream ss(s);
    vector<string> res;
    string word;

    while (ss >> word)
    {
        res.push_back(word);
    }

    reverse(res.begin(), res.end());

    string Reversed;
    bool isFirstWord = true;
    for (auto w : res)
    {
        if (!isFirstWord)
        {
            Reversed += " ";
        }
        Reversed += w;
        isFirstWord = false;
    }

    return Reversed;
}

int main()
{
    string s;
    cout << "Enter the string:";
    getline(cin, s);
    cout << reverseWords(s);
    return 0;
}
