class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        int n = s.size();
        for(int i=0;i<n;i++){
            freq1[s[i]-'a']++;
            freq2[t[i]-'a']++;
        }
        if(freq1==freq2){
            return true;
        }
        return false;
    }
};