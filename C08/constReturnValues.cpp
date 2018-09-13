//:C08:constReturnValues.cpp
// Constant return by value
// Result cannot be used as an lvalue
class X{
	int i;
	public:
	X(int ii=0);
	void modify();
	void output();
};
X::X(int ii){i=ii;}
void X::modify(){i++;}

X f5(){
	return X();
}

const X f6(){
	return X();
}

void f7(X &x){
	x.modify();
	
}

int main(){
	f5()=X(1);//程序运行时会先运行X(1),然后运行f5(),每次运行f5()都会重新定义一个对象,所以此赋值语句没有效果.
	f5().modify();
}
