/*
	Author: Leon Grell
*/

#include "LinkedList.h"
#include "Link.h"
#include <cstddef>
#include <iostream>
#include <cstring>

/*Creates a new link objekt, fill it with text and adds it to the end of the list*/
int LinkedList::append(const char* text){
  Link *new_link = new Link(text);
  if(last_element != NULL){
    last_element->changeNext(new_link);
  }
  last_element = new_link;

  if(first_element == NULL){
    first_element = last_element;
  }
  return 1;
}

/*Create a new link object and insert it on position p*/
int LinkedList::insert(const char* text, int p){
  if(first_element == NULL){
    append(text);
    return 1;
  }

  /*find element on p position*/
  Link *l = first_element;

  for(int i = 1; i <= p; i++){
    if(l->getNext() == NULL){
      return append(text);
    } else{
      l = l->getNext();
    }
  }
  Link *new_link = new Link(text);

  if(l->getPrev() != NULL) {
    l->getPrev()->changeNext(new_link);
  }
  l->changePrev(new_link);

  if(p == 0){
    first_element = new_link;
  }

  return 1;
}

/*Removes link element on position p*/
int LinkedList::remove(int p){
  if(first_element == NULL){
    return 0;
  }

  Link *tmp = first_element;
  for(int i = 1; i <= p; i++){
    if(tmp->getNext() == NULL){
      break;
    }else{
      tmp = tmp->getNext();
    }
  }
  if(tmp == first_element){
    first_element = first_element->getNext();
  }
  if(tmp == last_element){
    last_element = last_element->getPrev();
  }
  if(tmp->getPrev() != NULL){
    tmp->getPrev()->changeNext(tmp->getNext());
  }
  if(tmp->getNext() != NULL){
    tmp->getNext()->changePrev(tmp->getPrev());
  }

  return 1;
}

/*Call get() on Link object on position p. Get returns the data stored inside the link object*/
const char *LinkedList::get(int p){
  Link *tmp = first_element;
  for(int i = 1; i <= p; i++){
    if(tmp->getNext() != NULL){
      tmp = tmp->getNext();
    }
  }
  return tmp->get();
}

/*Search the linked list for text. If the text is found return the index of that link*/
int LinkedList::index_of(const char *test){
  Link *tmp = first_element;
  int i = 0;
  while(tmp){
    if(strcmp(tmp->get(), test) == 0){
      return i;
    }
    tmp = tmp->getNext();
    i++;
  }
  return -1;
}

/*Return the data stored in the first link inside the linked list*/
const char* LinkedList::first(){
  return first_element->get();
}

/*Return the data stored in the last link inside the linked list*/
const char* LinkedList::last(){
  return last_element->get();
}

/*Iterate through the linked list and call the function given as parameter for all link objects*/
void LinkedList::visit_all(void (*work)(const char* t)){
  Link *zeiger = first_element;

  while(zeiger){
    work(zeiger->get());
    zeiger = zeiger->getNext();
  }
}
