# List Activity Repository

This repo contains two C implementations of fundamental list data structures, each in its own folder:

1. **`Liked_List/`**  
   A _dynamic singly linked list_ of integers.
2. **`Sequential_List/`**  
   A _fixed‐size sequential (array‑based) list_ of integers.

---

## 📂 Repository Structure


.
├── Liked\_List
│   ├── linked\_list.h
│   ├── linked\_list.c
│   ├── main.c        # test cases for linked list
│   └── Makefile
│
└── Sequential\_List
├── sequential\_list.h
├── sequential\_list.c
├── main.c        # test cases for sequential list
└── Makefile

````

---

## 🔧 Prerequisites

- A C compiler (e.g. `gcc` via MinGW, Cygwin, or Linux/macOS toolchain)
- (Optionally) GNU Make if you plan to use the provided `Makefile`s

---

## 🚀 Building & Running

### 1. Linked List

```bash
cd Liked_List

# If you have Make installed:
make
./list        # on Linux/macOS
.\list.exe    # on Windows PowerShell

# Or compile directly without Make:
gcc -Wall -Wextra -o list main.c linked_list.c
./list        # or .\list.exe
````

### 2. Sequential List

```bash
cd Sequential_List

# With Make:
make
./seq_list    # or .\seq_list.exe

# Or direct compilation:
gcc -Wall -Wextra -o seq_list main.c sequential_list.c
./seq_list    # or .\seq_list.exe
```

To clean up object files and executables:

```bash
make clean
```

---

## 📖 Overview of Each Module

### Linked List (`Liked_List/`)

* **`linked_list.h`**
  Defines:

  * `Node` (data + next pointer)
  * `List` (head pointer + size)
  * Function prototypes:

    * `create_list`, `is_empty`, `get_size`,
    * `get_value`, `set_value`,
    * `insert_at`, `remove_at`,
    * `print_list`, `free_list`

* **`linked_list.c`**
  Implements all operations in a dynamic, pointer‑based fashion.

* **`main.c`**
  Demonstrates:

  * Creating a list
  * Inserting and removing elements
  * Accessing/modifying by position
  * Printing and cleanup

---

### Sequential List (`Sequential_List/`)

* **`sequential_list.h`**
  Defines:

  * `SeqList` (fixed-size array + current size)
  * `MAX_SIZE` capacity
  * Function prototypes:

    * `create_list`, `is_empty`, `is_full`, `get_size`,
    * `get_value`, `set_value`,
    * `insert_at`, `remove_at`,
    * `print_list`

* **`sequential_list.c`**
  Implements all operations using in‑place array shifts.

* **`main.c`**
  Demonstrates the same sequence of operations as the linked‑list version.

---

## 📋 License

This project is released under the MIT License. Feel free to study, modify, and integrate into your own projects.

---

*Happy coding!* 🚀
