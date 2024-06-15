#include <stdio.h>

int main(){
  int numberProblems;
  scanf("%d", &numberProblems);
  int s1, s2, s3;
  int sure = 0;
  int solved = 0;
  for (int i = 0; i < numberProblems; i++){
    sure = 0;
    scanf("%d %d %d", &s1, &s2, &s3);
    if (s1 == 1){
      sure++;
    }
    if (s2 == 1){
      sure++;
    }
    if (s3 == 1){
      sure++;
    }
    if (sure >= 2){
      solved++;
    }
  }

  printf("%d", solved);
}