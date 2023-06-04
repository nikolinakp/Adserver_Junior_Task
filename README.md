# Adserver_Junior_Task

C++ implementation of a task with the following description:

 You are tasked with building a program that takes a list of integers as input and finds the
two integers in the list that sum up to a given target value. For example, if the target value is 10
and the input list is [1, 3, 4, 5, 7, 9], the program should output (3, 7) or (1,9).
You should use the "two-pointer" algorithm to solve this problem. 

The "two-pointer" algorithm is a technique for searching for a pair of elements in a sorted array that sum to a given target value. It works by maintaining two pointers, one at the beginning of the array and one at the
end, and moving the pointers inward until the target value is found or the pointers cross.

Your program should output a tuple (a, b) where a and b are two integers from the
input list that sum up to the target value, or None if no such pair exists.

# User description

When starting the program, the user must enter the number of items from the list, then the list of items itself.
The user also enters the desired amount value by which we will search for a pair of numbers. 
When the task constraints are exceeded, the user receives an error message with a specific description.
