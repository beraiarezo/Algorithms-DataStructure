#include "binary-exp.h"

long long recursiveBinPow(long long a, long long b) {
  if(b == 0) return 1;
  long long result = recursivePow(a, b/2);
  if(b % 2) return result * result * a;
  else return result * result;
}

long long linearBinPow(long long a, long long b) {
  long long result = 1;
  while(b) {
    if(b & 1) return result * result * a;
    a *= a;
    b <<= 1;
  }
}
