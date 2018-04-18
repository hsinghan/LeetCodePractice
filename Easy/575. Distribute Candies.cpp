// Given an integer array with even length, where different numbers in this array represent different kinds of candies. 
// Each number means one candy of the corresponding kind. 
// You need to distribute these candies equally in number to brother and sister. 
// Return the maximum number of kinds of candies the sister could gain.

// Example 1:
// Input: candies = [1,1,2,2,3,3]
// Output: 3
// Explanation:
// There are three different kinds of candies (1, 2 and 3), and two candies for each kind.
// Optimal distribution: The sister has candies [1,2,3] and the brother has candies [1,2,3], too. 
// The sister has three different kinds of candies. 

// idea: the number of candies the sisiter gain at most is the length of half of candies.

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        size_t count = 1; 
        sort(candies.begin(), candies.end());
        
        for(int i = 0 ; i < candies.size(); i++){
        // Note that, in the end of candies, we could access the nonexistent memory position,
        // so we need to add last condition to avoid.
            if( candies[i] != candies[i+1] && i != candies.size()-1 )
                count++;
        }
        
        // 要比較的對象，元素型態要一致 
        // the type of the comparison pait need to be consistent
        return min(candies.size()/2, count);
            
    }
};
