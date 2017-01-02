問題:給一個任意的非負整數，將他的每個數字加起來，直到最後只剩下一個一位數
For example:
Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. 
Since 2 has only one digit, return it.


idea:由於每個位數加起來最終的結果只會落在0~9之間，
     所以我們對數字取餘數 mod %

class Solution
{
public:
	int addDigits(int num){
	    if(num == 0){
	    	return 0;
	    //num 是9的倍數
	    }else if(num%9 == 0){
	    	return 9;
	   	//num 不是9的倍數
	    }else{
	    	return num%9;
	    }
	}
	
};