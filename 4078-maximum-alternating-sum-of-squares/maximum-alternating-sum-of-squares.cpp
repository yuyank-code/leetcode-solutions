class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> temp;

        for (int x : nums) {
            temp.push_back(1LL * x * x);
        }

        sort(temp.begin(), temp.end());

        int start = 0;
        int end = temp.size() - 1;

        long long ans = 0;
        bool positive = true;

        while (start <= end) {
            if (positive) {
                ans += temp[end];
                end--;
            } else {
                ans -= temp[start];
                start++;
            }

            positive = !positive;
        }

        return ans;
    }
};