class Solution {
public:
void reverse(string &rev){
    int i=0;
    int j=rev.size()-1;
    while(i<j){
        char temp=rev[i];
        rev[i]=rev[j];
        rev[j]=temp;
        i++;
        j--;
    }
}
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        int i=0;
        while(i<n){
            string s=words[i];
            reverse(s);
            if(s==words[i]){
                return words[i];
            }
            i++;
        }
        return "";
    }
};