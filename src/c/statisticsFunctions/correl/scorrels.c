#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ones.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "sqrt.h"
#include "sum.h"
#include "correl.h"
#include "matrix.h"
#include "mean.h"

float scorrels (float* inp1, int sr1, int sc1, float* inp2, int sr2, int sc2)
{
    float m1 = 0, m2 = 0, s1 = 0, s2 = 0, diff1[sr1*sc1], diff2[sr2*sc2], sum = 0;
    m1 = smeana(inp1, sr1*sc1);
    m2 = smeana(inp2, sr2*sc2);

    for(int i = 0; i < sr1*sc1; i++)
	diff1[i] = pow(inp1[i] - m1, 2);

    for(int i = 0; i < sr2*sc2; i++)
	diff2[i] = pow(inp2[i] - m2, 2);


    s1 = ssqrts(ssuma(diff1, sr1*sc1));
    s2 = ssqrts(ssuma(diff2, sr2*sc2));

    for(int i = 0; i < sr2*sc2; i++)
	sum += (inp1[i] - m1) * (inp2[i] - m2); 

    return sum / (s1*s2);
}
