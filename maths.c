#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
//Trig stands for the trigonometric value
//sqrt stands for the swuare root of the value
//po stands for the power of the value
//pob is the base num
//pop is the power num
//po is b to the power of 2
// ac is -4ac
// di is 2*a
//v value
int a, b , c;
float trig, loga, po , ac , di, v, v1;
int sqr;
int c1;
int value;
char choice;
 	
do {

do {
	printf("Wellcome to the simple math application!\n");
	printf("In this application you can solve your simple math values!\n");

	printf("What did you want to do?!!\n");
	printf("1.Solve Quadratic Equation\n");	
	printf("2.Trigonometric ( Values of any angle)\n");
	printf("3.Square root\n");
	printf("4.The common logaritm\n");
	printf("5.Quit\n");
	printf("Enter Your Choice:");
	scanf(" %d", &c1);

switch (c1)
{ 
//The first case starts here Trig
case (1) : {
	printf("Input The Values Of The Quadratic Eequation By Determining The a, b And c From The Equation\n");
	printf("\n(Eg. 3x^2-2x-12 so the a is 3 the b is -2 and the c is -12)\n");
	
	printf("Enter the value of a:");	
	scanf(" %d", &a);
	printf("\nEnter the value of b:");
	scanf(" %d", &b);
	printf("\nEnter the value of c:");
	scanf(" %d", &c);

po = pow(b,2);
ac = -1*(4*a*c);
di = 2*a;


 if ((sqrt((po)+(ac))) == 0)
{
	puts("***The SYstem Has One Solution***");

v = -1*b/di;
printf("The  Solution Of The Quadratic Equation is %.3f\n", v);
printf("Do You Want To Continue (y/n):");
	scanf(" %c",&choice);
break;
}
 else if  ((sqrt((po)+(ac))) > 0)
{
puts("***The Solution Of The Quadratic Equation ***");

 

v = (-1*(b)+(sqrt((po)+(ac))))/di;

	printf("The First Solution Of The Quadratic Equation is %.2f\n", v);

v1 = (-1*(b)-(sqrt((po)+(ac))))/di;
	printf("The Second Solution Of The Quadratic Equation is %.2f\n", v1);

	printf("The Solution Set Of The Quadratic Equation Is **{%.2f,%.2f}**\n", v , v1);
printf("Do You Want To Continue (y/n):");
	scanf(" %c",&choice);
break;
}
else ((sqrt((po)+(ac))) < 0);
{
printf("*****The System Has No Solution*****\n");
printf("Do You Want To Continue (y/n):");
	scanf(" %c",&choice);
break;
}
case (2) : { 
	printf("Enter the degree of the angle:");
	scanf(" %f", &trig);

	printf("The sin value of the angle  is %.3f\n", sin(trig * 3.141592/180)); 
	printf("The cosine value of the angle is %.3f\n" , cos(trig * 3.141592/180));
	printf("The tangent value of the angle  is %.3f\n" , tan(trig * 3.141592/180));
printf("Do You Want To Continue (y/n):");
	scanf(" %c",&choice);
break;
}
//The second case starts here
case (3) : {
	printf("Enter the number:");
	scanf(" %d", &sqr);
	
	printf("The Square root of the number is %.3f\n", sqrt (sqr));
printf("Do You Want To Continue (y/n):");
	scanf(" %c",&choice);	
break;
}	
case (4) : {
	printf("Enter the Common logarithm number:");
	scanf(" %f", &loga);
	printf("The common log of the number is %.3f\n", log10(loga));	
printf("Do You Want To Continue:");
	scanf(" %c",&choice);
break;
}
case (5): exit(1);
}

}
}


while ( choice == 'y');
}
while (c1 >4);
return 0;
}
