class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size();
        int windowSum = 0;
        
        for(int i = 0; i<k; i++){
            windowSum += arr[i];
        }
        int maxAns = windowSum;
        
        for(int j = k; j<n; j++){
            windowSum += arr[j];
            windowSum -= arr[j-k];
            
            maxAns = max(maxAns, windowSum);
        }
        return maxAns;
    }
};
