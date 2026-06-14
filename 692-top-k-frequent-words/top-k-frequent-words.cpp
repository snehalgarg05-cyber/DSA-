class Solution {
public:
struct cmp{
    bool operator()(pair<int,string>& a,
                    pair<int,string>& b){

        if(a.first == b.first)
            return a.second > b.second;

        return a.first < b.first;
    }
};
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
        int n = words.size();
        unordered_map<string,int>mp;
        priority_queue<
    pair<int,string>,
    vector<pair<int,string>>,
    cmp
> pq;
        for(int i=0;i<n;i++){
            mp[words[i]]++;
        }
        for(auto & m:mp){
            pq.push({m.second,m.first});
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};