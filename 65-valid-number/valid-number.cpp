class Solution {
public:
    bool isNumber(string s) {

        vector<char> v;
        for(int i = 0; i < s.size(); i++) {
            v.push_back(s[i]);
        }

        int dot = 0;
        int e = 0;
        int digit = 0;
        for(int i = 0; i < v.size(); i++) {

            if(v[i] >= '0' && v[i] <= '9') {
                digit++;
            }

            else if(v[i] == '+' || v[i] == '-') {

                if(i != 0 && v[i-1] != 'e' && v[i-1] != 'E')
                    return false;
            }

          
            else if(v[i] == '.') {

                dot++;

            
                if(dot > 1)
                    return false;

                if(e > 0)
                    return false;
            }

       
            else if(v[i] == 'e' || v[i] == 'E') {

                e++;

                
                if(e > 1)
                    return false;

                if(digit == 0)
                    return false;

                
                if(i == v.size() - 1)
                    return false;

                bool exponentDigit = false;

                for(int j = i + 1; j < v.size(); j++) {

                    if(v[j] >= '0' && v[j] <= '9') {
                        exponentDigit = true;
                    }
                    else if((v[j] == '+' || v[j] == '-') && j == i + 1) {
                      
                    }
                    else {
                        return false;
                    }
                }

                if(exponentDigit == false)
                    return false;
            }

         
            else {
                return false;
            }
        }

        if(digit == 0)
            return false;

        return true;
    }
};