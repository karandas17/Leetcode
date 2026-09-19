class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {

        struct cmp{
            bool operator()( const vector<int>&a, const vector<int>&b){
                return a[1] < b[1];
            }
        };
        sort(courses.begin(),courses.end(), cmp());
        
        priority_queue<int> pq;

        int time = 0;
        for(auto courses : courses){
            int duration = courses[0];
            int lastday = courses[1];
            time += duration;
            pq.push(duration);
        
            if( time > lastday){
                time = time - pq.top();
                pq.pop();
            }
        }
        return pq.size();
    }
};