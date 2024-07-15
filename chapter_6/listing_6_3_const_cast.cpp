#include <cstdio>

void carbon_thaw(const int& encased_solo) {
  auto& hibernation_sick_solo = const_cast<int&>(encased_solo);
  hibernation_sick_solo++;
}

int main() {
  int a = 3;
  printf("Hello, const_cast\n");
  printf("before thaw: %d\n", a);
  carbon_thaw(a);
  printf("after thaw: %d\n", a);
}
