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

After pushing 25 to stack B we now need to calculate again for each 'a' node it's 'target note' then cheapest 'a' node to push, recall as long as our stack 'a' has more than three nodes, we will keep doing this until there are only three left in 'a'.

The 'target note' for -38 is 99, for number 10 its 'target node' is zero, for number 7 is also zero and for 42 its 'target node' is 25

(añadir img 4)

You can see in this example that in stack 'b' 0 is also smaller than 42 but 25 is the closest smaller to 42 so it's the number that is closest to 42.

- -38: 1 -> now the push cost for -38 is 1 why, because it's 'target node' is 99 and it only takes one operation to bring 99 to top of the stack and which is reverse rotate 'b'

- 10: 1 -> te push cost for 10 is only one because we can simultaneously rotate 'a' and 'b' at the same time to bring 10 and zero to the top of the stacks

- 7: 3 -> the push for seven is three
- 42: 1 -> the push for 42 is one because we only need to reverse rotate 'a' to take 42 to the top

As you can see, we haven't found a push cost that is cheaper than -38 so we will go ahead and do the operations and push -38

(añadir img 5)

*Sort Three:*

We now have three nodes left in stack 'a' and in this case we will implement an algorithm that sorts a stack of three nodes in ascending order and it's pretty simple, we just need to make sure that the biggest number is on the bottom and if we need to we just simply swap the first two nodes

(añadir img 6)

Now we will push every 'b' node one by one fromp the top of the stack until 'b' is empty. The only requirement fot this step is that before we push 'b' node to stack 'a' we need to make sure it will be pushed on the top of the correct 'a' node. Recall our program needs to sort stack 'a' in ascending order, so this means that for every 'b' node it needs a 'target node' in stack 'a' that has the closest bigger value to 'b' node.
If 'b' node can't find its closest bigger value let's say because it already is the largest number then you guessed it.
Its 'target node' will be the smallest number in stack 'a'.
Let's have a look at the first 'b' node and set its 'target node'. We are lucky that 

....


### Summary:
- If stack 'a' > 3:
    - Push 'a' node to stack 'b' twice
- Until stack 'a' = 3
    - Push 'a' node to stack 'b', sorting 'b' in descending order
- Sort three
- Push all 'b' nodes back to stack 'a'
- Complete with smallest number on top

### Pseudo Code
- Declare pointers to two data structures/linked lists, one for stack 'a' and another for 'b'
    - Set both pointers to NULL to avoid undefined and indicate we're starting with empty stack
- Handle input count errors. Argument count must be 2 or more, and the second input must not ne empty
    - If input errosr, return error
- Handle both cases of input, whether a variable number of command line arguments, or as a string 
    - If the input of number is as a string, call 'split()' to split the substrings
- Initializa stack 'a' by appending each input number as a node to stack 'a'
    - Handle integer overflow, duplicates, and syntax errors, e.g. input must only contain digits, or '-' '+' signs
        - If errors found, free stack 'a' and return error
    - Check for each input, if it is a long integer
        - If the input is a string, convert it to a long integer
    - Append the nodes to stack 'a'
- Check if stack 'a' is sorted
    - If not sorted, implemen our sorting algorithm
        - If so, simply swap the numbers
    - Check for three numbers
        - If so, implement our simle 'sort three' algorithm
    - Check if the stack has more than 3 numbers
        - If so, implement our Turk Algorithm
- Clean up the stack
    
