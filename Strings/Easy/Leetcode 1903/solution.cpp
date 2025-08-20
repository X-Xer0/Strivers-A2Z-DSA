class Solution {
public:
    string largestOddNumber(string num) {
        int idx = num.size()-1;
        while(idx>=0 && num[idx]%2 == 0){
            num.erase(idx);
            idx -= 1;
        }
        return num;
    }
};
