# Push_swap

## Overview

Push_swap is a sorting algorithm project from the 42 School curriculum. The goal is to sort a list of integers in ascending order using two stacks and a limited set of predefined operations.

The challenge is not only to sort the numbers correctly, but also to find an efficient solution using the smallest possible number of operations.

## Project Rules

The program works with two stacks:

- **Stack A:** Contains the initial list of integers.
- **Stack B:** Initially empty and used as auxiliary storage during sorting.

The program must sort all numbers in Stack A in ascending order, leaving Stack B empty.

## Available Operations

The project provides a limited set of operations to manipulate both stacks:

| Operation | Description |
|---|---|
| `sa` | Swaps the first two elements of Stack A. |
| `sb` | Swaps the first two elements of Stack B. |
| `ss` | Performs `sa` and `sb` simultaneously. |
| `pa` | Pushes the top element of Stack B onto Stack A. |
| `pb` | Pushes the top element of Stack A onto Stack B. |
| `ra` | Rotates Stack A upwards (first element becomes the last). |
| `rb` | Rotates Stack B upwards. |
| `rr` | Performs `ra` and `rb` simultaneously. |
| `rra` | Reverse rotates Stack A (last element becomes the first). |
| `rrb` | Reverse rotates Stack B. |
| `rrr` | Performs `rra` and `rrb` simultaneously. |

## Algorithm

The main objective is to develop a sorting strategy that minimizes the number of operations required.

Depending on the implementation, this may involve:

- Handling small sets of numbers with specific sorting strategies.
- Splitting the data into smaller groups or chunks.
- Moving elements between stacks efficiently.
- Optimizing rotations and reverse rotations.
- Keeping track of the position of each element to determine the most efficient moves.

## Input Validation

The program must also handle invalid input, including:

- Non-numeric arguments.
- Duplicate numbers.
- Integer overflow.
- Invalid or malformed values.

## Technologies

- **Language:** C
- **Standard:** C99
- **Build System:** Makefile

## Purpose

Push_swap focuses on algorithm design, sorting strategies and optimization. It helps develop problem-solving skills while working with data structures, stack manipulation and algorithmic complexity.
