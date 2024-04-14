//asked in LC weeklycontest

class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& a, int k) {
        sort(a.begin(), a.end()); 
        long long ans = 0; 
        int n = a.size();
        for (int i = 0; i < n; i++) { 
            if (i < n / 2) 
            ans += max(0, a[i] - k);
            else if (i == n / 2) 
            ans += abs(k - a[i]); 
            else
            ans += max(0, k - a[i]); 
        } 
        return ans; 
    }
};
