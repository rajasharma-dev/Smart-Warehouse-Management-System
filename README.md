# Smart Warehouse Management System

A menu-driven warehouse inventory management system developed in C. The project uses an array to manage item IDs across warehouse slots and supports inserting, deleting, searching, and compacting inventory.

## Features

* **Insert Items:** Add an item ID at a specified index.
* **Delete Items:** Remove an item from a selected slot.
* **Search Items:** Find an item by its ID.
* **Compact Warehouse:** Move stored items toward the beginning of the array to remove empty slots between them.
* **Display Inventory:** View warehouse slot indices and their current values.
* **Input Validation:** Handle invalid indices and item IDs.

## Concepts Used

* C programming
* Arrays
* Functions
* Linear search
* Insertion and deletion using shifting
* Menu-driven programming
* Input validation

## How to Run

1. Clone or download this repository.

2. Open the project folder in VS Code.

3. Compile the source file using GCC:

   ```bash
   gcc Smart_Warehouse_Management_System.c -o warehouse
   ```

4. Run the program.

   **Windows:**

   ```powershell
   .\warehouse.exe
   ```

   **Linux/macOS:**

   ```bash
   ./warehouse
   ```

## Menu Options

1. Insert
2. Delete
3. Search
4. Compact
5. Display
6. Exit

## Project Purpose

This project was created to practise fundamental C programming concepts and understand how array-based inventory operations work.

## Author

**Rajakumar Sharma**

GitHub: [@rajasharma-dev](https://github.com/rajasharma-dev)
