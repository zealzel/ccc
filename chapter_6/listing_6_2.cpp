#include <cstdio>

template <typename X, typename Y, typename Z>
X my_template_function(Y arg1, Z arg2) {
  // 一個簡單的示例實現
  return static_cast<X>(arg1) + static_cast<X>(arg2);
}

int main() {
  printf("Hello, template function\n");
  int x = my_template_function<int, int, double>(1, 3.1212);
  printf("Result: %d\n", x);
  return 0;
}

