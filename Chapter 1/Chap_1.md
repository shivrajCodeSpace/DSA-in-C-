# Chapter 1: Pseudo Code

## Definition

Pseudo code is a human-readable description of an algorithm. It uses simple English and structured formatting instead of programming syntax so that anyone can understand the logic and flow of a solution before actual code is written.

## Representation

Pseudo code can be represented in different styles, but it usually follows these rules:

- Use plain language and short statements
- Use indentation to show nested logic
- Use control flow words like `IF`, `ELSE`, `WHILE`, `FOR`, `REPEAT`, and `END`
- Avoid language-specific syntax such as semicolons, braces, or exact function calls

Example:

```md
START
  INPUT number
  IF number > 0 THEN
    PRINT "Positive"
  ELSE
    PRINT "Non-positive"
  ENDIF
END
```

## Algorithm

### Definition

An algorithm is a precise, step-by-step procedure for solving a problem or completing a task. It describes the sequence of operations that transform input into the desired output.

### Representation

In pseudo code, an algorithm is represented using simple statements, control flow steps, and clear structure. It avoids syntax details and focuses on the logic.

- Use statements like `INPUT`, `SET`, `FOR`, `IF`, `WHILE`, and `PRINT`
- Use indentation for nested operations and decision blocks
- Write steps in plain language rather than exact programming syntax

Example algorithm in pseudo code:

```md
START
  INPUT n
  SET sum = 0
  FOR i FROM 1 TO n DO
    sum = sum + i
  ENDFOR
  PRINT sum
END
```

### Application

Algorithms are used to:

- Solve computation problems systematically
- Plan code before writing it
- Describe logic clearly for others to understand
- Compare different approaches for efficiency
- Teach problem solving and design techniques

### Advantages

- Makes problem solving systematic and predictable
- Helps avoid missing steps or incorrect assumptions
- Can be applied to many programming languages
- Supports testing and debugging before implementation
- Improves communication between team members

### Characteristics and Types

Common algorithm characteristics:

- Clear and unambiguous steps
- Defined start and end points
- Input and output are specified
- Correctness and completeness
- Efficiency in time and space

Algorithm types:

- **Brute-force**: try every possibility
- **Divide and conquer**: split the problem into smaller problems
- **Greedy**: make the best local choice at each step
- **Dynamic programming**: solve by combining overlapping subproblems
- **Recursive**: define the solution in terms of smaller instances

## Flowchart

### Definition

A flowchart is a visual diagram that shows the flow of an algorithm using symbols, shapes, and arrows. It visually represents the sequence of steps and decisions in a process.

### Representation

Flowcharts use standard symbols and arrows to represent different kinds of actions.

- Oval: Start/End
- Parallelogram: Input/Output
- Rectangle: Process or action
- Diamond: Decision (Yes/No)
- Arrow: Flow direction

Example flowchart sequence for checking a positive number:

- Start
- Input number
- Decision: number > 0 ?
  - Yes -> Output "Positive"
  - No -> Output "Non-positive"
- End

### Application

Flowcharts are used to:

- Visualize algorithm logic before coding
- Communicate process flow to others
- Identify decision points and loops
- Plan program structure clearly
- Document software and system processes

### Advantages

- Makes algorithm design easier to understand
- Helps reveal logic errors early
- Useful for teaching and discussion
- Provides a clear map of process flow
- Works well for both simple and complex logic

### Characteristics and Types

Common flowchart characteristics:

- Easy to read and interpret
- Uses standard symbols for consistency
- Shows flow direction clearly with arrows
- Represents decisions and loops visually
- Can be updated as logic changes

Flowchart types:

- **System flowchart**: shows overall system flow
- **Program flowchart**: shows logic of a specific program or routine
- **Process flowchart**: details a business or operational process
- **Swimlane flowchart**: shows responsibilities across roles or departments

## Application

Pseudo code is used to:

- Plan algorithms before programming
- Share algorithm ideas with teammates or instructors
- Teach problem solving and algorithm design
- Prepare for coding interviews
- Convert logic into actual code in any programming language

## Advantages

- Easier to read than real code
- Not tied to a specific programming language
- Lets you focus on algorithm logic, not syntax
- Helps reveal errors and missing steps early
- Speeds up design and communication

## Characteristics

Pseudo code typically has these characteristics:

- Language independent
- Easy to read and understand
- Structured with clear steps
- Flexible: it can be detailed or high-level
- Focused on algorithm logic rather than implementation details

## Types

Common pseudo code styles include:

- **Simple narrative style**: describing steps in plain sentences
- **Structured style**: using keywords and indentation like programming constructs
- **Flowchart-style**: combining pseudo code with flowchart-like sequence steps

Example of structured pseudo code:

```md
FUNCTION FindMax(A, n)
  SET max_value = A[1]
  FOR i FROM 2 TO n DO
    IF A[i] > max_value THEN
      SET max_value = A[i]
    ENDIF
  ENDFOR
  RETURN max_value
END FUNCTION
```

## Example Structure

1. Start
2. Input data
3. Process data using clear steps
4. Output result
5. End

