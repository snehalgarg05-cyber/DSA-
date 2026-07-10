// class Solution {
// public:
//     string toLowerCase(string s) {
//         int n = s.size();
//         for(int i=0;i<n;i++){
//             s[i]=tolower(s[i]);
//         }
//         return s;
//     }
// };


// class Solution {//manual one, without tolower() fn
// public:
//     string toLowerCase(string s) {
        
//         for (auto &ch : s) {
//             // check if uppercase letter
//             if (ch >= 'A' && ch <= 'Z') {
//                 ch = ch + ('a' - 'A');  // convert to lowercase
//             }
//         }
        
//         return s;
//     }
// };


class Solution {
public:

    string ToLowerCase(string str,int index){
        if(index == str.size())
            return "";

        if(isupper(str[index]))
            str[index] = tolower(str[index]);

        return str[index] + ToLowerCase(str,index+1);
    }

    string toLowerCase(string s) {
        int n = s.size();
        return ToLowerCase(s,0);
    }
};






















