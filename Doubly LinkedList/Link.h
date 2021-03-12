/*
	Author: Leon Grell
*/

#ifndef LINK_H
#define LINK_H

class Link {
  const char *text;
  Link *prev;
  Link *next;

public:
  Link(const char* text, Link* prev, Link* next);
  Link(const char* text, Link* prev);
  Link(const char* text);
  const char* get() const;
  Link *getNext();
  Link *getPrev();
  void changePrev(Link* n_prev);
  void changeNext(Link* n_next);
};

#endif
