class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m * (long long)k > n) return -1;
        int maxVal = INT_MIN, minVal = INT_MAX;
    
        for (int i = 0; i < n; ++i) {
            if (maxVal < bloomDay[i]) maxVal = bloomDay[i];
            if (minVal > bloomDay[i]) minVal = bloomDay[i];
        }

        int low = minVal, high = maxVal;

        while(low < high){
            bool isPossible = false;
            int mid = low + (high - low)/2;

            int noB = 0, count = 0; //noB = Number of Bouquets
            for(int i = 0; i < n; ++i){
                if(bloomDay[i] <= mid){
                    count++;
                    if(count == k){
                        noB++;
                        count = 0;
                    }
                }
                else count = 0;
            }

            if (noB >= m) isPossible = true;
            if (isPossible) high = mid;
            else low = mid + 1;
        }
        
        return low;
    }
};
