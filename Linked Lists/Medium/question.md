# [Leetcode 237: Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/description/)

---

## 📘 Description

You are given **a node** (not the head) of a singly linked list.  
Your task: **delete the given node** from the linked list.

**Important Notes:**
- You **cannot** access the head of the list.
- All node values are unique.
- The node given is **not the last node**.
- "Deleting" a node means:
  - Its value should no longer appear in the list.
  - The list should have one fewer node.
  - The order of other nodes remains unchanged.

---

## 🧪 Examples

### Example 1:
**Input:**  
head = [4,5,1,9], node = 5

makefile
Copy
Edit
**Output:**  
[4,1,9]


**Explanation:**  
Deleting the node with value `5` makes the linked list: `4 -> 1 -> 9`.

---

### Example 2:
**Input:**  
head = [4,5,1,9], node = 1


**Output:**  
[4,5,9]


**Explanation:**  
Deleting the node with value `1` makes the linked list: `4 -> 5 -> 9`.

---

## 💡 Key Idea
We **cannot** change the previous node’s `next` pointer because we don’t have access to it.  
Instead, we:
1. Copy the **next node’s value** into the current node.
2. Point the current node’s `next` to the `next` node’s `next`.

---

## 🧾 Constraints
- `2 <= number of nodes <= 1000`
- `-1000 <= Node.val <= 1000`
- All values are unique.
- The given node is **not** the last node.
