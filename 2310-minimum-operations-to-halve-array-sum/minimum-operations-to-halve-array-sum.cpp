class Solution {
public:
    int halveArray(vector<int>& nums) {

        priority_queue<double> pq(nums.begin(), nums.end());

        int steps = 0;
        double sum = 0;

        for(int x : nums) {
            sum += x;
        }

        double target = sum / 2.0;
        double reduced = 0;

        while(reduced < target) {

            double store = pq.top();
            pq.pop();

            double half = store / 2.0;

            reduced += half;

            pq.push(half);

            steps++;
        }

        return steps;
    }
};