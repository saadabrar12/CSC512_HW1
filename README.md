## PART 1

The coding part weights 40% of this howework grades. You should
specify the changed parts (give specific line numbers) of the code
that shows your own implementation (5%). The rest 35% is on the
correctness of your implementation. Your scanner should be able to be
compiled and run successfully by following your Readme on the VCL
Linux systems.  If your scanner fails in doing so, your project won't
be graded further and you will lose all the points. One exception
is that you have DETAILED documents on your implementation, the bugs
in your code and how you plan to fix them if you had more time.

We will use the test programs that we provide to you for grading.

## Part 2

"Engineering A Compiler" textbook (2nd Edition):
Page 80: 1 (b, c); 2 (b, c); 4 (c); 5 (e); 7. only the third regular expression (a,b,c).

Submission instruction: a single PDF file, put into a compressed package with the scanner code. Your answer can be a scanned handwritten copy or electronically typed copy. Illegible answers will be ignored in grading.
No late submissions will be accepted.


Notes: 
* The knowledge for solving Problem 7 will be taught in our next
lecture. 
* If you don't have access to the textbook, you may see the scanned copy
in this attachment.

Hints:
* Regular expressions should be expressed in strings with only the
three basic operators (concatenation, alternation, kleene closure)
used; you may use some names as short representations of some constant
symbols (e.g., Dig -> 0, 1, 2, ..., 9); recursive definitions (e.g.,
X->X a) are not allowed.

* For problems that ask you to write the regular expressions for a
language, if you believe that no regular expressions can represent the
language, just state that and then provide the reasons.

* As our example DFA shows, any transition not appearing in an DFA is considered illegal; you don't have to explicitly express 'Dead' or 'Error' states.

* Problem 1: when you write the informal descriptions, take the descriptions in Question 2 as examples in terms of the expected format of the informal descriptions. 

* Problem 2: FA should be DFA.

* Problem 4c: a value less than a dollar should have "0" before the decimal point (e.g., "$0.99" rather than "$.99"). And the currency should not have unnecessary leading zeros (e.g., $004.15 is wrong, $0.15 is fine).

* Problem 5(e): An expression in the language to express must have balanced usage of parentheses if it uses parentheses.

* Problem 7: when you write your NFA or DFA, you are expected to draw their diagrams.