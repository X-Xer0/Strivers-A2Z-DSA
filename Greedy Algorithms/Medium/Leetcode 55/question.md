# [Leetcode 55: Jump Game](https://leetcode.com/problems/jump-game/description/)

---

## 📘 Description

You are given an integer array `nums`.  
You are initially positioned at the **first index**, and each element in the array represents your **maximum jump length** at that position.

Return `true` if you can reach the **last index**, or `false` otherwise.

> 🧠 Greedy approach is commonly used to solve this problem in O(n) time.

---

## 🧪 Examples

### Example 1:
Input: `nums = [2,3,1,1,4]`  
Output: `true`  
Explanation: Jump from index `0 → 1` (2 → 3), then `1 → 4`. You reach the last index.

---

### Example 2:
Input: `nums = [3,2,1,0,4]`  
Output: `false`  
Explanation: You get stuck at index `3`, which has a jump length of `0`.

---

## 🧾 Constraints

- `1 <= nums.length <= 10⁴`  
- `0 <= nums[i] <= 10⁵`

---

