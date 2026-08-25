class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_end = 0 , max_sum = INT_MIN;
        int min_end = 0 , min_sum = INT_MAX;

        for( int i : nums){
            max_end = max(i, max_end + i);
            max_sum = max(max_sum,max_end);
            min_end = min(i, min_end + i);
            min_sum = min(min_sum,min_end);
        }
        return max(abs(max_sum),abs( min_sum));
    }
};