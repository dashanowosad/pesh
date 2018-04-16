#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
using namespace std;
void horse (char k[5], char A[9][9], int &z7, int &flag1)
{
int i,j,m,n,t,e,p,q;
z7=0;

for(m=97;m<=104;m++)
{
	for((i=49)&&(p=1);(i<=57)&&(p<=8);(i++)&&(p++))
	{
		for(n=97;n<=104;n++)
		{
			for((j=49)&&(q=1);(j<=57)&&(q<=8);(j++)&&(q++))
			{
			if (m==97) t=1;
			else if (m==98) t=2;
			else if (m==99) t=3;
			else if (m==100) t=4;
			else if (m==101) t=5;
			else if (m==102) t=6;
			else if (m==103) t=7;
			else if (m==104) t=8;

			if (n==97) e=1;
			else if (n==98) e=2;
			else if (n==99) e=3;
			else if (n==100) e=4;
			else if (n==101) e=5;
			else if (n==102) e=6;
			else if (n==103) e=7;
			else if (n==104) e=8;
			
			if((k[0]==m)&&(k[1]==i)&&(k[3]==n)&&(k[4]==j)&&(A[p][t]=='h')&&((A[q][e]=='R')||(A[q][e]=='H')||(A[q][e]=='Q')||(A[q][e]=='K')||(A[q][e]=='E')||(A[q][e]=='P')||(A[q][e]==32))&& ((i-j==2)||(j-i==2)||(n-m==2)||(m-n==2))) {A[q][e]=A[p][t]; A[p][t]=32;  system("clear"); flag1=1;}

			}
		}
	}
}
if (flag1!=1) z7=1;
}
