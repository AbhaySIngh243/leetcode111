class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minpr =INT_MAX;
        int maxpro = 0;

        for (int p : prices){
            minpr = min (minpr, p);
            maxpro= max( maxpro, p - minpr);
        }
        return maxpro;
        
    }
};