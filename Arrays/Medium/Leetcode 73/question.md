# [Leetcode 73: Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/description/)

---

## 📘 Description

Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire **row and column** to `0`.

> 🧠 You must do it **in-place**.

---

## 🧪 Examples

### Example 1:
Input: `matrix = [[1,1,1],[1,0,1],[1,1,1]]`  
Output: `[[1,0,1],[0,0,0],[1,0,1]]`

---

### Example 2:
Input: `matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]`  
Output: `[[0,0,0,0],[0,4,5,0],[0,3,1,0]]`

---

## 🧾 Constraints

- `m == matrix.length`
- `n == matrix[0].length`
- `1 <= m, n <= 200`
- `-2³¹ <= matrix[i][j] <= 2³¹ - 1`

---

## 💡 Follow Up

- A straightforward solution using **O(m × n)** space is probably a bad idea.
- A simple improvement uses **O(m + n)** space.
- Can you devise a solution using **constant space**?

---

