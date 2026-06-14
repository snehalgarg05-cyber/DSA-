// class Solution { //most optimal brute force solution
// public:
//     vector<int> smallestRange(vector<vector<int>>& nums) {

//         vector<pair<int,int>> arr;

//         // Store value and list number
//         for(int i=0;i<nums.size();i++){
//             for(int j=0;j<nums[i].size();j++){
//                 arr.push_back({nums[i][j], i});
//             }
//         }

//         sort(arr.begin(), arr.end());

//         int totalLists = nums.size();

//         int bestStart = -100000;
//         int bestEnd = 100000;

//         int n = arr.size();

//         for(int i=0;i<n;i++){

//             vector<int> freq(totalLists,0);
//             int covered = 0;

//             for(int j=i;j<n;j++){

//                 int listNo = arr[j].second;

//                 if(freq[listNo] == 0)
//                     covered++;

//                 freq[listNo]++;

//                 if(covered == totalLists){

//                     int start = arr[i].first;
//                     int end   = arr[j].first;

//                     if(end-start < bestEnd-bestStart ||
//                       (end-start == bestEnd-bestStart &&
//                        start < bestStart))
//                     {
//                         bestStart = start;
//                         bestEnd = end;
//                     }

//                     break;
//                 }
//             }
//         }

//         return {bestStart,bestEnd};
//     }
// };

class Solution { //most optimal 
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<
    pair<int,pair<int,int>>,
    vector<pair<int,pair<int,int>>>,
    greater<pair<int,pair<int,int>>>
> p;

        int minimum,maximum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            p.push(make_pair(nums[i][0],make_pair(i,0)));
            maximum=max(maximum,nums[i][0]);
        }
        minimum=p.top().first;
        vector<int> ans(2);
        ans[0]=minimum;
        ans[1]=maximum;
        pair<int,pair<int,int>> temp;
        int row,col,elem;
        while(p.size()==nums.size()){
            temp=p.top();
            p.pop();
            elem=temp.first;
            row=temp.second.first;
            col=temp.second.second;
            if(col+1<nums[row].size()){
                col++;
                p.push(make_pair(nums[row][col],make_pair(row,col)));

                maximum=max(maximum,nums[row][col]);
                minimum=p.top().first;
                if(maximum-minimum<ans[1]-ans[0]){
                    ans[0]=minimum;
                    ans[1]=maximum;
                }
            }
        }
        return ans;
    }
};























