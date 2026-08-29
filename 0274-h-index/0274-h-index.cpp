class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();

        unordered_map<int, int> mp;

        for (int x : citations) {
            for (int h = 0; h <= n; h++) {
                if (x >= h) {
                    mp[h]++;
                }
            }
        }

        for (int h = n; h >= 0; h--) {
            if (mp[h] >= h)
                return h;
        }

        return 0;
    }
};