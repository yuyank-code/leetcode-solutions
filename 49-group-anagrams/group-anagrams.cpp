// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
//         // Temporary vector: har string ka sorted version
//         vector<string> neww;

//         for (auto x : strs) {
//             sort(x.begin(), x.end());
//             neww.push_back(x);
//         }

//         // Kaunsa index already kisi group mein use ho chuka hai
//         vector<int> used(strs.size(), 0);

//         vector<vector<string>> ans;

//         for (int i = 0; i < neww.size(); i++) {

//             // Agar already kisi group mein aa chuka hai
//             if (used[i])
//                 continue;

//             vector<string> temp;

//             // Same sorted string wale indexes dhoondo
//             for (int j = i; j < neww.size(); j++) {

//                 if (neww[i] == neww[j]) {

//                     // Original string uthao
//                     temp.push_back(strs[j]);

//                     // Is index ko processed mark karo
//                     used[j] = 1;
//                 }
//             }

//             ans.push_back(temp);
//         }

//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();

        // Har string ka sorted version
        vector<string> sorted_word(n);

        for (int i = 0; i < n; i++) {
            sorted_word[i] = strs[i];
            sort(sorted_word[i].begin(), sorted_word[i].end());
        }

        vector<vector<string>> groups;

        // Track ki kaunsa index already kisi group mein use ho chuka hai
        vector<bool> used(n, false);

        for (int i = 0; i < n; i++) {

            if (used[i]) {
                continue;
            }

            vector<string> group;

            // Current word ko group mein daalo
            group.push_back(strs[i]);
            used[i] = true;

            // Baaki words check karo
            for (int j = i + 1; j < n; j++) {

                if (!used[j] && sorted_word[i] == sorted_word[j]) {
                    group.push_back(strs[j]);
                    used[j] = true;
                }
            }

            groups.push_back(group);
        }

        return groups;
    }
};