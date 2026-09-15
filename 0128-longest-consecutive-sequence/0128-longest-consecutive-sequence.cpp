class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_map<int, int> hash;

        for(int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = 1;
        }

        int ans = 0;

        for(auto it : hash) {

            int x = it.first;

            // x is the starting point of a sequence
            if(hash.find(x - 1) == hash.end()) {

                int count = 1;

                while(hash.find(x + 1) != hash.end()) {
                    x++;
                    count++;
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};