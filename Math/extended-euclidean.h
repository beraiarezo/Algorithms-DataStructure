#ifndef EXTENDEDEUCLIDEAN_H
#define EXTENDEDEUCLIDEAN_H

long long recursive_extended_gcd(long long a, long long b, long long & x, long long & y) {
  if(b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  long long x1, y1;
  long long result = recursive_extended_gcd(b, a%b, x1, y1);
  x = y1;
  y = x1 - (y1 * (a/b));
  return result;
}

#endif
