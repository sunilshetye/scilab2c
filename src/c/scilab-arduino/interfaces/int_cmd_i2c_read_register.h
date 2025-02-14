/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Yash Pratap Singh Tomar
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_CMD_I2C_READ_REGISTER_H__
#define __INT_CMD_I2C_READ_REGISTER_H__
 
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0d0cmd_i2c_read_registeru160(in1, in2) u8cmd_i2c_read_registers((uint8)in1, (uint8)in2)
									
#define u80d0cmd_i2c_read_registeru160(in1, in2) u8cmd_i2c_read_registers((uint8)in1, (uint8)in2)

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __INT_CMD_I2C_READ_REGISTER_H__ */
