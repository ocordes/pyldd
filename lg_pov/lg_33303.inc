/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20190927 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_33303: Fence 1 x  4 x  2 Picket                                          */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_s_slash_33303s01_dot_dat_in_part = union {
// ~Fence  1 x  4 x  2 Paled - Single Paling
// Name: s\33303s01.dat
// Author: Niels Bugge [SirBugge]
// !LDRAW_ORG Subpart UPDATE 2009-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2009-05-02 [PTadmin] Official Update 2009-01
        object {
                LDX_2_dash_4disc_dot_dat_in_part
                matrix <6,0,0,0,0,1,0,-6,0,0,6,-3>
        }
        object {
                LDX_2_dash_4disc_dot_dat_in_part
                matrix <-6,0,0,0,0,-1,0,-6,0,0,6,3>
        }
        object {
                LDX_2_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,0,6,0,-6,0,0,6,-3>
        }
}


#declare LDX_33303_dot_dat =
union {
// Fence  1 x  4 x  2 Picket
// Name: 33303.dat
// Author: Niels Bugge [SirBugge]
// !LDRAW_ORG Part UPDATE 2009-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2009-05-02 [PTadmin] Official Update 2009-01
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,-1,0,0,0,-1,20,44,0>
        }
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,-1,0,0,0,-1,0,44,0>
        }
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,-1,0,0,0,-1,-20,44,0>
        }
// BFC INVERTNEXT
        object {
                LDX_s_slash_33303s01_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-30,0,0>
        }
        object {
                LDX_s_slash_33303s01_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-10,0,0>
        }
        object {
                LDX_s_slash_33303s01_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,10,0,0>
        }
        object {
                LDX_s_slash_33303s01_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,30,0,0>
        }
        mesh2 {
                vertex_vectors {
                        152,
                        <-40,9,-2.5>, <-40,9,2.5>, <-40,14,-2.5>, <-40,14,2.5>,
                        <-40,29.5,-2.5>, <-40,29.5,2.5>, <-40,34.5,-2.5>, <-40,34.5,2.5>,
                        <-40,40,-10>, <-40,40,10>, <-40,48,-10>, <-40,48,10>,
                        <-36,6,-3>, <-36,6,3>, <-36,9,-2.5>, <-36,9,2.5>,
                        <-36,14,-2.5>, <-36,14,2.5>, <-36,29.5,-2.5>, <-36,29.5,2.5>,
                        <-36,34.5,-2.5>, <-36,34.5,2.5>, <-36,40,-3>, <-36,40,3>,
                        <-36,44,-6>, <-36,44,6>, <-36,48,-6>, <-36,48,6>,
                        <-24,6,-3>, <-24,6,3>, <-24,9,-2.5>, <-24,9,2.5>,
                        <-24,14,-2.5>, <-24,14,2.5>, <-24,29.5,-2.5>, <-24,29.5,2.5>,
                        <-24,34.5,-2.5>, <-24,34.5,2.5>, <-24,40,-3>, <-24,40,3>,
                        <-20,9,-2.5>, <-20,9,2.5>, <-20,14,-2.5>, <-20,14,2.5>,
                        <-20,29.5,-2.5>, <-20,29.5,2.5>, <-20,34.5,-2.5>, <-20,34.5,2.5>,
                        <-16,6,-3>, <-16,6,3>, <-16,9,-2.5>, <-16,9,2.5>,
                        <-16,14,-2.5>, <-16,14,2.5>, <-16,29.5,-2.5>, <-16,29.5,2.5>,
                        <-16,34.5,-2.5>, <-16,34.5,2.5>, <-16,40,-3>, <-16,40,3>,
                        <-4,6,-3>, <-4,6,3>, <-4,9,-2.5>, <-4,9,2.5>,
                        <-4,14,-2.5>, <-4,14,2.5>, <-4,29.5,-2.5>, <-4,29.5,2.5>,
                        <-4,34.5,-2.5>, <-4,34.5,2.5>, <-4,40,-3>, <-4,40,3>,
                        <0,9,-2.5>, <0,9,2.5>, <0,14,-2.5>, <0,14,2.5>,
                        <0,29.5,-2.5>, <0,29.5,2.5>, <0,34.5,-2.5>, <0,34.5,2.5>,
                        <4,6,-3>, <4,6,3>, <4,9,-2.5>, <4,9,2.5>,
                        <4,14,-2.5>, <4,14,2.5>, <4,29.5,-2.5>, <4,29.5,2.5>,
                        <4,34.5,-2.5>, <4,34.5,2.5>, <4,40,-3>, <4,40,3>,
                        <16,6,-3>, <16,6,3>, <16,9,-2.5>, <16,9,2.5>,
                        <16,14,-2.5>, <16,14,2.5>, <16,29.5,-2.5>, <16,29.5,2.5>,
                        <16,34.5,-2.5>, <16,34.5,2.5>, <16,40,-3>, <16,40,3>,
                        <20,9,-2.5>, <20,9,2.5>, <20,14,-2.5>, <20,14,2.5>,
                        <20,29.5,-2.5>, <20,29.5,2.5>, <20,34.5,-2.5>, <20,34.5,2.5>,
                        <24,6,-3>, <24,6,3>, <24,9,-2.5>, <24,9,2.5>,
                        <24,14,-2.5>, <24,14,2.5>, <24,29.5,-2.5>, <24,29.5,2.5>,
                        <24,34.5,-2.5>, <24,34.5,2.5>, <24,40,-3>, <24,40,3>,
                        <36,6,-3>, <36,6,3>, <36,9,-2.5>, <36,9,2.5>,
                        <36,14,-2.5>, <36,14,2.5>, <36,29.5,-2.5>, <36,29.5,2.5>,
                        <36,34.5,-2.5>, <36,34.5,2.5>, <36,40,-3>, <36,40,3>,
                        <36,44,-6>, <36,44,6>, <36,48,-6>, <36,48,6>,
                        <40,9,-2.5>, <40,9,2.5>, <40,14,-2.5>, <40,14,2.5>,
                        <40,29.5,-2.5>, <40,29.5,2.5>, <40,34.5,-2.5>, <40,34.5,2.5>,
                        <40,40,-10>, <40,40,10>, <40,48,-10>, <40,48,10>
                }
                normal_vectors {
                        6,
                        <-1,0,0>, <0,-1,0>, <0,0,-1>, <0,0,1>,
                        <0,1,0>, <1,0,0>
                }
                face_indices {
                        196,
                        <25, 137, 136>, <25, 136, 24>, <25, 27, 139>, <25, 139, 137>,
                        <24, 26, 27>, <24, 27, 25>, <136, 138, 26>, <136, 26, 24>,
                        <137, 139, 138>, <137, 138, 136>, <151, 139, 27>, <151, 27, 11>,
                        <11, 27, 26>, <11, 26, 10>, <10, 26, 138>, <10, 138, 150>,
                        <150, 138, 139>, <150, 139, 151>, <9, 149, 148>, <9, 148, 8>,
                        <9, 11, 151>, <9, 151, 149>, <8, 10, 11>, <8, 11, 9>,
                        <148, 150, 10>, <148, 10, 8>, <149, 151, 150>, <149, 150, 148>,
                        <13, 23, 22>, <13, 22, 12>, <29, 39, 23>, <29, 23, 13>,
                        <28, 38, 39>, <28, 39, 29>, <12, 22, 38>, <12, 38, 28>,
                        <2, 16, 14>, <2, 14, 0>, <3, 17, 16>, <3, 16, 2>,
                        <1, 15, 17>, <1, 17, 3>, <0, 14, 15>, <0, 15, 1>,
                        <6, 20, 18>, <6, 18, 4>, <7, 21, 20>, <7, 20, 6>,
                        <5, 19, 21>, <5, 21, 7>, <4, 18, 19>, <4, 19, 5>,
                        <43, 33, 31>, <43, 31, 41>, <42, 32, 33>, <42, 33, 43>,
                        <40, 30, 32>, <40, 32, 42>, <41, 31, 30>, <41, 30, 40>,
                        <47, 37, 35>, <47, 35, 45>, <46, 36, 37>, <46, 37, 47>,
                        <44, 34, 36>, <44, 36, 46>, <45, 35, 34>, <45, 34, 44>,
                        <49, 59, 58>, <49, 58, 48>, <61, 71, 59>, <61, 59, 49>,
                        <60, 70, 71>, <60, 71, 61>, <48, 58, 70>, <48, 70, 60>,
                        <42, 52, 50>, <42, 50, 40>, <43, 53, 52>, <43, 52, 42>,
                        <41, 51, 53>, <41, 53, 43>, <40, 50, 51>, <40, 51, 41>,
                        <46, 56, 54>, <46, 54, 44>, <47, 57, 56>, <47, 56, 46>,
                        <45, 55, 57>, <45, 57, 47>, <44, 54, 55>, <44, 55, 45>,
                        <75, 65, 63>, <75, 63, 73>, <74, 64, 65>, <74, 65, 75>,
                        <72, 62, 64>, <72, 64, 74>, <73, 63, 62>, <73, 62, 72>,
                        <79, 69, 67>, <79, 67, 77>, <78, 68, 69>, <78, 69, 79>,
                        <76, 66, 68>, <76, 68, 78>, <77, 67, 66>, <77, 66, 76>,
                        <81, 91, 90>, <81, 90, 80>, <93, 103, 91>, <93, 91, 81>,
                        <92, 102, 103>, <92, 103, 93>, <80, 90, 102>, <80, 102, 92>,
                        <74, 84, 82>, <74, 82, 72>, <75, 85, 84>, <75, 84, 74>,
                        <73, 83, 85>, <73, 85, 75>, <72, 82, 83>, <72, 83, 73>,
                        <78, 88, 86>, <78, 86, 76>, <79, 89, 88>, <79, 88, 78>,
                        <77, 87, 89>, <77, 89, 79>, <76, 86, 87>, <76, 87, 77>,
                        <107, 97, 95>, <107, 95, 105>, <106, 96, 97>, <106, 97, 107>,
                        <104, 94, 96>, <104, 96, 106>, <105, 95, 94>, <105, 94, 104>,
                        <111, 101, 99>, <111, 99, 109>, <110, 100, 101>, <110, 101, 111>,
                        <108, 98, 100>, <108, 100, 110>, <109, 99, 98>, <109, 98, 108>,
                        <113, 123, 122>, <113, 122, 112>, <125, 135, 123>, <125, 123, 113>,
                        <124, 134, 135>, <124, 135, 125>, <112, 122, 134>, <112, 134, 124>,
                        <106, 116, 114>, <106, 114, 104>, <107, 117, 116>, <107, 116, 106>,
                        <105, 115, 117>, <105, 117, 107>, <104, 114, 115>, <104, 115, 105>,
                        <110, 120, 118>, <110, 118, 108>, <111, 121, 120>, <111, 120, 110>,
                        <109, 119, 121>, <109, 121, 111>, <108, 118, 119>, <108, 119, 109>,
                        <143, 129, 127>, <143, 127, 141>, <142, 128, 129>, <142, 129, 143>,
                        <140, 126, 128>, <140, 128, 142>, <141, 127, 126>, <141, 126, 140>,
                        <147, 133, 131>, <147, 131, 145>, <146, 132, 133>, <146, 133, 147>,
                        <144, 130, 132>, <144, 132, 146>, <145, 131, 130>, <145, 130, 144>,
                        <3, 2, 0>, <3, 0, 1>, <7, 6, 4>, <7, 4, 5>,
                        <142, 143, 141>, <142, 141, 140>, <146, 147, 145>, <146, 145, 144>
                }
                normal_indices {
                        196,
                        <1, 1, 1>, <1, 1, 1>, <3, 3, 3>, <3, 3, 3>,
                        <0, 0, 0>, <0, 0, 0>, <2, 2, 2>, <2, 2, 2>,
                        <5, 5, 5>, <5, 5, 5>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <1, 1, 1>, <1, 1, 1>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <0, 0, 0>, <0, 0, 0>,
                        <2, 2, 2>, <2, 2, 2>, <5, 5, 5>, <5, 5, 5>,
                        <5, 5, 5>, <5, 5, 5>, <2, 2, 2>, <2, 2, 2>,
                        <0, 0, 0>, <0, 0, 0>, <3, 3, 3>, <3, 3, 3>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <2, 2, 2>, <2, 2, 2>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <4, 4, 4>, <4, 4, 4>,
                        <2, 2, 2>, <2, 2, 2>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <4, 4, 4>, <4, 4, 4>,
                        <5, 5, 5>, <5, 5, 5>, <2, 2, 2>, <2, 2, 2>,
                        <0, 0, 0>, <0, 0, 0>, <3, 3, 3>, <3, 3, 3>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <2, 2, 2>, <2, 2, 2>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <4, 4, 4>, <4, 4, 4>,
                        <2, 2, 2>, <2, 2, 2>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <4, 4, 4>, <4, 4, 4>,
                        <5, 5, 5>, <5, 5, 5>, <2, 2, 2>, <2, 2, 2>,
                        <0, 0, 0>, <0, 0, 0>, <3, 3, 3>, <3, 3, 3>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <2, 2, 2>, <2, 2, 2>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <4, 4, 4>, <4, 4, 4>,
                        <2, 2, 2>, <2, 2, 2>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <4, 4, 4>, <4, 4, 4>,
                        <5, 5, 5>, <5, 5, 5>, <2, 2, 2>, <2, 2, 2>,
                        <0, 0, 0>, <0, 0, 0>, <3, 3, 3>, <3, 3, 3>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <3, 3, 3>, <3, 3, 3>, <1, 1, 1>, <1, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <2, 2, 2>, <2, 2, 2>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <4, 4, 4>, <4, 4, 4>,
                        <2, 2, 2>, <2, 2, 2>, <1, 1, 1>, <1, 1, 1>,
                        <3, 3, 3>, <3, 3, 3>, <4, 4, 4>, <4, 4, 4>,
                        <5, 5, 5>, <5, 5, 5>, <5, 5, 5>, <5, 5, 5>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>
                }
        }
}


#declare lg_33303 = object{
          LDX_33303_dot_dat
          LDXSeamMatrix(80, 48, 20, 0, 24, 0)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
