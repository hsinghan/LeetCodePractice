Reverse digits of an integer.
Example1: x = 123, return 321
Example2: x = -123, return -321

class Solution
{
public:
	int reverse(int x){
	long result = 0;

	while(x != 0){
		result = result*10 + x%10 // result*10, x 取餘數;
		x /= 10;
	}


	if (result > INT_MAX || result < INT_MIN)
	{
		return 0;
	}
	else 
	{
		return result;
	}


	//return (result > INT_MAX || result < INT_MIN)? 0: result ;
	}
};