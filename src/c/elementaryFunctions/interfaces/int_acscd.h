// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Author: Ashish Kamble
// Email: toolbox@scilab.in
#ifndef __INT_ACSCD_H__
#define __INT_ACSCD_H__

#include "acscd.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0acscdd0(in1) dacscds(in1); 

#define d2acscdd2(in1,in2,in3) dacscda(in1,in2[0]*in2[1],in3);

#define s0acscds0(in1) sacscds(in1); 

#define s2acscds2(in1,in2,in3) sacscda(in1,in2[0]*in2[1],in3);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__ACSCD_H__ */

