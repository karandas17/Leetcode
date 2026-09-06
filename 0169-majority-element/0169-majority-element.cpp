class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> f;
        int ans = 0;
        for( int i = 0; i < nums.size() ; i++){
            f[nums[i]]++;
        }
        for(int i = 0 ; i < nums.size(); i++){
            if(f[nums[i]] > nums.size()/2 ){
                return nums[i];
            }
        }
        return 0;
    }
};