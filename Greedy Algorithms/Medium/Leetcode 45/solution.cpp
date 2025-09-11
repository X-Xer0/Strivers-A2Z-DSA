class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, l = 0, r = 0;
        int n = nums.size();

        while(r<n-1){
            int farthest = INT_MIN;
            for(int i = l; i<=r; ++i){
                farthest = max(i+nums[i], farthest);                
            }           
            jumps++;
            l = r+1;
            r = farthest; 
        }
        return jumps;
    }
};