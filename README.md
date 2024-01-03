# Push-swap

### Passing the Evaluation:
Return 'n' size of instructions fors sorting 'x' number of values:
- If x = 3 then n <= 3
- If x = 5 then n <= 12
- If x = 100 then n < 1500
- If x = 500 then n < 11500

Note: the lesser instruction, the more evaluation points

### Project plan:
- Create the stacks
- Implement swap, rotate, reverse rotate, push
- Choose a sort algorithm
- Pseudo code
- Implement the algorith
- Test with a checker

### What is a stack?
- A stack of objects piled on top of each other
- Has a top, and a bottom

### What is a linked list?
- Data structure containing 'nodes'
- Nodes are data elements
- Each like a box, that stores data inside of it
- E.g. values, or numbers
- Each node, connected in sequence
- The head, connected to the next, and so on
- Singly Linked list: uni-directional
- Doubly Linked list: bi-directional (for this project we will be using this)
- Tail's *next -> NULL
<p aling="center">
<img src="https://github.com/Pausanpi/Push-swap/blob/main/img%20readme/Captura%20de%20pantalla%202024-01-03%20124904.png?raw=true" width="200" height="300" />
</p>

### What is a node?
- Like a box that stores data
- Many different data types
- Our nodes will contain:
    - The Data:
        - A value (type 'int')
        - Its index (type 'int')
    - Reference pointers:
        - *next node
        - *prev node
        - Otro que veremos más adelante

### Operations:
- swap:
    - sa: swaps the first two elements at the top of the stack 'a'
    - sb: swaps the first two elements at the top of the stack 'b'
    - ss: swap the first two elements on top of stack 'a' and stack 'b' at the same time
- rotate:
    - ra: moves all elements of stack 'a' up by 1. The first element becomes the last element of stack 'a'
    - rb: moves all elements of stack 'a' up by 1. The first element becomes the last element of stack 'b'
    - rr: ra and rb at the same time
- reverse rotate:
- push:
