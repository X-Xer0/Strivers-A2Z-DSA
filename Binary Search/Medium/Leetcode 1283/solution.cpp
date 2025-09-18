class Solution {
public:
    bool isDivisor(vector<int>& nums, int threshold, int x){
        long long total = 0;
        for(int val : nums){
            total += (val+x-1)/x;
        }
        return total<=threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        long long sum = 0, maxVal = INT_MIN;
        for(int num : nums){
            sum += num;
            if(maxVal < num) maxVal = num;
        }

        int low = (sum+threshold-1)/threshold, high = maxVal;
        while(low < high){
            int mid = low + (high - low)/2;
            if(isDivisor(nums, threshold, mid)) 
                high = mid;
            else 
                low = mid + 1;
        }
        return low;
    }
};