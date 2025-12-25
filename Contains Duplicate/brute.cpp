#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach : 
// Time Complexity : O(n^2)
// Space Complexity : O(1)

bool ContainDuplicate( vector<int> &nums ) {

    int n = nums.size();

    for ( int i = 0 ; i < n ; i++) {
       for ( int j = i+1 ; j < n ; j++) {
          if ( nums[i] == nums[j]) {
              return true;
          }
       }
     }

   return false;

}