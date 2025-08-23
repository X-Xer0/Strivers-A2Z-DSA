class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size(), i = 0;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        if(n>=4 && (long long)nums[i]+nums[i+1]+nums[i+2]+nums[i+3] > target) return {}; //Minimum
        if(n>=4 && (long long)nums[n-1]+nums[n-2]+nums[n-3]+nums[n-4] < target) return {}; //Maximum

        for(i = 0; i<n; ++i){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j<n; ++j){
                if(j != i+1 && nums[j] == nums[j-1]) continue;
                int k = j+1, l = n-1;
                while(k<l){
                    long long sum = (long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum == target){
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        ++k, --l;
                        while(k<l && nums[k] == nums[k-1]) ++k;
                        while(k<l && nums[l] == nums[l+1]) --l;
                    }
                    else if(sum>target) --l;
                    else ++k;
                }
            }
        }
        return ans;
    }
};
