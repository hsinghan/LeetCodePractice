class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        //array element number ; 儲存array裡面的元素個數
        int n = nums.size();  

        // sum  without deleting the missing number ;    
        int k = n*(n+1) / 2;
        
        //存array裡面元素的總和
        int sum = 0;
        
        //把array裡面的元素全部加總
        for(int i=0; i<n ; i++ ){
            sum = sum + nums[i] ;
        }

        //回傳 the missingNumber
         return (k-sum) ;

     }

};
