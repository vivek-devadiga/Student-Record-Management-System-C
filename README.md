# Student Record Management System in C

A modular C-based Student Record Management System for storing, calculating, sorting, and displaying student records.

## Features

* Store student name and roll number
* Store marks for 6 subjects
* Calculate total marks
* Assign grades based on total marks
* Sort students by total marks in descending order
* Display student records
* Uses separate `.c` and `.h` files for modular programming

## Project Structure

```text
Student-Record-Management-System-C/
├── main.c
├── student_struct.h
├── mark_calculate.c
├── order_mark.c
└── display.c
```

## Modules

* **main.c** – Handles student input and program flow
* **student_struct.h** – Defines the student structure
* **mark_calculate.c** – Calculates total marks and grade
* **order_mark.c** – Sorts students by total marks
* **display.c** – Displays student records

## Concepts Used

* C Programming
* Structures
* Arrays
* Functions
* Header Files
* Modular Programming
* Sorting
* Nested Loops
* Conditional Statements

## Compilation

Compile the program using GCC:

```bash
gcc main.c display.c mark_calculate.c order_mark.c -o student
```

Run the program:

```bash
./student
```

## Grade Criteria

| Total Marks  | Grade |
| ------------ | ----- |
| Above 500    | A     |
| Above 400    | B     |
| Above 300    | C     |
| Above 250    | D     |
| 250 or below | E     |

## Purpose

This project was developed to practice modular programming in C and understand how multiple source files and header files work together in a single application.
