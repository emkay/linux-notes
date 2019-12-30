#include "../dbg.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("hello, world\n");
  debug("hello, world\n");
  log_info("what the info!\n");
  log_warn("what the warn!\n");
  log_err("uh oh!\n");
  return 0;
}
