#include "logtic.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void list_making() {
  struct todo *head;
  struct todo *one = NULL;
  struct todo *two = NULL;
  struct todo *three = NULL;

  one = malloc(sizeof(struct todo));
  two = malloc(sizeof(struct todo));
  three = malloc(sizeof(struct todo));

  char input[1000];
  printf("Enter todo:");
  scanf("%s", input);
  int n = strlen(input);

  if (n > 1000) {
    while (n > 1000) {
      printf("Sorry to big of an input\n");
      printf("Enter todo:");
      scanf("Enter todo: %s", input);
      int n = strlen(input);
    }
  }

  char input2[1000];
  printf("Enter todo:");
  scanf("%s", input2);
  int n2 = strlen(input2);

  if (n2 > 1000) {
    while (n2 > 1000) {
      printf("Sorry to big of an input\n");
      printf("Enter todo:");
      scanf("Enter todo: %s", input2);
      int n2 = strlen(input);
    }
  }

  char input3[1000];
  printf("Enter todo:");
  scanf("%s", input3);
  int n3 = strlen(input3);

  if (n3 > 1000) {
    while (n3 > 1000) {
      printf("Sorry to big of an input\n");
      printf("Enter todo:");
      scanf("Enter todo: %s", input3);
      int n3 = strlen(input3);
    }
  }

  strcpy(one->list, input);
  strcpy(two->list, input2);
  strcpy(three->list, input3);

  one->next = two;
  two->next = three;
  three->next = NULL;

  head = one;
  print_list(head);
}

void print_list(struct todo *ptr) {
  while (ptr != NULL) {
    printf("%s", ptr->list);
    ptr = ptr->next;
  }
}
