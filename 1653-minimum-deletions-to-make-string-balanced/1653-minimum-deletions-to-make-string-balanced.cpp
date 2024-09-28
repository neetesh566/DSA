class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.length();
        int cnta =0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='a') cnta++;
        }
        
        int cnt = INT_MAX;
        int cntb=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a') cnta--;
            
            cnt = min(cnt,(cnta+cntb));
            
            if(s[i]=='b') cntb++;
        }
        return cnt;
    }
};