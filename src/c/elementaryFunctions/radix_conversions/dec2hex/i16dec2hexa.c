/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Shamik Guha
 Email: toolbox@scilab.in
*/
#include "dec2hex.h"

void i16dec2hexa(int16* in,int size,char* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		i16dec2hexs(in[i],&(out[i*3]));
	}
}
