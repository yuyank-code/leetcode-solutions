// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {

//         if(s1.length() > s2.length())
//             return false;

//         sort(s1.begin(), s1.end());

//         for(int i = 0; i <= s2.length() - s1.length(); i++) {

//             string temp = "";

//             for(int j = i; j < i + s1.length(); j++) {
//                 temp += s2[j];
//             }

//             sort(temp.begin(), temp.end());

//             if(temp == s1)
//                 return true;
//         }

//         return false;
//     }
// };
class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.length() > s2.length())
            return false;

        vector<int> a(26, 0);
        vector<int> b(26, 0);

        for(int i = 0; i < s1.length(); i++) {
            a[s1[i] - 'a']++;
        }

 
        for(int i = 0; i < s1.length(); i++) {
            b[s2[i] - 'a']++;
        }

        if(a == b)
            return true;

        for(int i = s1.length(); i < s2.length(); i++) {

            b[s2[i] - 'a']++;

            b[s2[i - s1.length()] - 'a']--;

            if(a == b)
                return true;
        }

        return false;
    }
};