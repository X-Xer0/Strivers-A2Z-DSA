class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int k = right; //min speed

        while(left <= right){
            int mid = left+(right-left)/2;
            long long totalH = 0;

            for(int i = 0; i<piles.size(); ++i){
                totalH += (piles[i] + mid -1)/mid; //optimal way
            }
            if(totalH <= h){
                k = mid;
                right = mid-1;
            }
            else left = mid+1;
        }
        return k;
    }
};
