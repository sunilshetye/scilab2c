 /*This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/



#ifndef __INT_NANMAX_H__
#define __INT_NANMAX_H__

#define d2nanmaxd0(in1, size)                                   dnanmaxa(in1,size[0]* size[1])
#define d2nanmaxd0d2(in1, size, out)                             dnanmax1a(in1,size[0], size[1], out)
#define d2g2nanmaxd2(in1, size1, in2, size2, out)                 (in2[0]=='r') ? dnanmaxrow1a(in1, size1[0], size1[1], out) : dnanmaxcol1a(in1, size1[0] , size1[1], out)
#define d2g2nanmaxd2d2(in1, size1, in2, size2, out1, out2)                 (in2[0]=='r') ? dnanmaxrowa(in1, size1[0], size1[1], out1, out2) : dnanmaxcola(in1, size1[0] , size1[1], out1, out2)

#define s2nanmaxs0(in1, size)                                   snanmaxa(in1,size[0]* size[1])
#define s2nanmaxs0s2(in1, size, out)                             snanmax1a(in1,size[0], size[1], out)
#define s2g2nanmaxs2(in1, size1, in2, size2, out)                 (in2[0]=='r') ? snanmaxrow1a(in1, size1[0], size1[1], out) : snanmaxcol1a(in1, size1[0] , size1[1], out)
#define s2g2nanmaxs2s2(in1, size1, in2, size2, out1, out2)          (in2[0]=='r') ? snanmaxrowa(in1, size1[0], size1[1], out1, out2) : snanmaxcola(in1, size1[0] , size1[1], out1, out2)

#endif
