/*
	Author: Leon Grell
	For testing purposes only
*/

#include "LinkedList.h"
#include <iostream>

int main(){
  LinkedList *list = new LinkedList();

  list->append("NUMBER 1");
  list->append("NUMBER 2");
  list->append("NUMBER 3");
  list->append("NUMBER 4");

  list->insert("INSERT 1", 1);
  list->insert("INSERT 3", 3);

  list->visit_all([](const char *t){std::cout << "ITEM: " << t << std::endl;});

  std::cout << "REMOVES: " <<std::endl;
  list->remove(0);
  list->visit_all([](const char *t){std::cout << "ITEM: " << t << std::endl;});
  std::cout << "First: " << list->first() << std::endl;
  std::cout << "Last: " << list->last() << std::endl;

  std::cout << list->get(4) << std::endl;

  std::cout << list->index_of("NUMBER 3") << std::endl;
}
