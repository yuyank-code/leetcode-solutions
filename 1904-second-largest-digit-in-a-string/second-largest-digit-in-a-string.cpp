class Solution {
public:
    int secondHighest(string s) {
        int largest=-1;
        int slargest=-1;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'&&s[i]<='9'){
                int digit=s[i]-'0';
                if(digit>largest){
                    slargest=largest;
                    largest=digit;
                    count++;
                }
                else if(digit>slargest && digit<largest){
                    slargest=digit;
                    count++;
                }
            }
        }
        if(count<2)
            return -1;
        return slargest;
    }
};