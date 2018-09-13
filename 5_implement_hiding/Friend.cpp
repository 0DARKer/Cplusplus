#include<iostream>
using namespace std;
struct X;

struct Y{
    void f(X*);
};
void Y::f(X* x){
    x->i=47;
}
struct Z{
    private:
    int j;
    public:
    void initialize();
    void g(X* x);
};
void Z::initialize(){
    j=99;
}
void Z::g(X*x){
    x->i+=j;
}
void h(){
    X x;
    x.i=100;
}
int main(){
    X x;
    Z z;
    z.g(&x);
}