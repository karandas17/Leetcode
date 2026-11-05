class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        sort(nums.begin(),nums.end());
        int n = nums.size();

        for( int i = 0 ; i < n -2; i++){
            //duplicate remove karne ke liye
            if( i > 0 && nums[i]==nums[i-1])
                continue;

            int target = -nums[i];
            int left = i + 1 ;
            int right = n - 1;

            while ( left < right){
                int sum = nums[left] + nums[right];

                if( sum == target ){
                    result.push_back({nums[i], nums[left],nums[right]});
                    left++;
                    right--;
                
                    //left se duplicate remove ke liye
                    while( left<right  && nums[left]==nums[left-1])
                        left++;
                    //right se dup remove k liye
                    while( left < right  && nums[right]==nums[right+1])
                        right--;
                }
                else if ( sum < target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return result;
    }
};