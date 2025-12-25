#include<bits/stdc++.h>
using namespace std;

// Optimized Approach .
// Time Complexity : O(n)
// Space Complexity : O(n)

bool ContainDuplicate( vector<int> &nums ) {

    int n = nums.size();

    unordered_set<int> seen;

    for ( int i = 0 ; i < n ; i++){
        int val = nums[i];
        if ( seen.count(val) ) return true;
        seen.insert(val);
    }

    return false;

}