// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function cvtimg = CV_GaussianBlur(srcimg,ksize_width,ksize_height,sigma_x,sigma_y,border_type)
// function to blur image using gaussian filter
//
// Calling Sequence
//     cvtimg = CV_GaussianBlur(srcimg,ksize_width,ksize_height,sigma_x,sigma_y,border_type)
//
// Parameters
//     	srcimg : Source image.
//	ksize_width, ksize_height : blurring kernel size. must be odd.
//	sigmaX : Gaussian kernel standard deviation in X direction.
//	sigmaY : Gaussian kernel standard deviation in Y direction; 
//	border_type : border mode used to extrapolate pixels outside of the image.
//
// Description
//		This function can be used for blurring image using gaussian filter. Image can be of any depth and have any no of channels. 
//
//	For sigmaX and sigmaY : if sigmaY is zero, it is set to be equal to sigmaX, if both sigmas are zeros, they are computed from ksize.width and ksize.height , respectively.
//
// 	border_type can be :
//	<itemizedlist>
//	<listitem>BORDER_REPLICATE:     	aaaaaa|abcdefgh|hhhhhhh</listitem>
//	<listitem>BORDER_REFLECT:       	fedcba|abcdefgh|hgfedcb</listitem>
//	<listitem>BORDER_REFLECT_101:   	gfedcb|abcdefgh|gfedcba</listitem>
//	<listitem>BORDER_WRAP:          	cdefgh|abcdefgh|abcdefg</listitem>
//	<listitem>BORDER_CONSTANT:		iiiiii|abcdefgh|iiiiiii</listitem>  
//	</itemizedlist>
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for OpenCV
//
// Examples
//	img = CV_LoadImage('~/test.jpg',0)
//	dst = CV_GaussianBlur(img,3,3,0,0,"BORDER_CONSTANT")
// See also
//     CV_LoadImage CV_Blur, CV_CvtColor
//
// Authors
//     Siddhesh Wani
//

cvtimg = 0

endfunction
