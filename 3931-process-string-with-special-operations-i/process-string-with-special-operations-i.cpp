class Solution {
public:
    string processStr(string s) {
        int n = s.size();
        string result;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                if(result.empty()){
                    continue;
                }
                else{
                    result.pop_back();
                }
                
            }
            else if(s[i]=='#'){
                result.append(result);
            }
            else if(s[i]=='%'){
                int start=0,end=result.size()-1;
                while(start<=end){
                    swap(result[start],result[end]);
                    start++,end--;
                }
            }
            else{
                result.push_back(s[i]);
            }
        }
        return result;
    }
};