#include "iter.hpp"

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int digits[] = { 0, 1, 2, 3, 4 };
  std::string names[] = { "Katrin", "Oleg", "Dragon"};

  Awesome a[5];

  iter(digits, sizeof(digits) / sizeof(digits[0]), print<const int>);
  iter(names, sizeof(names) / sizeof(names[0]), print<std::string>);
  iter(a, sizeof(a) / sizeof(a[0]), print<Awesome>);

  return 0;
}
