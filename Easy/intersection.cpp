Q:給任意兩個數字序列，回傳兩個序列中共有的數字並且數字不能重複
A:使用hashmap (這個題目我還不太懂，還要再研究一下)


class Solution
{
public:
	 vector<int> intersection(vector<int>& nums1 , vector<int>& nums2){
	 	vector<int> result;
	 	//產生一個夠大的hashmap
	 	unordered_map<int,int> hashmap1;

	 	//store the elements of nums1 in hashmap1

	 	//對於nums1中的每一個數k
	 	for(int k:nums1)
	 	{
	 		// hashmap1.find(k) 找到k這個數值的iterator，然後回傳
	 		// hashmap1.end() 指向hashmap最後一格的下一格
	 		// hashmap1[k] 標記1
	 		/*if的條件判斷是要判斷 k的iterator是否不在hashmap?，
	 		  因此如果iterator在最後一格的下一格就是他不存在這張hashmap裡面囉 */
	 		if(hashmap1.find(k)==hashmap1.end())
	 		{
	 			hashmap1[k] = 1;
	 		}
	 	}

	 	//find the common values and avoid duplicates
	 	for(int k:nums2)
	 	{
	 		/*判斷iterator是否存在hashmap裡面*/
	 		if( hashmap1.find(k) != hashmap1.end() 
	 			&& (hashmap1[k]==1) )
	 		{
	 			//把值加到result
	 			result.puch_back(k);
	 			hashmap1[k] = 0;
	 		}
	 	}

	 	return result;
	 }
};