class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double res = INT_MIN;
        double avg = 0;
        int sum = 0;

        for(int i =0; i < k; i++)
            sum = sum + nums[i];

        double maxSum = (double)sum/k;
        for(int i = k; i<n; i++){
            sum = sum - nums[i-k] + nums[i];
            avg = (double)sum/k;
            maxSum = max(avg,maxSum);
        }
        return maxSum;
    }
};