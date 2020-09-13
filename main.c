#include <stdio.h>
#include <limits.h>
#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
  
  list_t *tList = list_alloc();
  
  list_print(tList);
  printf("List Length: %d\n\n", list_length(tList));
  
  list_add_to_front(tList, 100);
  list_add_to_front(tList, 50);
  list_add_to_back(tList, 149281);
  list_add_to_back(tList, 1320);
  list_add_to_back(tList, 1010);
  list_add_to_front(tList, 428);
  list_add_at_index(tList, 3, 2);
  
  list_print(tList);
  printf("List Length: %d\n", list_length(tList));
  printf("Index of 3: %d\n", list_get_index_of(tList, 3));
  printf("Index of 1000: %d\n", list_get_index_of(tList, 1000));
  printf("Value at Index 2: %d\n", list_get_elem_at(tList, 2));
  
  printf("Removed %d from back.\n", list_remove_from_back(tList));
  list_print(tList);
  printf("Removed %d from front.\n", list_remove_from_front(tList));
  list_print(tList);
  printf("Removed %d from index 3.\n", list_remove_at_index(tList, 3));
  list_print(tList);
  printf("List Length: %d\n\n", list_length(tList));
  
  int hundredIndex = list_get_index_of(tList, 100);
  if(list_is_in(tList, 100)){
    printf("100 is in list at index %d\n", list_get_index_of(tList, 100));
  }else{
    printf("100 not in list.\n");
  }
  
  int v = list_get_elem_at(tList, hundredIndex);
  if(v == 100){
    printf("100 was found in list.\n");
  }else{
    printf("Get element at error.\n");
  }
  
  list_free(tList);
  
  return 0;
}
