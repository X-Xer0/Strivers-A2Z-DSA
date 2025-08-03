class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0;
        int high = n-1;

        while(low<=high){
            int mid = low + (high-low)/2;
            int max_col = max_element(mat[mid].begin(), mat[mid].end()) - mat[mid].begin(); //max_element returns pointer
            int top = mid-1 >= 0 ? mat[mid-1][max_col] : -1;
            int bottom = mid+1 < n ? mat[mid+1][max_col] : -1;
            
            if(mat[mid][max_col] > top && mat[mid][max_col] > bottom) return {mid, max_col};
            else if(mat[mid][max_col] < top) high = mid-1;
            else low = mid+1;

        }
    return {-1,-1};
    }
};
