/* Filename: frac.h
Maria A. Erazo 
Edwin Ramos 
agosto 19 de 2013  
	This file contains the class Fraction with its private 
and public parts  
*/
#ifndef FRACTION
# define FRACTION
class Fraction{

	private:
		int denom;
		int num;

	public:
		Fraction();

		int getDenom();
		void setDenom(int);
	
		int getNum();
		void setNum(int);
	
		void print();
		Fraction add(Fraction);
		Fraction sub(Fraction);
		Fraction mul(Fraction);
		Fraction div(Fraction);
		bool great(Fraction); 	 
		void reduce(); 
};

#endif
