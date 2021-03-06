/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20191013 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30517: Support  2 x  2 x 10 Girder Triangular                            */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_30517_dot_dat =
union {
// Support  2 x  2 x 10 Girder Triangular
// Name: 30517.dat
// Author: Ross Crawford [rosco]
// !LDRAW_ORG Part UPDATE 2003-03
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CW
// !KEYWORDS Truss, Girder, Beam
// !HISTORY 2003-12-19 [PTadmin] Official Update 2003-03
// !HISTORY 2007-06-10 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// // top block
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,6,0,0,0,1,10,20,10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,6,0,0,0,1,10,20,-10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,6,0,0,0,1,-10,20,10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,6,0,0,0,1,-10,20,-10>
        }
// BFC INVERTNEXT
// Axle teeth
// Modified from axleho11.dat
// blunt 1
// sharp 1
// sharp 2
// blunt 2
// bottom block
// BFC INVERTNEXT
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,4,0,0,0,6,0,236,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <7,0,0,0,20,0,0,0,7,0,220,0>
        }
        object {
                LDX_4_dash_4ring6_dot_dat_in_part
                matrix <1,0,0,0,-1,0,0,0,1,0,240,0>
        }
// truss
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <0,0,4,0,192,0,4,0,0,0,24,16>
        }
        object {
                LDX_2_dash_4cyli_dot_dat_in_part
                matrix <2.828,0,2.828,0,192,0,2.828,0,-2.828,16,24,-16>
        }
        object {
                LDX_2_dash_4cyli_dot_dat_in_part
                matrix <2.828,0,-2.828,0,192,0,-2.828,0,-2.828,-16,24,-16>
        }
// end 1
// end 2
// truss 1
// join-top 1
// truss 2
// join-bottom 1
// truss 3
// join-top 2
// truss 4
// join-bottom 2
// truss 5
        mesh2 {
                vertex_vectors {
                        256,
                        <-20,0,-20>, <-20,0,20>, <-20,24,-20>, <-20,24,20>,
                        <-20,216,-20>, <-20,216,20>, <-20,240,-20>, <-20,240,20>,
                        <-18.827999,23.999998,-13.172>, <-18.827999,53.699997,-13.172>, <-18.827999,60.400002,-13.172>, <-18.827999,64.400002,-13.172>,
                        <-18.827999,71.100006,-13.172>, <-18.827999,130.5,-13.172>, <-18.827999,137.199997,-13.172>, <-18.827999,141.199997,-13.172>,
                        <-18.827999,147.900009,-13.172>, <-18.827999,207.300003,-13.172>, <-18.827999,214,-13.172>, <-18.827999,216,-13.172>,
                        <-18,0,-16>, <-18,0,16>, <-18,20,-16>, <-18,20,16>,
                        <-16,220,-16>, <-16,220,-1>, <-16,220,1>, <-16,220,16>,
                        <-16,230,-1>, <-16,230,1>, <-16,240,-16>, <-16,240,16>,
                        <-13.172,24,-18.827999>, <-13.172,24,-18>, <-13.172,23.999998,-13.172>, <-13.172,53.699997,-13.172>,
                        <-13.172,59.400002,-18>, <-13.172,65.400002,-18>, <-13.172,71.100006,-13.172>, <-13.172,130.5,-13.172>,
                        <-13.172,136.199997,-18>, <-13.172,142.199997,-18>, <-13.172,147.900009,-13.172>, <-13.172,207.300003,-13.172>,
                        <-13.172,213,-18>, <-13.172,216,-18.827999>, <-13.172,216,-18>, <-7.7,0,-4.45>,
                        <-7.7,20,-4.45>, <-6.8,220,-1>, <-6.8,220,1>, <-6.8,230,-1>,
                        <-6.8,230,1>, <-6.277,0,5.443>, <-6.277,20,5.443>, <-6.033,24,12>,
                        <-6.033,100.800003,12>, <-6.033,177.600006,12>, <-6,220,0>, <-6,236,0>,
                        <-5.77,0,-5.77>, <-5.77,0,5.77>, <-5.602,220,-2>, <-5.602,236,-2>,
                        <-5.55,0,-2.3>, <-5.55,20,-2.3>, <-5.543,220,-2.296>, <-5.543,220,2.296>,
                        <-5.543,236,-2.296>, <-5.543,236,2.296>, <-5.443,0,6.277>, <-5.443,20,6.277>,
                        <-4.577,0,3.743>, <-4.577,20,3.743>, <-4.577,220,3.743>, <-4.577,236,3.743>,
                        <-4.45,0,-7.7>, <-4.45,20,-7.7>, <-4.243,220,-4.243>, <-4.243,220,4.243>,
                        <-4.243,236,-4.243>, <-4.243,236,4.243>, <-4.16,0,4.16>, <-4,0,-2>,
                        <-4,20,-2>, <-4,24,16>, <-4,26,16>, <-4,98.800003,16>,
                        <-4,102.800003,16>, <-4,175.600006,16>, <-4,179.600006,16>, <-4,220,-2>,
                        <-4,236,-2>, <-3.925,0,-3.925>, <-3.743,0,4.577>, <-3.743,20,4.577>,
                        <-3.743,220,4.577>, <-3.743,236,4.577>, <-2.5,0,-2.5>, <-2.5,0,2.5>,
                        <-2.5,20,-2.5>, <-2.5,20,2.5>, <-2.5,220,-2.5>, <-2.5,220,2.5>,
                        <-2.5,236,-2.5>, <-2.5,236,2.5>, <-2.3,0,-5.55>, <-2.3,20,-5.55>,
                        <-2.296,220,-5.543>, <-2.296,220,5.543>, <-2.296,236,-5.543>, <-2.296,236,5.543>,
                        <-2,0,-4>, <-2,20,-4>, <-2,220,-5.602>, <-2,220,-4>,
                        <-2,236,-5.602>, <-2,236,-4>, <-1,220,-16>, <-1,220,-6.8>,
                        <-1,220,6.8>, <-1,220,16>, <-1,230,-16>, <-1,230,-6.8>,
                        <-1,230,6.8>, <-1,230,16>, <0,220,-6>, <0,220,6>,
                        <0,236,-6>, <0,236,6>, <1,220,-16>, <1,220,-6.8>,
                        <1,220,6.8>, <1,220,16>, <1,230,-16>, <1,230,-6.8>,
                        <1,230,6.8>, <1,230,16>, <2,0,4>, <2,20,4>,
                        <2,220,4>, <2,220,5.602>, <2,236,4>, <2,236,5.602>,
                        <2.296,220,-5.543>, <2.296,220,5.543>, <2.296,236,-5.543>, <2.296,236,5.543>,
                        <2.3,0,5.55>, <2.3,20,5.55>, <2.5,0,-2.5>, <2.5,0,2.5>,
                        <2.5,20,-2.5>, <2.5,20,2.5>, <2.5,220,-2.5>, <2.5,220,2.5>,
                        <2.5,236,-2.5>, <2.5,236,2.5>, <3.743,0,-4.577>, <3.743,20,-4.577>,
                        <3.743,220,-4.577>, <3.743,236,-4.577>, <3.925,0,3.925>, <4,0,2>,
                        <4,20,2>, <4,24,16>, <4,26,16>, <4,98.800003,16>,
                        <4,102.800003,16>, <4,175.600006,16>, <4,179.600006,16>, <4,220,2>,
                        <4,236,2>, <4.16,0,-4.16>, <4.243,220,-4.243>, <4.243,220,4.243>,
                        <4.243,236,-4.243>, <4.243,236,4.243>, <4.45,0,7.7>, <4.45,20,7.7>,
                        <4.577,0,-3.743>, <4.577,20,-3.743>, <4.577,220,-3.743>, <4.577,236,-3.743>,
                        <5.443,0,-6.277>, <5.443,20,-6.277>, <5.543,220,-2.296>, <5.543,220,2.296>,
                        <5.543,236,-2.296>, <5.543,236,2.296>, <5.55,0,2.3>, <5.55,20,2.3>,
                        <5.602,220,2>, <5.602,236,2>, <5.77,0,-5.77>, <5.77,0,5.77>,
                        <6,220,0>, <6,236,0>, <6.033,24,12>, <6.033,100.800003,12>,
                        <6.033,177.600006,12>, <6.277,0,-5.443>, <6.277,20,-5.443>, <6.8,220,-1>,
                        <6.8,220,1>, <6.8,230,-1>, <6.8,230,1>, <7.7,0,4.45>,
                        <7.7,20,4.45>, <13.172,24,-18.827999>, <13.172,24,-18>, <13.172,23.999998,-13.172>,
                        <13.172,53.699997,-13.172>, <13.172,59.400002,-18>, <13.172,65.400002,-18>, <13.172,71.100006,-13.172>,
                        <13.172,130.5,-13.172>, <13.172,136.199997,-18>, <13.172,142.199997,-18>, <13.172,147.900009,-13.172>,
                        <13.172,207.300003,-13.172>, <13.172,213,-18>, <13.172,216,-18.827999>, <13.172,216,-18>,
                        <16,220,-16>, <16,220,-1>, <16,220,1>, <16,220,16>,
                        <16,230,-1>, <16,230,1>, <16,240,-16>, <16,240,16>,
                        <18,0,-16>, <18,0,16>, <18,20,-16>, <18,20,16>,
                        <18.827999,23.999998,-13.172>, <18.827999,53.699997,-13.172>, <18.827999,60.400002,-13.172>, <18.827999,64.400002,-13.172>,
                        <18.827999,71.100006,-13.172>, <18.827999,130.5,-13.172>, <18.827999,137.199997,-13.172>, <18.827999,141.199997,-13.172>,
                        <18.827999,147.900009,-13.172>, <18.827999,207.300003,-13.172>, <18.827999,214,-13.172>, <18.827999,216,-13.172>,
                        <20,0,-20>, <20,0,20>, <20,24,-20>, <20,24,20>,
                        <20,216,-20>, <20,216,20>, <20,240,-20>, <20,240,20>
                }
                normal_vectors {
                        47,
                        <-1,0,0>, <-0.987087,0,-0.160182>, <-0.98178,0,0.190022>, <-0.980769,0,-0.195173>,
                        <-0.948683,0,-0.316228>, <-0.923934,0,0.382552>, <-0.891466,0,0.453088>, <-0.858076,0,-0.513523>,
                        <-0.831696,0,0.555231>, <-0.707107,0,-0.707107>, <-0.707107,0,0.707107>, <-0.555231,0,0.831696>,
                        <-0.513523,0,-0.858076>, <-0.382552,0,0.923934>, <-0.316228,0,-0.948683>, <-0.195173,0,-0.980769>,
                        <-0.190022,0,0.98178>, <-0.160182,0,-0.987087>, <0,-1,0>, <0,-0.646559,-0.762864>,
                        <0,-0.646773,0.762683>, <0,-0.646326,-0.763061>, <0,0,-1>, <0,0,-1>,
                        <0,0,1>, <0,0.646326,-0.763061>, <0,0.646559,-0.762864>, <0,0.646773,0.762683>,
                        <0,1,0>, <0.160182,0,0.987087>, <0.190022,0,-0.98178>, <0.195173,0,0.980769>,
                        <0.316228,0,0.948683>, <0.382552,0,-0.923934>, <0.513523,0,0.858076>, <0.555231,0,-0.831696>,
                        <0.707107,0,-0.707107>, <0.707107,0,0.707107>, <0.831696,0,-0.555231>, <0.858076,0,0.513523>,
                        <0.891466,0,0.453088>, <0.923934,0,-0.382552>, <0.948683,0,0.316228>, <0.980769,0,0.195173>,
                        <0.98178,0,-0.190022>, <0.987087,0,0.160182>, <1,0,0>
                }
                face_indices {
                        322,
                        <23, 235, 234>, <23, 234, 22>, <23, 21, 233>, <23, 233, 235>,
                        <22, 20, 21>, <22, 21, 23>, <234, 232, 20>, <234, 20, 22>,
                        <235, 233, 232>, <235, 232, 234>, <3, 251, 250>, <3, 250, 2>,
                        <3, 1, 249>, <3, 249, 251>, <2, 0, 1>, <2, 1, 3>,
                        <250, 248, 0>, <250, 0, 2>, <251, 249, 248>, <251, 248, 250>,
                        <249, 248, 232>, <249, 232, 233>, <20, 0, 1>, <20, 1, 21>,
                        <21, 1, 249>, <21, 249, 233>, <248, 0, 20>, <248, 20, 232>,
                        <191, 164, 163>, <191, 163, 190>, <164, 153, 151>, <164, 151, 163>,
                        <153, 139, 138>, <153, 138, 151>, <139, 149, 148>, <139, 148, 138>,
                        <190, 163, 151>, <190, 151, 162>, <162, 151, 138>, <162, 138, 148>,
                        <149, 179, 178>, <149, 178, 148>, <190, 207, 208>, <190, 208, 191>,
                        <148, 178, 195>, <148, 195, 162>, <195, 207, 190>, <195, 190, 162>,
                        <94, 99, 72>, <95, 101, 99>, <95, 99, 94>, <101, 73, 72>,
                        <101, 72, 99>, <72, 73, 54>, <72, 54, 53>, <71, 95, 94>,
                        <71, 94, 70>, <72, 53, 61>, <72, 61, 82>, <61, 70, 94>,
                        <61, 94, 82>, <158, 150, 180>, <159, 152, 150>, <159, 150, 158>,
                        <152, 181, 180>, <152, 180, 150>, <180, 181, 202>, <180, 202, 201>,
                        <185, 159, 158>, <185, 158, 184>, <180, 201, 194>, <180, 194, 173>,
                        <194, 184, 158>, <194, 158, 173>, <65, 84, 83>, <65, 83, 64>,
                        <84, 100, 98>, <84, 98, 83>, <100, 113, 112>, <100, 112, 98>,
                        <113, 107, 106>, <113, 106, 112>, <64, 83, 98>, <64, 98, 93>,
                        <93, 98, 112>, <93, 112, 106>, <107, 77, 76>, <107, 76, 106>,
                        <64, 47, 48>, <64, 48, 65>, <106, 76, 60>, <106, 60, 93>,
                        <60, 47, 64>, <60, 64, 93>, <27, 227, 224>, <27, 224, 24>,
                        <27, 31, 231>, <27, 231, 227>, <24, 30, 31>, <24, 31, 27>,
                        <224, 230, 30>, <224, 30, 24>, <227, 231, 230>, <227, 230, 224>,
                        <5, 253, 252>, <5, 252, 4>, <5, 7, 255>, <5, 255, 253>,
                        <4, 6, 7>, <4, 7, 5>, <252, 254, 6>, <252, 6, 4>,
                        <253, 255, 254>, <253, 254, 252>, <230, 254, 255>, <230, 255, 231>,
                        <7, 6, 30>, <7, 30, 31>, <255, 7, 31>, <255, 31, 231>,
                        <30, 6, 254>, <30, 254, 230>, <197, 196, 192>, <197, 192, 193>,
                        <172, 193, 192>, <172, 192, 171>, <172, 171, 155>, <172, 155, 157>,
                        <157, 155, 140>, <157, 140, 142>, <142, 140, 141>, <142, 141, 143>,
                        <141, 127, 129>, <141, 129, 143>, <189, 193, 172>, <189, 172, 177>,
                        <142, 177, 172>, <142, 172, 157>, <143, 147, 177>, <143, 177, 142>,
                        <192, 187, 175>, <192, 175, 171>, <171, 175, 140>, <171, 140, 155>,
                        <145, 141, 140>, <145, 140, 175>, <129, 127, 109>, <129, 109, 111>,
                        <111, 109, 96>, <111, 96, 97>, <97, 96, 103>, <97, 103, 105>,
                        <105, 103, 74>, <105, 74, 75>, <75, 74, 67>, <75, 67, 69>,
                        <69, 67, 58>, <69, 58, 59>, <128, 126, 144>, <128, 144, 146>,
                        <146, 144, 160>, <146, 160, 161>, <161, 160, 154>, <161, 154, 156>,
                        <156, 154, 182>, <156, 182, 183>, <183, 182, 186>, <183, 186, 188>,
                        <188, 186, 196>, <188, 196, 197>, <59, 58, 62>, <59, 62, 63>,
                        <63, 62, 91>, <63, 91, 92>, <92, 91, 102>, <92, 102, 104>,
                        <104, 102, 115>, <104, 115, 117>, <117, 115, 114>, <117, 114, 116>,
                        <114, 126, 128>, <114, 128, 116>, <68, 63, 92>, <68, 92, 80>,
                        <117, 80, 92>, <117, 92, 104>, <116, 110, 80>, <116, 80, 117>,
                        <62, 66, 78>, <62, 78, 91>, <91, 78, 115>, <91, 115, 102>,
                        <108, 114, 115>, <108, 115, 78>, <160, 174, 182>, <160, 182, 154>,
                        <183, 176, 161>, <183, 161, 156>, <75, 81, 97>, <75, 97, 105>,
                        <96, 79, 74>, <96, 74, 103>, <133, 132, 136>, <133, 136, 137>,
                        <121, 120, 124>, <121, 124, 125>, <124, 136, 137>, <124, 137, 125>,
                        <131, 130, 134>, <131, 134, 135>, <119, 118, 122>, <119, 122, 123>,
                        <134, 135, 123>, <134, 123, 122>, <206, 204, 226>, <206, 226, 229>,
                        <205, 203, 225>, <205, 225, 228>, <229, 206, 205>, <229, 205, 228>,
                        <29, 26, 50>, <29, 50, 52>, <28, 25, 49>, <28, 49, 51>,
                        <51, 52, 29>, <51, 29, 28>, <220, 219, 244>, <220, 244, 245>,
                        <216, 215, 240>, <216, 240, 241>, <212, 211, 236>, <212, 236, 237>,
                        <209, 222, 223>, <209, 223, 210>, <221, 220, 219>, <221, 219, 218>,
                        <217, 216, 215>, <217, 215, 214>, <213, 212, 211>, <213, 211, 210>,
                        <17, 16, 42>, <17, 42, 43>, <13, 12, 38>, <13, 38, 39>,
                        <9, 8, 34>, <9, 34, 35>, <46, 45, 32>, <46, 32, 33>,
                        <42, 43, 44>, <42, 44, 41>, <38, 39, 40>, <38, 40, 37>,
                        <34, 35, 36>, <34, 36, 33>, <19, 18, 246>, <19, 246, 247>,
                        <46, 44, 221>, <46, 221, 223>, <165, 166, 198>, <55, 86, 85>,
                        <220, 221, 44>, <220, 44, 43>, <57, 200, 245>, <57, 245, 17>,
                        <246, 170, 90>, <246, 90, 18>, <246, 245, 200>, <246, 200, 170>,
                        <57, 17, 18>, <57, 18, 90>, <169, 170, 200>, <57, 90, 89>,
                        <42, 41, 218>, <42, 218, 219>, <200, 57, 16>, <200, 16, 244>,
                        <15, 89, 169>, <15, 169, 243>, <15, 16, 57>, <15, 57, 89>,
                        <200, 244, 243>, <200, 243, 169>, <15, 14, 242>, <15, 242, 243>,
                        <41, 40, 217>, <41, 217, 218>, <216, 217, 40>, <216, 40, 39>,
                        <56, 199, 241>, <56, 241, 13>, <242, 168, 88>, <242, 88, 14>,
                        <242, 241, 199>, <242, 199, 168>, <56, 13, 14>, <56, 14, 88>,
                        <167, 168, 199>, <56, 88, 87>, <38, 37, 214>, <38, 214, 215>,
                        <199, 56, 12>, <199, 12, 240>, <11, 87, 167>, <11, 167, 239>,
                        <11, 12, 56>, <11, 56, 87>, <199, 240, 239>, <199, 239, 167>,
                        <11, 10, 238>, <11, 238, 239>, <37, 36, 213>, <37, 213, 214>,
                        <212, 213, 36>, <212, 36, 35>, <55, 198, 237>, <55, 237, 9>,
                        <238, 166, 86>, <238, 86, 10>, <238, 237, 198>, <238, 198, 166>,
                        <55, 9, 10>, <55, 10, 86>
                }
                normal_indices {
                        322,
                        <18, 18, 18>, <18, 18, 18>, <22, 22, 22>, <22, 22, 22>,
                        <46, 46, 46>, <46, 46, 46>, <24, 24, 24>, <24, 24, 24>,
                        <0, 0, 0>, <0, 0, 0>, <18, 18, 18>, <18, 18, 18>,
                        <22, 22, 22>, <22, 22, 22>, <46, 46, 46>, <46, 46, 46>,
                        <24, 24, 24>, <24, 24, 24>, <0, 0, 0>, <0, 0, 0>,
                        <18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
                        <18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
                        <30, 30, 30>, <30, 30, 30>, <14, 14, 14>, <14, 14, 14>,
                        <4, 4, 4>, <4, 4, 4>, <2, 2, 2>, <2, 2, 2>,
                        <18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
                        <10, 10, 10>, <10, 10, 10>, <36, 36, 36>, <36, 36, 36>,
                        <18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
                        <18, 18, 18>, <39, 39, 39>, <39, 39, 39>, <12, 12, 12>,
                        <12, 12, 12>, <9, 9, 9>, <9, 9, 9>, <37, 37, 37>,
                        <37, 37, 37>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
                        <18, 18, 18>, <18, 18, 18>, <7, 7, 7>, <7, 7, 7>,
                        <34, 34, 34>, <34, 34, 34>, <37, 37, 37>, <37, 37, 37>,
                        <9, 9, 9>, <9, 9, 9>, <18, 18, 18>, <18, 18, 18>,
                        <18, 18, 18>, <18, 18, 18>, <16, 16, 16>, <16, 16, 16>,
                        <32, 32, 32>, <32, 32, 32>, <42, 42, 42>, <42, 42, 42>,
                        <44, 44, 44>, <44, 44, 44>, <18, 18, 18>, <18, 18, 18>,
                        <18, 18, 18>, <18, 18, 18>, <36, 36, 36>, <36, 36, 36>,
                        <10, 10, 10>, <10, 10, 10>, <18, 18, 18>, <18, 18, 18>,
                        <18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
                        <24, 24, 24>, <24, 24, 24>, <0, 0, 0>, <0, 0, 0>,
                        <22, 22, 22>, <22, 22, 22>, <46, 46, 46>, <46, 46, 46>,
                        <18, 18, 18>, <18, 18, 18>, <24, 24, 24>, <24, 24, 24>,
                        <0, 0, 0>, <0, 0, 0>, <22, 22, 22>, <22, 22, 22>,
                        <46, 46, 46>, <46, 46, 46>, <28, 28, 28>, <28, 28, 28>,
                        <28, 28, 28>, <28, 28, 28>, <28, 28, 28>, <28, 28, 28>,
                        <28, 28, 28>, <28, 28, 28>, <46, 46, 43>, <46, 43, 43>,
                        <29, 24, 24>, <29, 24, 29>, <29, 29, 32>, <29, 32, 32>,
                        <42, 42, 45>, <42, 45, 45>, <45, 45, 46>, <45, 46, 46>,
                        <31, 24, 24>, <31, 24, 31>, <18, 18, 18>, <18, 18, 18>,
                        <18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
                        <28, 28, 28>, <28, 28, 28>, <28, 28, 28>, <28, 28, 28>,
                        <28, 28, 28>, <28, 28, 28>, <24, 24, 13>, <24, 13, 13>,
                        <13, 13, 11>, <13, 11, 11>, <7, 7, 7>, <7, 7, 7>,
                        <34, 34, 34>, <34, 34, 34>, <8, 8, 5>, <8, 5, 5>,
                        <5, 5, 0>, <5, 0, 0>, <22, 22, 33>, <22, 33, 33>,
                        <33, 33, 35>, <33, 35, 35>, <39, 39, 39>, <39, 39, 39>,
                        <12, 12, 12>, <12, 12, 12>, <38, 38, 41>, <38, 41, 41>,
                        <41, 41, 46>, <41, 46, 46>, <0, 0, 3>, <0, 3, 3>,
                        <22, 22, 17>, <22, 17, 17>, <17, 17, 14>, <17, 14, 14>,
                        <4, 4, 1>, <4, 1, 1>, <1, 1, 0>, <1, 0, 0>,
                        <15, 22, 22>, <15, 22, 15>, <18, 18, 18>, <18, 18, 18>,
                        <18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
                        <28, 28, 28>, <28, 28, 28>, <28, 28, 28>, <28, 28, 28>,
                        <28, 28, 28>, <28, 28, 28>, <28, 28, 28>, <28, 28, 28>,
                        <18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
                        <28, 28, 28>, <28, 28, 28>, <0, 0, 0>, <0, 0, 0>,
                        <0, 0, 0>, <0, 0, 0>, <28, 28, 28>, <28, 28, 28>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <28, 28, 28>, <28, 28, 28>, <22, 22, 22>, <22, 22, 22>,
                        <22, 22, 22>, <22, 22, 22>, <28, 28, 28>, <28, 28, 28>,
                        <22, 22, 22>, <22, 22, 22>, <22, 22, 22>, <22, 22, 22>,
                        <28, 28, 28>, <28, 28, 28>, <22, 22, 22>, <22, 22, 22>,
                        <22, 22, 22>, <22, 22, 22>, <22, 22, 22>, <22, 22, 22>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <22, 22, 22>, <22, 22, 22>, <22, 22, 22>, <22, 22, 22>,
                        <22, 23, 22>, <22, 22, 22>, <46, 46, 46>, <46, 46, 46>,
                        <46, 46, 46>, <46, 46, 46>, <46, 46, 46>, <46, 46, 46>,
                        <46, 46, 46>, <46, 46, 46>, <22, 22, 22>, <22, 22, 22>,
                        <22, 22, 22>, <22, 22, 22>, <40, 40, 40>, <6, 6, 6>,
                        <21, 21, 21>, <21, 21, 21>, <19, 19, 19>, <19, 19, 19>,
                        <27, 27, 27>, <27, 27, 27>, <40, 40, 40>, <40, 40, 40>,
                        <6, 6, 6>, <6, 6, 6>, <40, 40, 40>, <6, 6, 6>,
                        <25, 25, 25>, <25, 25, 25>, <26, 26, 26>, <26, 26, 26>,
                        <20, 20, 20>, <20, 20, 20>, <6, 6, 6>, <6, 6, 6>,
                        <40, 40, 40>, <40, 40, 40>, <22, 22, 22>, <22, 22, 22>,
                        <22, 22, 22>, <22, 22, 22>, <21, 21, 21>, <21, 21, 21>,
                        <19, 19, 19>, <19, 19, 19>, <27, 27, 27>, <27, 27, 27>,
                        <40, 40, 40>, <40, 40, 40>, <6, 6, 6>, <6, 6, 6>,
                        <40, 40, 40>, <6, 6, 6>, <25, 25, 25>, <25, 25, 25>,
                        <26, 26, 26>, <26, 26, 26>, <20, 20, 20>, <20, 20, 20>,
                        <6, 6, 6>, <6, 6, 6>, <40, 40, 40>, <40, 40, 40>,
                        <22, 22, 22>, <22, 22, 22>, <22, 22, 22>, <22, 22, 22>,
                        <21, 21, 21>, <21, 21, 21>, <19, 19, 19>, <19, 19, 19>,
                        <27, 27, 27>, <27, 27, 27>, <40, 40, 40>, <40, 40, 40>,
                        <6, 6, 6>, <6, 6, 6>
                }
        }
}


#declare lg_30517 = object{
          LDX_30517_dot_dat
          LDXSeamMatrix(40, 244, 40, 0, 118, 0)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          //rotate z*-90
}
