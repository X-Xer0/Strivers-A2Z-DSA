class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0; int right = nums.size()-1;

        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target){
                return true;
            }

//Special Case
            if(nums[left] == nums[mid] && nums[mid] == nums[right]){
                left++;
                right--;
                continue;
            }

//Remove right
            if(nums[left] <= nums[mid]){
                if(nums[left]<=target && nums[mid]>=target){
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }

//Remove left
            else{
                if(nums[right]>=target && nums[mid]<=target){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
            }
        }
    return false;
    }
};
