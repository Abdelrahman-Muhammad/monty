#include <stdio.h>
#include <stdlib.h>

int push(int *stack, int line_number, char *argument) {
  int value;

  if (argument == NULL) {
    printf("L%d: usage: push integer\n", line_number);
    exit(1);
  }

  value = atoi(argument);
  stack[++stack[0]] = value;

  return 0;
}

void pall(int *stack) {
  int i;

  for (i = stack[0]; i > 0; i--) {
    printf("%d\n", stack[i]);
  }
}

int main() {
  int stack[100];
  int line_number = 1;

  push(stack, line_number++, "1");
  push(stack, line_number++, "2");
  push(stack, line_number++, "3");
  pall(stack);

  return 0;
}
