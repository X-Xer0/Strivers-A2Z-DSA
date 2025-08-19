class Solution {
public:
    int minBitFlips(int start, int goal) {
        int steps = 0;
        while(start || goal){
            if(start%2 != goal%2) steps++;
            start = start/2;
            goal = goal/2;
        }
        return steps;
    }
};
