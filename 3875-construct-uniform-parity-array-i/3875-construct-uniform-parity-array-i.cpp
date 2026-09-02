class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(), nums1.end());

        bool allEven = true;
        for (int x : nums1) {
            if (x % 2 != 0) {
                allEven = false;
                break;
            }
        }

        if (allEven)
            return true;

        bool allOdd = true;
        for (int x : nums1) {
            if (x % 2 == 0) {
                allOdd = false;
                break;
            }
        }

        if (allOdd)
            return true;

        return true;
    }
};