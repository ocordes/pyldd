/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20180902 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_60594: Window  1 x  4 x  3 without Shutter Tabs                          */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_60594_dot_dat =
union {
// Window  1 x  4 x  3 without Shutter Tabs
// Name: 60594.dat
// Author: J.C. Tchang [tchang]
// !LDRAW_ORG Part UPDATE 2010-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CW
// !HISTORY 2010-07-05 [PTadmin] Official Update 2010-02
// BFC INVERTNEXT
// BFC INVERTNEXT
// BFC INVERTNEXT
// BFC INVERTNEXT
// BFC INVERTNEXT
// BFC INVERTNEXT
// BFC INVERTNEXT
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,-1,0,0,0,1,20,68,0>
        }
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,-1,0,0,0,1,0,68,0>
        }
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,-1,0,0,0,1,-20,68,0>
        }
// BFC INVERTNEXT
// BFC INVERTNEXT
// BFC INVERTNEXT
// BFC INVERTNEXT
// BFC INVERTNEXT
// BFC INVERTNEXT
        object {
                LDX_3_dash_4cyli_dot_dat_in_part
                matrix <0,0,6,0,-4,0,-6,0,0,30,0,0>
        }
        object {
                LDX_3_dash_4disc_dot_dat_in_part
                matrix <0,0,6,0,4,0,-6,0,0,30,-4,0>
        }
        object {
                LDX_3_dash_4cyli_dot_dat_in_part
                matrix <-6,0,0,0,-4,0,0,0,-6,-30,0,0>
        }
        object {
                LDX_3_dash_4disc_dot_dat_in_part
                matrix <-6,0,0,0,4,0,0,0,-6,-30,-4,0>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,10,0,0>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-10,0,0>
        }
        mesh2 {
                vertex_vectors {
                        112,
                        <-40,0,-10>, <-40,0,0>, <-40,0,7>, <-40,0,10>,
                        <-40,6,-10>, <-40,64,-10>, <-40,64,10>, <-40,72,-10>,
                        <-40,72,10>, <-37,0,0>, <-37,0,7>, <-37,10,0>,
                        <-37,10,7>, <-37,58,0>, <-37,58,7>, <-37,72,0>,
                        <-37,72,7>, <-36,-4,0>, <-36,0,0>, <-36,0,7>,
                        <-36,0,10>, <-36,4,0>, <-36,4,7>, <-36,4,10>,
                        <-36,6,0>, <-36,10,0>, <-36,10,7>, <-36,58,0>,
                        <-36,58,7>, <-36,64,0>, <-36,64,7>, <-36,64,10>,
                        <-36,68,-6>, <-36,68,0>, <-36,68,7>, <-36,72,-6>,
                        <-36,72,0>, <-36,72,7>, <-34,6,-10>, <-34,6,0>,
                        <-34,64,-10>, <-34,64,0>, <-30,-4,0>, <-30,-4,6>,
                        <-30,0,0>, <-30,0,6>, <-30,0,7>, <-30,4,0>,
                        <-30,4,7>, <-30,64,0>, <-30,64,7>, <-30,68,0>,
                        <-30,68,6>, <-30,68,7>, <-30,72,6>, <-30,72,7>,
                        <30,-4,0>, <30,-4,6>, <30,0,0>, <30,0,6>,
                        <30,0,7>, <30,4,0>, <30,4,7>, <30,64,0>,
                        <30,64,7>, <30,68,0>, <30,68,6>, <30,68,7>,
                        <30,72,6>, <30,72,7>, <34,6,-10>, <34,6,0>,
                        <34,64,-10>, <34,64,0>, <36,-4,0>, <36,0,0>,
                        <36,0,7>, <36,0,10>, <36,4,0>, <36,4,7>,
                        <36,4,10>, <36,6,0>, <36,10,0>, <36,10,7>,
                        <36,58,0>, <36,58,7>, <36,64,0>, <36,64,7>,
                        <36,64,10>, <36,68,-6>, <36,68,0>, <36,68,7>,
                        <36,72,-6>, <36,72,0>, <36,72,7>, <37,0,0>,
                        <37,0,7>, <37,10,0>, <37,10,7>, <37,58,0>,
                        <37,58,7>, <37,72,0>, <37,72,7>, <40,0,-10>,
                        <40,0,0>, <40,0,7>, <40,0,10>, <40,6,-10>,
                        <40,64,-10>, <40,64,10>, <40,72,-10>, <40,72,10>
                }
                normal_vectors {
                        6,
                        <-1,0,0>, <0,-1,0>, <0,0,-1>, <0,0,1>,
                        <0,1,0>, <1,0,0>
                }
                face_indices {
                        162,
                        <13, 14, 16>, <13, 16, 15>, <14, 28, 37>, <14, 37, 16>,
                        <15, 36, 27>, <15, 27, 13>, <13, 14, 28>, <13, 28, 27>,
                        <51, 53, 50>, <51, 50, 49>, <51, 49, 29>, <51, 29, 33>,
                        <53, 34, 30>, <53, 30, 50>, <53, 52, 54>, <53, 54, 55>,
                        <53, 55, 37>, <53, 37, 34>, <99, 100, 102>, <99, 102, 101>,
                        <100, 85, 94>, <100, 94, 102>, <101, 93, 84>, <101, 84, 99>,
                        <99, 100, 85>, <99, 85, 84>, <65, 67, 64>, <65, 64, 63>,
                        <65, 63, 86>, <65, 86, 90>, <67, 91, 87>, <67, 87, 64>,
                        <67, 66, 68>, <67, 68, 69>, <67, 69, 94>, <67, 94, 91>,
                        <92, 35, 32>, <92, 32, 89>, <35, 36, 33>, <35, 33, 32>,
                        <89, 90, 93>, <89, 93, 92>, <54, 68, 66>, <54, 66, 52>,
                        <51, 65, 66>, <51, 66, 52>, <89, 90, 33>, <89, 33, 32>,
                        <6, 8, 111>, <6, 111, 109>, <5, 7, 8>, <5, 8, 6>,
                        <108, 110, 7>, <108, 7, 5>, <109, 111, 110>, <109, 110, 108>,
                        <110, 92, 35>, <110, 35, 7>, <8, 16, 102>, <8, 102, 111>,
                        <55, 54, 68>, <55, 68, 69>, <7, 15, 16>, <7, 16, 8>,
                        <7, 35, 36>, <7, 36, 15>, <111, 102, 101>, <111, 101, 110>,
                        <101, 93, 92>, <101, 92, 110>, <31, 30, 87>, <31, 87, 88>,
                        <72, 73, 41>, <72, 41, 40>, <64, 50, 49>, <64, 49, 63>,
                        <12, 11, 9>, <12, 9, 10>, <11, 25, 18>, <11, 18, 9>,
                        <10, 19, 26>, <10, 26, 12>, <12, 11, 25>, <12, 25, 26>,
                        <46, 44, 47>, <46, 47, 48>, <46, 48, 22>, <46, 22, 19>,
                        <18, 21, 47>, <18, 47, 44>, <98, 97, 95>, <98, 95, 96>,
                        <97, 82, 75>, <97, 75, 95>, <96, 76, 83>, <96, 83, 98>,
                        <98, 97, 82>, <98, 82, 83>, <60, 58, 61>, <60, 61, 62>,
                        <60, 62, 79>, <60, 79, 76>, <75, 78, 61>, <75, 61, 58>,
                        <29, 24, 39>, <29, 39, 41>, <28, 26, 25>, <28, 25, 27>,
                        <22, 30, 31>, <22, 31, 23>, <38, 4, 5>, <38, 5, 40>,
                        <38, 40, 41>, <38, 41, 39>, <3, 20, 31>, <3, 31, 6>,
                        <3, 6, 5>, <3, 5, 0>, <81, 86, 73>, <81, 73, 71>,
                        <85, 83, 82>, <85, 82, 84>, <79, 87, 88>, <79, 88, 80>,
                        <70, 107, 108>, <70, 108, 72>, <70, 72, 73>, <70, 73, 71>,
                        <106, 77, 88>, <106, 88, 109>, <106, 109, 108>, <106, 108, 103>,
                        <4, 0, 103>, <4, 103, 107>, <39, 71, 70>, <39, 70, 38>,
                        <21, 24, 81>, <21, 81, 78>, <47, 48, 62>, <47, 62, 61>,
                        <80, 77, 20>, <80, 20, 23>, <80, 23, 22>, <80, 22, 79>,
                        <103, 104, 1>, <103, 1, 0>, <3, 2, 105>, <3, 105, 106>,
                        <96, 95, 104>, <96, 104, 105>, <9, 10, 2>, <9, 2, 1>,
                        <58, 44, 46>, <58, 46, 60>, <57, 59, 58>, <57, 58, 56>,
                        <56, 58, 75>, <56, 75, 74>, <43, 45, 44>, <43, 44, 42>,
                        <42, 44, 18>, <42, 18, 17>
                }
                normal_indices {
                        162,
                        <5, 5, 5>, <5, 5, 5>, <2, 2, 2>, <2, 2, 2>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <0, 0, 0>, <0, 0, 0>, <3, 3, 3>, <3, 3, 3>,
                        <2, 2, 2>, <2, 2, 2>, <0, 0, 0>, <0, 0, 0>,
                        <2, 2, 2>, <2, 2, 2>, <5, 5, 5>, <5, 5, 5>,
                        <3, 3, 3>, <3, 3, 3>, <2, 2, 2>, <2, 2, 2>,
                        <4, 4, 4>, <4, 4, 4>, <0, 0, 0>, <0, 0, 0>,
                        <2, 2, 2>, <2, 2, 2>, <3, 3, 3>, <3, 3, 3>,
                        <0, 0, 0>, <0, 0, 0>, <3, 3, 3>, <3, 3, 3>,
                        <2, 2, 2>, <2, 2, 2>, <0, 0, 0>, <0, 0, 0>,
                        <5, 5, 5>, <5, 5, 5>, <3, 3, 3>, <3, 3, 3>,
                        <4, 4, 4>, <4, 4, 4>, <4, 4, 4>, <4, 4, 4>,
                        <3, 3, 3>, <3, 3, 3>, <0, 0, 0>, <0, 0, 0>,
                        <2, 2, 2>, <2, 2, 2>, <5, 5, 5>, <5, 5, 5>,
                        <4, 4, 4>, <4, 4, 4>, <4, 4, 4>, <4, 4, 4>,
                        <4, 4, 4>, <4, 4, 4>, <4, 4, 4>, <4, 4, 4>,
                        <4, 4, 4>, <4, 4, 4>, <4, 4, 4>, <4, 4, 4>,
                        <4, 4, 4>, <4, 4, 4>, <4, 4, 4>, <4, 4, 4>,
                        <4, 4, 4>, <4, 4, 4>, <4, 4, 4>, <4, 4, 4>,
                        <5, 5, 5>, <5, 5, 5>, <3, 3, 3>, <3, 3, 3>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <0, 0, 0>, <0, 0, 0>, <2, 2, 2>, <2, 2, 2>,
                        <3, 3, 3>, <3, 3, 3>, <5, 5, 5>, <5, 5, 5>,
                        <2, 2, 2>, <2, 2, 2>, <3, 3, 3>, <3, 3, 3>,
                        <1, 1, 1>, <1, 1, 1>, <0, 0, 0>, <0, 0, 0>,
                        <3, 3, 3>, <3, 3, 3>, <2, 2, 2>, <2, 2, 2>,
                        <2, 2, 2>, <2, 2, 2>, <0, 0, 0>, <0, 0, 0>,
                        <0, 0, 0>, <0, 0, 0>, <3, 3, 3>, <3, 3, 3>,
                        <0, 0, 0>, <0, 0, 0>, <2, 2, 2>, <2, 2, 2>,
                        <5, 5, 5>, <5, 5, 5>, <2, 2, 2>, <2, 2, 2>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <2, 2, 2>, <2, 2, 2>, <0, 0, 0>, <0, 0, 0>,
                        <3, 3, 3>, <3, 3, 3>, <5, 5, 5>, <5, 5, 5>,
                        <2, 2, 2>, <2, 2, 2>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <4, 4, 4>, <4, 4, 4>,
                        <4, 4, 4>, <4, 4, 4>, <4, 4, 4>, <4, 4, 4>,
                        <4, 4, 4>, <4, 4, 4>, <4, 4, 4>, <4, 4, 4>,
                        <1, 1, 1>, <1, 1, 1>, <5, 5, 5>, <5, 5, 5>,
                        <3, 3, 3>, <3, 3, 3>, <5, 5, 5>, <5, 5, 5>,
                        <2, 2, 2>, <2, 2, 2>
                }
        }
}

#declare lg_60594 =
object {
                LDX_60594_dot_dat
                LDXSeamMatrix(80, 76, 20, 0, 34, 0)

                scale 1/25.
                rotate x*-90
                //rotate y*180
                rotate z*90
}