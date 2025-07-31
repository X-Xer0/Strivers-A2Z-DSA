# [Leetcode 875: Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/description/)

---

## 📘 Description

Koko loves to eat bananas. There are `n` piles of bananas, and the `iᵗʰ` pile has `piles[i]` bananas.  
The guards are away and will return in `h` hours.

Koko can choose her bananas-per-hour eating speed `k`.  
Each hour, she chooses **one pile** and eats **up to `k` bananas** from it.  
- If the pile has fewer than `k` bananas, she eats all of them.
- She does **not** eat from more than one pile per hour.

Koko likes to eat slowly but must **finish all the bananas** before the guards return.

Return the **minimum integer `k`** such that she can eat all the bananas within `h` hours.

> 🧠 Binary Search is a common strategy to solve this problem efficiently.

---

## 🧪 Examples

### Example 1:
Input: `piles = [3,6,7,11]`, `h = 8`  
Output: `4`  
Explanation: Minimum speed `k = 4` lets her eat all bananas in exactly 8 hours.

---

### Example 2:
Input: `piles = [30,11,23,4,20]`, `h = 5`  
Output: `30`  
Explanation: Only the max pile size `30` works here to finish in time.

---

### Example 3:
Input: `piles = [30,11,23,4,20]`, `h = 6`  
Output: `23`  
Explanation: She can eat slower and still finish on time.

---

## 🧾 Constraints

- `1 <= piles.length <= 10⁴`  
- `piles.length <= h <= 10⁹`  
- `1 <= piles[i] <= 10⁹`

---

