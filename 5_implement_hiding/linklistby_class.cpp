#include<iostream>
#include<fstream>
using namespace std;
struct node{
    char c;
    struct node *next;
};
struct txt{
    private:
    // friend struct node;
    node *head;
    node *tail;
    public :
    txt();
    int insert_back(char element);
    // int delete_back();
    int insert_front(char element);
    // int delete_front();
    void print_();
};

txt::txt(){
    head=new node;
    head->c=0;
    head->next=head;
    tail=head;
}
int txt::insert_back(char element){
    node * p;
    p=new node ;
    p->c= element;
    p->next=head;
    tail->next=p;
    tail=p;
    return 1; 
}
int txt::insert_front(char element){
    node *p;
    p=new node;
    p->c=element;
    p->next=head->next;
    head->next=p;
    return 1;
}
void txt::print_(){
    node *p;
    p=head->next;
    do{
        cout << p->c;
        p=p->next;
    }while(p!=tail);
}
int main(){
    txt a;
    char b; 
    ifstream fin("/tmp/test.txt");
    while(!fin.eof()){
        fin >> b;
        a.insert_back(b);
    }
    a.print_();
//    getchar();
   getchar();
}