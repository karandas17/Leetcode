class Solution {
public:
    long long fun(vector<int>&piles , int n , int speed){
        long long h = 0 ;
        for( int i = 0; i < n ; i++){
            h =  h + piles[i]/speed;
            if( piles[i]%speed != 0)
                h++;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size() ;
        int low = 1; 
        int high = *max_element(piles.begin(), piles.end());
        int res =-1;

        while( low <=  high){
            int mid = (low + high)/2;

            long long hour = fun(piles,n,mid);

            if( hour <= h){
                res = mid ;
                high = mid - 1;
            }
            else
            low = mid + 1;
        }
        return res;
    }
};