#include <stdio.h>

int main() {
  float korean, english, math, science;
  printf("점수를 입력하세요 (국어 영어 수학 과학): ");
  scanf("%f %f %f %f", &korean, &english, &math, &science);

  float average = (korean + english + math + science) / 4.0;

  printf("평균 점수: %.1f\n", average);

  return 0;
}