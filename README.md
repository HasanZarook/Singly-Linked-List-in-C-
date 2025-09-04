
# 🖇️ Singly Linked List in C++

## 🚀 Project Overview

This project implements a **singly linked list** using **C++ classes**. The `Linklist` class allows storing integers or strings and provides standard linked list operations.

* 🔹 **Dynamic memory allocation** for nodes
* 🔹 **Insertions** at head, tail, or after a position
* 🔹 **Deletions** from head, tail, or by value
* 🔹 **Search** for values and report their positions
* 🔹 **Print** the entire list in a readable format

---

## 🛠️ Features

* ➕ Insert at **head** or **tail**
* 📌 Insert **after a specific position**
* ❌ Delete from **head**, **tail**, or **by value**
* 🔎 Search for a value and display **all positions**
* 🖨️ Print the **entire list**
* ⚡ Check if the list is **empty**
* 📏 Get the **length** of the list

---

## 📁 Project Structure

```
LinkedListProject/
├─ Linklist.cpp       # Implementation of linked list class
├─ Linklist.h         # Header file for class definition
├─ main.cpp           # Driver program to test linked list
└─ README.md          # Project documentation
```

---

## 📝 How to Use

1. Include the linked list header in your program:

```cpp
#include "Linklist.h"
```

2. Create an instance of the linked list:

```cpp
Linklist ll;
```

3. Insert values:

```cpp
ll.insertH(5);   // Insert at head
ll.insertT(10);  // Insert at tail
ll.insertAfter(7, 2); // Insert value 7 after position 2
```

4. Delete values:

```cpp
ll.deleteH();    // Delete head
ll.deleteT();    // Delete tail
ll.deleteY(10);  // Delete specific value
```

5. Search values:

```cpp
ll.search(7); // Search for value 7
```

6. Print list:

```cpp
ll.print(); // Outputs the linked list
```

7. Check if empty:

```cpp
if (ll.isEmpty()) {
    cout << "List is empty!" << endl;
}
```

---

## 📊 Example Output

```
6 -> 7 -> 5 -> 3 -> NULL
the position of your value is 2
the position of your value is 5
total places of your value is 2
```

---

## 💡 Key Concepts

* **Node Class**: Each node stores data and a pointer to the next node.
* **Dynamic Memory**: Nodes are created with `new` and deleted with `delete`.
* **Traversal**: Loops are used to iterate over the list for insertion, deletion, and searching.
* **Indexing**: Supports getting data by index and inserting after a specific position.

---

## 🎯 Future Improvements

* ✅ Implement **doubly linked list**
* ✅ Add **sorting algorithms** for the list
* ✅ Implement **iterator support** for range-based loops
* ✅ Add **merge and reverse operations**

---

## 👨‍💻 Author

**Hasan Zarook** – Computer Engineering, 2021-CE-58

---

## 🔖 License

This project is licensed under **MIT License** – see the LICENSE file for details.


Do you want me to do that?
