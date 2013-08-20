/* Filename: fracClient.cpp
Maria A. Erazo 
Edwin Ramos 
agosto 19 de 2013  
	This file contains the main file that call the other ones 
*/ 
//All necesary libraries are included 
#include <iostream>
#include "frac.h" //contains the class needed 
#include <cmath>

using namespace std;

//adds fraction of array 
Fraction sumFracArray(Fraction array[],int size){
	Fraction sum; //variable created 
	//starts cicle from 0 until size 
        for(int k=0;k<size;k++){
                sum.add(array[k]); //stores values 
                sum.reduce();
        }
	//return variable 
	return sum;
} 

//function that sorts the array 
void sortArray(Fraction array[], int size){
 	int startScan, maxIndex; //variables are created 
	Fraction  maxValue;

	//starts lop from 0 too size- 1 
	 for (startScan = 0; startScan < (size - 1); startScan++){
		 maxIndex = startScan; //new value given 
		 maxValue = array[startScan]; // value stored  
 
		//lop that starts from sratScan while is less than size 
		for(int index = startScan + 1; index < size; index++){ 
		// the index is max value 
			if (array[index].great(maxValue)){
				 maxValue = array[index]; //the value is stored 
				 maxIndex = index; //index is stored 
 			}
 		}
 			array[maxIndex] = array[startScan]; 
			array[startScan] = maxValue;
	} 
}


//the main part of the program 
int main(){
	//srand is used to create random numbers 
	srand(time(NULL)); 
	
	Fraction qwerty; //variable define 
	
	cout<<qwerty.getNum()<< qwerty.getDenom()<<endl; //display 

	Fraction array[10]; //array of variables type Fraction is created, size ten 
	
	//cicle for starts from 0 and increases until it reaches 9 
	for(int i=0; i<10; i++){
		int temp=1+rand()%9; //creates  random number no greater than 9
		int temp2=1+rand()%9;
		array[i].setDenom(temp); //puts the nnumbers in the array 
		array[i].setNum(temp2);
		cout<<array[i].getNum()<<'/'<<array[i].getDenom()<<endl; //display array 
	}
	
	cout<<endl<<"SORTED"<<endl; //display sorted array 
	sortArray(array, 10); //call function with array and size 
	//create cicle that start at 0 and goes until 9 
	for (int i=0; i<10; i++){
		cout<<array[i].getNum()<<'/'<<array[i].getDenom()<<endl; //display array 
	}

	
return 0;
}
