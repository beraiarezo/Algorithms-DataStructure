#ifndef FIBONACCI_H
#define FIBONACCI_H

int iter_fib(int n) {
  int a = 0;
  int b = 1;
  for(int i=0; i<n; i++) {
    int tmp = a + b;
    a = b;
    b = tmp;
  }
  return a;
}

#endif
