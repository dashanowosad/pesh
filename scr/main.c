
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"




int main()
{
char A[9][9],k[5];
int i,j,z1=0,z2=0, flag1=0;
A[1][1]='R';
A[1][2]='H';
A[1][3]='E';
A[1][4]='Q';
A[1][5]='K';
A[1][6]='E';
A[1][7]='H';
A[1][8]='R';

A[2][1]='P';
A[2][2]='P';
A[2][3]='P';
A[2][4]='P';
A[2][5]='P';
A[2][6]='P';
A[2][7]='P';
A[2][8]='P';

for (i=3;i<=6;i++)
{
	for(j=0;j<=9;j++)
	{
		A[i][j]=32; 
	}
}


A[8][1]='r';
A[8][2]='h';
A[8][3]='e';
A[8][4]='q';
A[8][5]='k';
A[8][6]='e';
A[8][7]='h';
A[8][8]='r';

A[7][1]='p';
A[7][2]='p';
A[7][3]='p';
A[7][4]='p';
A[7][5]='p';
A[7][6]='p';
A[7][7]='p';
A[7][8]='p';


printf("1 | %c | %c | %c | %c | %c | %c | %c | %c |",A[1][1],A[1][2],A[1][3],A[1][4],A[1][5],A[1][6],A[1][7],A[1][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|");
printf("\n");
printf("2 | %c | %c | %c | %c | %c | %c | %c | %c |",A[2][1],A[2][2],A[2][3],A[2][4],A[2][5],A[2][6],A[2][7],A[2][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("3 | %c | %c | %c | %c | %c | %c | %c | %c |",A[3][1],A[3][2],A[3][3],A[3][4],A[3][5],A[3][6],A[3][7],A[3][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("4 | %c | %c | %c | %c | %c | %c | %c | %c |",A[4][1],A[4][2],A[4][3],A[4][4],A[4][5],A[4][6],A[4][7],A[4][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("5 | %c | %c | %c | %c | %c | %c | %c | %c |",A[5][1],A[5][2],A[5][3],A[5][4],A[5][5],A[5][6],A[5][7],A[5][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("6 | %c | %c | %c | %c | %c | %c | %c | %c |",A[6][1],A[6][2],A[6][3],A[6][4],A[6][5],A[6][6],A[6][7],A[6][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("7 | %c | %c | %c | %c | %c | %c | %c | %c |",A[7][1],A[7][2],A[7][3],A[7][4],A[7][5],A[7][6],A[7][7],A[7][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("8 | %c | %c | %c | %c | %c | %c | %c | %c |",A[8][1],A[8][2],A[8][3],A[8][4],A[8][5],A[8][6],A[8][7],A[8][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("\n");
printf("\n");

while (1)
{

if (flag1==0) printf("Ход маленьких букв\n");
else if (flag1==1) printf("Ход больших букв\n");
for(i=0;i<=5;i++) 
{
k[i]=getchar();

}



z1=p_forward(k,A);
z2=p_hack(k,A);
if((z1!=0)||(z2!=0)) printf("hfhuohwfa");


printf("1 | %c | %c | %c | %c | %c | %c | %c | %c |",A[1][1],A[1][2],A[1][3],A[1][4],A[1][5],A[1][6],A[1][7],A[1][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|");
printf("\n");
printf("2 | %c | %c | %c | %c | %c | %c | %c | %c |",A[2][1],A[2][2],A[2][3],A[2][4],A[2][5],A[2][6],A[2][7],A[2][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("3 | %c | %c | %c | %c | %c | %c | %c | %c |",A[3][1],A[3][2],A[3][3],A[3][4],A[3][5],A[3][6],A[3][7],A[3][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("4 | %c | %c | %c | %c | %c | %c | %c | %c |",A[4][1],A[4][2],A[4][3],A[4][4],A[4][5],A[4][6],A[4][7],A[4][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("5 | %c | %c | %c | %c | %c | %c | %c | %c |",A[5][1],A[5][2],A[5][3],A[5][4],A[5][5],A[5][6],A[5][7],A[5][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("6 | %c | %c | %c | %c | %c | %c | %c | %c |",A[6][1],A[6][2],A[6][3],A[6][4],A[6][5],A[6][6],A[6][7],A[6][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("7 | %c | %c | %c | %c | %c | %c | %c | %c |",A[7][1],A[7][2],A[7][3],A[7][4],A[7][5],A[7][6],A[7][7],A[7][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("8 | %c | %c | %c | %c | %c | %c | %c | %c |",A[8][1],A[8][2],A[8][3],A[8][4],A[8][5],A[8][6],A[8][7],A[8][8]);
printf("\n");
printf("  |---|---|---|---|---|---|---|---|\n");
printf("\n");
printf("\n");


}

return 0;
}

