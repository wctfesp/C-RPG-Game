#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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

  printf("Hello %s\n", name);

  sleep(1);

  int choice;

  printf("Please choose a difficulty, 1=easy 2=medium 3=hard: \n");
  scanf("%d", &choice);

  if (choice == 1){
  printf("\nWe need you to fight %d monsters nearby.\n", easy);
  sleep(1);
  
  int attack;
  int easy_health = 100;
  int player_health = 100;

  // this is going to be the section for the easy enemy attack
  int easy_high = 10;
  int easy_low = 6;

 // printf("A monster appeared!\nChoose your attack:\n1 = Sword\n2= Potion\n3 = Kick\n");
  
  while (easy_health >= 1){
    printf("\nA monster appeared!\nChoose your attack:\n1 = Sword\n2= Potion\n3 = Kick\n\n");
    scanf("%d", &attack);
      if (attack == 1){
        easy_health = easy_health - sword;
        printf("\nEnemy's Health: %d\n", easy_health);
      }
      if (attack == 2){
        if (player_health >= 100){
          printf("\nSorry, you're already at max health and can't heal no more.\n");
        }
        if (player_health <=99){
          player_health = player_health + potion;
          printf("\nYour Health: %d\n", player_health);
        }
      }
      if (attack == 3){
        easy_health = easy_health - kick;
        printf("\nEnemy's Health: %d\n", easy_health);
      }

      if (easy_health <= 0){
        printf("Congrats on Defeating the Enemy!\n");
      }

      int value = rand() % (easy_high - easy_low + 1) + easy_low;
      player_health = player_health - value;
      sleep(0.5);
      printf("\nThe Enemy Dealt %d damage!\n", value);
      printf("Your Health: %d\n", player_health);
      sleep(0.5);
    }

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
