class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int singleNumber = 0;
        for (int i = 0; i < n; i++){
            singleNumber = singleNumber ^ nums[i];
        }
    return singleNumber;
    }
};
