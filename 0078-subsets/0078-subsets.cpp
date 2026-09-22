class Solution {
public:
    void fun(vector<int>&a, int n , int idx, vector<int>& tmp, vector<vector<int>>& ans){
        //Base case
        if( idx == n){
            ans.push_back(tmp);
            return;
        }

        //No : current elemnet nhi lena hai 
        fun(a,n,idx+1,tmp,ans);

        //Yes : current element lena hai
        tmp.push_back(a[idx]);

        fun(a,n,idx+1,tmp,ans);

        tmp.pop_back();     //backtracking
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;

        fun(nums,nums.size(), 0, tmp,ans);

        return ans;
    }
};