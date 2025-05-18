#include <stdio.h>

int main() {
  char userAnswer[6];
  int point[5];
  char correctAnswer[6];
  int total = 0;

  printf("김변수 씨의 답안: ");
  scanf("%s", userAnswer);

  printf("문제 점수: ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &point[i]);
  }

  printf("문제의 정답: ");
  scanf("%s", correctAnswer);

  for (int i = 0; i < 5; i++) {
    if (userAnswer[i] == correctAnswer[i]) {
      total += point[i];
    }
  }

  printf("획득한 점수: %d\n", total);

  return 0;
}
