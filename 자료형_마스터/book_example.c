#include <stdio.h>

int main() {
  long long num = 1234567891011;
  // float 로도 충분함
  float num2 = 1.234567f;

  printf("%lld\n", num);
  printf("%f\n", num2);

  return 0;
}