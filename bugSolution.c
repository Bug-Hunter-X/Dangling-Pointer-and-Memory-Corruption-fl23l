#include <stdio.h>

int main() {
  int *ptr = malloc(sizeof(int));
  if (ptr == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }
  *ptr = 20;
  printf("%d\n", *ptr);
  free(ptr);
  return 0;
}
