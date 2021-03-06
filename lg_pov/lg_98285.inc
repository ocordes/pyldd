/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20180929 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_98285: hinge plate 2 x 4.5 base with technic pin hole                    */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_98285_dot_dat =
union {
// Hinge Plate  2 x  4.5 Base with Technic Pin Hole
// Name: 98285.dat
// Author: Tim Gould [timgould]
// !LDRAW_ORG Part UPDATE 2012-03
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2012-12-28 [PTadmin] Official Update 2012-03
	object {
		LDX_STUD4H_dot_dat_in_part
		matrix <0,0,1,0,-1,0,-1,0,0,0,4,20>
	}
	object {
		LDX_STUD4H_dot_dat_in_part
		matrix <0,0,1,0,-1,0,-1,0,0,0,4,0>
	}
	object {
		LDX_STUD4H_dot_dat_in_part
		matrix <0,0,1,0,-1,0,-1,0,0,0,4,-20>
	}
// BFC INVERTNEXT
	object {
		LDX_4_dash_4ndis_dot_dat_in_part
		matrix <0,0,8,0,-1,0,-8,0,0,0,4,20>
	}
	object {
		LDX_4_dash_4ndis_dot_dat_in_part
		matrix <0,0,8,0,-1,0,-8,0,0,0,4,0>
	}
	object {
		LDX_4_dash_4ndis_dot_dat_in_part
		matrix <0,0,8,0,-1,0,-8,0,0,0,4,-20>
	}
	object {
		LDX_4_dash_4ndis_dot_dat_in_part
		matrix <0,0,6,0,1,0,-6,0,0,0,0,20>
	}
	object {
		LDX_4_dash_4ndis_dot_dat_in_part
		matrix <0,0,6,0,1,0,-6,0,0,0,0,0>
	}
	object {
		LDX_4_dash_4ndis_dot_dat_in_part
		matrix <0,0,6,0,1,0,-6,0,0,0,0,-20>
	}
	object {
		LDX_stug_dash_2x2_dot_dat_in_part
		matrix <0,0,1,0,1,0,-1,0,0,0,0,-20>
	}
// // Smoother
// BFC INVERTNEXT
	object {
		LDX_1_dash_8cylo_dot_dat_in_part
		matrix <0,7.07,-7.07,-20,0,0,0,7.07,7.07,20,-6,40>
	}
	object {
		LDX_1_dash_8ndis_dot_dat_in_part
		matrix <0,10,0,-1,0,0,0,0,-10,20,-6,40>
	}
// // Connection
	object {
		LDX_connhole_dot_dat_in_part
		matrix <0,1,0,-1,0,0,0,0,1,-10,-6,40>
	}
	object {
		LDX_2_dash_4cylo_dot_dat_in_part
		matrix <0,10,0,-20,0,0,0,0,10,0,-6,40>
	}
	object {
		LDX_1_dash_4cyli_dot_dat_in_part
		matrix <0,-10,0,-20,0,0,0,0,-10,0,-6,40>
	}
	object {
		LDX_4_dash_4ring9_dot_dat_in_part
		matrix <0,1,0,-1,0,0,0,0,1,0,-6,40>
	}
	object {
		LDX_4_dash_4ring9_dot_dat_in_part
		matrix <0,-1,0,1,0,0,0,0,1,-20,-6,40>
	}
	object {
		LDX_1_dash_4ndis_dot_dat_in_part
		matrix <0,10,0,1,0,0,0,0,-10,-20,-6,40>
	}
	mesh2 {
		vertex_vectors {
			78,
			<-20,-8,20>, <-20,-8,30>, <-20,-8,30.001001>, <-20,-8,30.399>,
			<-20,-8,30.4>, <-20,-6,30>, <-20,0,-40>, <-20,0,20>,
			<-20,0,30>, <-20,4,30>, <-20,4,40>, <-20,8,-40>,
			<-20,8,20>, <-20,8,30>, <-20,8,40>, <-16,-8,20>,
			<-16,-8,30>, <-16,-8,30.001001>, <-16,-8,30.399>, <-16,-8,30.4>,
			<-16,-6,30>, <-16,0,20>, <-16,0,30>, <-16,4,-36>,
			<-16,4,36>, <-16,8,-36>, <-16,8,36>, <-8,4,-28>,
			<-8,4,-12>, <-8,4,-8>, <-8,4,8>, <-8,4,12>,
			<-8,4,28>, <-6,0,-40>, <-6,0,-26>, <-6,0,-14>,
			<-6,0,-6>, <-6,0,6>, <-6,0,14>, <-6,0,20>,
			<-6,0,26>, <-6,0,30>, <0,-6,30>, <0,-2.17,30.76>,
			<0,0,26>, <0,0,30>, <0,0,32.209999>, <0,0.005,32.211998>,
			<0,1.075,32.928001>, <6,0,-40>, <6,0,-26>, <6,0,-14>,
			<6,0,-6>, <6,0,6>, <6,0,14>, <6,0,26>,
			<6,0,32.209999>, <8,4,-28>, <8,4,-12>, <8,4,-8>,
			<8,4,8>, <8,4,12>, <8,4,28>, <16,4,-36>,
			<16,4,36>, <16,8,-36>, <16,8,36>, <20,0,-40>,
			<20,0,30>, <20,0,32.209999>, <20,0.005,32.211998>, <20,1.07,32.93>,
			<20,1.075,32.928001>, <20,4,30>, <20,4,40>, <20,8,-40>,
			<20,8,30>, <20,8,40>
		}
		normal_vectors {
			7,
			<-1,0,0>, <0,-1,0>, <0,0,-1>, <0,0,1>,
			<0,0.556135,-0.831092>, <0,1,0>, <1,0,0>
		}
		face_indices {
			78,
			<25, 23, 24>, <25, 24, 26>, <65, 63, 23>, <65, 23, 25>,
			<66, 64, 63>, <66, 63, 65>, <26, 24, 64>, <26, 64, 66>,
			<14, 26, 25>, <14, 25, 11>, <11, 25, 65>, <11, 65, 75>,
			<75, 65, 66>, <75, 66, 77>, <77, 66, 26>, <77, 26, 14>,
			<24, 32, 27>, <24, 27, 23>, <23, 27, 57>, <23, 57, 63>,
			<63, 57, 62>, <63, 62, 64>, <64, 62, 32>, <64, 32, 24>,
			<31, 61, 60>, <31, 60, 30>, <29, 59, 58>, <29, 58, 28>,
			<6, 7, 12>, <6, 12, 11>, <7, 8, 13>, <7, 13, 12>,
			<75, 76, 68>, <75, 68, 67>, <6, 11, 75>, <6, 75, 67>,
			<14, 10, 74>, <14, 74, 77>, <74, 73, 76>, <74, 76, 77>,
			<9, 10, 14>, <9, 14, 13>, <6, 33, 39>, <6, 39, 7>,
			<39, 41, 22>, <39, 22, 21>, <44, 45, 41>, <44, 41, 40>,
			<55, 56, 46>, <55, 46, 44>, <49, 67, 69>, <49, 69, 56>,
			<49, 50, 34>, <49, 34, 33>, <51, 52, 36>, <51, 36, 35>,
			<53, 54, 38>, <53, 38, 37>, <16, 1, 0>, <16, 0, 15>,
			<0, 7, 21>, <0, 21, 15>, <1, 8, 7>, <1, 7, 0>,
			<15, 21, 22>, <15, 22, 16>, <70, 72, 48>, <70, 48, 47>,
			<69, 68, 73>, <69, 73, 71>, <45, 43, 42>, <45, 46, 43>,
			<45, 42, 20>, <45, 20, 22>, <19, 16, 20>, <1, 4, 5>,
			<3, 2, 17>, <3, 17, 18>
		}
		normal_indices {
			78,
			<6, 6, 6>, <6, 6, 6>, <3, 3, 3>, <3, 3, 3>,
			<0, 0, 0>, <0, 0, 0>, <2, 2, 2>, <2, 2, 2>,
			<1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
			<1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
			<1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
			<1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
			<1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
			<6, 6, 6>, <6, 6, 6>, <6, 6, 6>, <6, 6, 6>,
			<0, 0, 0>, <0, 0, 0>, <3, 3, 3>, <3, 3, 3>,
			<2, 2, 2>, <2, 2, 2>, <0, 0, 0>, <0, 0, 0>,
			<6, 6, 6>, <6, 6, 6>, <5, 5, 5>, <5, 5, 5>,
			<5, 5, 5>, <5, 5, 5>, <5, 5, 5>, <5, 5, 5>,
			<5, 5, 5>, <5, 5, 5>, <5, 5, 5>, <5, 5, 5>,
			<5, 5, 5>, <5, 5, 5>, <5, 5, 5>, <5, 5, 5>,
			<5, 5, 5>, <5, 5, 5>, <5, 5, 5>, <5, 5, 5>,
			<3, 3, 3>, <3, 3, 3>, <6, 6, 6>, <6, 6, 6>,
			<0, 0, 0>, <0, 0, 0>, <4, 4, 4>, <4, 4, 4>,
			<0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
			<3, 3, 3>, <3, 3, 3>, <0, 0, 0>, <6, 6, 6>,
			<5, 5, 5>, <5, 5, 5>
		}
	}
}


#declare lg_98285 = object{
          LDX_98285_dot_dat
          LDXSeamMatrix(40, 24, 90, 0, -4, 5)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          //rotate z*-90
}
