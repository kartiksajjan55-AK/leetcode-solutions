#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minPrice = prices[0];
        int maxProfit = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            
            int profit = prices[i] - minPrice;
            
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
        
        return maxProfit;
    }
};
int main() {
    Solution s;

    // Test Case 1
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};

    cout << s.maxProfit(prices1) << endl;


    // Test Case 2 - Edge Case
    vector<int> prices2 = {7, 6, 4, 3, 1};

    cout << s.maxProfit(prices2) << endl;

    return 0;
}