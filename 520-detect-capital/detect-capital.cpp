class Solution {
public:
    bool detectCapitalUse(string s) {
        int n = s.size();
        if(isupper(s[0]) && islower(s[1])){
            for(int i=2;i<n;i++){
                if(isupper(s[i])){
                    return false;
                }
            }
        }
        else if(isupper(s[0])){
            for(int i=2;i<n;i++){
                if(islower(s[i])){
                    return false;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(isupper(s[i])){
                    return false;
                }
            }
        }
        return true;
    }
};