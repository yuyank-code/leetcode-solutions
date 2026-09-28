class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string newst="";
        for(int i=0;i<n;i++){
            if(s[i]>='a'&&s[i]<='z'){
                newst.push_back(s[i]);
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                char temp=s[i]-'A'+'a';
                newst.push_back(temp);
            }
            else if(s[i]>='0'&&s[i]<='9'){
                newst.push_back(s[i]);
            }
        }
        int i = 0;
        int j = newst.size() - 1;

        while(i < j) {
            if(newst[i] != newst[j])
                return false;

            i++;
            j--;
        }

        return true;

    }
};