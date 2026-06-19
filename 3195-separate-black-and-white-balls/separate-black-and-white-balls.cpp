class Solution {
public:
    long long minimumSteps(string s) {
        long long swaps=0;
        int n = s.size();
        int black_count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                black_count++;
            }
            else{
                swaps+=black_count;
            }
        }
        return swaps;
    }
};