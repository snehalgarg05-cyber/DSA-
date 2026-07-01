class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int index=0;
        for(int i=n-1;i>=0;i--){
            if(isalpha(s[i])){
                index=i;
                break;
            }
            
        }
        int size=0;
        for(int i=index;i>=0;i--){
            if(s[i]==' '){
                break;
            }
            size++;
        }
        return size;
    }
};