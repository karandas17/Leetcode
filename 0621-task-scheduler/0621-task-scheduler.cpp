class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int no = tasks.size();
        unordered_map<char,int> freq;
        unordered_map<char,int> free;
        int i;

        for( i = 0; i<no ; i++){
            freq[tasks[i]]++;
            // free[tasks[i]]++;
        }

        priority_queue<pair<int,char>> pq;
        for( auto i : freq)
            pq.push({i.second,i.first});

        int seat = 1;
        while(!pq.empty()){
            vector<pair<int,char>> pulled;

            while(!pq.empty()){   //check loop
                pair<int,char> p = pq.top();
                pq.pop();

                int child = p.second;

                if( free[child] <= seat){
                    if(p.first >1)
                    pq.push({p.first-1,p.second});
                    free[p.second] = seat + n + 1;  // n means gap
                    break;
                }
                else{
                    pulled.push_back(p);
                }
            }
            for( i = 0; i <pulled.size(); i++)
                pq.push(pulled[i]);

            seat++;
        }
        return seat-1;
    }
};