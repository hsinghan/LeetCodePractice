idea:將string裡面的字母倆倆交換，
     最後回傳"交換完成的string"
P.S s.length() 取出string的字元個數



class Solution
{
public:
	string reverseString(string s){

	for(int i=0,j=s.length()-1 ; i<j ; ++i , --j)
		swap(s[i],s[j]);
	
       return s;
	};
};





