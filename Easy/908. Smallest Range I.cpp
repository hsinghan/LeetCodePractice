// Given an array A of integers, for each integer A[i] we may choose any x with -K <= x <= K, and add x to A[i].

// After this process, we have some array B.

// Return the smallest possible difference between the maximum value of B and the minimum value of B.

// Example 1:
// Input: A = [1], K = 0
// Output: 0
// Explanation: B = [1]
// Example 2:

// Input: A = [0,10], K = 2
// Output: 6
// Explanation: B = [2,8]
// Example 3:

// Input: A = [1,3,6], K = 3
// Output: 0
// Explanation: B = [3,3,3] or B = [4,4,4]
 

// Note:
// 1 <= A.length <= 10000
// 0 <= A[i] <= 10000
// 0 <= K <= 10000

//The idea is that if the (maximum - K) is smaller than (minimum + K),
//we can get 0 after processing the operation of plus/minus K for each A[i], than return 0
// Otherwise, (maximum - K) is greater than (minimum + K), return (maximum - K) - (minimum + K)

//version 1
class Solution
{
public:
	int smallestRangeI(vector<int>& A, int K)
	{
		int max_value = A[0];
		int min_value = A[0];
		for (int a:A)
		{
			max_value = max(max_value,a);
			min_value = min(min_value,a);
		}

		return max(0, (max_value-K) - (min_value+K) );
	}
};

// version 2
class Solution
{
public:
	int smallestRangeI(vector<int>& A, int K)
	{
		int max_value = *max_element(A.begin(),A.end());
		int min_value = *min_element(A.begin(),A.end());

        if (max_value-min_value - 2*K <= 0)
        {
        	return 0;
        }
        
        return (max_value-K) - (min_value+K);
        
	}
};
