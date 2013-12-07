#include "primes.hpp"

using namespace std;

int main(int argc, char **argv)
{
  cout << "argc: " << argc << endl;
  for(int i = 0; i < argc; i ++)
    cout << "argv[" << i << "]: " << argv[i] << endl;

  unsigned int num_primes = 0;
  for(unsigned int i = 1; i <= 100000000; i++)
  {
    if(i % 10000000 == 0)
      cout << "Checkt up to: " << i << endl;
    if(Primes.is_prime(i))
      {
	num_primes++;
	//cout << i << endl;
      }
  }
  cout << "Primes found: " << num_primes << endl;

  return 0;
}
