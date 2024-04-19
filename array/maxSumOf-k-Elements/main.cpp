class Solution {
public:
    int maxScore(vector<int>& arr, int K) {
        int size=arr.size();
        int curr_points = 0; 
        int max_points = 0; 
  
    for (int i = 0; i < K; i++) 
        curr_points += arr[i]; 
  
    
       max_points = curr_points; 
  
    
         int j = size - 1; 
    for (int i = K - 1; i >= 0; i--) { 
        curr_points = curr_points + arr[j] - arr[i]; 
        max_points = max(curr_points, max_points); 
        j--; 
    } 
    
    return max_points;
    }
};
