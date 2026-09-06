class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> f1;

        vector<int> ans;
        for(int x: nums1){
            f1.insert(x);
        }
        for(int i = 0; i<nums2.size(); i++){
            if(f1.find(nums2[i]) != f1.end()){
                ans.push_back(nums2[i]);
                f1.erase(nums2[i]);
            }
        }
        return ans;
    }
};