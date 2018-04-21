#define CTEST_MAIN

#include <functions.h>
#include <ctest.h>

//CORRECT
CTEST (P_figure, Correct_p_forward)
{
char k[5], A[9][9];
k[0]='h';
k[1]='7';
k[2]='-';
k[3]='h';
k[4]='5';  

for (int i=0;i<9;i++)
{
	for(int j=0; j<9;j++)
	{
		A[i][j]=32;
	}
}
A[7][8]='p';
A[5][8]=32;
int result = p_forward(k,A);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (P_figure, Correct_p_hack)
{
char k[5], A[9][9];
k[0]='h';
k[1]='7';
k[2]='-';
k[3]='g';
k[4]='6';  
for (int i=0;i<9;i++)
{
	for(int j=0; j<9;j++)
	{
		A[i][j]=32;
	}
}
A[7][8]='p';
A[6][7]='R';
int result = p_hack(k,A);
int expected = 0;
ASSERT_EQUAL(expected,result);
}

CTEST (P_figure, Correct_P_forward)
{
char k[5], A[9][9];
k[0]='h';
k[1]='2';
k[2]='-';
k[3]='h';
k[4]='4';  
for (int i=0;i<9;i++)
{
	for(int j=0; j<9;j++)
	{
		A[i][j]=32;
	}
}
A[4][8]=32;
A[2][8]='P';
int result = P_forward(k,A);
int expected = 0;
ASSERT_EQUAL(expected,result);
}
CTEST (P_figure, Correct_P_hack)
{
char k[5], A[9][9];
k[0]='h';
k[1]='2';
k[2]='-';
k[3]='g';
k[4]='3';  
for (int i=0;i<9;i++)
{
	for(int j=0; j<9;j++)
	{
		A[i][j]=32;
	}
}
A[2][8]='P';
A[3][7]='r';
int result = P_hack(k,A);
int expected = 0;
ASSERT_EQUAL(expected,result);
}


//INCORRECT
CTEST (P_figure, Incorrect_p_forward)
{
char k[5], A[9][9];
k[0]='h';
k[1]='7';
k[2]='-';
k[3]='h';
k[4]='5';  

for (int i=0;i<9;i++)
{
	for(int j=0; j<9;j++)
	{
		A[i][j]=32;
	}
}
A[7][8]='h';
A[5][8]='R';
int result = p_forward(k,A);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (P_figure, Incorrect_p_hack)
{
char k[5], A[9][9];
k[0]='h';
k[1]='7';
k[2]='-';
k[3]='g';
k[4]='8';  
for (int i=0;i<9;i++)
{
	for(int j=0; j<9;j++)
	{
		A[i][j]=32;
	}
}
A[7][8]='p';
A[6][7]='R';
int result = p_hack(k,A);
int expected = 1;
ASSERT_EQUAL(expected,result);
}

CTEST (P_figure, Incorrect_P_forward)
{
char k[5], A[9][9];
k[0]='h';
k[1]='2';
k[2]='-';
k[3]='g';
k[4]='4';  
for (int i=0;i<9;i++)
{
	for(int j=0; j<9;j++)
	{
		A[i][j]=32;
	}
}
A[4][8]=32;
A[2][8]='R';
int result = P_forward(k,A);
int expected = 1;
ASSERT_EQUAL(expected,result);
}
CTEST (P_figure, Incorrect_P_hack)
{
char k[5], A[9][9];
k[0]='h';
k[1]='2';
k[2]='-';
k[3]='g';
k[4]='3';  
for (int i=0;i<9;i++)
{
	for(int j=0; j<9;j++)
	{
		A[i][j]=32;
	}
}
A[2][8]='P';
A[3][7]='R';
int result = P_hack(k,A);
int expected = 1;
ASSERT_EQUAL(expected,result);
}


int main(int argc, const char** argv) 
{
    return ctest_main(argc, argv);
}

