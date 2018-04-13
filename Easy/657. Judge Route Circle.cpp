// Initially, there is a Robot at position (0, 0). Given a sequence of its moves, 
// judge if this robot makes a circle, which means it moves back to the original place.

// The move sequence is represented by a string. And each move is represent by a character. 
// The valid robot moves are R (Right), L (Left), U (Up) and D (down). 
// The output should be true or false representing whether the robot makes a circle.

// Example 1:
// Input: "UD"
// Output: true
// Example 2:
// Input: "LL"
// Output: false

// key idea is if the count of moving up and down is same, and the count of moving left and right is same,
// then, the robot will back to the original place

class Solution {
public:
    bool judgeCircle(string moves) {
        int up_down_Count = 0;
        int left_right_Count = 0;
        
     for(auto s:moves){
            switch (s){
            	case 'U': up_down_Count++; break;
            	case 'D': up_down_Count--; break;
            	case 'L': left_right_Count++; break;
            	case 'R': left_right_Count--; break;
            }
        }
    
    return (up_down_Count == 0 && left_right_Count == 0);
    }
};
