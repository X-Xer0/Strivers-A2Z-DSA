# [Leetcode 240: Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/description/)

---

## 📘 Description

Write an efficient algorithm that searches for a value `target` in an `m x n` integer `matrix`.  
This matrix has the following properties:

1. Integers in each **row** are sorted in **ascending** order from **left to right**.  
2. Integers in each **column** are sorted in **ascending** order from **top to bottom**.

> 🧠 Use an efficient algorithm with better than O(m×n) complexity (usually O(m + n)).

---

## 🧪 Examples

### Example 1:
Input:  
`matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]]`  
`target = 5`  
Output: `true`  
Explanation: `5` is found in the matrix.

---

### Example 2:
Input:  
`matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]]`  
`target = 20`  
Output: `false`  
Explanation: `20` is not present in the matrix.

---

## 🧾 Constraints

- `m == matrix.length`  
- `n == matrix[i].length`  
- `1 <= m, n <= 300`  
- `-10⁹ <= matrix[i][j] <= 10⁹`  
- All integers in each **row** are sorted in **ascending** order.  
- All integers in each **column** are sorted in **ascending** order.  
- `-10⁹ <= target <= 10⁹`

---

