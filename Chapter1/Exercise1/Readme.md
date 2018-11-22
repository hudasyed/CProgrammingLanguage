# Objective

Run the "hello,world" program on your system. Experiment with leaving out parts of the program, to see what error messages you get.

## Leaving out `#include <stdio.h>`

```sh
exercise1.c:5:5: warning: incompatible implicit declaration of built-in function ‘printf’
exercise1.c:5:5: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
```

## Leaving out `main()`

```sh 
exercise1.c:4:1: error: expected identifier or ‘(’ before ‘{’ token
```

## Leaving out `printf()`

No errors.

## Leaving out `/n`

No line break after hello, world.

## Leaving out leading parenthesis

```sh
exercise1.c: In function ‘main’:
exercise1.c:5:5: error: expected declaration specifiers before ‘printf’
     printf("hello, world");
     ^~~~~~
exercise1.c:6:1: error: expected declaration specifiers before ‘}’ token
 }
 ^
exercise1.c:6:1: error: expected ‘{’ at end of input
```

## Leaving out trailing praenthesis

```sh
exercise1.c: In function ‘main’:
exercise1.c:5:5: error: expected declaration or statement at end of input
     printf("hello, world");
     ^~~~~~
```