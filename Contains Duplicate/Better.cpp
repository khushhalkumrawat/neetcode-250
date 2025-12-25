#include<bits/stdc++.h>
using namespace std;

// Better Approach than Brute Force :
// Time Complexity : O(n);
// Space Complexity : O(n);

bool ContainDuplicate( vector<int> &nums ) {

    unordered_map<int,int> freq;

    int n = nums.size();

    // count frequency of each element :
    for ( int i = 0 ; i < n ; i++){
          int x = nums[i];
          freq[x]++;
    }
    
    // check occurence of element
    for ( auto &p : freq) {
        if ( p.second > 1) return true;
    }

    return false;

}