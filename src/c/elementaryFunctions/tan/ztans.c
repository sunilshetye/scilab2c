/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *  Copyright (C) Bruno Pincon
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

/*
  ALGORITHM
   based on the formula :

                    0.5 sin(2 xr) +  i 0.5 sinh(2 xi)
   tan(xr + i xi) = ---------------------------------
                        cos(xr)^2  + sinh(xi)^2

   noting  d = cos(xr)^2 + sinh(xi)^2, we have :

           yr = 0.5 * sin(2 * xr) / d       (1)

           yi = 0.5 * sinh(2 * xi) / d      (2)

   to avoid spurious overflows in computing yi with
   formula (2) (which results in NaN for yi)
   we use also the following formula :

           yi = sign(xi)   when |xi| > LIM  (3)

   Explanations for (3) :

   we have d = sinh(xi)^2 ( 1 + (cos(xr)/sinh(xi))^2 ),
   so when :

      (cos(xr)/sinh(xi))^2 < epsm   ( epsm = max relative error
                                     for coding a real in a f.p.
                                     number set F(b,p,emin,emax)
                                        epsm = 0.5 b^(1-p) )
   which is forced  when :

       1/sinh(xi)^2 < epsm   (4)
   <=> |xi| > asinh(1/sqrt(epsm)) (= 19.06... in ieee 754 double)

   sinh(xi)^2 is a good approximation for d (relative to the f.p.
   arithmetic used) and then yr may be approximate with :

    yr = cosh(xi)/sinh(xi)
       = sign(xi) (1 + exp(-2 |xi|))/(1 - exp(-2|xi|))
       = sign(xi) (1 + 2 u + 2 u^2 + 2 u^3 + ...)

   with u = exp(-2 |xi|)). Now when :

       2 exp(-2|xi|) < epsm  (2)
   <=> |xi| > 0.5 * log(2/epsm) (= 18.71... in ieee 754 double)

   sign(xi)  is a good approximation for yr.

   Constraint (1) is stronger than (2) and we take finaly

   LIM = 1 + log(2/sqrt(epsm))

   (log(2/sqrt(epsm)) being very near asinh(1/sqrt(epsm))

AUTHOR
   Bruno Pincon <Bruno.Pincon@iecn.u-nancy.fr>
*/

#include <math.h>
#include "lapack.h"
#include "tan.h"
#include "sqrt.h"
#include "cos.h"
#include "sinh.h"
#include "sin.h"
#include "log.h"
#include "abs.h"

#define localSign(x) x >= 0 ? 1.0 : -1.0

doubleComplex		ztans(doubleComplex z) {
  double Temp = 0;
  double Lim = 1 + dlogs(2.0 / dsqrts( getRelativeMachinePrecision()));
  double RealIn = zreals(z);
  double ImagIn = zimags(z);
  double RealOut = 0;
  double ImagOut = 0;

  Temp = pow(dcoss(RealIn), 2) + pow(dsinhs(ImagIn), 2);
  RealOut = 0.5 * dsins(2 * RealIn) / Temp;
  if(dabss(ImagIn) < Lim)
    {
      ImagOut = 0.5 * dsinhs(2 * ImagIn) / Temp;
    }
  else
    {
      ImagOut = localSign(ImagIn);
    }

  return DoubleComplex(RealOut, ImagOut);
}
