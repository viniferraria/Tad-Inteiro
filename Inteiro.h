#ifndef	INTEIRO_H
#define	INTEIRO_H

class	Inteiro{
				
	private:
	  int	value;		

  public:
	  Inteiro(int	v);
		~Inteiro();
		Inteiro	suc();
		Inteiro	soma(Inteiro i);
    Inteiro minus(Inteiro i);
    Inteiro mult(Inteiro i);
    int	getValue();
};
#endif