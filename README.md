# compilerScanner
Program Translation Project.
Project 2
Implement scanner for the provided lexical definitions.
The scanner is embedded and thus it will return one token every time it is called. Since the parser is not available yet, we will use a tester program to call the scanner.
Implement the scanner in a separate file with basename "scanner"
For testing purposes, the scanner will be tested using a testing driver implemented in file with basename "testScanner".
Implement your own tester and include as a part of the project. The tester will call for one token at a time and display the token to the screen one per line, including information (descriptive) on what token class, what token instance, and what line, if applicable.
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Invocation:
    scanner [file]
to read from stdin or file file.input1

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Option 3: FSA table + driver
fsaDriver() and fsaTable[][] located in "scanner.c"

6 test files in directory

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

How to implement program:
make to create scanner executable
./scanner to prompt user to enter from keyboard
./scanner < [filename] to direct inout file to scanner exectuable program
./scanner [filename] // without ".input1" suffix in file name

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

FSA table located in scanner.c
