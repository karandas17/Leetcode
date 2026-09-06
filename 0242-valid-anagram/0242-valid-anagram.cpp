class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ss;
        unordered_map<char,int> tt;

        for(int i = 0 ; i < s.size(); i++)
            ss[s[i]]++;
        for(int i = 0 ; i < t.size(); i++)
            tt[t[i]]++;
        
        if( ss == tt){
            return true;
        }
        return false;
    }
};