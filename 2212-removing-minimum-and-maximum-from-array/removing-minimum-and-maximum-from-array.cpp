class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        map<int, int> m;

        // Store element and its index
        for(int i = 0; i < nums.size(); i++)
        {
            m[nums[i]] = i;
        }

        // Minimum and maximum elements
        int minimum = m.begin()->first;
        int maximum = m.rbegin()->first;

        // Their exact positions
        int minPos = m[minimum];
        int maxPos = m[maximum];

        int n = nums.size();

        // Both from left
        int left = max(minPos, maxPos) + 1;

        // Both from right
        int right = n - min(minPos, maxPos);

        // Minimum from left, maximum from right
        int leftRight = min(minPos, maxPos) + 1
                      + n - max(minPos, maxPos);

        return min({left, right, leftRight});
    }
};