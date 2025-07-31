# [Leetcode 162: Find Peak Element](https://leetcode.com/problems/find-peak-element/description/)

---

## 📘 Description

A **peak element** is an element that is **strictly greater than its neighbors**.

Given a `0`-indexed integer array `nums`, find a **peak element**, and return its **index**.  
If the array contains **multiple peaks**, return the index to **any one** of the peaks.

> 🧠 You may imagine that `nums[-1] = nums[n] = -∞`.  
That means an element is always considered **greater** than neighbors **outside** the array.

> 🚀 You must write an algorithm that runs in **O(log n)** time.

---

## 🧪 Examples

### Example 1:
Input: `nums = [1,2,3,1]`  
Output: `2`  
Explanation: `3` is a peak element at index `2`.

---

### Example 2:
Input: `nums = [1,2,1,3,5,6,4]`  
Output: `5`  
Explanation: The peak could be at index `1` (element `2`) or index `5` (element `6`).

---

## 🧾 Constraints

- `1 <= nums.length <= 1000`  
- `-2³¹ <= nums[i] <= 2³¹ - 1`  
- `nums[i] != nums[i + 1]` for all valid `i`

---

