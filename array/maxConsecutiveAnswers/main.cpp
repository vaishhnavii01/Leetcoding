class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int fcnt=0,tcnt=0,i=0,j=0,ans=0;
        int n=s.size();
        while(i<n && j<n){
            if(s[i]=='T'){
                tcnt++;
            }else{
                fcnt++;
            }
            int change=min(fcnt,tcnt);
            while(change>k){
                if(s[j]=='T'){
                   tcnt--;
                }else{
                    fcnt--;
                }
                change=min(fcnt,tcnt);
                j++;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};
