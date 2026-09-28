class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int>ans;
        for(int i=0;i<words.size();i++){
            string new_s=words[i];
           for(char c:new_s){
            if(c==x){
                ans.push_back(i);
                break;
            }
           }

        }
        return ans;
    }
};