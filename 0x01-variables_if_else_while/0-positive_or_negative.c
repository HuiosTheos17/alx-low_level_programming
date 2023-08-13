#include <stdio.h> #include <stdlib.h> #include <time.h> int main(void) { int n; srand(time(0)); n = rand() - RAND_MAX / 2; printf("%d is %s\n", n, n < 0 ? "negative" : "positive"); return 0; }
