class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> mp;
        int ans = 0;
        int n = nums.size();
        for ( int i : nums){
           mp[i]++;
           if (mp[i] >n/2){
            return i;
           }
            
           }
            return -1;
        }    
    
};