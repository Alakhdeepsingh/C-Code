#include <stdio.h>

void call_by_reference(int *y) {
printf("Inside call_by_reference y = %d before adding 20.\n", *y);
(*y) += 20;
printf("Inside call_by_reference y = %d after adding 20.\n", *y);
}

int main() {
int b=10;

printf("b = %d before function call_by_reference.\n", b);
call_by_reference(&b);
printf("b = %d after function call_by_reference.\n", b);

return 0;
}

Output:

b = 20 before function call_by_reference.

Inside call_by_reference y = 20 before adding 10.

Inside call_by_reference y = 20 after adding 20.
b = 20 after function call_by_reference
