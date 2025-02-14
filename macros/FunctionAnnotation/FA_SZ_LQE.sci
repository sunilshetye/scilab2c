function outsize = FA_SZ_LQE(inval,insz)
//function outsize = FA_SZ_LQE(inval,insz)
// -----------------------------------------------------------------
// Get size of output for lqe function
//
// Input data:
// inval: string specifying the value of input argument.
// insz: string specifying the size of input argument.
//
// Output data:
// outsize: string containing the size for second output argument.
//
// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Siddhesh Wani
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
//

// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),2,2);

	inval = eval(inval)
	insz = eval(insz)
	outsize(1) = string(int(inval));
    outsize(2) = string(insz-int(inval));

endfunction 
