# [Leetcode 1901: Find a Peak Element II](https://leetcode.com/problems/find-a-peak-element-ii/description/)

---

## 📘 Description

A **peak element** in a 2D grid is an element that is **strictly greater** than all of its **adjacent neighbors** — left, right, top, and bottom.

Given a `0`-indexed `m x n` matrix `mat` where **no two adjacent cells are equal**, return the **coordinates** `[i, j]` of **any peak element**.

> 🧠 You may assume the matrix is **surrounded by `-1`** on all sides (imaginary boundary).  
>  
> 🔍 The algorithm must run in **O(m log n)** or **O(n log m)** time.

---

## 🧪 Examples

### Example 1:
Input:  
`mat = [[1,4],[3,2]]`  
Output: `[0,1]`  
Explanation: `4` and `3` are both peaks. `[0,1]` and `[1,0]` are valid outputs.

---

### Example 2:
Input:  
`mat = [[10,20,15],[21,30,14],[7,16,32]]`  
Output: `[1,1]`  
Explanation: `30` and `32` are peaks. `[1,1]` and `[2,2]` are valid outputs.

---

## 🧾 Constraints

- `m == mat.length`  
- `n == mat[i].length`  
- `1 <= m, n <= 500`  
- `1 <= mat[i][j] <= 10⁵`  
- No two **adjacent** cells are equal

---

