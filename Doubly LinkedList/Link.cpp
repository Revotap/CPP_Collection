#include "Link.h"
#include <cstddef>

Link::Link(const char* text_element, Link* prev_link, Link* next_link) : text{text_element}, prev{prev_link}, next{next_link}{}

Link::Link(const char* text_element, Link* prev_link) : Link(text_element, prev_link, NULL){}

Link::Link(const char* text_element) : Link(text_element, NULL, NULL){}

const char* Link::get() const { return text; }

Link *Link::getNext(){
  return next;
}

Link *Link::getPrev(){
  return prev;
}

void Link::changePrev(Link* n_prev){
  prev = n_prev;
  if(n_prev != NULL){
    prev->next = this;
  }

}

void Link::changeNext(Link* n_next){
  next = n_next;
  if(n_next != NULL){
    next->prev = this;
  }
}
