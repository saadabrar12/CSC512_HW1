ReadME
by Samin Yaseer Mahmud 


Compile Instructions:
To compiler the scanner run the following java command 
javac Pair.java RegularExpressions.java Scan.java Scanner.java Token.java TokenNames.java

to execute the scanner run the following command in the terminal:
java Scanner <inputFileName>

An example of the scanner execution is:
java Scanner foo.c

The output will be the generated code with the identifiers starting with cs512
the output file name will be the input file name appended with _gen.c so foo.c will be foo_gen.c

The modified implementation for this scanner is as follows:

I added a isLetter function in RegularExpressions class line: 54. This checks if the character is a-z or A-Z or underscore. I also redefined the function isIdentifier of same class line: 64 that checks if the input string is a letter followed by zero or more letter or digit. For handling comments i have removed the check in line 88 of Scan.java where they were checking if the token contains '//'. Inside RegularExpressions class function isMetaStatement line 170 I have modified this function. Now this returns true on anything after the symbol '//' until it reaches a new line. It stops up to the new line and returns it as a meta statement leaving it as it is. Numbers followed by letters is invalid identifier according to C. This is handled in Scan.java by checking if the current token is None and previous token was Number and lastScannedCharacter is a letter. In this case error is generated. This type of input is not found in the test codes but it is verified by creating new test code.

