# RAM Memory Management

Assignment for **Data Structures and Algorithms (DSA)** course (CS F211), BITS Pilani.

[Problem Statement](/Assignment.pdf)

## Learning Outcome

- How objects and pointers are implemented in RAM memory
- How defragmentation is done
- Understanding linked lists and code modularity in C language

## Implementation Details

- A linked list is a `ADT` in which the objects are arranged in a *linear order*. Unlike an array, in which the linear order is determined by the sequence of indices, the order in a linked list is determined by a pointer with each object. Each node of a doubly linked list L contains an object with an attribute key and two other pointer attributes: **next** and **prev**. For a node x in the list, *x.key* contains its key value, *x.next* points to its successor and *x.prev* points to its predecessor in the linked list. If `x.prev = NULL`, the node x has no predecessor and is therefore the first node, or head, of the list. If `x.next = NULL`, the node x has no successor and is therefore the last element, or tail, of the list. An attribute *L.head* points to
the first element of the list. If `L.head = NULL`, the list is empty.

![Doubly_Linked_List](./Images/Doubly_Linked_List.png?raw=true "Doubly_Linked_List")

- In computer memory, the words are typically addressed by integers from *0* to *N-1*, where N is an applicably large number. In many programming languages, an *object* occupies a contiguous set of locations in computer memory. A pointer is used to address the first memory location of the object, and we can access other memory locations within the object by adding an offset to the pointer. 

![Key_Next_Prev](./Images/Key_Next_Prev.png?raw=true "Key_Next_Prev")

### Defragmentation: 

After few insertions and deletions, free list will have scattered nodes. Defragmentation (or compaction) is a process of relocating/rearranging the non-contiguous data to restore them into contiguous manner. On other words, after defragmentation, free list will have nodes in sequence.

## Running the program

- Run the program using the following command: 
    ```
    make
    ```
- The following `OPTIONS` menu will appear:
![options](./Images/options.png?raw=true "options")


## Layout of the menu driven program

- The program continuously displays following options until user presses 0.
```
Select an option:
1. Create a new list
2. Insert a new element in a given list in sorted order
3. Delete an element from a given list
4. Count total elements excluding free list
5. Count total elements of a list
6. Display all lists
7. Display free list
8. Perform defragmentation
9. Press 0 to exit
```

**O/P:**
Select an option: 1
The sequence number of the newly created list is: n
Enter key value to be inserted in the newly created list-n: *here user inputs integer m*
Program outputs `SUCCESS` or `FAILURE: MEMORY NOT AVAILABLE`.

**Again Menu is displayed:**
Select an option: 2
List you want to insert in: *here user inputs list number n*
Enter the key value: *here user inputs integer m*
Program outputs `SUCCESS` or `FAILURE: MEMORY NOT AVAILABLE`.

**Again Menu is displayed:**
Select an option: 3
List you want to delete from: *here user inputs list number n*
Enter the key value: *here user inputs integer m*
Program outputs `SUCCESS` or `FAILURE: ELEMENT NOT THERE / LIST EMPTY`.

**Again Menu is displayed:**
Select an option: 4
Program outputs: Total number of nodes in all lists are M.

**Again Menu is displayed:**
Select an option: 5
Enter the list number: *here user inputs list number n*
Program outputs: Total number of nodes in list n are M. 

**Again Menu is displayed:**
Select an option: 6
Program outputs all the lists present in memory (or array in our case) in following format.

Elements of list-1 are:

| key | next | prev |
| --- | --- | --- |
| 16 | 25 | NIL |
| 10 | 4 | 13 |
| 7 | NIL | 25 |

Elements of list-2 are:

| key | next | prev |
| --- | --- | --- |
| 15 | 7 | NIL |
| 6 | 22 | 19 |
| 5 | NIL | 7 |

**Again Menu is displayed:**
Select an option: 7
Program outputs all nodes of a free list in following format.

Elements of free list are:
`[16, 1, 10]`

**Again Menu is displayed:**
Select an option: 8
Here the program performs defragmentation and outputs SUCCESS / FAILURE.

**Note:** Defragmentation does not require all nodes of a particular list to be stored contiguously. Rather, all
allocated nodes of all the lists should be stored contiguously. 