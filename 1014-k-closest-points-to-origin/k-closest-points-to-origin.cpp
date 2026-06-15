class Solution {
public:
    typedef pair<double,pair<int,int>>P;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<P,vector<P>,greater<P>> pq;
        vector<vector<int>> result;
        int n = points.size();

        for(int i=0;i<n;i++){
            pq.push({sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1]),{points[i][0],points[i][1]}});
        }
        while(k--){
            result.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return result;
    }
};