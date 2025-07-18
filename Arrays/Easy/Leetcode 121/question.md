# [Leetcode 121: Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)

---

## 📘 Description

You are given an array `prices` where `prices[i]` is the price of a given stock on the `iᵗʰ` day.

You want to **maximize your profit** by choosing a single day to **buy** one stock and choosing a different day in the **future** to **sell** that stock.

Return the **maximum profit** you can achieve from this transaction.  
If no profit can be made, return `0`.

---

## 🧪 Examples

### Example 1:
Input: `prices = [7,1,5,3,6,4]`  
Output: `5`  
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6 - 1 = 5.

> ⚠️ You must buy **before** you sell. Buying on day 2 and selling on day 1 is not allowed.

---

### Example 2:
Input: `prices = [7,6,4,3,1]`  
Output: `0`  
Explanation: No transaction is done since prices only decline.

---

## 🧾 Constraints

- `1 <= prices.length <= 10⁵`
- `0 <= prices[i] <= 10⁴`

---

