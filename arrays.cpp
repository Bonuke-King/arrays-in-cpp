#include <iostream>
#include <string.h>
using namespace std;

//loop through an array
int main()
{
string cars [5] ={"Volvo", "BMW", "Ford","Mazda","Tesla"};

for (int i =0; i<5; i++)
{cout << cars[i] << "\n";}



int myNumber[5]={10,20,30,40,50};
for (int z: myNumber)
{cout <<z<<endl;}

//Omit array size


/*string names[]={ "Bonuke","Nancy","Moses","Enoch"};
for (int q=0; q<5;q++)
{cout << names[q]<<endl;}

cout <<"Enter your first name Nancy"<<endl;
cin >> names [3];

for (int n=0 ; n<3; n++)
{cout << names [n]<<endl;}
*/

//GET THE SIZE of an array
cout << endl <<endl;
int myNum [] ={20,400,5,48,939,9494,883,8383,3883};
//this will always return the size of a type in bytes since int have 4 bytes each so it will be 4xthe number of arrays.
cout <<"This is the size in bytes;"<<endl;
cout <<sizeof(myNum);

//to find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains
int getArrayLength =sizeof(myNum)/sizeof (int);
cout <<"This is the size of an array"<<endl;
cout <<getArrayLength;

//LOOP THROUGH an Array with sizeof()


//it is better to write the code this design
cout << endl << endl<< endl;
int nums [] ={10,39,404,50,232,45,4,5,66,7};
for (int c=0; c<sizeof(nums)/sizeof(int); c++)
{
    cout << nums [c] <<endl;
}

//MULTI-Dimensional arrays
//to define the variable type, specify the name of the array followed by square
//brackets which specify how many elements the main array has, followed by another 
//set of square brackets which indicates how many elements the sub- arrays have

string letters [2] [4]= {
{ "A", "B", "C", "D"},
{"E", "F", "G", "H"}

};
cout << letters [0][2]<<endl <<endl; //outputs "C"
for (int w=0; w<2;w++)
{for (int f=0;f<4;f++  )
{
    cout << letters [w][f] << endl;
} 

}

return 0;
}





























