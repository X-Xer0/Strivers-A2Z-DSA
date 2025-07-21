# [Leetcode 2149: Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/description/)

---

## 📘 Description

You are given a **0-indexed** integer array `nums` of **even length** consisting of an **equal number of positive and negative integers**.

Return the array after rearranging the elements such that:

- Every **consecutive pair** of integers have **opposite signs**.
- For all integers with the **same sign**, their **original order** in `nums` is preserved.
- The rearranged array **begins with a positive** integer.

> ✅ It is **not required** to do the modifications **in-place**.

---

## 🧪 Examples

### Example 1:
Input: `nums = [3,1,-2,-5,2,-4]`  
Output: `[3,-2,1,-5,2,-4]`  
Explanation:  
Positives = `[3,1,2]`, Negatives = `[-2,-5,-4]`.  
Interleaving them starting with a positive gives `[3,-2,1,-5,2,-4]`.

---

### Example 2:
Input: `nums = [-1,1]`  
Output: `[1,-1]`  
Explanation:  
Only possible valid rearrangement starting with positive.

---

## 🧾 Constraints

- `2 <= nums.length <= 2 * 10⁵`
- `nums.length` is **even**
- `1 <= |nums[i]| <= 10⁵`
- `nums` consists of **equal number** of positive and negative integers

---

