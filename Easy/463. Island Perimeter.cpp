// You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water. 
// Grid cells are connected horizontally/vertically (not diagonally). 
// The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells). 
// The island doesn't have "lakes" (water inside that isn't connected to the water around the island).
// One cell is a square with side length 1. 
// The grid is rectangular, width and height don't exceed 100. 
// Determine the perimeter of the island.

// idea: Fisrt, we need to know there are how many squares (i.e., 1) in the grid;
// Second, there are how many overlapped edges between these squares.
// Third, the answer is perimeter of all square plus the overlapped edge. 
// Notice that the overlapped edge need to count twice.

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        if(grid.empty()) return 0;
       
        int square_count = 0, overlapped_edge = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){

                if(grid[i][j] == 1){
                   square_count++;
                   // check the left side square
                   // j != 0 : avoid accessing the nonexist memory location
                   if( j != 0 && grid[i][j-1])  
                       overlapped_edge++;
                   // check the up side square 
                   // i != 0 : avoid accessing the nonexist memory location
                   if( i != 0 && grid[i-1][j])  
                       overlapped_edge++;
                }
                
            }
        }

        return (4*square_count - 2*overlapped_edge);
        
    }
};
