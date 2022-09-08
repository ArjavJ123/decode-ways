class Solution {
public:
    int numDecodings(string s) {
        int n = s.size(); 
        vector<int> t(n+1);
        t[0] = 1;
        t[1] = s[0]=='0'? 0 : 1;
        for(int i =2; i<=n; i++) {
            int ch = stoi(s.substr(i-2,2));
            if(s[i-1] != '0') {
                t[i] = t[i-1];
            }
            if(ch >= 10 && ch <= 26) {
                t[i] += t[i-2];
            }
        }
        return t[n];
    }
};
