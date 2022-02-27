// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value == 0 || value == 1) {
    return false;
  } else if (value > 1) {
    for (int i = 2; i <= (sqrt(value) + 1); i++) {
      if (value % i == 0) {
        return false;
      }
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  int k = 1;
  uint64_t value = 0;
  uint64_t res;
  while (k <= n) {
    value++;
    if (checkPrime(value)) {
      k++;
      res = value;
    }
  }
  return res;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  value++;
  while (1) {
    if (checkPrime(value)) {
      return value;
      break;
    } else {
      value++;
    }
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
  for (uint64_t value = 0; value < hbound; ++value) {
    if (checkPrime(value)) {
      sum = sum + value;
    }
  }
  return sum;
}
