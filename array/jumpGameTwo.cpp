lass Solution {
public:
    int jump(vector<int>& arr) {
        int n=arr.size();
        if(n<1 || arr[0]==0)return 0;
        if(n==1)return 0;
        int Max=arr[0];
        int cnt=arr[0];
        int jump=1;
        
       for(int i=1;i<n;i++){
           
           if(i==n-1){
               return jump;
           }
           
           Max =max(Max,i+arr[i]);
           cnt--;
           
           if(cnt==0){
               jump++;
               
                if(i >= Max)
                    return -1;
                  
            cnt = Max - i;  
                    
           }
           
        }
        return 0;
    }
};
