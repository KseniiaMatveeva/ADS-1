// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value == 0 || value == 1) {
    return false;
  } else if (value != 0 || value != 1) {
    for (int i = 2; i < value; i++) {
      if (value % i == 0) {
        return false;
      } else {
          return true;
      }
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  int k = 1;
  uint64_t value = 0;
  while (k <= n) {
    value++;
    if (checkPrime(value)) {
      k++;
    }
  }
  return value;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  value++;
  for (uint64_t i = value; i++); {
    if (checkPrime(i)) {
      return i;
    }
  }
  return i;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
  uint64_t value = 0;
  if (value < hbound) {
    value++;
    if (checkPrime(value)) {
      sum += value;
    }
  }
  return sum;
}
