class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0; int right = nums.size()-1;
        while(left<right){
            int mid = left + (right-left)/2;

//If mid pair is in left
            if(nums[mid] == nums[mid-1]){
                if((mid-left+1)%2 == 0){
                    left = mid+1;
                }
                else{
                    right = mid-2;
                }
            }

//Check mid pair is in right
            else if(nums[mid] == nums[mid+1]){
                if((right-mid+1)%2 == 0){
                    right = mid-1;
                }
                else{
                    left = mid+2;
                }
            }
            else{
                return nums[mid];
            }
        }
    return nums[left];
    }
};
