class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       unordered_map<int, int> map;
       int n = nums.size();
       map[0] = -1;

       int sum = 0;
       for(int i = 0; i < n; i++){
        sum += nums[i];
        int rem = sum % k;

        if(map.count(rem)){
            if(i - map[rem] >= 2){
                return true;
            }
        }
         else{
                map[rem] = i;
            }
       }
       return false;
    }
};
