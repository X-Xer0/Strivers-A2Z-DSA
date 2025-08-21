class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1 = INT_MAX, el2 = INT_MIN;
        int count1 = 0, count2 = 0, n = nums.size();

        for(int i = 0; i<n; ++i){
            if(count1 == 0 && nums[i] != el2){
                count1++;
                el1 = nums[i];
            }
            else if(count2 == 0 && nums[i] != el1){
                count2++;
                el2 = nums[i];
            }
            else if(el1 == nums[i]) count1++;
            else if(el2 == nums[i]) count2++;
            else count1--, count2--;
        }
        //Manual Check
        vector<int> ans;
        count1 = 0, count2 = 0;

        for(int i = 0; i<n; ++i){
            if(el1 == nums[i]) count1++;
            if(el2 == nums[i]) count2++;
        }
        if(count1 > n/3) ans.push_back(el1);
        if(count2 > n/3) ans.push_back(el2);

        return ans;
    }
};
