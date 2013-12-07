// ====================================================
// Primes.cpp
// ====================================================

#include "primes.hpp"

bool Primes::is_prime(const unsigned int NUM)
{
  if((NUM % 2 == 0 && NUM != 2) || NUM < 2)
    return false;

  for(unsigned int i = 3; i*i <= NUM; i+=2)
  {
    if(NUM % i == 0)
      return false;
  }

  return true;
}
