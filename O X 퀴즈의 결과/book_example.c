#include <stdio.h>

int main() {
  printf("김변수 씨의 답안: ");
  char answer[5];
  scanf("%s", answer);

  printf("문제 점수: ");
  int score[5];
  for (int i = 0; i < 5; i++) {
    scanf("%d", &score[i]);
  }

  printf("문제의 정답: ");
  char correct[5];
  scanf("%s", correct);

  int correct_score = 0;
  for (int i = 0; i < 5; i++) {
    if (answer[i] == correct[i]) {
      correct_score += score[i];
    }
  }

  printf("획득한 점수: %d\n", correct_score);

  return 0;
}