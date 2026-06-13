class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long> pq(nums.begin(),nums.end());
        long long max_score=0;
        while(k--){
            int x = pq.top();
            pq.pop();

            max_score += x;

            pq.push((x + 2) / 3);
        }
        return max_score;
    }
};