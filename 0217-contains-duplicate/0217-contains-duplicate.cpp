class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> f;


        for( int i = 0; i < nums.size(); i++){
            
            if( f.find(nums[i]) != f.end()){
                return true;
            }
            f[nums[i]]++;
        }
        return false;
    }
};