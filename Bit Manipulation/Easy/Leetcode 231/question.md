# [Leetcode 231: Power of Two](https://leetcode.com/problems/power-of-two/description/)

---

## 📘 Description

Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.

An integer `n` is a power of two if there exists an integer `x` such that `n == 2ˣ`.

---

## 🧪 Examples

### Example 1:
Input:  
`n = 1`  
Output:  
`true`  
Explanation: `2⁰ = 1`

---

### Example 2:
Input:  
`n = 16`  
Output:  
`true`  
Explanation: `2⁴ = 16`

---

### Example 3:
Input:  
`n = 3`  
Output:  
`false`

---

## 🧾 Constraints

- `-2³¹ <= n <= 2³¹ - 1`

---

> ⚡ Tip: Powers of two have exactly one `1` in their binary representation. Use bit manipulation like `n & (n - 1)==0` to check.

