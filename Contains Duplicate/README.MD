## Contains Duplicate

### Problem Statement :

Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

### Approach1 : Brute Force

- First, find the size of the given array n
- Use a nested loop:
  - The outer loop iterates through each element of the array
  - The inner loop checks whether the current element appears again in the remaining part of the array
- If a duplicate is found, return true
- If no duplicates are found after checking all elements, return false

Time Complexity : O(n²)
Because for each element, we compare it with all remaining elements

Space Complexity : O(1)
No extra data structure is used

### Approach 2 : Using Hashmap

- First declare a hashmap to store frequency of each element of array.
- The hashmap stores data in key-value pairs :
  - key = element of array
  - value = the number of times an element appear
- Traverse the array and update the frequency of each element in the hash map. 
- After traversing the array : if any element has frequency greater than 1 , return true
- Else return false means each element frequency is 1 (i.e. no duplicates)

Time Complexity : O(n)
Because we traverse the entire array once to update the frequency of each element in the hash map.

Space Complexity : O(n)
Because the hash map stores each unique element along with its frequency.

“The hash map solution is better because it reduces time complexity from O(n²) to O(n) by using constant-time lookups, making it scalable for large inputs at the cost of extra space.”

### Approach 3 : Optimized Solution using a Set

- First Declare a unordered Set of type int to store elements that have already been seen.
- Set : It always consist unique elements.
   - Traverse the entire array and check whether the element present in set or not if yes   return true 
   - Otherwise insert the element into the set
- Return false if not duplicates found after checking all elements.

Time Complexity : O(n)
because we traverse entire array to check whether the element is seen or not

Space Complexity : O(n)
Because we store array elements in the set to check duplicates




