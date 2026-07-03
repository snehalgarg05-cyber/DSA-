class Solution {
public:
    string greatestLetter(string s) {
        int n = s.size();
        vector<int> lowercase(26,0);
        vector<int> uppercase(26,0);
        for(int i=0;i<n;i++){
            if(islower(s[i])){
                lowercase[s[i]-'a']++;
            }
            else{
                uppercase[s[i]-'A']++;
            }
        }
        for(int i=25;i>=0;i--){
            if(lowercase[i] && uppercase[i]){
                return string(1,'A'+i);
            }
        }
        return "";
    }
};