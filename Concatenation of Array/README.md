## Concatenation of Array

### Problem Statement : 

You are given an integer array nums of length n. Create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.

Return the array ans.

---

### Approach :

- Find the length of the array, let it be n
- Resize the array to length 2n
- Start filling from index n
- Traverse the original first n elements and copy them to the second half

### Key Learning :

- This problem tests basic array manipulation and indexing
- The solution runs in O(n) time, which is optimal
- Although we modify the same vector, resizing requires additional memory, so space  complexity is O(n)
- Care must be taken to iterate only over the original array length