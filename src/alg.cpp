// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value == 0 && value == 1); {
    return false;
  } else if (value != 0 && value != 1); {
    for (int i = 2; i < value; i++)
      if (value % i == 0)
        return false;
  } else {
    return true;
  }
  return;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  int i = 0;
  while (i<n) {
    if (value == 0 && value == 1); {
    return 0;
  } else if (value != 0 && value != 1); {
    for (int i = 2; i < value; i++)
      if (value % i == 0)
        return 0;
  } else {
    return i++;
  return;
  }
  return value; 
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
}
