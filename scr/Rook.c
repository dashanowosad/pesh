
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int Rook (char k[5], char A[9][9])
{
int flag1;
int i,j,m,n,t,e,p,q,o,h=0;
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
			
			if((k[0]==m)&&(k[1]==i)&&(k[3]==n)&&(k[4]==j)&&(A[p][t]=='R')&&((A[q][e]=='r')||(A[q][e]=='h')||(A[q][e]=='q')||(A[q][e]=='k')||(A[q][e]=='e')||(A[q][e]=='p')||(A[q][e]==32))&& ((i==j)||(m==n))) 
{
if(p>q) {for(o=p-1;o>q;o--) {if(A[o][t]==32) h++; if((p-q)==(h+1)) {A[q][e]=A[p][t]; A[p][t]=32;  system("clear"); flag1=0;}}}
else if(p<q) {for(o=p+1;o<q;o++) {if(A[o][t]==32) h++; if((q-p)==(h+1)) {A[q][e]=A[p][t]; A[p][t]=32; system("clear"); flag1=0;}}}
else if(t>e) {for(o=t-1;o>e;o--) {if(A[p][o]==32) h++; if((t-e)==(h+1)) {A[q][e]=A[p][t]; A[p][t]=32; system("clear"); flag1=0;}}}
else if(t<e) {for(o=t+1;o<e;o++) {if(A[p][o]==32) h++; if((e-t)==(h+1)) {A[q][e]=A[p][t]; A[p][t]=32; system("clear"); flag1=0;}}}
}

			}
		}
	}
}
if (flag1!=0) return 1;
else return 0;
}

