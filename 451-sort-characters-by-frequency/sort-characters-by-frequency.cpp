class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        string result;
        priority_queue<pair<int,char>> p ;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto& m:mp){
            p.push({m.second,m.first});
        }
        while(!p.empty()){

            int freq = p.top().first;
            char ch = p.top().second;

            while(freq--){
                result.push_back(ch);
            }

            p.pop();
        }
        return result;
    }
};