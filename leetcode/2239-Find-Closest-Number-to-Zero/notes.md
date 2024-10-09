# 2239. Find Closest Number to Zero

### Problem Statement

**Objective:** Given an integer array `nums` of size `n`, return the number with the value closest to `0`. If there are multiple answers, return the number with the largest value.

### Examples

1. **Example 1**
   - **Input:** `nums = [-4, -2, 1, 4, 8]`
   - **Output:** `1`
   - **Explanation:** The distances are: |-4|=4, |-2|=2, |1|=1, |4|=4, |8|=8. Closest to 0 is `1`.

2. **Example 2**
   - **Input:** `nums = [2, -1, 1]`
   - **Output:** `1`
   - **Explanation:** Both `1` and `-1` are closest to `0`, but `1` is larger.

### Constraints

- `1 <= n <= 1000`
- `-10^5 <= nums[i] <= 10^5`

### Approach

1. **Initialize a variable** to store the closest number, starting with the first element of the array.
2. **Loop through each element** in the array:
   - If the absolute value of the current number is less than the absolute value of the closest number, update the closest number.
   - If the absolute values are equal, choose the larger number.
3. **Return the closest number** after completing the loop.

### Pseudocode

```plaintext
function findClosestNumber(nums):
    closest = nums[0]
    for each number in nums:
        if abs(number) < abs(closest):
            closest = number
        else if abs(number) == abs(closest) and number > closest:
            closest = number
    return closest
```

### C Implementation

```c
#include <stdlib.h>
#include <stdio.h>

int findClosestNumber(int* nums, int n) {
    int closest = nums[0]; 
    for (int i = 1; i < n; i++) {
        if (abs(nums[i]) < abs(closest)) {
            closest = nums[i]; 
        } else if (abs(nums[i]) == abs(closest) && nums[i] > closest) {
            closest = nums[i]; 
        }
    }
    return closest;
}

int main() {
    // Test cases...
}
```

### Test Cases

1. **Single Positive Number**
   - Input: `[5]` 
   - Output: `5`
   
2. **Single Negative Number**
   - Input: `[-3]` 
   - Output: `-3`
   
3. **Positive and Negative Closest to Zero**
   - Input: `[1, -1]` 
   - Output: `1`
   
4. **Equal Distances**
   - Input: `[4, -4]` 
   - Output: `4`
   
5. **General Case**
   - Input: `[-4, -2, 1, 4, 8]` 
   - Output: `1`
   
6. **Multiple Equidistant Numbers**
   - Input: `[2, -1, 1]` 
   - Output: `1`
   
7. **Zero Involved**
   - Input: `[0, 2, -2]` 
   - Output: `0`
   
8. **All Negative**
   - Input: `[-7, -3, -1, -5]` 
   - Output: `-1`
   
9. **Mixed Positive and Negative**
   - Input: `[3, 2, 1, 0, -1, -2, -3]` 
   - Output: `0`
   
10. **Larger Range**
    - Input: `[105, -105]` 
    - Output: `105`

### Conclusion

- **Time Complexity:** O(n), where n is the length of the array. We loop through the array once.
- **Space Complexity:** O(1), as we use a constant amount of extra space for storing the closest number.

### Additional Notes

- Make sure to handle edge cases such as arrays with only one element or cases where multiple numbers are equidistant from zero.

This structured approach helps encapsulate the problem, solution, and implementation, making it easier to review and understand later on.