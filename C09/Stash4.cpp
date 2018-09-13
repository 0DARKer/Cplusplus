//: C09:Stash.cpp {O}
#include <iostream>
#include <cassert>
#include "Stash4.h"
using namespace std;
const int increment =100;
int Stash::add(void* element) {
	if(next >=quantity)
		inflate(increment);
	int startBytes = next*size ;
	unsigned char *e =(unsigned char *)element ;
	for(int i=0;i<size ;i++)
		storage[startBytes +i]=e[i];
	next++;
	return (next-1);
}
void Stash::inflate(int increase){
	assert (increase >=0);
	if(increase == 0)return ;
	int newQuantity=quantity+increase ;
    int newBytes = newQuantity*size;
    int oldBytes = quantity*size ;
    unsigned char* b=new unsigned char[newBytes];
    for(int i =0;i<oldBytes;i++)
        b[i]=storage[i];
    delete [](storage);
    storage= b;
    quantity=newquantity;
}///:~

