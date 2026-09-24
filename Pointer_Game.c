#include <stdio.h>
#include <unistd.h>

int main(void){

  int sword = 20;
  int potion = 10;
  int kick = 7;

  int levels[] = {10, 20, 30};
  int *ptr = levels;
  int easy = *(ptr + 0);
  int medium = *(ptr + 1);
  int hard = *(ptr + 2);

  char name[50];

  printf("Your Name: ");
  fgets(name, sizeof(name), stdin);

  printf("Hello %s", name);

  sleep(2);

  int choice;

  printf("Please choose a difficulty, 1=easy 2=medium 3=hard: ");
  scanf("%d", &choice);

  if (choice == 1){
  printf("We need you to fight %d monsters nearby.\n", easy);
  }

  if (choice == 2){
    printf("We need you to fight %d monsters nearby.\n", medium);
  }

  if (choice == 3){
    printf("We need you to fight %d monsters nearby.\n", hard);
  }


 // printf("We need you to fight %d monsters nearby please.\n", );


  return 0;
}
