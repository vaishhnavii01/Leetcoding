class Solution {
public:

     static bool compare(int a,int b){
        return abs(a)<abs(b);
    }
    
    bool canReorderDoubled(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[arr[i]]==0)continue;
                if(mp[2*arr[i]]==0)return false;
                 mp[arr[i]]--;
                 mp[2*arr[i]]--;
        }
        return true;
    }
};
