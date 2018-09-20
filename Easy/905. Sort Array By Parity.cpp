// Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.

// You may return any answer array that satisfies this condition.

// Example 1:
// Input: [3,1,2,4]
// Output: [2,4,3,1]
// The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.


class Solution {
public:

    vector<int> sortArrayByParity(vector<int>& A) {
      
        for(int i = 0, j = 0; j < A.size(); j++)
        {
            if(A[j]%2 == 0)
            {
                swap(A[i++], A[j]);
            }
        }
        
        return A;
    }
};

// Another solution by using the library function in c++
// partition, which can rearrange the array according to the conddition.
// It divided the elements into two groups, the elements satisfied the condition be placed in the first group
//, and the remainder be placed in the second group.
// The array will be rearranged to the form like this [first group, second group]
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        partition(A.begin(), A.end(), [](int num) {return num%2 == 0;});
        return A;
    }
};
