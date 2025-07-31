# [Leetcode 74: Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/description/)

---

## 📘 Description

You are given an `m x n` integer `matrix` with the following properties:

1. Each row is **sorted** in non-decreasing order.  
2. The **first integer** of each row is **greater** than the **last integer** of the previous row.

Given an integer `target`, return `true` if `target` is in the matrix, or `false` otherwise.

> 🧠 You must write a solution that runs in **O(log(m × n))** time complexity.

---

## 🧪 Examples

### Example 1:
Input:  
`matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]`, `target = 3`  
Output: `true`  
Explanation: `3` is present in the matrix.

---

### Example 2:
Input:  
`matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]`, `target = 13`  
Output: `false`  
Explanation: `13` is not found in the matrix.

---

## 🧾 Constraints

- `m == matrix.length`  
- `n == matrix[i].length`  
- `1 <= m, n <= 100`  
- `-10⁴ <= matrix[i][j], target <= 10⁴`

---

