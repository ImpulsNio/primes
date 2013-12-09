// ====================================================
// Primes.cpp
// ====================================================

#include "primes.hpp"
#include <list>

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

bool Primes::is_cyclic(const unsigned int PRIME)
{
  return false;
}
