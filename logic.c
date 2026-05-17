#include <stdio.h>

int main() {
  int yes = 1, no = 0;

  printf("И (no && no): %d \n", no && no);
  printf("И (yes && no): %d \n", yes && no);
  printf("И (yes && yes): %d \n", yes && yes);
  printf("ИЛИ (no || no): %d \n", no || no);
  printf("ИЛИ (yes || no): %d \n", yes || no);
  printf("ИЛИ (yes || yes): %d \n", yes || yes);
  printf("НЕ (yes !yes): %d %d \n", yes, !yes);
  printf("НЕ (no !no): %d %d \n", no, !no);

  return 0;
}
