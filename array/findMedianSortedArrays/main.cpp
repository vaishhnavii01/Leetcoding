class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
   
      int m=nums1.size();
       int n=nums2.size();

       if(m > n)
        {
            return findMedianSortedArrays(nums2, nums1);
        }
       int l=0,h=m;
       int total=m+n+1;

         while(l<=h){

            int partx=l+(h-l)/2;
            int party=(total)/2 -partx;

            int left1=INT_MIN, left2=INT_MIN;
            int right1=INT_MAX, right2=INT_MAX;

            if(partx>0){left1=nums1[partx-1];}
            if(party>0){left2=nums2[party-1];}

            if(partx>=0 && partx<m){right1=nums1[partx];}
            if(party>=0 && party<n){right2=nums2[party];}

            if(left1<=right2 && left2<=right1){

                if((m + n) % 2==0){
                    return (max(left1,left2)+min(right1,right2))/2.0;
                }else{
                return max(left1,left2);
                }
            }
            else if(left1>right2){
                h=partx-1;
            }
            else{
                l=partx+1;
            }
       }
       return 0;
      

    }
};

