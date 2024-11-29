C - printf

rewrite the printf function. printf allows the user to print diffrent types of characters or string depending on the option specified.
```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
```c
Requirements:
* allowed editors vi, vim, emacs
* files compiled on ubuntu 20.04 LTS using gcc -Wall -Werror -Wextra -pedantic -std=gnu89
* A README.md file at the root of the folder of the poject is mandatory
* Code should use the Betty coding style, and will be checked using betty-style.pl and betty-doc.pl
* No global variables
* no more than 5 functions per file
* The prototype of all your functions should be included in your header file called main.h
* All your header files should be include guarded
```
```c
Exemples:
_printf("Negative:[%d]\n", -762534)
output: Negative: -762534.

_printf("String:[%s]\n", "I am a string !");
output: String: [I am a string!]
```
```c
Man page:
man ./_printf.1
```
```c
Testing:
./a.out
```
```c
Flowchart:
https://lucid.app/lucidchart/600839a0-2508-493d-b736-5ec91051b96a/edit?viewport_l[…]1263%2C0_0&invitationId=inv_ea5d2e94-d6a4-458f-9576-c45125b3689f
```
