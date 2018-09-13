//: C06:Stash2.h
// With constructors &distructors 
#ifndef STASH2_H//include guard
#define STASH2_H//same 
class Stash{
    int size;
    int quantity;
    int next;
    unsigned char* storage;
    void inflate(int increase);
    public :
        Stash(int size );
        ~Stash();
        int add(void *element );
        void *fetch(int index);
        int count();
};
#endif

