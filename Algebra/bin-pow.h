#ifndef BINARYEXP_H
#define BINARYEXP_H

long long recursive_bin_pow(long long a, long long b) {
  if(b == 0) return 1;
  long long result = recursiveBinPow(a, b/2);
  if(b % 2) return result * result * a;
  else return result * result;
}

long long iter_bin_pow(long long a, long long b) {
  long long result = 1;
  while(b > 0) {
    if(b & 1) result = result * a;
    a *= a;
    b >>= 1;
  }
  return result;
}

#endif
