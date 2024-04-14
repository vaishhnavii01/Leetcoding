
//finding minproduct,maxproduct
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=nums[0];
        int mini=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
           int j=maxi;
            maxi=max(max(maxi*nums[i],mini*nums[i]),nums[i]);
            mini=min(min(j*nums[i],mini*nums[i]),nums[i]);
            ans=max(max(maxi,mini),ans);
        }
        ans=max(max(maxi,mini),ans);
        return ans;
    }
};

//more of kadane's,two pointer

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l=0;
        int r=0;
        int ans=nums[0];
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(l)l=nums[i]*l;
            else l=nums[i]*1;
            if(r)r=nums[n-i-1]*r;
            else r=nums[n-i-1]*1;
            
            ans=max(ans,max(l,r));
        }
        return ans;
    }
};
