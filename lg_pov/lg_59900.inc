/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20190902 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_59900: Cone 1 x 1 with stop                                              */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_59900_dot_dat =
union {
// Cone  1 x  1 with Stop
// Name: 59900.dat
// Author: Michael Heidemann [mikeheide]
// !LDRAW_ORG Part UPDATE 2014-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !KEYWORDS round, pylon
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
// !HISTORY 2014-07-10 [C3POwen] Fixed depth of axle hole
// !HISTORY 2014-12-23 [PTadmin] Official Update 2014-02
        object {
                LDX_4_dash_4ring3_dot_dat_in_part
                matrix <2,0,0,0,-2.5,0,0,0,2,0,24,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <-6,0,0,0,-5,0,0,0,6,0,24,0>
        }
        object {
                LDX_4_dash_4cylo_dot_dat_in_part
                matrix <8,0,0,0,5,0,0,0,8,0,19,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,1,0,0,0,6,0,18,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <-2,0,0,0,-1,0,0,0,2,0,8,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,8,0,0,0,4,0,0,0>
        }
        object {
                LDX_stud2a_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_4_dash_4rin12_dot_dat_in_part
                matrix <0.5,0,0,0,1,0,0,0,0.5,0,0,0>
        }
        object {
                LDX_4_dash_4ring4_dot_dat_in_part
                matrix <-2,0,0,0,-1,0,0,0,2,0,19,0>
        }
        object {
                LDX_4_dash_4con4_dot_dat_in_part
                matrix <-2,0,0,0,-10.5,0,0,0,2,0,19,0>
        }
        object {
                LDX_4_dash_4con7_dot_dat_in_part
                matrix <-1,0,0,0,-5.5,0,0,0,1,0,8.5,0>
        }
        object {
                LDX_4_dash_4con13_dot_dat_in_part
                matrix <-0.5,0,0,0,-3,0,0,0,0.5,0,3,0>
        }
        mesh2 {
                vertex_vectors {
                        64,
                        <-6,8,0>, <-6,18,0>, <-5.602,8,-2>, <-5.602,18,-2>,
                        <-5.543,8,-2.296>, <-5.543,8,2.296>, <-5.543,18,-2.296>, <-5.543,18,2.296>,
                        <-5.213,8,2.791>, <-5.213,18,2.791>, <-4.243,8,-4.243>, <-4.243,8,4.243>,
                        <-4.243,18,-4.243>, <-4.243,18,4.243>, <-4,8,-2>, <-4,18,-2>,
                        <-2.791,8,5.213>, <-2.791,18,5.213>, <-2.5,8,-2.5>, <-2.5,8,2.5>,
                        <-2.5,18,-2.5>, <-2.5,18,2.5>, <-2.296,8,-5.543>, <-2.296,8,5.543>,
                        <-2.296,18,-5.543>, <-2.296,18,5.543>, <-2,8,-5.602>, <-2,8,-4>,
                        <-2,18,-5.602>, <-2,18,-4>, <0,8,-6>, <0,8,6>,
                        <0,18,-6>, <0,18,6>, <2,8,4>, <2,8,5.602>,
                        <2,18,4>, <2,18,5.602>, <2.296,8,-5.543>, <2.296,8,5.543>,
                        <2.296,18,-5.543>, <2.296,18,5.543>, <2.5,8,-2.5>, <2.5,8,2.5>,
                        <2.5,18,-2.5>, <2.5,18,2.5>, <2.791,8,-5.213>, <2.791,18,-5.213>,
                        <4,8,2>, <4,18,2>, <4.243,8,-4.243>, <4.243,8,4.243>,
                        <4.243,18,-4.243>, <4.243,18,4.243>, <5.213,8,-2.791>, <5.213,18,-2.791>,
                        <5.543,8,-2.296>, <5.543,8,2.296>, <5.543,18,-2.296>, <5.543,18,2.296>,
                        <5.602,8,2>, <5.602,18,2>, <6,8,0>, <6,18,0>
                }
                normal_vectors {
                        30,
                        <-1,0,0.00002>, <-0.994297,0,-0.10665>, <-0.987087,0,-0.160182>, <-0.980769,0,-0.195173>,
                        <-0.948683,0,-0.316228>, <-0.924056,0,0.382258>, <-0.83205,0,0.554701>, <-0.554701,0,0.83205>,
                        <-0.382258,0,0.924056>, <-0.316228,0,-0.948683>, <-0.195173,0,-0.980769>, <-0.160182,0,-0.987087>,
                        <-0.10665,0,-0.994297>, <0,-1,0>, <0.00002,0,-1>, <-0.00002,0,1>,
                        <0,1,0>, <0.10665,0,0.994297>, <0.160182,0,0.987087>, <0.195173,0,0.980769>,
                        <0.316228,0,0.948683>, <0.382258,0,-0.924056>, <0.554701,0,-0.83205>, <0.83205,0,-0.554701>,
                        <0.924056,0,-0.382258>, <0.948683,0,0.316228>, <0.980769,0,0.195173>, <0.987087,0,0.160182>,
                        <0.994297,0,0.10665>, <1,0,-0.00002>
                }
                face_indices {
                        80,
                        <21, 9, 13>, <21, 13, 17>, <44, 55, 52>, <44, 52, 47>,
                        <37, 41, 53>, <37, 53, 36>, <36, 53, 49>, <36, 49, 45>,
                        <59, 61, 49>, <59, 49, 53>, <28, 24, 12>, <28, 12, 29>,
                        <29, 12, 15>, <29, 15, 20>, <6, 3, 15>, <6, 15, 12>,
                        <21, 19, 8>, <21, 8, 9>, <17, 16, 19>, <17, 19, 21>,
                        <33, 31, 23>, <33, 23, 25>, <25, 23, 16>, <25, 16, 17>,
                        <9, 8, 5>, <9, 5, 7>, <7, 5, 0>, <7, 0, 1>,
                        <44, 42, 54>, <44, 54, 55>, <47, 46, 42>, <47, 42, 44>,
                        <32, 30, 38>, <32, 38, 40>, <40, 38, 46>, <40, 46, 47>,
                        <55, 54, 56>, <55, 56, 58>, <58, 56, 62>, <58, 62, 63>,
                        <1, 0, 2>, <1, 2, 3>, <3, 2, 14>, <3, 14, 15>,
                        <15, 14, 18>, <15, 18, 20>, <20, 18, 27>, <20, 27, 29>,
                        <29, 27, 26>, <29, 26, 28>, <26, 30, 32>, <26, 32, 28>,
                        <63, 62, 60>, <63, 60, 61>, <49, 61, 60>, <49, 60, 48>,
                        <49, 48, 43>, <49, 43, 45>, <45, 43, 34>, <45, 34, 36>,
                        <36, 34, 35>, <36, 35, 37>, <35, 31, 33>, <35, 33, 37>,
                        <19, 16, 11>, <19, 11, 8>, <42, 46, 50>, <42, 50, 54>,
                        <2, 4, 10>, <2, 10, 14>, <14, 10, 27>, <14, 27, 18>,
                        <22, 26, 27>, <22, 27, 10>, <60, 57, 51>, <60, 51, 48>,
                        <48, 51, 34>, <48, 34, 43>, <39, 35, 34>, <39, 34, 51>
                }
                normal_indices {
                        80,
                        <13, 13, 13>, <13, 13, 13>, <13, 13, 13>, <13, 13, 13>,
                        <13, 13, 13>, <13, 13, 13>, <13, 13, 13>, <13, 13, 13>,
                        <13, 13, 13>, <13, 13, 13>, <13, 13, 13>, <13, 13, 13>,
                        <13, 13, 13>, <13, 13, 13>, <13, 13, 13>, <13, 13, 13>,
                        <17, 17, 17>, <17, 17, 17>, <1, 1, 1>, <1, 1, 1>,
                        <15, 15, 8>, <15, 8, 8>, <8, 8, 7>, <8, 7, 7>,
                        <6, 6, 5>, <6, 5, 5>, <5, 5, 0>, <5, 0, 0>,
                        <12, 12, 12>, <12, 12, 12>, <28, 28, 28>, <28, 28, 28>,
                        <14, 14, 21>, <14, 21, 21>, <21, 21, 22>, <21, 22, 22>,
                        <23, 23, 24>, <23, 24, 24>, <24, 24, 29>, <24, 29, 29>,
                        <0, 0, 3>, <0, 3, 3>, <14, 14, 11>, <14, 11, 11>,
                        <11, 11, 9>, <11, 9, 9>, <4, 4, 2>, <4, 2, 2>,
                        <2, 2, 0>, <2, 0, 0>, <10, 14, 14>, <10, 14, 10>,
                        <29, 29, 26>, <29, 26, 26>, <18, 15, 15>, <18, 15, 18>,
                        <18, 18, 20>, <18, 20, 20>, <25, 25, 27>, <25, 27, 27>,
                        <27, 27, 29>, <27, 29, 29>, <19, 15, 15>, <19, 15, 19>,
                        <16, 16, 16>, <16, 16, 16>, <16, 16, 16>, <16, 16, 16>,
                        <16, 16, 16>, <16, 16, 16>, <16, 16, 16>, <16, 16, 16>,
                        <16, 16, 16>, <16, 16, 16>, <16, 16, 16>, <16, 16, 16>,
                        <16, 16, 16>, <16, 16, 16>, <16, 16, 16>, <16, 16, 16>
                }
        }
}




#declare lg_59900 = object{
          LDX_59900_dot_dat
          LDXSeamMatrix(20, 28, 20, 0, 10, 0)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}