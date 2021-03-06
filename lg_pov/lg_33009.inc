/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File                                                    */
/*                                                                             */
/* 20180929 Oliver Cordes                                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_33009: Minifig Book                                                      */
/*                                                                             */
/*******************************************************************************/


#include "LDX.inc"

#declare LDX_s_slash_33009s02_dot_dat_in_part = union {
// ~Minifig Book Front without Front Cover
// Name: s\33009s02.dat
// Author: Franklin W. Cain [fwcain]
// !LDRAW_ORG Subpart UPDATE 2018-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2004-04-22 [PTadmin] Official Update 2004-02
// !HISTORY 2007-09-09 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2014-12-19 [MagFors] Made BFC compliant
// !HISTORY 2017-12-05 [PTadmin] Renamed from s/466bs01
// !HISTORY 2018-01-30 [PTadmin] Official Update 2018-01
	object {
		LDX_2_dash_4cylo_dot_dat_in_part
		matrix <0.5,0,0,0,44,0,0,0,0.5,1.5,-22,2>
	}
	object {
		LDX_2_dash_4chrd_dot_dat_in_part
		matrix <0,-4,0,1,0,0,0,0,1,27,0,7>
	}
	object {
		LDX_2_dash_4cyli_dot_dat_in_part
		matrix <0,-4,0,4,0,0,0,0,1,27,0,7>
	}
	object {
		LDX_4_dash_8sphe_dot_dat_in_part
		matrix <0,-4,0,0.5,0,0,0,0,1,31,0,7>
	}
}


#declare LDX_s_slash_33009s03_dot_dat_in_part = union {
// ~Minifig Book Back without Back Cover
// Name: s\33009s03.dat
// Author: Franklin W. Cain [fwcain]
// !LDRAW_ORG Subpart UPDATE 2018-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2004-04-22 [PTadmin] Official Update 2004-02
// !HISTORY 2007-09-09 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2014-12-19 [MagFors] Made BFC compliant
// !HISTORY 2017-12-05 [PTadmin] Renamed from s/466cs01
// !HISTORY 2018-01-30 [PTadmin] Official Update 2018-01
// BFC INVERTNEXT
	object {
		LDX_4_dash_4ndis_dot_dat_in_part
		matrix <0,-4,0,-1,0,0,0,0,1,-31,0,5>
	}
// BFC INVERTNEXT
	object {
		LDX_4_dash_8sphe_dot_dat_in_part
		matrix <0,-4,0,-0.5,0,0,0,0,1,-31,0,5>
	}
}


#declare LDX_33009k02_dot_dat_sub_part =
union {
// ~Minifig Book Front
// Name: 33009k02.dat
// Author: Franklin W. Cain [fwcain]
// !LDRAW_ORG Part Flexible_Section UPDATE 2018-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2004-04-22 [PTadmin] Official Update 2004-02
// !HISTORY 2007-07-08 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2014-12-20 [MagFors] Made BFC compliant
// !HISTORY 2017-12-05 [PTadmin] Renamed from 466b
// !HISTORY 2018-01-30 [PTadmin] Official Update 2018-01
	object {
		LDX_s_slash_33009s02_dot_dat_in_part
		matrix <1,0,0,0,1,0,0,0,1,0,0,0>
	}
// // decorated surface
}


#declare LDX_33009k03_dot_dat_sub_part =
union {
// ~Minifig Book Back
// Name: 33009k03.dat
// Author: Franklin W. Cain [fwcain]
// !LDRAW_ORG Part Flexible_Section UPDATE 2018-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2004-04-22 [PTadmin] Official Update 2004-02
// !HISTORY 2007-07-08 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2014-12-20 [MagFors] Made BFC compliant
// !HISTORY 2017-12-05 [PTadmin] Renamed from 466c
// !HISTORY 2018-01-30 [PTadmin] Official Update 2018-01
	object {
		LDX_s_slash_33009s03_dot_dat_in_part
		matrix <1,0,0,0,1,0,0,0,1,0,0,0>
	}
// // decorated surface
}


#declare LDX_33009k04_dot_dat_sub_part =
union {
// ~Minifig Book Joint Curved
// Name: 33009k04.dat
// Author: Franklin W. Cain [fwcain]
// !LDRAW_ORG Part Flexible_Section UPDATE 2018-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2004-04-22 [PTadmin] Official Update 2004-02
// !HISTORY 2007-07-08 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2014-12-20 [MagFors] Made BFC compliant
// !HISTORY 2017-12-05 [PTadmin] Renamed from 466d
// !HISTORY 2018-01-30 [PTadmin] Official Update 2018-01
	object {
		LDX_1_dash_4cylo_dot_dat_in_part
		matrix <-2,0,0,0,54,0,0,0,-2,-5,-27,1>
	}
	object {
		LDX_1_dash_4ring3_dot_dat_in_part
		matrix <-0.5,0,0,0,1,0,0,0,-0.5,-5,-27,1>
	}
	object {
		LDX_1_dash_4ring3_dot_dat_in_part
		matrix <-0.5,0,0,0,-1,0,0,0,-0.5,-5,27,1>
	}
// BFC INVERTNEXT
	object {
		LDX_1_dash_4cylo_dot_dat_in_part
		matrix <-1.5,0,0,0,54,0,0,0,-1.5,-5,-27,1>
	}
}


#declare LDX_466b_dot_dat_sub_part =
union {
// ~Moved to 33009k02
// Name: 466b.dat
// Author: [PTadmin]
// !LDRAW_ORG Part UPDATE 2018-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2018-01-30 [PTadmin] Official Update 2018-01
// // ~Minifig Book Front
	object {
		LDX_33009k02_dot_dat_sub_part
		matrix <1,0,0,0,1,0,0,0,1,0,0,0>
	}
}


#declare LDX_466c_dot_dat_sub_part =
union {
// ~Moved to 33009k03
// Name: 466c.dat
// Author: [PTadmin]
// !LDRAW_ORG Part UPDATE 2018-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2018-01-30 [PTadmin] Official Update 2018-01
// // ~Minifig Book Back
	object {
		LDX_33009k03_dot_dat_sub_part
		matrix <1,0,0,0,1,0,0,0,1,0,0,0>
	}
}


#declare LDX_466d_dot_dat_sub_part =
union {
// ~Moved to 33009k04
// Name: 466d.dat
// Author: [PTadmin]
// !LDRAW_ORG Part UPDATE 2018-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2018-01-30 [PTadmin] Official Update 2018-01
// // ~Minifig Book Joint Curved
	object {
		LDX_33009k04_dot_dat_sub_part
		matrix <1,0,0,0,1,0,0,0,1,0,0,0>
	}
}

#declare LDX_33009_dot_dat =
union {
// Minifig Book
// Name: 33009.dat
// Author: Franklin W. Cain [fwcain]
// !LDRAW_ORG Part UPDATE 2004-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC NOCERTIFY
// !CATEGORY Minifig Accessory
// !KEYWORDS Container, Belville, Castle, Harry Potter, hollow book
// !KEYWORDS library, bookcase, bookshelf, journal, log, diary, dictionary
// !KEYWORDS atlas, encyclopedia, encyclopaedia, spellbook, libram, tome
// !KEYWORDS wizard, sorceror, magic
// !HISTORY 2004-04-22 [PTadmin] Official Update 2004-02
// !HISTORY 2007-06-25 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// // This piece is a "container."  It easily holds a 1x2 tile with room to spare.
	object {
		LDX_466b_dot_dat_sub_part
		matrix <0,0,1,0,1,0,-1,0,0,6,0,1>
	}
	object {
		LDX_466c_dot_dat_sub_part
		matrix <0,0,-1,0,1,0,1,0,0,-6,0,1>
	}
	object {
		LDX_466d_dot_dat_sub_part
		matrix <-1,0,0,0,-1,0,0,0,1,0,0,0>
	}
	object {
		LDX_466d_dot_dat_sub_part
		matrix <1,0,0,0,1,0,0,0,1,0,0,0>
	}
// end of file
	mesh2 {
		vertex_vectors {
			159,
			<-7,-27,1>, <-7,-27,35>, <-7,27,1>, <-7,27,35>,
			<-5,-27,-1>, <-5,-27,0>, <-5,-17,-1>, <-5,-16.375,-2>,
			<-5,-15.625,-2>, <-5,-15,-1>, <-5,0,-1>, <-5,0,0>,
			<-5,15,-1>, <-5,15.625,-2>, <-5,16.375,-2>, <-5,17,-1>,
			<-5,27,-1>, <-5,27,0>, <-4,-27,1>, <-4,-27,35>,
			<-4,-26,2>, <-4,-26,34>, <-4,-24,4>, <-4,-24,32>,
			<-4,24,4>, <-4,24,32>, <-4,26,2>, <-4,26,34>,
			<-4,27,1>, <-4,27,35>, <-3,-26,0>, <-3,-24,4>,
			<-3,-24,30>, <-3,-22,4>, <-3,-22,30>, <-3,0,0>,
			<-3,22,4>, <-3,22,30>, <-3,24,4>, <-3,24,30>,
			<-3,26,0>, <-2,-27,-2>, <-2,-26,1>, <-2,-17,-2>,
			<-2,-16.375,-3>, <-2,-15.625,-3>, <-2,-15,-2>, <-2,-4,32>,
			<-2,0,1>, <-2,4,32>, <-2,15,-2>, <-2,15.625,-3>,
			<-2,16.375,-3>, <-2,17,-2>, <-2,26,1>, <-2,27,-2>,
			<-1,-25,0>, <-1,-25,1>, <-1,-24,32>, <-1,-22,28>,
			<-1,-22,32>, <-1,-4,28>, <-1,-4,32>, <-1,0,0>,
			<-1,0,1>, <-1,4,28>, <-1,4,32>, <-1,22,28>,
			<-1,22,32>, <-1,24,32>, <-1,25,0>, <-1,25,1>,
			<0,-27,-2>, <0,-27,0>, <0,-26,0>, <0,-26,1>,
			<0,-25,0>, <0,-25,1>, <0,-17,-2>, <0,-16.375,-3>,
			<0,-15.625,-3>, <0,-15,-2>, <0,-4,32>, <0,0,0>,
			<0,4,32>, <0,15,-2>, <0,15.625,-3>, <0,16.375,-3>,
			<0,17,-2>, <0,25,0>, <0,25,1>, <0,26,0>,
			<0,26,1>, <0,27,-2>, <0,27,0>, <1,-25,0>,
			<1,-25,1>, <1,0,0>, <1,0,1>, <1,25,0>,
			<1,25,1>, <2,-27,-2>, <2,-26,1>, <2,-26,2>,
			<2,-26,34>, <2,-24,4>, <2,-24,32>, <2,-22,2>,
			<2,-22,4>, <2,-17,-2>, <2,-16.375,-3>, <2,-15.625,-3>,
			<2,-15,-2>, <2,0,1>, <2,15,-2>, <2,15.625,-3>,
			<2,16.375,-3>, <2,17,-2>, <2,22,2>, <2,22,4>,
			<2,24,4>, <2,24,32>, <2,26,1>, <2,26,2>,
			<2,26,34>, <2,27,-2>, <3,-26,0>, <3,0,0>,
			<3,26,0>, <4,-27,1>, <4,-27,35>, <4,-26,2>,
			<4,-26,34>, <4,-22,2>, <4,-22,28>, <4,22,2>,
			<4,22,28>, <4,26,2>, <4,26,34>, <4,27,1>,
			<4,27,35>, <5,-27,-1>, <5,-27,0>, <5,-17,-1>,
			<5,-16.375,-2>, <5,-15.625,-2>, <5,-15,-1>, <5,0,-1>,
			<5,0,0>, <5,15,-1>, <5,15.625,-2>, <5,16.375,-2>,
			<5,17,-1>, <5,27,-1>, <5,27,0>, <7,-27,1>,
			<7,-27,35>, <7,27,1>, <7,27,35>
		}
		normal_vectors {
			38,
			<-1,0,0>, <-0.707107,0,-0.707107>, <-0.707107,0,0.707107>, <-0.316228,0,-0.948683>,
			<-0.316228,0,0.948683>, <-0.173972,-0.835067,-0.521917>, <-0.173972,-0.835067,0.521917>, <-0.173972,0.835067,-0.521917>,
			<-0.173972,0.835067,0.521917>, <-0.160182,0,-0.987087>, <-0.160182,0,0.987087>, <-0.08732,-0.844759,-0.527974>,
			<-0.08732,-0.844759,0.527974>, <-0.08732,0.844759,-0.527974>, <-0.08732,0.844759,0.527974>, <0,-1,0>,
			<0,-0.847998,-0.529999>, <0,-0.847998,0.529999>, <0,0,-1>, <0,0,1>,
			<0,0.847998,-0.529999>, <0,0.847998,0.529999>, <0,1,0>, <0.08732,-0.844759,-0.527974>,
			<0.08732,-0.844759,0.527974>, <0.08732,0.844759,-0.527974>, <0.08732,0.844759,0.527974>, <0.160182,0,-0.987087>,
			<0.160182,0,0.987087>, <0.173972,-0.835067,-0.521917>, <0.173972,-0.835067,0.521917>, <0.173972,0.835067,-0.521917>,
			<0.173972,0.835067,0.521917>, <0.316228,0,-0.948683>, <0.316228,0,0.948683>, <0.707107,0,-0.707107>,
			<0.707107,0,0.707107>, <1,0,0>
		}
		face_indices {
			282,
			<154, 148, 147>, <154, 147, 153>, <125, 93, 94>, <125, 94, 153>,
			<153, 94, 154>, <97, 99, 89>, <97, 89, 83>, <148, 154, 128>,
			<148, 128, 127>, <128, 154, 94>, <128, 94, 91>, <85, 86, 115>,
			<85, 115, 114>, <86, 87, 116>, <86, 116, 115>, <87, 88, 117>,
			<87, 117, 116>, <114, 115, 150>, <114, 150, 149>, <115, 116, 151>,
			<115, 151, 150>, <116, 117, 152>, <116, 152, 151>, <150, 151, 152>,
			<150, 152, 149>, <91, 92, 122>, <91, 122, 128>, <128, 122, 113>,
			<128, 113, 127>, <100, 122, 92>, <100, 92, 90>, <98, 113, 122>,
			<98, 122, 100>, <99, 100, 90>, <99, 90, 89>, <97, 98, 100>,
			<97, 100, 99>, <17, 11, 10>, <17, 10, 16>, <55, 93, 94>,
			<55, 94, 16>, <16, 94, 17>, <63, 70, 89>, <63, 89, 83>,
			<11, 17, 40>, <11, 40, 35>, <40, 17, 94>, <40, 94, 91>,
			<85, 86, 51>, <85, 51, 50>, <86, 87, 52>, <86, 52, 51>,
			<87, 88, 53>, <87, 53, 52>, <50, 51, 13>, <50, 13, 12>,
			<51, 52, 14>, <51, 14, 13>, <52, 53, 15>, <52, 15, 14>,
			<13, 14, 15>, <13, 15, 12>, <91, 92, 54>, <91, 54, 40>,
			<40, 54, 48>, <40, 48, 35>, <71, 54, 92>, <71, 92, 90>,
			<64, 48, 54>, <64, 54, 71>, <70, 71, 90>, <70, 90, 89>,
			<63, 64, 71>, <63, 71, 70>, <142, 148, 147>, <142, 147, 141>,
			<101, 72, 73>, <101, 73, 141>, <141, 73, 142>, <97, 95, 76>,
			<97, 76, 83>, <148, 142, 126>, <148, 126, 127>, <126, 142, 73>,
			<126, 73, 74>, <81, 80, 111>, <81, 111, 112>, <80, 79, 110>,
			<80, 110, 111>, <79, 78, 109>, <79, 109, 110>, <112, 111, 145>,
			<112, 145, 146>, <111, 110, 144>, <111, 144, 145>, <110, 109, 143>,
			<110, 143, 144>, <145, 144, 143>, <145, 143, 146>, <74, 75, 102>,
			<74, 102, 126>, <126, 102, 113>, <126, 113, 127>, <96, 102, 75>,
			<96, 75, 77>, <98, 113, 102>, <98, 102, 96>, <95, 96, 77>,
			<95, 77, 76>, <97, 98, 96>, <97, 96, 95>, <5, 11, 10>,
			<5, 10, 4>, <41, 72, 73>, <41, 73, 4>, <4, 73, 5>,
			<63, 56, 76>, <63, 76, 83>, <11, 5, 30>, <11, 30, 35>,
			<30, 5, 73>, <30, 73, 74>, <81, 80, 45>, <81, 45, 46>,
			<80, 79, 44>, <80, 44, 45>, <79, 78, 43>, <79, 43, 44>,
			<46, 45, 8>, <46, 8, 9>, <45, 44, 7>, <45, 7, 8>,
			<44, 43, 6>, <44, 6, 7>, <8, 7, 6>, <8, 6, 9>,
			<74, 75, 42>, <74, 42, 30>, <30, 42, 48>, <30, 48, 35>,
			<57, 42, 75>, <57, 75, 77>, <64, 48, 42>, <64, 42, 57>,
			<56, 57, 77>, <56, 77, 76>, <63, 64, 57>, <63, 57, 56>,
			<43, 109, 101>, <43, 101, 41>, <43, 41, 4>, <43, 4, 6>,
			<143, 141, 101>, <143, 101, 109>, <50, 114, 112>, <50, 112, 46>,
			<9, 12, 50>, <9, 50, 46>, <112, 114, 149>, <112, 149, 146>,
			<55, 125, 117>, <55, 117, 53>, <15, 16, 55>, <15, 55, 53>,
			<117, 125, 153>, <117, 153, 152>, <139, 140, 130>, <139, 130, 129>,
			<139, 157, 158>, <139, 158, 140>, <129, 155, 157>, <129, 157, 139>,
			<130, 156, 155>, <130, 155, 129>, <140, 158, 156>, <140, 156, 130>,
			<132, 138, 124>, <132, 124, 104>, <138, 137, 123>, <138, 123, 124>,
			<104, 103, 131>, <104, 131, 132>, <104, 124, 121>, <104, 121, 106>,
			<133, 107, 108>, <133, 108, 134>, <136, 119, 118>, <136, 118, 135>,
			<107, 103, 105>, <107, 105, 108>, <105, 103, 104>, <105, 104, 106>,
			<121, 124, 123>, <121, 123, 120>, <119, 120, 123>, <119, 123, 118>,
			<133, 131, 103>, <133, 103, 107>, <118, 123, 137>, <118, 137, 135>,
			<59, 61, 134>, <61, 65, 136>, <61, 136, 134>, <136, 65, 67>,
			<61, 59, 60>, <61, 60, 62>, <67, 65, 66>, <67, 66, 68>,
			<121, 69, 68>, <106, 121, 68>, <106, 68, 60>, <60, 58, 106>,
			<31, 32, 34>, <31, 34, 33>, <31, 33, 108>, <31, 108, 105>,
			<36, 37, 39>, <36, 39, 38>, <36, 38, 120>, <36, 120, 119>,
			<60, 34, 32>, <60, 32, 58>, <69, 39, 37>, <69, 37, 68>,
			<108, 33, 59>, <108, 59, 134>, <59, 33, 34>, <59, 34, 60>,
			<36, 119, 136>, <36, 136, 67>, <68, 37, 36>, <68, 36, 67>,
			<106, 58, 31>, <106, 31, 105>, <120, 38, 69>, <120, 69, 121>,
			<58, 32, 31>, <38, 39, 69>, <156, 155, 157>, <156, 157, 158>,
			<29, 28, 18>, <29, 18, 19>, <29, 3, 2>, <29, 2, 28>,
			<19, 1, 3>, <19, 3, 29>, <18, 0, 1>, <18, 1, 19>,
			<28, 2, 0>, <28, 0, 18>, <124, 27, 26>, <124, 26, 123>,
			<104, 21, 27>, <104, 27, 124>, <103, 20, 21>, <103, 21, 104>,
			<123, 26, 20>, <123, 20, 103>, <105, 120, 24>, <105, 24, 22>,
			<120, 121, 25>, <120, 25, 24>, <22, 23, 106>, <22, 106, 105>,
			<47, 82, 106>, <47, 106, 23>, <25, 121, 84>, <25, 84, 49>,
			<23, 25, 49>, <23, 49, 47>, <82, 84, 121>, <82, 121, 106>,
			<106, 104, 103>, <106, 103, 105>, <120, 123, 124>, <120, 124, 121>,
			<103, 123, 120>, <103, 120, 105>, <106, 121, 124>, <106, 124, 104>,
			<3, 2, 0>, <3, 0, 1>
		}
		normal_indices {
			282,
			<0, 0, 0>, <0, 0, 0>, <15, 15, 15>, <15, 15, 15>,
			<15, 15, 15>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
			<18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <21, 21, 14>,
			<21, 14, 14>, <19, 19, 10>, <19, 10, 10>, <17, 17, 12>,
			<17, 12, 12>, <14, 14, 8>, <14, 8, 8>, <10, 10, 4>,
			<10, 4, 4>, <12, 12, 6>, <12, 6, 6>, <0, 0, 0>,
			<0, 0, 0>, <15, 15, 15>, <15, 15, 15>, <1, 1, 1>,
			<1, 1, 1>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
			<18, 18, 18>, <22, 22, 22>, <22, 22, 22>, <37, 37, 37>,
			<37, 37, 37>, <0, 0, 0>, <0, 0, 0>, <22, 22, 22>,
			<22, 22, 22>, <22, 22, 22>, <19, 19, 19>, <19, 19, 19>,
			<19, 19, 19>, <19, 19, 19>, <19, 19, 19>, <19, 19, 19>,
			<16, 16, 11>, <16, 11, 11>, <18, 18, 9>, <18, 9, 9>,
			<20, 20, 13>, <20, 13, 13>, <11, 11, 5>, <11, 5, 5>,
			<9, 9, 3>, <9, 3, 3>, <13, 13, 7>, <13, 7, 7>,
			<0, 0, 0>, <0, 0, 0>, <22, 22, 22>, <22, 22, 22>,
			<2, 2, 2>, <2, 2, 2>, <19, 19, 19>, <19, 19, 19>,
			<19, 19, 19>, <19, 19, 19>, <15, 15, 15>, <15, 15, 15>,
			<37, 37, 37>, <37, 37, 37>, <37, 37, 37>, <37, 37, 37>,
			<15, 15, 15>, <15, 15, 15>, <15, 15, 15>, <19, 19, 19>,
			<19, 19, 19>, <19, 19, 19>, <19, 19, 19>, <19, 19, 19>,
			<19, 19, 19>, <20, 20, 25>, <20, 25, 25>, <18, 18, 27>,
			<18, 27, 27>, <16, 16, 23>, <16, 23, 23>, <25, 25, 31>,
			<25, 31, 31>, <27, 27, 33>, <27, 33, 33>, <23, 23, 29>,
			<23, 29, 29>, <37, 37, 37>, <37, 37, 37>, <15, 15, 15>,
			<15, 15, 15>, <36, 36, 36>, <36, 36, 36>, <19, 19, 19>,
			<19, 19, 19>, <19, 19, 19>, <19, 19, 19>, <22, 22, 22>,
			<22, 22, 22>, <0, 0, 0>, <0, 0, 0>, <37, 37, 37>,
			<37, 37, 37>, <22, 22, 22>, <22, 22, 22>, <22, 22, 22>,
			<18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
			<18, 18, 18>, <18, 18, 18>, <17, 17, 24>, <17, 24, 24>,
			<19, 19, 28>, <19, 28, 28>, <21, 21, 26>, <21, 26, 26>,
			<24, 24, 30>, <24, 30, 30>, <28, 28, 34>, <28, 34, 34>,
			<26, 26, 32>, <26, 32, 32>, <37, 37, 37>, <37, 37, 37>,
			<22, 22, 22>, <22, 22, 22>, <35, 35, 35>, <35, 35, 35>,
			<18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
			<15, 15, 15>, <15, 15, 15>, <0, 0, 0>, <0, 0, 0>,
			<28, 10, 10>, <28, 10, 28>, <28, 28, 34>, <28, 34, 34>,
			<4, 4, 10>, <4, 10, 10>, <28, 10, 10>, <28, 10, 28>,
			<34, 34, 28>, <34, 28, 28>, <10, 10, 4>, <10, 4, 4>,
			<28, 10, 10>, <28, 10, 28>, <34, 34, 28>, <34, 28, 28>,
			<10, 10, 4>, <10, 4, 4>, <0, 0, 0>, <0, 0, 0>,
			<22, 22, 22>, <22, 22, 22>, <18, 18, 18>, <18, 18, 18>,
			<15, 15, 15>, <15, 15, 15>, <19, 19, 19>, <19, 19, 19>,
			<18, 18, 18>, <18, 18, 18>, <15, 15, 15>, <15, 15, 15>,
			<22, 22, 22>, <22, 22, 22>, <37, 37, 37>, <37, 37, 37>,
			<15, 15, 15>, <15, 15, 15>, <22, 22, 22>, <22, 22, 22>,
			<37, 37, 37>, <37, 37, 37>, <37, 37, 37>, <37, 37, 37>,
			<37, 37, 37>, <37, 37, 37>, <37, 37, 37>, <37, 37, 37>,
			<19, 19, 19>, <19, 19, 19>, <19, 19, 19>, <19, 19, 19>,
			<19, 19, 19>, <19, 19, 19>, <19, 19, 19>, <19, 19, 19>,
			<37, 37, 37>, <37, 37, 37>, <37, 37, 37>, <37, 37, 37>,
			<18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
			<37, 37, 37>, <37, 37, 37>, <19, 19, 19>, <19, 19, 19>,
			<37, 37, 37>, <37, 37, 37>, <19, 19, 19>, <19, 19, 19>,
			<35, 35, 35>, <35, 35, 35>, <35, 35, 35>, <35, 35, 35>,
			<15, 15, 15>, <15, 15, 15>, <15, 15, 15>, <15, 15, 15>,
			<22, 22, 22>, <22, 22, 22>, <22, 22, 22>, <22, 22, 22>,
			<22, 22, 22>, <22, 22, 22>, <15, 15, 15>, <15, 15, 15>,
			<22, 22, 22>, <15, 15, 15>, <0, 0, 0>, <0, 0, 0>,
			<37, 37, 37>, <37, 37, 37>, <22, 22, 22>, <22, 22, 22>,
			<19, 19, 19>, <19, 19, 19>, <15, 15, 15>, <15, 15, 15>,
			<18, 18, 18>, <18, 18, 18>, <22, 22, 22>, <22, 22, 22>,
			<19, 19, 19>, <19, 19, 19>, <15, 15, 15>, <15, 15, 15>,
			<18, 18, 18>, <18, 18, 18>, <18, 18, 18>, <18, 18, 18>,
			<22, 22, 22>, <22, 22, 22>, <15, 15, 15>, <15, 15, 15>,
			<19, 19, 19>, <19, 19, 19>, <19, 19, 19>, <19, 19, 19>,
			<19, 19, 19>, <19, 19, 19>, <19, 19, 19>, <19, 19, 19>,
			<0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
			<0, 0, 0>, <0, 0, 0>, <0, 0, 0>, <0, 0, 0>,
			<37, 37, 37>, <37, 37, 37>
		}
	}
}


#declare lg_33009 = object{
          LDX_33009_dot_dat
          LDXSeamMatrix(14, 54, 38, 0, 0, 16)
          scale 1/25.
          rotate x*-90
          //rotate y*180
          rotate z*-90
}
