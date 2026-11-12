class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


        int n = nums.size();
        int left =0;
        int right = 1;

        while(right<n){
            if(nums[right] != nums[left]){
                left++;
                nums[left] = nums[right];
            }
            right++;
        }
        return left+1;

        // int left = 0 ;
        // int right = left + 1;
        // int unique = 1;

        // while ( right < nums.size()){

        //     if ( nums[right] == nums[right - 1]){
        //         right++;
        //         continue;
        //     }

        //     nums[left + 1] = nums[right];
        //     left++;
        //     right++;
        //     unique++;            
        // }
        // return unique;

        
    }
};