//:C04:CLib.h
//header file for a C-like library
//An array-like entity created at runtime 
typedef struct CStashTag{
  int size ;//size of each space 
  int quantity;//Number of storage spaces 
  int next;//Next empty space 
  //Dynamically allocated array of bytes:
  unsigned char* storage;//引用自身的情况
}CStash;

void initialize(CStash* s ,int size);
void cleanup(CStash* s);
int add(CStash* s,const void* element);
void* fetch(CStash* s,int index);
int count(CStash* s);
void inflate(CStash* s,int increase);
