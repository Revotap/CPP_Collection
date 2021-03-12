/*
	Author: Leon Grell
*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Link.h"

#include <iostream>

class LinkedList{
private:
  Link* first_element;
  Link* last_element;

public:
  LinkedList(){
    first_element = NULL;
    last_element = NULL;
  };
  int append(const char* text);
  int insert(const char* text, int p);
  int remove(int p);
  const char *get(int p);
  int index_of(const char *text);
  const char *first();
  const char *last();
  void visit_all(void (*work)(const char* t));
};

#endif
