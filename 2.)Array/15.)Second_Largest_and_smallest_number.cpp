#include <bits/stdc++.h>
using namespace std;


vector<int> getSecondOrderElements(int n, vector<int> a) {
    int small = INT_MAX;
    int second_small=INT_MAX;
    int large = INT_MIN;
    int second_large = INT_MAX;
    vector<int> ans;

    for(int i=0;i<n;i++){
        
        if(a[i]<small){
            second_small=small;
            small=a[i];
            
        }
        else if (a[i]<second_small){
            second_small=a[i];
        }

        if(a[i]>large){
            second_large=large;
            large=a[i];
        }
        else if(a[i]>second_large){
            second_large=a[i];
        }
    }

    ans.push_back(second_large);
    ans.push_back(second_small);

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    vector<int> ans = getSecondOrderElements(n, a);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}