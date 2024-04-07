#ifndef EUCLIDEAN_H
#define EUCLIDEAN_H

long long recursive_gcd(long long a, long long b) {
  return b ? recursiveGcd(b, a%b) : a;
}

long long linear_gcd(long long a, long long b) {
  while(b) {
    a %= b;
    std::swap(a, b);
  }
  return a;
}

#endif
