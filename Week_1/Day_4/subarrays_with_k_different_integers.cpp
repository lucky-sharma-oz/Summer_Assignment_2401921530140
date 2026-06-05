class Solution {
public:

    int atMostK(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        long long count = 0;
        unordered_map<int, int> freq;

        for(int right = 0; right < n; right++){
            freq[nums[right]]++;

            while(freq.size() > k){

                freq[nums[left]]--;

                if(freq[nums[left]] == 0){
                freq.erase(nums[left]); 
                }

                left++;
            }
             count += (right - left + 1);
            
        }
        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k){
        return atMostK(nums, k) - atMostK(nums, k - 1);
    }
};
