#include <stdio.h>

// Function to return count of squares;
long long int countSquares(int n) {
  
  long long res=n*(n+1)/2;
  res=res*(2*n+1)/3;
  return res;
}
 
// Driver Code
int main() {
  int n = 8;
  printf("Enter the size of the square board: ");
  scanf("%d", &n);
  printf("Result: %lld", countSquares(n));
  return 0;
}

// Observation-Appraoch
// squares of Size 1: n*n
// squares of size 2: (n-1)*(n-1)
// Total number of squares: 1+2*2 + 3*3 +4*4 ....n*n
// Formula Result= n*(n+1)*(2*n+1)/6