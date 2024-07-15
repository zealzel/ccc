#include <cstdio>

template <typename X, typename Y, typename Z>
struct MyTemplateClass {
  X foo(Y& y, Z& z);

  private:
};

int main() {
  printf("Hello, template!\n");
  MyTemplateClass<int, float, double> myClass;
}
