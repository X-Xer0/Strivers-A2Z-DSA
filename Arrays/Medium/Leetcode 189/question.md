# [Leetcode 189: Rotate Array](https://leetcode.com/problems/rotate-array/description/)

---

## 📘 Description

Given an integer array `nums`, rotate the array to the **right** by `k` steps, where `k` is non-negative.

---

## 🧪 Examples

### Example 1:
Input: `nums = [1,2,3,4,5,6,7]`, `k = 3`  
Output: `[5,6,7,1,2,3,4]`  
Explanation:  
- Rotate 1 step right → `[7,1,2,3,4,5,6]`  
- Rotate 2 steps right → `[6,7,1,2,3,4,5]`  
- Rotate 3 steps right → `[5,6,7,1,2,3,4]`

---

### Example 2:
Input: `nums = [-1,-100,3,99]`, `k = 2`  
Output: `[3,99,-1,-100]`  
Explanation:  
- Rotate 1 step right → `[99,-1,-100,3]`  
- Rotate 2 steps right → `[3,99,-1,-100]`

---

## 🧾 Constraints

- `1 <= nums.length <= 10⁵`
- `-2³¹ <= nums[i] <= 2³¹ - 1`
- `0 <= k <= 10⁵`

---

## 💡 Follow Up

- Try to come up with as many solutions as possible.
- Can you solve it **in-place** with **O(1)** extra space?

---

