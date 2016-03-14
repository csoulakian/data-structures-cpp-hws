Loyola University Chicago

Spring 2014

COMP 271 - Data Structures (C++)

Sarah Kaylor

##Homework #2##

Goal: Model a polynomial as an array in C++. Implement the evaluation of the polynomial given a value for the variable and the addition of two polynomials.

Skills: Practice with pointers, memory management, and linear data structures.

Deliverables: Implement the addition function in the Polynomial class. An example signature might be

```
#!c++

Polynomial* Polynomial::Add(Polynomial* otherPolynomial) {}
```
where the return value would be a newly allocated polynomial.

##Homework #3##

Goal: Use your knowledge of stacks and queues to create a disk scheduler program.

Deliverables: Write a program that...

1. Has a specialized queue data structure that implements our Enqueue pseudo-code.
2. Create a class that has a Queue from #1 and implements a FSCAN function.
3. Create a main method that demonstrates your program by passing a sequence of integers that signify sector offsets to the FSCAN algorithm. This method should print the order the sectors are serviced.

##Homework #5##

1. Copy the code from https://bitbucket.org/sarahkaylor/balancedtrees. 
2. Run 5 tests with each of the data structures (Red-Black Tree, AVL Tree, & Array) and note the performance numbers of each structure.
3. Write a 1-2 page paper describing and explaining your performance findings. Your analysis will explain which data structure was fastest and slowest at the loading and searching tasks and why they are the fastest or the slowest.