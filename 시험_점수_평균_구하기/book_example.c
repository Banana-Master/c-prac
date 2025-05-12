#include <stdio.h>

int main() {
  double korean, english, math, science;
  printf("점수를 입력하세요: ");
  scanf("%lf %lf %lf %lf", &korean, &english, &math, &science);

  double average = (korean + english + math + science) / 4;

  printf("평균 점수: %.1lf\n", average);

  return 0;
}