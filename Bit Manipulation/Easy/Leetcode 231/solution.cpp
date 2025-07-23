class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<=0){
            return false;
        }
        
        bool power = true;
            
        while (n>1){
            if (n%2 != 0){
                power = false;
                break;
            }
            n = n/2;
        }

    return power;
    }
};
