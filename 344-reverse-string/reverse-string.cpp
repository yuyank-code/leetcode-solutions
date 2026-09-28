class Solution {
public:
    void reverseString(vector<char>& s) {
        int size=s.size()-1;
        int i=0;
        while(i<size){
            char temp=s[i];
            s[i]=s[size];
            s[size]=temp;
            size--;
            i++;
        }
    }
};