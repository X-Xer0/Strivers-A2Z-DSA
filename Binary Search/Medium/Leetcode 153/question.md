# [Leetcode 153: Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/)

---

## 📘 Description

Suppose an array of length `n` sorted in **ascending order** is rotated between `1` and `n` times.  

For example:
- `[0,1,2,4,5,6,7]` might become `[4,5,6,7,0,1,2]` (rotated 4 times)  
- Or remain `[0,1,2,4,5,6,7]` (rotated 7 times = full cycle)

Notice:  
Rotating `[a[0], a[1], ..., a[n-1]]` **1 time** results in `[a[n-1], a[0], a[1], ..., a[n-2]]`.

Given a rotated **sorted array** `nums` of **unique elements**, return the **minimum element**.

> 🧠 You must write an algorithm that runs in **O(log n)** time.

---

## 🧪 Examples

### Example 1:
Input: `nums = [3,4,5,1,2]`  
Output: `1`  
Explanation: Original array was `[1,2,3,4,5]`, rotated 3 times.

---

### Example 2:
Input: `nums = [4,5,6,7,0,1,2]`  
Output: `0`  
Explanation: Original array was `[0,1,2,4,5,6,7]`, rotated 4 times.

---

### Example 3:
Input: `nums = [11,13,15,17]`  
Output: `11`  
Explanation: Original array was `[11,13,15,17]`, rotated 4 times (full cycle).

---

## 🧾 Constraints

- `n == nums.length`  
- `1 <= n <= 5000`  
- `-5000 <= nums[i] <= 5000`  
- All elements in `nums` are **unique**  
- `nums` is sorted and rotated between `1` and `n` times  

---

