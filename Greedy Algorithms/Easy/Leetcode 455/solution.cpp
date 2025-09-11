class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gI = 0, sI = 0;
        int n = g.size(), m = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while(gI < n && sI < m){
            if(s[sI] >= g[gI]) gI++;
            sI++;
        }

        return gI;
    }
};