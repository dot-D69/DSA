/*Problem Statement:
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation:
Buy on day 2 (price = 1) and sell on day 5 (price = 6),
profit = 6-1 = 5.
*/

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& Stock_prices) {
    int min_price = INT_MAX;
    int max_profit = 0;
    for(int i=0;i<Stock_prices.size();i++) {
        min_price = min(min_price,Stock_prices[i]);
        max_profit = max(max_profit,Stock_prices[i]-min_price);
    }
    return max_profit;
}

int main() {
    int n;
    cin>>n;
    vector<int> Stock_prices(n);
    for(int i=0;i<n;i++) {
        cin>>Stock_prices[i];
    }
    cout<<maxProfit(Stock_prices);
    return 0;
}