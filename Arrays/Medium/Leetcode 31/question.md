# [Leetcode 31: Next Permutation](https://leetcode.com/problems/next-permutation/description/)

---

## 📘 Description

A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for `arr = [1,2,3]`, the permutations are:  
`[1,2,3]`, `[1,3,2]`, `[2,1,3]`, `[2,3,1]`, `[3,1,2]`, `[3,2,1]`

The **next permutation** is the next lexicographically greater permutation of its integer array.  
If such arrangement is not possible (i.e. it's the last permutation), the array must be rearranged as the **lowest possible order** (i.e. sorted in ascending order).

> The transformation must be done **in-place** and use only **constant extra memory**.

---

## 🧪 Examples

### Example 1:
Input: `nums = [1,2,3]`  
Output: `[1,3,2]`

---

### Example 2:
Input: `nums = [3,2,1]`  
Output: `[1,2,3]`

---

### Example 3:
Input: `nums = [1,1,5]`  
Output: `[1,5,1]`

---

## 🧾 Constraints

- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 100`

---

