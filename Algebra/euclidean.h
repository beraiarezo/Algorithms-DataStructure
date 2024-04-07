#ifndef EUCLIDEAN_H
#define EUCLIDEAN_H

int recursiveGcd(int a, int b) {
  return b ? recursiveGcd(b, a%b) : a;
}

int linearGcd(int a, int b) {
  while(b) {
    a %= b;
    std::swap(a, b);
  }
  return a;
}

#endif
