問題:有兩個string，一個是ransom string一個是任意的magazine string
想要檢查是否可以用任意string裡面的字元生成ransom string

idea:

class Solution
{
public:
	bool canConstruct(string ransomNote,string magazine){
	   unordered_map<char,int> map;
        for(int i=0 ,i < magazine.length(),++i)
       	  	++map[magazine[i]];
       	for(int j=0 ,j < ransomNote.length(),++j)
       		if(--map[ransomNote[j]]<0)
       			return false;
       	return true;
	}
	
};