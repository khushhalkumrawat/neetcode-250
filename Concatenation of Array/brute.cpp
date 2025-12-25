#include<bits/stdc++.h>
using namespace std;

// Brute and Optimized Approach :
// TIme Complexity : O(n)
// space Complexity : O(n)

vector<int> ConcatenationOfArray( vector<int> nums ) {
  
    int n = nums.size();
    nums.resize(2*n);

    for ( int i = 0 ; i < n ; i++){
        nums[i+n] = nums[i];
    }

    return nums;
   
}