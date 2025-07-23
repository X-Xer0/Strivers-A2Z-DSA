# [Leetcode 50: Pow(x, n)](https://leetcode.com/problems/powx-n/description/)

---

## 📘 Description

Implement `pow(x, n)`, which calculates `x` raised to the power `n` (i.e., `xⁿ`).

---

## 🧪 Examples

### Example 1:
Input:  
`x = 2.00000`, `n = 10`  
Output:  
`1024.00000`

---

### Example 2:
Input:  
`x = 2.10000`, `n = 3`  
Output:  
`9.26100`

---

### Example 3:
Input:  
`x = 2.00000`, `n = -2`  
Output:  
`0.25000`  
Explanation: `2⁻² = 1 / 2² = 1 / 4 = 0.25`

---

## 🧾 Constraints

- `-100.0 < x < 100.0`
- `-2³¹ <= n <= 2³¹ - 1`
- `n` is an integer.
- Either `x` is not zero or `n > 0`.
- `-10⁴ <= xⁿ <= 10⁴`

---

> ⚡ Tip: Use **fast exponentiation** (also known as binary exponentiation) for optimal performance.

