idea:先宣告一個空string,接下逐一把字元加進到string,最後回傳string
     例如:一開始的字串為abc 
          string 裡面的過程為 ""  (空的)
                              a 
                              ba
                              cba

class Solution {
func reverseString(s:String) -> String {
	var inReverse = ""
	for letter in s.characters{
		inReverse = "\(letter)" + inReverse
	}

	return inReverse
  }
}