#include <stdio.h>
#include "toeplitz.h"
#include "doubleComplex.h"
#include "stdlib.h"
#include "string.h"
#include "cat.h"


/*Function to build a Toeplitz Matrix for inputs of DoubleComplex datatype*/


void ztoeplitza(doubleComplex* inp1,int size1,doubleComplex* inp2,int size2,doubleComplex* oup)
{
    if ((zreals(inp1[0])!=zreals(inp2[0]))&&(zimags(inp1[0])!=zimags(inp2[0])))
    {
        printf("Error!The first elements of the Vectors are not equal.");	// First element of both input vectors must be equal for Toeplitz.
        return;
    }
    int i, j;

    for(i=0;i<size1*size2;i++) oup[i] = 0;	// Initializing the output matrix with zeros.

    for (i = 0; i<size1; i++)
    {
        for (j = 0; j<size2; j++)
        {
            oup[j*size1] = inp2[j];		// Elements of the second input vector are copied to the first row of the Toeplitx Matrix.
        }
        oup[i] = inp1[i];			// Elements of the first input vector are copied to the first column of the Toeplitx Matrix.
    }
    for (i = size2+1; i<size1*size2; i++)	// Loop to build the rest of the Toeplitz matrix.
    {
        if (zreals(oup[i]) == 0 && zimags(oup[i]) == 0)
        oup[i] = oup[i-size2-1];
    }	
}
