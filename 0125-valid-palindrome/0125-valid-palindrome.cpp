class Solution {
public:
    bool isPalindrome(string s) {
        string new_s = "";

        for(char c : s) {
            if(isalnum(c)) {
                new_s += tolower(c);
            }
        }

        string r = new_s;
        reverse(r.begin(), r.end());

        if(r == new_s)
            return true;
        else
            return false;
    }
};