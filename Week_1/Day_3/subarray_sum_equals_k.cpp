class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currSum = 0;
        int count = 0;
        unordered_map<int, int> mp;

        mp[0] = 1;

        for(int num : nums){
            currSum += num;
            int need = currSum - k;

            if(mp.find(need) != mp.end()){
                count += mp[need];
            }
            mp[currSum]++;
        }
        return count;
    }
};
