# Objective

Experiment to find out what happens when `printf`'s argument string contains *\c*, where *c* is some character not listed above.

## Result

```sh
exercise2.c: In function ‘main’:
exercise2.c:6:12: warning: unknown escape sequence: '\c'
     printf("\c");
            ^~~~
```