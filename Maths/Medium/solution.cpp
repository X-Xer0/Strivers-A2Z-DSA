class Solution {
public:
    int reverse(int x) {
        string num = to_string(x);
        string reverse_str;
        bool is_negative = false;

        if (num[0] == '-') {
            is_negative = true;

            for (int i = num.size() - 1; i > 0; i--) {
                reverse_str += num[i];
            }
        } else {

            for (int i = num.size() - 1; i >= 0; i--) {
                reverse_str += num[i];
            }
        }

        long long num_reverse = stoll(reverse_str);

        if (num_reverse > INT_MAX || num_reverse < INT_MIN) {
            return 0;
        }

        return is_negative ? -num_reverse : num_reverse;
    }
};
