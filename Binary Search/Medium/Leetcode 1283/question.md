# [1283. Find the Smallest Divisor Given a Threshold](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/)

## Problem
Given an array of integers `nums` and an integer `threshold`, we need to find the smallest positive integer **divisor** such that:

- Divide each element of the array by this divisor.
- Take the **ceiling** (round up) of each division result.
- Sum up these results.
- The sum must be **less than or equal to** `threshold`.

We must return the smallest divisor that satisfies this condition.

---

### Example 1:
**Input:**  
`nums = [1,2,5,9], threshold = 6`  
**Output:**  
`5`

**Explanation:**  
- Divisor = 1 → sum = 1+2+5+9 = 17 (>6)  
- Divisor = 4 → sum = 1+1+2+3 = 7 (>6)  
- Divisor = 5 → sum = 1+1+1+2 = 5 (≤6 ✅)  

So, the answer is **5**.

---

### Example 2:
**Input:**  
`nums = [44,22,33,11,1], threshold = 5`  
**Output:**  
`44`

---

## Constraints
- `1 <= nums.length <= 5 * 10^4`
- `1 <= nums[i] <= 10^6`
- `nums.length <= threshold <= 10^6`
