Q:給一個任意一維數字陣列，把陣列中所有的0移到最後後面，
  非0的數字則是保持不變，維持相同的順序
A:對於陣列中的每個數字進行判斷，然後交換位子
class Solution
{
public:
	void moveZeroes(vector<int>& nums){
		//計數器，用來記錄0的個數，做為要移動的距離
		int count = 0;
		//nums.size() 表示陣列的長度
		for(int i = 0; i<nums.size() ; i++)
		{
			//如果nums[i] != 0，就直接進到下一個迴圈
			//如果nums[i] == 0，就count值加一
		   if(nums[i]==0)
		   {
		   	count++;
		   }
		   else if(count != 0)
		   {
		   	// 將 0和非0 進行交換
		   	nums[i-count] = nums[i];
		   	nums[i] = 0;
		   }
		}
	}	
};