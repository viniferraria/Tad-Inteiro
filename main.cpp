#include <iostream>
#include "Inteiro.h"

Inteiro:: Inteiro (int	v){
	value=v;
}

Inteiro::~ Inteiro (){}

int	Inteiro::getValue(){	
	return	value;
}

Inteiro Inteiro::suc(){
	Inteiro n(value+1);
	return	n;
}

Inteiro	Inteiro::soma(Inteiro	i){
	Inteiro	s(value+i.getValue());
	return	s;
}

Inteiro Inteiro::minus(Inteiro i){
				Inteiro a(value-i.getValue());
				return	a;
}

Inteiro Inteiro::mult(Inteiro i){
        Inteiro b(value*i.getValue());
        return b;
}

int main(){
  Inteiro X(2);
  Inteiro Y(4);
  Inteiro res1 = X.suc().soma(Y);
  Inteiro res2 = X.soma(Y).suc();
  Inteiro res3 = X.mult(Y);
  Inteiro res4 = Y.minus(X).suc();
  Inteiro res5 = Y.suc().minus(X);
  std::cout << "X: "<< X.getValue() << " Y: " << Y.getValue() << std::endl;
  std::cout << "X.suc + Y: " << res1.getValue() << std::endl;
  std::cout << "X + Y.suc: " << res2.getValue() << std::endl;
  std::cout << "X * Y: " << res3.getValue() << std::endl;
  std::cout << "Y - X.suc: " << res4.getValue() << std::endl;
  std::cout << "Y.suc - X.suc: " << res5.getValue() <<std::endl;
  return 0;
}