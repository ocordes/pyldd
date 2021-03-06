/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20200209 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_98549: Tile, Modified 2 x 2 with Bar and Stud with Stop Ring             */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"


#declare LDX_98549_dot_dat =
union {
        object {
                LDX_4_dash_4cylo_dot_dat_in_part
                matrix <6.125000,0.000000,0.000000,0.000000,4.450000,0.000000,0.000000,0.000000,6.125000,0.000000,-4.450000,0.000000>
        }
        object {
                LDX_4_dash_4disc_dot_dat_in_part
                matrix <6.125000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,6.125000,0.000000,-4.450000,0.000000>
        }
        object {
                LDX_4_dash_4cylo_dot_dat_in_part
                matrix <4.000000,0.000000,0.000000,0.000000,104.550003,0.000000,0.000000,0.000000,4.000000,0.000000,-109.000000,0.000000>
        }
        object {
                LDX_4_dash_4disc_dot_dat_in_part
                matrix <-7.500000,0.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,0.000000,7.500000,0.000000,-109.000000,0.000000>
        }
        object {
                LDX_4_dash_4cylo_dot_dat_in_part
                matrix <7.500000,0.000000,0.000000,0.000000,3.000000,0.000000,0.000000,0.000000,7.500000,0.000000,-112.000000,0.000000>
        }
        object {
                LDX_4_dash_4disc_dot_dat_in_part
                matrix <7.500000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,7.500000,0.000000,-112.000000,0.000000>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,1.000000,0.000000,-112.000000,0.000000>
        }
        object {
                LDX_stud4_dot_dat_in_part
                matrix <1.000000,0.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,0.000000,-1.000000,0.000000,4.000000,0.000000>
        }
        mesh2 {
                vertex_vectors {
                        96,
                        <-20.000000,8.000000,-20.000000>, <-16.000000,8.000000,-16.000000>, <-16.000000,8.000000,16.000000>, <-20.000000,8.000000,20.000000>,
                        <-5.417000,8.000000,-20.000000>, <-6.667000,8.000000,-16.000000>, <-5.000000,8.000000,-19.250000>, <-6.250000,8.000000,-15.250000>,
                        <6.250000,8.000000,-15.250000>, <5.000000,8.000000,-19.250000>, <16.000000,8.000000,16.000000>, <20.000000,8.000000,20.000000>,
                        <6.667000,8.000000,-16.000000>, <5.417000,8.000000,-20.000000>, <20.000000,8.000000,-20.000000>, <16.000000,8.000000,-16.000000>,
                        <-6.667000,4.000000,-16.000000>, <-16.000000,4.000000,-16.000000>, <-6.250000,4.000000,-15.250000>, <6.250000,4.000000,-15.250000>,
                        <6.667000,4.000000,-16.000000>, <16.000000,4.000000,-16.000000>, <-16.000000,4.000000,16.000000>, <16.000000,4.000000,16.000000>,
                        <5.417000,0.000000,-20.000000>, <20.000000,0.000000,-20.000000>, <5.000000,0.000000,-19.250000>, <-5.000000,0.000000,-19.250000>,
                        <-5.417000,0.000000,-20.000000>, <-20.000000,0.000000,-20.000000>, <-20.000000,0.000000,20.000000>, <20.000000,0.000000,20.000000>,
                        <0.000000,-116.000000,6.000000>, <0.000000,-116.000000,4.000000>, <-1.530800,-116.000000,3.695600>, <-2.296200,-116.000000,5.543400>,
                        <-2.828400,-116.000000,2.828400>, <-4.242600,-116.000000,4.242600>, <-3.695600,-116.000000,1.530800>, <-5.543400,-116.000000,2.296200>,
                        <-4.000000,-116.000000,0.000000>, <-6.000000,-116.000000,0.000000>, <-3.695600,-116.000000,-1.530800>, <-5.543400,-116.000000,-2.296200>,
                        <-2.828400,-116.000000,-2.828400>, <-4.242600,-116.000000,-4.242600>, <-1.530800,-116.000000,-3.695600>, <-2.296200,-116.000000,-5.543400>,
                        <0.000000,-116.000000,-4.000000>, <0.000000,-116.000000,-6.000000>, <1.530800,-116.000000,-3.695600>, <2.296200,-116.000000,-5.543400>,
                        <2.828400,-116.000000,-2.828400>, <4.242600,-116.000000,-4.242600>, <3.695600,-116.000000,-1.530800>, <5.543400,-116.000000,-2.296200>,
                        <4.000000,-116.000000,0.000000>, <6.000000,-116.000000,0.000000>, <3.695600,-116.000000,1.530800>, <5.543400,-116.000000,2.296200>,
                        <2.828400,-116.000000,2.828400>, <4.242600,-116.000000,4.242600>, <1.530800,-116.000000,3.695600>, <2.296200,-116.000000,5.543400>,
                        <0.000000,8.000000,-8.000000>, <0.000000,8.000000,-6.000000>, <-2.296200,8.000000,-5.543400>, <-3.061600,8.000000,-7.391200>,
                        <-4.242600,8.000000,-4.242600>, <-5.656800,8.000000,-5.656800>, <-5.543400,8.000000,-2.296200>, <-7.391200,8.000000,-3.061600>,
                        <-6.000000,8.000000,0.000000>, <-8.000000,8.000000,0.000000>, <-5.543400,8.000000,2.296200>, <-7.391200,8.000000,3.061600>,
                        <-4.242600,8.000000,4.242600>, <-5.656800,8.000000,5.656800>, <-2.296200,8.000000,5.543400>, <-3.061600,8.000000,7.391200>,
                        <0.000000,8.000000,6.000000>, <0.000000,8.000000,8.000000>, <2.296200,8.000000,5.543400>, <3.061600,8.000000,7.391200>,
                        <4.242600,8.000000,4.242600>, <5.656800,8.000000,5.656800>, <5.543400,8.000000,2.296200>, <7.391200,8.000000,3.061600>,
                        <6.000000,8.000000,0.000000>, <8.000000,8.000000,0.000000>, <5.543400,8.000000,-2.296200>, <7.391200,8.000000,-3.061600>,
                        <4.242600,8.000000,-4.242600>, <5.656800,8.000000,-5.656800>, <2.296200,8.000000,-5.543400>, <3.061600,8.000000,-7.391200>
                }
                normal_vectors {
                        12,
                        <0.000000,-1.000000,0.000000>, <0.000000,-1.000000,0.000000>, <0.000000,0.000000,-1.000000>, <0.873992,0.000000,-0.485940>,
                        <-0.873992,0.000000,-0.485940>, <0.000000,0.000000,1.000000>, <0.873992,0.000000,0.485940>, <-0.873992,0.000000,0.485940>,
                        <0.000000,1.000000,0.000000>, <0.000000,1.000000,0.000000>, <-1.000000,0.000000,0.000000>, <1.000000,0.000000,0.000000>
                }
                face_indices {
                        124,
                        <0, 1, 2>, <0, 2, 3>, <0, 4, 5>, <0, 5, 1>,
                        <4, 6, 7>, <4, 7, 5>, <8, 7, 6>, <8, 6, 9>,
                        <10, 11, 3>, <10, 3, 2>, <12, 8, 9>, <12, 9, 13>,
                        <13, 14, 15>, <13, 15, 12>, <15, 14, 11>, <15, 11, 10>,
                        <5, 16, 17>, <5, 17, 1>, <5, 7, 18>, <5, 18, 16>,
                        <18, 7, 8>, <18, 8, 19>, <12, 20, 19>, <12, 19, 8>,
                        <15, 21, 20>, <15, 20, 12>, <22, 17, 16>, <22, 16, 18>,
                        <22, 18, 19>, <22, 19, 23>, <23, 19, 20>, <23, 20, 21>,
                        <13, 24, 25>, <13, 25, 14>, <9, 26, 24>, <9, 24, 13>,
                        <9, 6, 27>, <9, 27, 26>, <27, 6, 4>, <27, 4, 28>,
                        <0, 29, 28>, <0, 28, 4>, <28, 29, 30>, <28, 30, 27>,
                        <30, 31, 26>, <30, 26, 27>, <25, 24, 26>, <25, 26, 31>,
                        <32, 33, 34>, <32, 34, 35>, <35, 34, 36>, <35, 36, 37>,
                        <37, 36, 38>, <37, 38, 39>, <39, 38, 40>, <39, 40, 41>,
                        <41, 40, 42>, <41, 42, 43>, <43, 42, 44>, <43, 44, 45>,
                        <45, 44, 46>, <45, 46, 47>, <47, 46, 48>, <47, 48, 49>,
                        <49, 48, 50>, <49, 50, 51>, <51, 50, 52>, <51, 52, 53>,
                        <53, 52, 54>, <53, 54, 55>, <55, 54, 56>, <55, 56, 57>,
                        <57, 56, 58>, <57, 58, 59>, <59, 58, 60>, <59, 60, 61>,
                        <61, 60, 62>, <61, 62, 63>, <63, 62, 33>, <63, 33, 32>,
                        <64, 65, 66>, <64, 66, 67>, <67, 66, 68>, <67, 68, 69>,
                        <69, 68, 70>, <69, 70, 71>, <71, 70, 72>, <71, 72, 73>,
                        <73, 72, 74>, <73, 74, 75>, <75, 74, 76>, <75, 76, 77>,
                        <77, 76, 78>, <77, 78, 79>, <79, 78, 80>, <79, 80, 81>,
                        <81, 80, 82>, <81, 82, 83>, <83, 82, 84>, <83, 84, 85>,
                        <85, 84, 86>, <85, 86, 87>, <87, 86, 88>, <87, 88, 89>,
                        <89, 88, 90>, <89, 90, 91>, <91, 90, 92>, <91, 92, 93>,
                        <93, 92, 94>, <93, 94, 95>, <95, 94, 65>, <95, 65, 64>,
                        <2, 10, 23>, <2, 23, 22>, <10, 15, 21>, <10, 21, 23>,
                        <22, 17, 1>, <22, 1, 2>, <3, 11, 31>, <3, 31, 30>,
                        <11, 14, 25>, <11, 25, 31>, <30, 29, 0>, <30, 0, 3>
                }
                normal_indices {
                        124,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <0, 1, 1>, <0, 1, 0>, <0, 1, 1>, <0, 1, 0>,
                        <1, 1, 0>, <1, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 1>, <0, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <3, 3, 3>, <3, 3, 3>,
                        <2, 2, 2>, <2, 2, 2>, <4, 4, 4>, <4, 4, 4>,
                        <2, 2, 2>, <2, 2, 2>, <0, 0, 0>, <0, 0, 0>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <5, 5, 5>, <5, 5, 5>, <6, 6, 6>, <6, 6, 6>,
                        <5, 5, 5>, <5, 5, 5>, <7, 7, 7>, <7, 7, 7>,
                        <5, 5, 5>, <5, 5, 5>, <8, 8, 8>, <8, 8, 8>,
                        <8, 8, 8>, <8, 8, 8>, <8, 8, 8>, <8, 8, 8>,
                        <9, 9, 9>, <9, 9, 8>, <8, 9, 9>, <8, 9, 8>,
                        <8, 9, 8>, <8, 8, 9>, <9, 8, 8>, <9, 8, 9>,
                        <9, 8, 8>, <9, 8, 8>, <8, 8, 8>, <8, 8, 8>,
                        <8, 8, 8>, <8, 8, 8>, <8, 8, 8>, <8, 8, 8>,
                        <8, 8, 8>, <8, 8, 8>, <8, 8, 8>, <8, 8, 8>,
                        <8, 8, 8>, <8, 8, 8>, <8, 8, 8>, <8, 8, 8>,
                        <8, 8, 8>, <8, 8, 8>, <8, 8, 8>, <8, 8, 8>,
                        <8, 8, 8>, <8, 8, 8>, <8, 8, 9>, <8, 9, 9>,
                        <1, 1, 1>, <1, 1, 0>, <0, 1, 1>, <0, 1, 0>,
                        <0, 1, 0>, <0, 0, 1>, <1, 0, 0>, <1, 0, 1>,
                        <1, 0, 0>, <1, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
                        <0, 0, 0>, <0, 0, 0>, <0, 0, 1>, <0, 1, 1>,
                        <2, 2, 2>, <2, 2, 2>, <10, 10, 10>, <10, 10, 10>,
                        <11, 11, 11>, <11, 11, 11>, <2, 2, 2>, <2, 2, 2>,
                        <10, 10, 10>, <10, 10, 10>, <11, 11, 11>, <11, 11, 11>
                }
        }
}


#declare lg_98549 = object{
          LDX_98549_dot_dat
          LDXSeamMatrix(40.000000, 124.000000, 40.000000, 0.000000, -54.000000, 0.000000)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
