class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int counter[3] = {0, 0, 0};
        for (int i = 0; i < n; i++){
            if (nums[i] == 0){
                counter[0] = counter[0] + 1;
            }
            else if (nums[i] == 1){
                counter[1] = counter[1] + 1;
            }
            else{
                counter[2] = counter[2] + 1;
            }
        }
        int i = 0;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < counter[j]; k++) {
            nums[i++] = j;
            }
        }
    }
};
