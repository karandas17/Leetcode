class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int res = 0;

        unordered_map<int, int> f;

        f[0] = -1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0)
                zero++;
            else
                one++;

            int diff = zero - one;

            if (f.find(diff) == f.end()) {
                f[diff] = i;
            }
            else {
                int idx = f[diff];
                int len = i - idx;
                res = max(res, len);
            }
        }

        return res;
    }
};