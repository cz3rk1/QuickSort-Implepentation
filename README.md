# QuickSort Algorithm Implementation in C++

This repository contains a C++ implementation of the QuickSort algorithm. QuickSort is a highly efficient sorting algorithm that divides a large array into smaller sub-arrays and then recursively sorts the sub-arrays. This implementation sorts an array of integers using the QuickSort algorithm.

## Description

The `QuickSort` algorithm works by selecting a "pivot" element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then recursively sorted. This process repeats until the entire array is sorted.

## Code Overview

The main components of the code are as follows:

- `RandomArray`: Function to generate a random array of integers.
- `Print`: Function to print the elements of an array.
- `QuickSort`: Function implementing the QuickSort algorithm.
- `main`: The main function where the QuickSort algorithm is applied to an array of integers.

## Usage

1. Clone the repository to your local machine.
2. Compile the code using a C++ compiler.
3. Run the compiled executable.
4. The program will generate a random array of integers, sort it using the QuickSort algorithm, and then print the sorted array along with the number of comparisons made during the sorting process.

## About QuickSort

QuickSort is a comparison-based sorting algorithm invented by Tony Hoare in 1959. It is widely used in practice due to its efficiency and speed, especially for large datasets. The average and best-case time complexity of QuickSort is O(n log n), making it one of the fastest sorting algorithms available.
