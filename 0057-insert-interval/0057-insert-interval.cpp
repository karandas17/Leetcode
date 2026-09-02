class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> res;

        if(intervals.empty()) {
            return {newInterval};
        }

        int i = 0;
        int start1 = intervals[0][0];
        int end1 = intervals[0][1];

        // newInterval se pehle wale intervals
        while(i < intervals.size() && intervals[i][1] < newInterval[0]) {
            res.push_back(intervals[i]);
            i++;
        }

        // newInterval ke saath merge
        int start = newInterval[0];
        int end = newInterval[1];

        while(i < intervals.size() && intervals[i][0] <= end) {
            start = min(start, intervals[i][0]);
            end = max(end, intervals[i][1]);
            i++;
        }

        res.push_back({start, end});

        // Remaining intervals
        while(i < intervals.size()) {
            res.push_back(intervals[i]);
            i++;
        }

        return res;
    }
};