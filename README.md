# pretty-printer

A prettyprinter is a tool that takes program source code as input and outputs the same code,
nicely formatted for readability. In this problem, you will write a prettyprinter for a C-like
language.
The input for your program will be a sequence of \words" on stdin, spanning one or more
lines. The words denote tokens, the \pieces" that make up a program. The words will be
separated from each other by one or more whitespace characters (space, tab, newline). Your
program will take these tokens and arrange them nicely on stdout, according to the following
rules:
   Initially, the code is ush to the left margin (i.e., not indented);
   If the word is ;, print the word and go to the next line;
   If the word is {, print the word, go to the next line, and the following lines will be
indented by one more space than previously;
   If the word is }, it should be printed on its own line, indented one character to the left
of the lines between it and its matching { (i.e., the indentation level will be the same as
the indentation level of the line that contained the matching {), and the following lines
are indented to the same level as this word;
   If the word is //, then the rest of the current line of input is considered a comment, and
must be printed exactly as it is, including spacing;
   Except for comments, all of the tokens on a line should be separated from one another
by exactly one space.

Eg:
 Sample input:
   int f ( int x ) { // This is my function
   int y = x ; y = y + 1 ; return y ; } // This is the END of my function
   int main () { int n = 0 ; while ( n < 10 ) { n = f ( n ) ; } }
Corresponding output:
  int f ( int x ) {
  // This is my function
   int y = x ;
    y = y + 1 ;
   return y ;
    }
// This is the END of my function
int main () {
int n = 0 ;
while ( n < 10 ) {
n = f ( n ) ;
}
}

Your solution must not print any extra whitespace at the end of the line (exception: if a
comment ends with spaces, then you must keep those spaces in your output). However, if
trailing space is the only thing wrong with your program, you can receive partial credit.
You may assume: That all tokens are separated by whitespace. In particular, the special
words {, }, ;, and // will not be \attached" to other tokens, as they can be in C. You may
also assume that each right brace } has a \matching" left brace {.
You may not assume: That the input language is actually C. All you are told is that
the input language uses brace brackets, semicolons, and // comments in a way similar to C,
but subject to those constraints, the input could be anything. So do not assume that any
properties of the C language, beyond what you have been told, will be true for the input.
