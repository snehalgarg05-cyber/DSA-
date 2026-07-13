class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,int>mp;
        int m = banned.size();
        for(int i=0;i<m;i++){
            mp[banned[i]]++;
        }
        vector<int> prefix;
        int count=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(mp.find(i)==mp.end()){
                prefix.push_back(i);
            }
        }
        for(int i=0;i<prefix.size();i++){
            if(sum+prefix[i]>maxSum){
                break;
            }
            sum+=prefix[i];
            count++;
            
        }
        return count;
    }
};