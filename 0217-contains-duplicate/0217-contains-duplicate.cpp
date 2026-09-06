class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> f;

        for( int x : nums){
            if(f.count(x)){
                return true;
            }
            f.insert(x);
        }
        return false;
    }
};