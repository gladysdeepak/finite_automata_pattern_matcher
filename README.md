# String Pattern Matcher (Ends with "101")

This project is a simple C++ program that uses a Finite Automaton to check if a given binary string ends with the pattern "101".

## How It Works

- The program simulates a Deterministic Finite Automaton (DFA) with four states:
  - `Q0` (Initial State)
  - `Q1` (After seeing '1')
  - `Q2` (After seeing '10')
  - `Q3` (Accepting State, after seeing '101')

- The string is processed character by character, updating the state accordingly.
- If the final state is `Q3` after processing the entire string, the string ends with "101".

## How to Run

1. Make sure you have a C++ compiler installed.
2. Compile the code with:

1. Compile the code using g++:
   ```bash
   g++ pattern_matcher.cpp -o pattern_matcher
   ```

2. Run the executable:
   ```bash
   ./pattern_matcher
   ```

3. Enter a binary string when prompted.

## Example

```
Enter a binary string: 1001
The string does NOT end with '101'.

Enter a binary string: 11101
The string ends with '101'.
```


