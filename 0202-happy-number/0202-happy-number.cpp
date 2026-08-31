 class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while(n != 1) {
            if(seen.find(n) != seen.end()) {
                return false;
            }

            seen.insert(n);

            string s = to_string(n);
            int sum = 0;

            for(int i = 0; i < s.length(); i++) {
                int digit = s[i] - '0';
                sum += digit * digit;
            }

            n = sum;
        }

        return true;
    }
};