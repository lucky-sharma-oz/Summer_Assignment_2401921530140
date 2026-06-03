class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int n = nums.size();
        int current_count = 0;

        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                current_count++;
            }
            else{
                max_count = max(max_count, current_count);
                current_count = 0;
            }
        }
        return max(max_count, current_count);
    }
};
