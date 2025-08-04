class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last = nums.size()-1;
        int index = last-1;
        bool jump = true;

        while(index > -1){
            if(nums[index] >= last-index){
            jump = true;
            last--;
            index = last-1;
            }
            else{
                jump = false;
                index--;
            }
        }
    return jump;
    }
};
