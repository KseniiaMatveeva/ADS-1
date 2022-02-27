// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value == 0 && value == 1) {
    return false;
  } else if (value != 0 && value != 1) {
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
    if (k = 1) {
      return 2;
    } else if (k < n) {
      if (checkPrime(value)) {
        k++;
        value++;
      } else {
        value++;
      } else if (k = n) {
        return value;
      }
    }
  }
  return value;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  uint64_t value2 = value + 1;
  while (checkPrime(value2) == false) {
    value2 = value2 + 1;
  }
  return value2;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
  uint64_t value = 0;
  while (value < hbound) {
    if (checkPrime(value)) {
      sum = sum + value;
      value = value + 1;
    } else {
      value = value + 1;
    }
  }
  return sum;
}
