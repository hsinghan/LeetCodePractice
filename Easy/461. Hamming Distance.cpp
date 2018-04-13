
//The Hamming distance between two integers is the number of positions 
//at which the corresponding bits are different.

//Given two integers x and y, calculate the Hamming distance.

//Note:
//0 ≤ x, y < 2^31.

//Example:

//Input: x = 1, y = 4

//Output: 2//

//Explanation:
//1   (0 0 0 1)
//4   (0 1 0 0)
//       ↑   ↑

//The above arrows point to positions where the corresponding bits are different.

class Solution {
public:        
  int hammingDistance(int x, int y) {
        int dist=0, n = x^y;// XOR operation, the different input will output 1
        while(n){
        	++dist;
          // turn off the right most bit, use AND operation
          // dist is used to reocord how many bit had been turn off so far
        	n &= (n-1) ;
        }

        return dist;
    }
};



//******* The explanation of spirit of while loop ********
// So the while works by turning off the right most bit in n in each iteration, the details are as follows.

// the “while(n)” par is equivalent to while there is a bit set go into the loop

// when were in the loop the “++dist” just counts how may bits we have turned off(set to 0) so far

// the “n &= n-1” turns off(set to 0) the right most 1 bit, you can see this by just trying a few examples.

// so where we exit the loop we know that n must be zero and hence dist will contain the number of bits set to one in x^y.

// That’s how the loop works.
