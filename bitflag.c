#include <stdio.h>

int main() {
  int flags = 8;
  flags = flags | 2;

  printf("Debug - %d\n", flags);

  printf("Флаг 1: %s\n", ((flags & 1) > 0) ? "ON" : "OFF");
  printf("Флаг 2: %s\n", ((flags & 2) > 0) ? "ON" : "OFF");
  printf("Флаг 3: %s\n", ((flags & 4) > 0) ? "ON" : "OFF");
  printf("Флаг 4: %s\n\n", ((flags & 8) > 0) ? "ON" : "OFF");

  char mask = 15;
  flags = ~flags & mask;

  printf("Флаг 1: %s\n", ((flags & 1) > 0) ? "ON" : "OFF");
  printf("Флаг 2: %s\n", ((flags & 2) > 0) ? "ON" : "OFF");
  printf("Флаг 3: %s\n", ((flags & 4) > 0) ? "ON" : "OFF");
  printf("Флаг 4: %s\n\n", ((flags & 8) > 0) ? "ON" : "OFF");
  printf("Десятичное число флага равно %d\n", flags);

  flags = flags << 1;

  printf("Десятичное число флага теперь равно %d\n", flags);

  return 0;
}
