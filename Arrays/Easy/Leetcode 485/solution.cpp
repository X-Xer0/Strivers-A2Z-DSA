class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int count = 0;
        int maxOnes = 0;
        for (i = 0; i < n; i++){
            if (nums[i] == 1){
                count++;
                if (count > maxOnes){
                    maxOnes = count;
                }
            }
            else{
                count = 0;
            }
        }    
        return maxOnes;
    }
};
