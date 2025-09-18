class Solution {
public:
    bool leastWeight(vector<int>& weights, int x, int days){
        int count = 1, orig = x;
        for(int weight : weights){
            if(x >= weight) x -= weight;
            else{
                count++;
                x = orig - weight;
            }
        }
        return count <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0, max = INT_MIN;
        for(int weight : weights){
            sum += weight;
            if(max < weight) max = weight;
        }

        int low = max, high = sum;

        while(low<high){
            int mid = low + (high-low)/2;
            if(leastWeight(weights, mid, days)) high = mid; 
            else low = mid+1;
        }
        return low;
    }
};