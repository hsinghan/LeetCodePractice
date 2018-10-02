// Given a matrix A, return the transpose of A.

// The transpose of a matrix is the matrix flipped over it's main diagonal, switching the row and column indices of the matrix.

// Example 1:

// Input: [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[1,4,7],[2,5,8],[3,6,9]]
// Example 2:

// Input: [[1,2,3],[4,5,6]]
// Output: [[1,4],[2,5],[3,6]]
 

// Note:
// 1 <= A.length <= 1000
// 1 <= A[0].length <= 1000

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** A, int ARowSize, int *AColSizes, int** columnSizes, int* returnSize) {
    int** TransArray = (int**)malloc((*AColSizes)*sizeof(int*));
    *columnSizes = (int*)malloc((*AColSizes) * sizeof(int));
    
    for (int i = 0; i < (*AColSizes); ++i)
    {
    	  TransArray[i] = (int*)malloc(ARowSize*sizeof(int));
        (*columnSizes)[i] = ARowSize; // to know the length of each row of "TransArray"
    }
    
    //assign value
    for (int i = 0; i <ARowSize ; ++i)
    {
    	for (int j = 0; j < *AColSizes; ++j)
    	{
    		TransArray[j][i] = A[i][j];
    	}
    }

    *returnSize = *AColSizes; // assign the length of "TransArray"
    return TransArray;
}

// C++  version
vector<vector<int>> transpose(vector<vector<int>> A)
{
	int transArrayRow = A[0].size();
	int transArrayColumn = A.size();
	vector<vector<int>> B(transArrayRow,vector<transArrayColumn,0>);
	for (int j = 0; j < transArrayRow; ++j)
	{
		for (int i = 0; i < transArrayColumn; ++i)
		{
			B[j][i] = A[i][j];
		}
	}

	return B;
}
