# Implementing a Parser for a Context Free Grammar Using C++
I am trying to implementing a parser for a simple context-free grammar. The grammar describes a language of arithmetic expressions involving addition and multiplication, along with parentheses for grouping. The grammar is given below:
## Grammar:
E → E + T | T <br>
E → T * F | F <br>
F → (E) | a <br>
## Sample Input:
(a + a) * a
## Sample Output:
E <br>
T * F <br>
F * F <br>
(E) * F <br>
(E + T) * F <br>
(T + T) * F <br>
(F + T) * F <br>
(a + F) * F <br>
(a + a) * F <br>
(a + a) * a <br>
## Sample Input: 
a * a * <br>
## Sample Output: 
Incorrect Structure <br>
