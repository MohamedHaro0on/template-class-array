# Linked List and Array Utilities

## Overview
This project demonstrates the implementation of a doubly linked list (`Node` and `LinkedList` classes) and utility functions for managing and sorting arrays. The program allows for dynamic creation, insertion, and management of elements in a linked list, as well as performing operations like bubble sort, selection sort, and search on arrays of various types.

## Project Structure
The project consists of the following files:

### Header Files

1. **Node.h**
   - Defines the `Node` class template for creating nodes in a doubly linked list.
   - Includes:
     - Data members: `data`, `prev`, and `next`.
     - Constructors: Default, copy, and parameterized.
     - Utility functions: `getData`, `getNode`, and `setData`.
     - Destructor.

2. **LinkedList.h**
   - Defines the `LinkedList` class template for implementing a doubly linked list.
   - Includes:
     - Data members: `count`, `head`, and `tail`.
     - Utility functions: `insert`, `pop`, `display`, `getCount`, and `isEmpty`.
     - Helper methods: `clear` and `copyLinkedList`.
     - Constructors and destructor.

### Implementation Files

3. **Node.cpp**
   - Implements the `Node` class template methods declared in `Node.h`.

4. **LinkedList.cpp**
   - Implements the `LinkedList` class template methods declared in `LinkedList.h`.

### Main Program

5. **main.cpp**
   - Provides the user interface for:
     - Initializing an array.
     - Inserting values into the array.
     - Sorting the array using bubble sort and selection sort.
     - Searching for a specific term in the array and returning the indices where it occurs using a linked list.
     - Repeating the program for different data types (int, double, char, float).

## Features

### Linked List
- Doubly linked list implementation using `Node` and `LinkedList` classes.
- Supports operations such as:
  - Insertion of elements.
  - Deletion of the last element (pop).
  - Displaying elements.
  - Searching for a node containing specific data.

### Array Utilities
- Array initialization with a customizable size.
- Inputting values into the array.
- Sorting algorithms:
  - Bubble sort.
  - Selection sort.
- Searching for a specific value in the array and storing indices in a linked list.

### Generic Implementation
- Supports multiple data types: `int`, `double`, `char`, and `float`.
- Template-based implementation for flexibility.

## How to Run
1. Compile the code using a C++ compiler that supports templates.
2. Run the `main` program.
3. Follow the prompts:
   - Choose the data type for the array.
   - Initialize the array size.
   - Enter values for the array.
   - Search for a term in the array.
   - Sort the array using bubble or selection sort.
4. View the results for each operation.

### Example Commands
Using `g++` for compilation:
```bash
$ g++ -o main main.cpp Node.cpp LinkedList.cpp
$ ./main
```

## Dependencies
- Standard C++ libraries (`iostream`, `nullptr`).

## Customization
- Modify the maximum array size or default size in `main.cpp` by updating the `DEFAULT_SIZE` macro.
- Add additional operations for linked list or arrays as needed.

## Author
- **Mohamed Ahmed Ali Haroon**


## Acknowledgments
- C++ Standard Template Library (STL) for inspiration.

