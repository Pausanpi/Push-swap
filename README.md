# Push-swap

### Passing the Evaluation:
Return 'n' size of instructions fors sorting 'x' number of values:
- If x = 3 then n <= 3
- If x = 5 then n <= 12
- If x = 100 then n < 1500
- If x = 500 then n < 11500

Note: the lesser instruction, the more evaluation points

## TUTORIAL

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
    - rra: the other way around than ra
    - rrb: the other way around than rb
    - rrr: rra and rrb at the same time
- push:
    - pa: takes the first element on top of stack 'b' and places it on top of 'a'
    - pb: takes the first element on top of stack 'a' and places it on top of 'b'

### Choosing our sort algorithm
- The Turk Algorithm - A. Yigit Ogun.

### The Turk Algorithm
- Until there are 3 nodes left in stack 'a':
    - Push all nodes from stack 'a' to stack 'b'
    - During each push, 'b' is sorted in descending order

- Push the first two 'a' nodes. We now have in stack 'b' a biggest number so far and the smallest number so far, this is important to push the rest of our 'a' nodes. For example, we had a stack of four nodes. We would then only push the first 'a' node to stack 'b' because after this our three left in stack 'a' condition is met
- After pushing the first two 'a' nodes to stack 'b' we now look for target nodes

### Target nodes:
- Every 'a' node needs a 'target node' from stack 'b'
- A target nodes is the 'closest smaller' number to the 'a' node
- _If no 'closest smaller' number is found_, then the target node is the 'max' value
(añadir img 2)
### Cost analysis:
- Find the 'cheapest' node to push
- The formula:
  
  Sum:
  
<pre>
        x operations to bring 'a' on top
      + x operations to bring 'a' -> target node on top
      ___________________________________________________
      = push cost
</pre>

Current configuration:
    - 25: 0 -> our push cost for 25 is zero because it's already on the top and its 'target node' which is zero is also already on the top. Since the cost of 25 is zero we won't need to calculate the rest of the nodes push cost. The way this analysis work is once we have the first node push cost, which in this case is zero, we need to find something cheaper, but since you can't get any cheaper than zero and even if there's another node whose push cost is zero, we will go with the first one by default. 

(añadir img 3)

