# [Leetcode 1752: Check if Array Is Sorted and Rotated](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/)

---

## 📘 Description

Given an array `nums`, return `true` if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return `false`.

There may be duplicates in the original array.

> 🔁 Note: An array `A` rotated by `x` positions results in an array `B` of the same length such that  
> `B[i] == A[(i + x) % A.length]` for every valid index `i`.

---

## 🧪 Examples

### Example 1:
Input: `nums = [3,4,5,1,2]`  
Output: `true`  
Explanation: `[1,2,3,4,5]` is the original sorted array.  
You can rotate it by `x = 3` positions to get `[3,4,5,1,2]`.

---

### Example 2:
Input: `nums = [2,1,3,4]`  
Output: `false`  
Explanation: No sorted array once rotated can form `nums`.

---

### Example 3:
Input: `nums = [1,2,3]`  
Output: `true`  
Explanation: `[1,2,3]` is already sorted.  
No rotation needed (x = 0).

---

## 🧾 Constraints

- `1 <= nums.length <= 100`
- `1 <= nums[i] <= 100`

---

