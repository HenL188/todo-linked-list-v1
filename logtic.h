#ifndef LOGTIC_H
#define LOGTIC_H

struct todo {
  char list[1000];
  struct todo *next;
};

void list_making();
void print_list(struct todo *ptr);

#endif
