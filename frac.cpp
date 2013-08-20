/* Filename: frac.cpp 
Maria A. Erazo 
Edwin Ramos 
agosto 19 de 2013 
	In this file there are the functions, such as seters and geters,
that belong to the class Fraction.	*/

#include "frac.h" //you include the file frac.h which cntains the class
// open all the other necesary libraries 
#include <iostream> 
#include <cmath>
using namespace std; 

//created the inicializer 
Fraction::Fraction(){
	denom=1;
	num=0;
}

// the getters 
int Fraction::getDenom(){
	return denom;
}

int Fraction::getNum(){
	return num;
}

//the setters 
void Fraction::setNum(int x){
	num=x;
}

void Fraction::setDenom(int x){
	if(x!=0){
		denom=x;
	}


	else{
		cout<<"denom can't be 0 \n";
	}
};

// prints out the fraction 
void Fraction::print(){
	cout<<num<<"/"<<denom;
};

//this funtion adds fractions and recives a variable type Fraction
Fraction Fraction::add(Fraction f){
	Fraction mew; //created variable Fraction 
	//gave value to variables 
	int newDenom=denom*f.getDenom(); //it multiplies both denominators 
	int newNum= (num*f.getDenom())+ (denom*f.getNum()); //it mult. each numerator 
								//by the denominator 
	mew.setDenom(newDenom);	//gives new value to the denominator 
	mew.setNum(newNum); //new value to numerator 
	
	return mew; //returns mew, with both new values 
};
	
//function that subtracts fractions 
Fraction Fraction::sub(Fraction f){
	Fraction mew; //created new variable 
	int newDenom=denom*f.getDenom(); //new denominator is old denom multiplied 
    int newNum= (num*f.getDenom())- (denom*f.getNum()); //new num is each num 
								//mult. by denom the subtrated 
	//new values for variable mew are stored 
	mew.setDenom(newDenom); 
	mew.setNum(newNum);

	return mew; //variable mew is return to main 
};

//function that multiplies 
Fraction Fraction::mul(Fraction f){
	Fraction mew; //new variable is created 
	int newDenom= denom*f.getDenom(); //new denom is old denominators multiplied
	int newNum= (num*f.getDenom())*(denom*f.getNum()); //new num is old nums mult

	//new values are stored 
	mew.setDenom(newDenom);
	mew.setNum(newNum);

	//variable mew is return 
	return mew;
}

//funtion that divides fractions 
Fraction Fraction::div(Fraction f){
	Fraction mew; //new variable is created 
	int newDenom= denom* f.getNum(); //new denom is denom mult by the other 
									//numerator
	int newNum= num* f.getDenom(); //new numerator is num multiplied by the 
								//other denominator 
//the new values for mew are stored 
	mew.setDenom(newDenom); 
	mew.setNum(newNum); 
//mew is return to the main 
	return mew; 
} 

//function tells wich fraction is of higher value 
bool Fraction::great(Fraction f){ 
//variables are turned double then divided num with denom
//then the values are compared 
	if(static_cast<double>(num)/static_cast<double>(denom) > static_cast<double>(f.getNum())/static_cast<double>(f.getDenom())){ 
		return true; //if the first value is bigger then bool is true 
	} 

	else 
		return false; //if not then bool is false 
} 

//this function simplifies a fraction to the minimum form 
void Fraction::reduce(){ 
//it creates a loop that starts at the square root(to find the root reqieres cmath) 
//of the denominator the each time the loop is repeted it dicreases until 
//it reaches one 
	for(int i= static_cast<int>(sqrt(denom)); i>=1; i--){
	//if the reciprocal of both the num and denom when th=divided by
	//the variable is 0
		if (denom%i==0 &&  num%i==0){
			//the new values of denom and num is them divided by i 
			denom/=i; 
			num/=i;
		}
	}
}











 
