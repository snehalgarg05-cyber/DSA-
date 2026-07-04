class Solution {
public:
    int minSteps(string s, string t) {
        int steps=0;
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        int n = s.size();
        int m = t.size();
        for(int i=0;i<n;i++){
            freq1[s[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            freq2[t[i]-'a']++;
        }
        int ans1=0,ans2=0;
        for(int i=0;i<26;i++){
            if(freq1[i] > freq2[i])
            ans1 += freq1[i] - freq2[i];
        }
        for(int i=0;i<26;i++){
            if(freq2[i] > freq1[i])
            ans2 += freq2[i] - freq1[i];
        }
        return ans1+ans2;
    }
};