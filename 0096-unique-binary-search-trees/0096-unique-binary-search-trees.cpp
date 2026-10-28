class Solution {
public:
    int numTrees(int n) {
        if (n <= 1)
            return 1;

        int ans = 0;

        for (int root = 1; root <= n; root++) {
            int left = numTrees(root - 1);
            int right = numTrees(n - root);

            ans += left * right;
        }

        return ans;
    }
};