#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int Elephant (char k[5], char A[9][9])
{
int flag1;
int i,j,m,n,t,e,p,q;
for(m=97;m<=104;m++)
{
	for(i=49;i<57;i++)
	{
		for(n=97;n<=104;n++)
		{
			for(j=49;j<57;j++)
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
			
			if (i==49) p=1; 
			else if (i==50) p=2;
			else if (i==51) p=3;
			else if (i==52) p=4;
			else if (i==53) p=5;
			else if (i==54) p=6;
			else if (i==55) p=7;
			else if (i==56) p=8;
			
			if (j==49) q=1; 
			else if (j==50) q=2;
			else if (j==51) q=3;
			else if (j==52) q=4;
			else if (j==53) q=5;
			else if (j==54) q=6;
			else if (j==55) q=7;
			else if (j==56) q=8;
			
			if((k[0]==m)&&(k[1]==i)&&(k[3]==n)&&(k[4]==j)&&(A[p][t]=='E')&&((A[q][e]=='r')||(A[q][e]=='h')||(A[q][e]=='q')||(A[q][e]=='k')||(A[q][e]=='e')||(A[q][e]=='p')||(A[q][e]==32))&& ((p-t==5)||(p-e==5)||(q-t==5)||(q-e==5)||(t-j==5)||(t-p==5)||(e-q==5)||(e-p==5)||(p-t==4)||(p-e==4)||(q-t==4)||(q-e==4)||(t-j==4)||(t-p==4)||(e-q==4)||(e-p==4)||(p-t==3)||(p-e==3)||(q-t==3)||(q-e==3)||(t-j==3)||(t-p==3)||(e-q==3)||(e-p==3)||(p-t==2)||(p-e==2)||(q-t==2)||(q-e==2)||(t-j==2)||(t-p==2)||(e-q==2)||(e-p==2)||(p-t==1)||(p-e==1)||(q-t==1)||(q-e==1)||(t-j==1)||(t-p==1)||(e-q==1)||(e-p==1))) {A[q][e]=A[p][t]; A[p][t]=32;  system("clear"); flag1=0;}

			}
		}
	}
}
if (flag1!=0) return 1;
else return 0;
}
