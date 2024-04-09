#ifndef EUCLIDEAN_H
#define EUCLIDEAN_H

long long recursive_gcd(long long a, long long b) {
  return b ? recursive_gcd(b, a%b) : a;
}

long long iter_gcd(long long a, long long b) {
  while(b) {
    a %= b;
    std::swap(a, b);
  }
  return a;
}

#endif
