# 0x1B. C - Sorting algorithms & Big O.

General.
At least four different sorting algorithms.
What is the Big O notation, and how to evaluate the time complexity of an algorithm.
How to select the best sorting algorithm for a given input.
What is a stable sorting algorithm.

Data Structure and Functions.
print_array.
print_list.
struct listint_s - Doubly linked list node.

Please, note this format is used for Quiz and Task questions..

O(1)
O(n)
O(n!)
n square -> O(n^2)
log(n) -> O(log(n))
n * log(n) -> O(nlog(n))
n + k -> O(n+k)

## 0. Bubble sort.
A function that sorts an array of integers in ascending order using the Bubble sort algorithm.
Prototype: void bubble_sort(int *array, size_t size);

File 0-0.
shows Big O of bubble_sort(int *array, size_t size) fuction.

## 1. Insertion sort
A function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.
Prototype: void insertion_sort_list(listint_t **list);.

File 1-0
shows Big O of insertion_sort_list(listint_t **list);.

## 2. Selection sort.
A function that sorts an array of integers in ascending order using the Selection sort algorithm.
Prototype: void selection_sort(int *array, size_t size);.

File 2-0.
shows Big O of void selection_sort(int *array, size_t size);

## 3. Quick sort.
A function that sorts an array of integers in ascending order using the Quick sort algorithm.
Prototype: void quick_sort(int *array, size_t size);
Lomuto partition scheme implementation.

File 3-0.
Shows Big O of quick_sort(int *array, size_t size);.
