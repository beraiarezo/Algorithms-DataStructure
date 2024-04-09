#ifndef EUCLIDEAN_LCM
#define EUCLIDEAN_LCM

#include "euclidean.h"

long long lcm(long long a, long long b) {
  return a*b/recursive_gcd(a,b);
}

#endif
