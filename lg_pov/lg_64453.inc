/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20180929 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_64453: windscreen 1 x 6 x 3                                              */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_64453_dot_dat =
union {
// Windscreen  1 x  6 x  3
// Name: 64453.dat
// Author: Magnus Forsberg [MagFors]
// !LDRAW_ORG Part UPDATE 2010-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2010-04-05 [PTadmin] Official Update 2010-01
	object {
		LDX_stud3_dot_dat_in_part
		matrix <-1,0,0,0,-1,0,0,0,1,-40,68,0>
	}
	object {
		LDX_stud3_dot_dat_in_part
		matrix <-1,0,0,0,-1,0,0,0,1,-20,68,0>
	}
	object {
		LDX_stud3_dot_dat_in_part
		matrix <-1,0,0,0,-1,0,0,0,1,0,68,0>
	}
	object {
		LDX_stud3_dot_dat_in_part
		matrix <-1,0,0,0,-1,0,0,0,1,20,68,0>
	}
	object {
		LDX_stud3_dot_dat_in_part
		matrix <-1,0,0,0,-1,0,0,0,1,40,68,0>
	}
// BFC INVERTNEXT
	object {
		LDX_1_dash_4cylc_dot_dat_in_part
		matrix <0,0,-6,0,4,0,-6,0,0,-50,68,0>
	}
// BFC INVERTNEXT
	object {
		LDX_1_dash_4cylc_dot_dat_in_part
		matrix <6,0,0,0,4,0,0,0,-6,50,68,0>
	}
// BFC INVERTNEXT
// BFC INVERTNEXT
	object {
		LDX_1_dash_4ring3_dot_dat_in_part
		matrix <0,0,-2,0,-1,0,2,0,0,50,72,0>
	}
	object {
		LDX_1_dash_4ring4_dot_dat_in_part
		matrix <0,0,-2,0,-1,0,2,0,0,50,72,0>
	}
	object {
		LDX_1_dash_4ring3_dot_dat_in_part
		matrix <-2,0,0,0,-1,0,0,0,-2,-50,72,0>
	}
	object {
		LDX_1_dash_4ring4_dot_dat_in_part
		matrix <-2,0,0,0,-1,0,0,0,-2,-50,72,0>
	}
// // inside bottom
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <0,0,-6,0,4,0,-6,0,0,-50,64,0>
	}
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <6,0,0,0,4,0,0,0,-6,50,64,0>
	}
// // inside
// BFC INVERTNEXT
	object {
		LDX_1_dash_4cylc_dot_dat_in_part
		matrix <0,0,-6,0,60,0,-6,0,0,-50,4,0>
	}
// BFC INVERTNEXT
	object {
		LDX_1_dash_4cylc_dot_dat_in_part
		matrix <6,0,0,0,60,0,0,0,-6,50,4,0>
	}
// // right top
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <10,0,0,0,-1,0,0,0,10,-50,4,0>
	}
	object {
		LDX_1_dash_4cylc_dot_dat_in_part
		matrix <10,0,0,0,4,0,0,0,10,-50,0,0>
	}
// // left top
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <-10,0,0,0,-1,0,0,0,10,50,4,0>
	}
	object {
		LDX_1_dash_4cylc_dot_dat_in_part
		matrix <-10,0,0,0,4,0,0,0,10,50,0,0>
	}
// // top
// // outside
	object {
		LDX_1_dash_4cylc_dot_dat_in_part
		matrix <10,0,0,0,72,0,0,0,-10,50,0,0>
	}
	object {
		LDX_1_dash_4cylc_dot_dat_in_part
		matrix <0,0,-10,0,72,0,-10,0,0,-50,0,0>
	}
// // studs
	object {
		LDX_stud2_dot_dat_in_part
		matrix <1,0,0,0,1,0,0,0,1,50,0,0>
	}
	object {
		LDX_stud2_dot_dat_in_part
		matrix <1,0,0,0,1,0,0,0,1,-50,0,0>
	}
	mesh2 {
		vertex_vectors {
			60,
			<-60,0,0>, <-60,0,10>, <-60,72,0>, <-60,72,10>,
			<-56,4,0>, <-56,4,10>, <-56,64,0>, <-56,64,10>,
			<-56,68,0>, <-56,68,6>, <-56,72,0>, <-56,72,6>,
			<-50,0,-10>, <-50,0,0>, <-50,0,10>, <-50,4,-6>,
			<-50,4,0>, <-50,4,10>, <-50,64,-6>, <-50,64,0>,
			<-50,68,-6>, <-50,68,0>, <-50,68,6>, <-50,72,-10>,
			<-50,72,-6>, <-50,72,6>, <-40,0,-6>, <-40,0,0>,
			<-40,4,-6>, <-40,4,0>, <40,0,-6>, <40,0,0>,
			<40,4,-6>, <40,4,0>, <50,0,-10>, <50,0,0>,
			<50,0,10>, <50,4,-6>, <50,4,0>, <50,4,10>,
			<50,64,-6>, <50,64,0>, <50,68,-6>, <50,68,0>,
			<50,68,6>, <50,72,-10>, <50,72,-6>, <50,72,6>,
			<56,4,0>, <56,4,10>, <56,64,0>, <56,64,10>,
			<56,68,0>, <56,68,6>, <56,72,0>, <56,72,6>,
			<60,0,0>, <60,0,10>, <60,72,0>, <60,72,10>
		}
		normal_vectors {
			6,
			<-1,0,0>, <0,-1,0>, <0,0,-1>, <0,0,1>,
			<0,1,0>, <1,0,0>
		}
		face_indices {
			82,
			<21, 43, 42>, <21, 42, 20>, <43, 21, 22>, <43, 22, 44>,
			<44, 22, 25>, <44, 25, 47>, <20, 42, 46>, <20, 46, 24>,
			<11, 25, 22>, <11, 22, 9>, <11, 9, 8>, <11, 8, 10>,
			<22, 21, 8>, <22, 8, 9>, <55, 54, 52>, <55, 52, 53>,
			<55, 53, 44>, <55, 44, 47>, <52, 43, 44>, <52, 44, 53>,
			<46, 24, 23>, <46, 23, 45>, <59, 58, 54>, <59, 54, 55>,
			<11, 10, 2>, <11, 2, 3>, <55, 11, 3>, <55, 3, 59>,
			<7, 51, 59>, <7, 59, 3>, <51, 41, 50>, <6, 19, 7>,
			<7, 19, 41>, <7, 41, 51>, <41, 19, 18>, <41, 18, 40>,
			<18, 28, 32>, <18, 32, 40>, <18, 15, 28>, <32, 37, 40>,
			<6, 4, 5>, <6, 5, 7>, <1, 5, 7>, <1, 7, 3>,
			<48, 50, 51>, <48, 51, 49>, <59, 51, 49>, <59, 49, 57>,
			<17, 16, 4>, <17, 4, 5>, <15, 16, 29>, <15, 29, 28>,
			<1, 14, 17>, <1, 17, 5>, <28, 29, 27>, <28, 27, 26>,
			<0, 13, 14>, <0, 14, 1>, <12, 26, 27>, <12, 27, 13>,
			<48, 38, 39>, <48, 39, 49>, <33, 38, 37>, <33, 37, 32>,
			<49, 39, 36>, <49, 36, 57>, <31, 33, 32>, <31, 32, 30>,
			<36, 35, 56>, <36, 56, 57>, <35, 31, 30>, <35, 30, 34>,
			<28, 32, 30>, <28, 30, 26>, <34, 30, 26>, <34, 26, 12>,
			<2, 0, 1>, <2, 1, 3>, <57, 56, 58>, <57, 58, 59>,
			<23, 45, 34>, <23, 34, 12>
		}
		normal_indices {
			82,
			<1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
			<3, 3, 3>, <3, 3, 3>, <2, 2, 2>, <2, 2, 2>,
			<3, 3, 3>, <3, 3, 3>, <0, 0, 0>, <0, 0, 0>,
			<1, 1, 1>, <1, 1, 1>, <5, 5, 5>, <5, 5, 5>,
			<3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
			<4, 4, 4>, <4, 4, 4>, <1, 1, 1>, <1, 1, 1>,
			<1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
			<2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
			<4, 4, 4>, <4, 4, 4>, <4, 4, 4>, <4, 4, 4>,
			<2, 2, 2>, <2, 2, 2>, <2, 2, 2>, <2, 2, 2>,
			<5, 5, 5>, <5, 5, 5>, <2, 2, 2>, <2, 2, 2>,
			<0, 0, 0>, <0, 0, 0>, <2, 2, 2>, <2, 2, 2>,
			<1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
			<2, 2, 2>, <2, 2, 2>, <0, 0, 0>, <0, 0, 0>,
			<4, 4, 4>, <4, 4, 4>, <4, 4, 4>, <4, 4, 4>,
			<1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
			<2, 2, 2>, <2, 2, 2>, <5, 5, 5>, <5, 5, 5>,
			<4, 4, 4>, <4, 4, 4>, <4, 4, 4>, <4, 4, 4>,
			<3, 3, 3>, <3, 3, 3>, <4, 4, 4>, <4, 4, 4>,
			<5, 5, 5>, <5, 5, 5>, <0, 0, 0>, <0, 0, 0>,
			<3, 3, 3>, <3, 3, 3>
		}
	}
}


#declare lg_64453 = object{
          LDX_64453_dot_dat
          LDXSeamMatrix(120, 76, 20, 0, 34, 0)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
