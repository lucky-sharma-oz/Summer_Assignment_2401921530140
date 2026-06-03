class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int window_sum = 0;

        for(int i = 0; i<k; i++){
             window_sum += nums[i];

        }
        int max_ans = window_sum;


        for(int j = k; j<n; j++){
            window_sum += nums[j];
            window_sum -= nums[j-k];

            max_ans = max(max_ans, window_sum);
        }
        return (double)max_ans/k;
    }

};
