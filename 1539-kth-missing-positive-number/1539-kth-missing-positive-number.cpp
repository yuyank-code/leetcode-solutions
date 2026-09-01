class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        vector<int> missing;

        for (int num = 1; missing.size() < k; num++) {
            
            bool found = false;

            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] == num) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                missing.push_back(num);
            }
        }

        return missing[k - 1];
    }
};