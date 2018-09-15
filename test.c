#include <stdio.h>
#include "include/test.h"

void show_main_argc_argv(int argc, char *argv[]) {
  for (int i = 0; i < argc; ++i) {
    printf("%s\n", argv[i]);
  }
}
