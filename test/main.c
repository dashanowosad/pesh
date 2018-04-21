#define CTEST_MAIN

#include <functions.h>
#include <ctest.h>

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

int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
