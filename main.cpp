#include <cassert>
#include <iostream>

// C++14
auto f() noexcept 
{
  return "Hello world\n";
}

int main()
{
  for (int i=0; i!=10; ++i)
  {
    //Allocate memory here
    int * const p = new int;

    assert(p);
    if (!p) return 1; //Just to use p, will never happen

    //delete p; //Oop, forgotten!
  }
  std::cout << f() << '\n';
}
