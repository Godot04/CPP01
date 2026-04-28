# C++ - Module 01: Memory, References, and File I/O

![42 school](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Standard](https://img.shields.io/badge/Standard-C%2B%2B98-blue?style=flat-square)
![Status](https://img.shields.io/badge/Status-Complete-success?style=flat-square)

## About

**C++ Module 01** continues the introduction to object-oriented programming in C++98 by focusing on object lifetime, dynamic allocation, references, pointers, and basic file handling. Each exercise isolates one concept so the progression stays practical and easy to review.

## Project Goals

- Understand how objects behave on the stack and the heap
- Practice references, pointers, and basic ownership rules
- Learn how constructors and destructors shape class behavior
- Work with file streams and string manipulation in C++
- Build small programs with clear responsibilities and limited scope

## Exercise Overview

### Exercise 00: BraiiiiiiinnnzzzZ

**Directory:** `ex00/`
**Executable:** `BraiiiiiiinnnzzzZ`

This first exercise introduces a simple class and object lifecycle through a small zombie example. It is designed to practice class creation, member functions, and the difference between stack-based and heap-based object management.

#### Learning Concepts

- Basic class structure
- Constructors and destructors
- Heap allocation and manual cleanup
- Function-based object creation helpers

### Exercise 01: Moar brainz!

**Directory:** `ex01/`
**Executable:** `Moar_Brainz!`

This exercise expands the zombie example by creating an array of objects dynamically. The main focus is understanding how to build and return multiple objects from a helper function while keeping memory management safe.

#### Learning Concepts

- Dynamic allocation of object arrays
- Loop-based initialization
- Centralized cleanup logic
- Working with simple class collections

### Exercise 02: HI THIS IS BRAIN

**Directory:** `ex02/`
**Executable:** `HI_THIS_IS_BRAIN`

This exercise compares a string, a pointer to that string, and a reference to that string. It is a compact way to observe addresses, indirection, and the difference between references and pointers in C++.

#### Learning Concepts

- Pointers versus references
- Address inspection
- Value access through indirection
- Minimal program structure in C++98

### Exercise 03: Unnecessary violence

**Directory:** `ex03/`
**Executable:** `Unnecessary_violence`

This exercise introduces collaboration between classes through references and shared state. It explores how one object can use another object without owning it, which is a useful pattern for designing lightweight relationships.

#### Learning Concepts

- Class interaction through references
- Shared object usage
- Encapsulation and accessor methods
- Constructor-driven initialization

### Exercise 04: Sed is for losers

**Directory:** `ex04/`
**Executable:** `Sed_is_for_losers`

This exercise works with file input and output streams to create a modified copy of a text file. It is intended to practice reading from files, writing to files, and handling basic string transformations safely.

#### Learning Concepts

- File stream handling with `std::ifstream` and `std::ofstream`
- Command-line argument validation
- String search and replacement logic
- Output file generation

### Exercise 05: Harl 2.0

**Directory:** `ex05/`
**Executable:** `Harl_2.0`

This exercise focuses on behavior dispatch inside a class. The goal is to route a textual level to a matching member function and keep the response logic organized and readable.

#### Learning Concepts

- Member function pointers or equivalent dispatch logic
- Encapsulated behavior selection
- Simple input-driven branching
- Clean class API design

## Compilation

Each exercise has its own Makefile and can be built independently.

### Build an Exercise

```bash
cd ex00
make
```

Replace `ex00` with any other exercise directory as needed.

### Available Targets

- `make` - Compile the exercise
- `make clean` - Remove object files
- `make fclean` - Remove object files and the executable
- `make re` - Rebuild everything from scratch

### Compilation Flags

- Compiler: `c++`
- Standard: `-std=c++98`
- Warnings: `-Wall -Wextra -Werror`

## Usage

Run the executable from inside the exercise directory after building it.

```bash
./BraiiiiiiinnnzzzZ
./Moar_Brainz!
./HI_THIS_IS_BRAIN
./Unnecessary_violence
./Sed_is_for_losers file.txt "old" "new"
./Harl_2.0
```

## Technical Notes

- The project follows the C++98 standard required by the module
- Exercises are intentionally small and isolated so each concept stays visible
- The code avoids unnecessary abstraction and keeps responsibilities local to each exercise
- File handling and dynamic allocation are introduced only where the exercise requires them

## Testing

Recommended checks for this module:

- Build every exercise with `make`
- Run each executable with representative inputs
- Check that file-based exercises handle invalid arguments gracefully
- Verify that stack and heap behavior matches the exercise intent

## Learning Outcome

By the end of this module, you should be comfortable reading and writing small C++98 programs that use classes, references, pointers, dynamic memory, and file streams. The exercises are designed to build the habits needed for later C++ modules without hiding the core mechanics.

## Author

**opopov** - 42 School Student
