# CPP01 - C++ Module 01

![42 school](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Norminette](https://img.shields.io/badge/Norminette-passing-success?style=flat-square)

## About

CPP01 is a 42 School C++ training module focused on the first steps beyond plain C. It introduces object-oriented design, memory management, references, pointers, file handling, and basic class organization through a set of small exercises.

The goal of the module is not only to make the programs work, but also to help build habits around clean class interfaces, predictable resource management, and code that is easy to reason about.

## Goals

- Understand the difference between stack and heap allocation
- Work with classes, constructors, destructors, and member functions
- Use references and pointers intentionally
- Practice file input and output in C++
- Learn how to split a project into small, focused translation units
- Keep the code compatible with the 42 C++ constraints and Norminette rules

## Structure

This workspace contains the exercises for CPP01:

- `ex00` - Introduction to classes and object lifetime
- `ex01` - Dynamic allocation and manual memory management
- `ex02` - Arrays of objects and allocation patterns
- `ex03` - Reference members and object relationships
- `ex04` - File stream processing and text replacement
- `ex05` - Basic class behavior, methods, and internal helpers

Each exercise has its own `Makefile` and is meant to be built separately.

## Exercises Overview

### ex00

First contact with a simple class and object lifecycle. This exercise is used to understand how instances are created, how methods are called, and when constructors and destructors are triggered.

### ex01

Introduces dynamic allocation and ownership. The focus is on creating objects on the heap, returning them safely, and avoiding leaks by matching every allocation with a proper cleanup path.

### ex02

Works with collections of objects allocated together. This exercise helps practice array initialization, iteration, and consistent destruction of multiple instances.

### ex03

Explores references in class design. The point is to understand how one object can depend on another without taking ownership, and how that affects constructor signatures and object lifetime.

### ex04

Introduces file handling with C++ streams. The exercise practices reading a file, transforming its content, and writing the result to a new file using a clear, repeatable workflow.

### ex05

Focuses on class methods, message handling, and internal helper logic. This exercise reinforces encapsulation and the idea that classes should expose a small, readable public interface.

## Build

Each exercise can be compiled from its own directory:

```bash
cd ex00
make
```

Common targets:

- `make` - Build the executable
- `make clean` - Remove object files
- `make fclean` - Remove object files and the executable
- `make re` - Rebuild everything from scratch

## Run

The exact executable name depends on the exercise, but the usual workflow is:

```bash
./program_name [arguments]
```

Check the `Makefile` in each folder for the final binary name and the expected usage.

## Learning Outcomes

By finishing CPP01, you should be more comfortable with:

- Object construction and destruction order
- Heap versus stack ownership
- Copying and passing objects safely
- Stream-based file manipulation
- Breaking a task into small reusable functions

## Technical Notes

- Language: C++
- Standard: follow the version required by the subject
- Style: 42 Norminette and project-specific constraints
- Build system: one `Makefile` per exercise

## Author

**opopov** - 42 School student
