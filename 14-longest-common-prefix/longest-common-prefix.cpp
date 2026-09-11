class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<int>temp;
        for(int i=0;i<strs[0].size();i++){
            bool same=true;
            for(int j=1;j<strs.size();j++){
                if(strs[0][i]!=strs[j][i]){
                    same=false;
                    break;
                }
            }
            if(same){
                temp.push_back(strs[0][i]);
            }
            else{
                break;
            }
        }
        string ans(temp.begin(),temp.end());
        return ans;
    }
};