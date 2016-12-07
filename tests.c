#include "sha2.h"

void print_error() {
  printf("ERROR!\n");
  exit(1);
}

int main () {
  if(rotate_right(1, 2) != 0x40000000) print_error();
  if(rotate_right(2, 2) != 0x80000000) print_error();
  if(calc_s0(0x80000) != 0x11002) print_error();
  if(calc_s1(0x800000) != 0x2050) print_error();
  if(calc_S0(0x8000000) != 0x2004020) print_error();
  if(calc_S1(0x8000000) != 0x210004) print_error();

  return 0;
}
