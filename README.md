# Mini-Compiler project
A simple and elementary "pseudo"-compiler for a predefined programming language. Made using FLEX and Bison.
The compiler does the following :
- Lexical Parsing
- Syntaxical Parsing
- Semantic Parsing
- Translation to quadruples

The compiler does not generate any binary or executable.

## Collaborators :
- Akli Hiba
- Benmoussat Mohammed Mouad: hm_benmoussat@esi.dz
- Cherif Mounir
- Douaa Laib
- Zourane Rima

## Instructions
1. Create the lexical parser using `flex parser.l`
2. Compile the syntaxical parse using `bison -d parser.y`
3. Compile everything using: `gcc parser.tab.c lex.yy.c`
4. To make an analysis using the terminal run `./.a.out` whithout any parameters. Once you have entered your program type `ctrl+d` under linux to insert an EOF chracter (`ctrl+z` under windows).
5. To analyse a program written in a source file, pass its path as an argument. Example:  `./a.out code.txt`


**Note**: There are many example files containing sample programs. Use them to understand the structure of the language.

**IMPORTANT** : The End Of Line character of the source file should be LF (\n) et not CRLF (\r\n).
