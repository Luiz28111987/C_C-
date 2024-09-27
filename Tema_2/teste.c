#include <stdio.h>

int* pa, a;

int main() {a = 10; pa = &a; a = 8; printf("%d", a); printf("%d", *pa);}