// all includes for handling LDX commands from LDView

// Oliver Cordes 2018-08-31
//

// the content is copied from povray files which are
// created by LDView 4.2.1.1

// some constants

#declare LDXQual = 3;   // Quality (0 = Bounding Box; 1 = No Refraction; 2 = Normal; 3 = Stud Logos)

#declare LDXSW = 0.5;

#macro LDXSeamMatrix(Width, Height, Depth, CenterX, CenterY, CenterZ)
#local aw = 0;
#local ah = 0;
#local ad = 0;
#local ax = 0;
#local ay = 0;
#local az = 0;
#if (Width != 0)
#local aw = 1-LDXSW/Width;
#end
#if (Height != 0)
#local ah = 1-LDXSW/Height;
#end
#if (Depth != 0)
#local ad = 1-LDXSW/Depth;
#end
#if (Width != 0 & CenterX != 0)
#local ax = LDXSW/(Width / CenterX);
#end
#if (Height != 0 & CenterY != 0)
#local ay = LDXSW/(Height / CenterY);
#end
#if (Depth != 0 & CenterZ != 0)
#local az = LDXSW/(Depth / CenterZ);
#end
#if (aw <= 0)
#local aw = 1;
#local ax = 0;
#end
#if (ah <= 0)
#local ah = 1;
#local ay = 0;
#end
#if (ad <= 0)
#local ad = 1;
#local az = 0;
#end
matrix <aw,0,0,0,ah,0,0,0,ad,ax,ay,az>
#end

#declare LDX_4_dash_4disc_dot_dat_in_part = disc // Disc 1
{
        <0,0,0>,<0,1,0>,1
}

#declare LDX_4_dash_4disc_dot_dat = disc // Disc 1
{
        <0,0,0>,<0,1,0>,1
}

#declare LDX_4_dash_4ndis_dot_dat_in_part = disc // Not-Disc 1
{
	        <0,0,0>,<0,1,0>,2,1
	        clipped_by
	        {
	                box
	                {
	                        <-1,-1,-1>,<1,1,1>
	                }
	        }
}

#declare LDX_4_dash_4ring2_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,3,2
}

#declare LDX_4_dash_4cyli_dot_dat_in_part = cylinder // Cylinder 1
{
        <0,0,0>,<0,1,0>,1 open
}

#declare LDX_4_dash_4cyli_dot_dat = cylinder // Cylinder 1
{
        <0,0,0>,<0,1,0>,1 open
}


#declare LDX_stud3_dot_dat_in_part = union {
// Stud Tube Solid
// Name: stud3.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2012-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2002-04-04 [sbliss] Modified for BFC compliance
// !HISTORY 2002-04-25 [PTadmin] Official Update 2002-02
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2012-02-16 [Philo] Changed to CCW
// !HISTORY 2012-03-30 [PTadmin] Official Update 2012-01
        object {
                LDX_4_dash_4disc_dot_dat_in_part
                matrix <4,0,0,0,1,0,0,0,4,0,-4,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,4,0,0,0,4,0,-4,0>
        }
}

#declare LDX_1_dash_4cyls_dot_dat_in_part = cylinder // Sloped Cylinder 0.25
{
        <0,0,0>,<0,2,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
                plane
                {
                        <1,1,0>,0.70710678118654757274
                }
        }
}

#declare LDX_1_dash_4cyls2_dot_dat_in_part = cylinder // Sloped Cylinder2 0.25
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <1,0,0>,0
                }
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <1,1,0>,0
                }
        }
}


#declare LDX_2_dash_4ndis_dot_dat_in_part = disc // Not-Disc 0.5
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                box
                {
                        <-1,-1,-1>,<1,1,1>
                }
        }
}

#declare LDX_2_dash_4disc_dot_dat_in_part = disc // Disc 0.5
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}

#declare LDX_48_slash_1_dash_8chrd_dot_dat_in_part = disc // Disc 0.125
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <-0.70710678118654746172,0,-0.29289321881345242726>,-0.92387950420379638672
                }
        }
}

#declare LDX_48_slash_1_dash_8chrd_dot_dat = disc // Disc 0.125
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <-0.70710678118654746172,0,-0.29289321881345242726>,-0.92387950420379638672
                }
        }
}

#declare LDX_48_slash_1_dash_4cyli_dot_dat_in_part = cylinder // Cylinder 0.25
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}

#declare LDX_stud2_dot_dat_in_part = union {
// Stud Open
// Name: stud2.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2009-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 1999-07-05 [PTadmin] Official Update 1999-05
// !HISTORY 2002-04-04 [sbliss] Modified for BFC compliance
// !HISTORY 2002-04-25 [PTadmin] Official Update 2002-02
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2009-06-21 [cwdee] Update ring references to 4-4ring
// !HISTORY 2009-09-03 [PTadmin] Official Update 2009-02
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,4,0,0,0,4,0,-4,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,4,0,0,0,6,0,-4,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,-4,0>
        }
}



#declare LDX_stud2a_dot_dat_in_part = union {
// Stud Open without Base Edges
// Name: stud2a.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2009-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 1999-07-05 [PTadmin] Official Update 1999-05
// !HISTORY 2002-04-04 [sbliss] Modified for BFC compliance
// !HISTORY 2002-04-25 [PTadmin] Official Update 2002-02
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2009-06-21 [cwdee] Update ring references to 4-4ring
// !HISTORY 2009-09-03 [PTadmin] Official Update 2009-02
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,4,0,0,0,4,0,-4,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,4,0,0,0,6,0,-4,0>
        }
        object {
                LDX_4_dash_4ring2_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,-4,0>
        }
}


#declare LDX_3_dash_4cyli_dot_dat_in_part = cylinder // Cylinder 0.75
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                union
                {
                        plane
                        {
                                <0,0,-1>,0
                        }
                        plane
                        {
                                <1,0,0>,0
                        }
                }
        }
}

#declare LDX_3_dash_4disc_dot_dat_in_part = disc // Disc 0.75
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                union
                {
                        plane
                        {
                                <0,0,-1>,0
                        }
                        plane
                        {
                                <1,0,0>,0
                        }
                }
        }
}


#declare LDX_4_dash_4con3_dot_dat_in_part = cone // Cone 1
{
        <0,0,0>,4,<0,1,0>,3 open
}


#declare LDX_4_dash_4con1_dot_dat_in_part = cone // Cone 1
{
        <0,0,0>,2,<0,1,0>,1 open
}


#declare LDX_4_dash_4con0_dot_dat_in_part = cone // Cone 1
{
        <0,0,0>,1,<0,1,0>,0 open
}


#declare LDX_4_dash_4con0_dot_dat = cone // Cone 1
{
        <0,0,0>,1,<0,1,0>,0 open
}


#declare LDX_bump5000_dot_dat_in_part = union {
// Bump 1.0 x 0.5
// Name: bump5000.dat
// Author: Magnus Forsberg [MagFors]
// !LDRAW_ORG Primitive UPDATE 2010-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// !HELP This file creates a bump with radius= 1 and height= 0.5 LDU
// BFC CERTIFY CCW
// !HISTORY 2010-07-05 [PTadmin] Official Update 2010-02
        object {
                LDX_4_dash_4con3_dot_dat_in_part
                matrix <0.25,0,0,0,-0.225,0,0,0,-0.25,0,0,0>
        }
        object {
                LDX_4_dash_4con1_dot_dat_in_part
                matrix <0.375,0,0,0,-0.225,0,0,0,-0.375,0,-0.225,0>
        }
        object {
                LDX_4_dash_4con0_dot_dat_in_part
                matrix <0.375,0,0,0,-0.05,0,0,0,-0.375,0,-0.45,0>
        }
}


#declare LDX_4_dash_4ring1_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,2,1
}


#declare LDX_2_dash_4cyli_dot_dat_in_part = cylinder // Cylinder 0.5
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_2_dash_4ring3_dot_dat_in_part = disc // Ring 0.5
{
        <0,0,0>,<0,1,0>,4,3
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_2_dash_4ring5_dot_dat_in_part = disc // Ring 0.5
{
        <0,0,0>,<0,1,0>,6,5
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_stug2_dash_1x2_dot_dat_in_part = union {
// Stud Open Group  1 x  2
// Name: stug2-1x2.dat
// Author: Steffen [Steffen]
// !LDRAW_ORG Primitive UPDATE 2011-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-12-29 [PTadmin] Official Update 2011-02
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-10,0,0>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,10,0,0>
        }
}


#declare LDX_4_dash_4cylo_dot_dat_in_part = //union {
// Cylinder Open 1.0
// Name: 4-4cylo.dat
// Author: Mark Kennedy [mkennedy]
// !LDRAW_ORG Primitive UPDATE 2010-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2010-04-05 [PTadmin] Official Update 2010-01
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
//}


#declare LDX_1_dash_4cyli_dot_dat_in_part = cylinder // Cylinder 0.25
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_1_dash_4ndis_dot_dat_in_part = disc // Not-Disc 0.25
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
                box
                {
                        <-1,-1,-1>,<1,1,1>
                }
        }
}


#declare LDX_7_dash_16cyli_dot_dat_in_part = cylinder // Cylinder 0.4375
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.38268343236509033689,0,-0.92387953251128651644>,0
                }
        }
}


#declare LDX_7_dash_16ndis_dot_dat_in_part = disc // Not-Disc 0.4375
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.38268343236509033689,0,-0.92387953251128651644>,0
                }
                box
                {
                        <-1,-1,-1>,<1,1,1>
                }
        }
}


#declare LDX_7_dash_16disc_dot_dat_in_part = disc // Disc 0.4375
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.38268343236509033689,0,-0.92387953251128651644>,0
                }
        }
}


#declare LDX_2_dash_4cylo_dot_dat_in_part = //union {
// Cylinder Open 0.5
// Name: 2-4cylo.dat
// Author: Max Martin Richter [MMR1988]
// !LDRAW_ORG Primitive UPDATE 2010-03
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2010-12-31 [PTadmin] Official Update 2010-03
        object {
                LDX_2_dash_4cyli_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
//}


#declare LDX_1_dash_4cylo_dot_dat_in_part = //union {
// Cylinder Open 0.25
// Name: 1-4cylo.dat
// Author: Max Martin Richter [MMR1988]
// !LDRAW_ORG Primitive UPDATE 2010-03
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2010-12-31 [PTadmin] Official Update 2010-03
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
//}


#declare LDX_2_dash_4ring2_dot_dat_in_part = disc // Ring 0.5
{
        <0,0,0>,<0,1,0>,3,2
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_1_dash_4chrd_dot_dat_in_part = disc // Disc 0.25
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <-1,0,-0.99999999999999988898>,-0.70710676908493041992
                }
        }
}


#declare LDX_3_dash_8cyli_dot_dat_in_part = cylinder // Cylinder 0.375
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654768376,0,-0.70710678118654746172>,0
                }
        }
}


#declare LDX_3_dash_8ndis_dot_dat_in_part = disc // Not-Disc 0.375
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654768376,0,-0.70710678118654746172>,0
                }
                box
                {
                        <-1,-1,-1>,<1,1,1>
                }
        }
}


#declare LDX_stud9_dot_dat_in_part = union {
// Stud Open with Small Holes
// Name: stud9.dat
// Author: Ildefonso Zanette [izanette]
// !LDRAW_ORG Unofficial_Primitive
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2002-12-11 [cwdee]   Made BFC compliant
// !HISTORY 2010-04-05 [PTadmin] Official Update 2010-01
// !HISTORY 2018-01-20 [MagFors] Made holes for the door hinges
        object {
                LDX_2_dash_4cylo_dot_dat_in_part
                matrix <0,0,6,0,4,0,-6,0,0,0,-4,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cylo_dot_dat_in_part
                matrix <0,0,2,0,4,0,-2,0,0,0,-4,0>
        }
        object {
                LDX_4_dash_4ring1_dot_dat_in_part
                matrix <0,0,2,0,1,0,-2,0,0,0,-4,0>
        }
        object {
                LDX_2_dash_4ring2_dot_dat_in_part
                matrix <0,0,2,0,1,0,-2,0,0,0,-4,0>
        }
        object {
                LDX_2_dash_4ndis_dot_dat_in_part
                matrix <0,0,4,0,1,0,4,0,0,0,-4,0>
        }
        object {
                LDX_1_dash_4cylo_dot_dat_in_part
                matrix <4.24264,0,-4.24264,0,4,0,4.24264,0,4.24264,0,-4,0>
        }
        object {
                LDX_1_dash_4chrd_dot_dat_in_part
                matrix <4.24264,0,-4.24264,0,1,0,4.24264,0,4.24264,0,-4,0>
        }
// BFC INVERTNEXT
        object {
                LDX_3_dash_8cyli_dot_dat_in_part
                matrix <-2,0,0,0,4,0,0,0,-2,2,-4,6>
        }
        object {
                LDX_3_dash_8ndis_dot_dat_in_part
                matrix <-2,0,0,0,1,0,0,0,-2,2,-4,6>
        }
// BFC INVERTNEXT
        object {
                LDX_3_dash_8cyli_dot_dat_in_part
                matrix <-2,0,0,0,4,0,0,0,2,2,-4,-6>
        }
        object {
                LDX_3_dash_8ndis_dot_dat_in_part
                matrix <-2,0,0,0,1,0,0,0,2,2,-4,-6>
        }
}


#declare LDX_2_dash_4ring4_dot_dat_in_part = disc // Ring 0.5
{
        <0,0,0>,<0,1,0>,5,4
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_1_dash_8cyli_dot_dat_in_part = cylinder // Cylinder 0.125
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
        }
}



#declare LDX_1_dash_8cylo_dot_dat_in_part = //union {
// Cylinder Open 0.125
// Name: 1-8cylo.dat
// Author: Tim Gould [timgould]
// !LDRAW_ORG Primitive UPDATE 2012-03
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2012-12-28 [PTadmin] Official Update 2012-03
        object {
                LDX_1_dash_8cyli_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
//}


#declare LDX_1_dash_8ndis_dot_dat_in_part = disc // Not-Disc 0.125
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
                box
                {
                        <-1,-1,-1>,<1,1,1>
                }
        }
}


#declare LDX_1_dash_8chrd_dot_dat_in_part = disc // Disc 0.125
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <-0.70710678118654746172,0,-0.29289321881345242726>,-0.92387950420379638672
                }
        }
}


#declare LDX_2_dash_4cylc_dot_dat_in_part = union {
// Cylinder Closed 0.5
// Name: 2-4cylc.dat
// Author: Alex Taylor [anathema]
// !LDRAW_ORG Primitive UPDATE 2009-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2009-09-03 [PTadmin] Official Update 2009-02
        object {
                LDX_2_dash_4disc_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_2_dash_4cyli_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
}


#declare LDX_1_dash_8sphe_dot_dat_in_part = sphere // Sphere .125
{
        <0,0,0>,1
        clipped_by
        {
                box
                {
                        <0,0,0>,<2,2,2>
                }
        }
}


#declare LDX_4_dash_8sphe_dot_dat_in_part = union {
// Sphere 0.5
// Name: 4-8sphe.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2003-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2002-08-31 [izanette] Modified with WINDZ for BFC compliance
// !HISTORY 2003-08-01 [PTadmin] Official Update 2003-02
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
        object {
                LDX_1_dash_8sphe_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_1_dash_8sphe_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,-1,0,0,0>
        }
        object {
                LDX_1_dash_8sphe_dot_dat_in_part
                matrix <-1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_1_dash_8sphe_dot_dat_in_part
                matrix <-1,0,0,0,1,0,0,0,-1,0,0,0>
        }
}


#declare LDX_4_dash_4ring3_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,4,3
}


#declare LDX_stud4_dot_dat_in_part = union {
// Stud Tube Open
// Name: stud4.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2009-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 1999-07-05 [PTadmin] Official Update 1999-05
// !HISTORY 2002-04-04 [sbliss] Modified for BFC compliance
// !HISTORY 2002-04-25 [PTadmin] Official Update 2002-02
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2009-06-21 [cwdee] Update ring references to 4-4ring
// !HISTORY 2009-09-03 [PTadmin] Official Update 2009-02
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,4,0,0,0,6,0,-4,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <8,0,0,0,4,0,0,0,8,0,-4,0>
        }
        object {
                LDX_4_dash_4ring3_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,-4,0>
        }
}


#declare LDX_4_dash_4ring5_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,6,5
}


#declare LDX_4_dash_4cylc_dot_dat_in_part = union {
// Cylinder Closed 1.0
// Name: 4-4cylc.dat
// Author: Alex Taylor [anathema]
// !LDRAW_ORG Primitive UPDATE 2009-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2008-12-29 [cwdee] Removed one disc
// !HISTORY 2009-09-03 [PTadmin] Official Update 2009-02
        object {
                LDX_4_dash_4disc_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
}


#declare LDX_t02i4000_dot_dat_in_part = torus // Torus 0.5
{
        1,0.40000000596046447754
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                cylinder
                {
                        <0,0,0>,<0,1,0>,1               }
        }
}


#declare LDX_t04o2000_dot_dat_in_part = torus // Torus 0.25
{
        1,0.20000000298023223877
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
                difference
                {
                        cylinder
                        {
                                <0,0,0>,<0,1,0>,2                       }
                        cylinder
                        {
                                <0,0,0>,<0,1,0>,1                       }
                }
        }
}


#declare LDX_1_dash_4disc_dot_dat_in_part = disc // Disc 0.25
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_stug_dash_3x3_dot_dat_in_part = union {
// Stud Group  3 x  3
// Name: stug-3x3.dat
// Author: Steve Bliss [sbliss]
// !LDRAW_ORG Primitive UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2005-12-28 [PTadmin] Official Update 2005-01
// !HISTORY 2007-05-04 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2011-07-01 [PTadmin] Renamed from stug3
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,-20,0,-20>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,-20,0,0>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,-20,0,20>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,-20>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,20>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,20,0,-20>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,20,0,0>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,20,0,20>
        }
}


#declare LDX_stug_dash_6x6_dot_dat_in_part = union {
// Stud Group  6 x  6
// Name: stug-6x6.dat
// Author: Tore Eriksson [Tore_Eriksson]
// !LDRAW_ORG Primitive UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2005-12-28 [PTadmin] Official Update 2005-01
// !HISTORY 2007-05-04 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2011-07-01 [PTadmin] Renamed from stug6
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
        object {
                LDX_stug_dash_3x3_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-30,0,-30>
        }
        object {
                LDX_stug_dash_3x3_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-30,0,30>
        }
        object {
                LDX_stug_dash_3x3_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,30,0,30>
        }
        object {
                LDX_stug_dash_3x3_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,30,0,-30>
        }
}


#declare LDX_stug6_dot_dat_in_part = //union {
// ~Moved to stug-6x6
// Name: stug6.dat
// Author: [PTadmin]
// !LDRAW_ORG Primitive UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
// // Stud Group  6 x  6
        object {
                LDX_stug_dash_6x6_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
//}


#declare LDX_s_slash_3811s01_dot_dat_in_part = union {
// ~Baseplate 32 x 32 without Top Surface
// Name: s\3811s01.dat
// Author: Mark Kennedy [mkennedy]
// !LDRAW_ORG Subpart UPDATE 2004-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CW
// !HISTORY 2004-04-22 [PTadmin] Official Update 2004-02
// !HISTORY 2007-08-31 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <4,0,0,0,-1,0,0,0,4,316,4,316>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <-4,0,0,0,-1,0,0,0,4,-316,4,316>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <-4,0,0,0,-1,0,0,0,-4,-316,4,-316>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <4,0,0,0,-1,0,0,0,-4,316,4,-316>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,4,0,0,0,4,316,0,316>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <-4,0,0,0,4,0,0,0,4,-316,0,316>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <-4,0,0,0,4,0,0,0,-4,-316,0,-316>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,4,0,0,0,-4,316,0,-316>
        }
}


#declare LDX_stug_dash_2x2_dot_dat_in_part = union {
// Stud Group  2 x  2
// Name: stug-2x2.dat
// Author: Steffen [Steffen]
// !LDRAW_ORG Primitive UPDATE 2012-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2005-12-28 [PTadmin] Official Update 2005-01
// !HISTORY 2007-05-04 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2011-07-01 [PTadmin] Renamed from stug2
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
// !HISTORY 2012-02-16 [Philo] Changed to CCW
// !HISTORY 2012-03-30 [PTadmin] Official Update 2012-01
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,-10,0,-10>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,10,0,-10>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,-10,0,10>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,10,0,10>
        }
}


#declare LDX_stug2_dot_dat_in_part = //union {
// ~Moved to stug-2x2
// Name: stug2.dat
// Author: [PTadmin]
// !LDRAW_ORG Primitive UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
// // Stud Group  2 x  2
        object {
                LDX_stug_dash_2x2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
//}


#declare LDX_1_dash_8cyli_dot_DAT_in_part = cylinder // Cylinder 0.125
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
        }
}


#declare LDX_STUD4A_dot_dat_in_part = union {
// Stud Tube Open without Base Edges
// Name: stud4a.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2009-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 1999-07-05 [PTadmin] Official Update 1999-05
// !HISTORY 2002-04-04 [sbliss] Modified for BFC compliance
// !HISTORY 2002-04-25 [PTadmin] Official Update 2002-02
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2009-06-21 [cwdee] Update ring references to 4-4ring
// !HISTORY 2009-09-03 [PTadmin] Official Update 2009-02
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,4,0,0,0,6,0,-4,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <8,0,0,0,4,0,0,0,8,0,-4,0>
        }
        object {
                LDX_4_dash_4ring3_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,-4,0>
        }
}


#declare LDX_3_dash_16cyli_dot_dat_in_part = cylinder // Cylinder 0.1875
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.92387953251128673848,0,0.38268343236508983729>,0
                }
        }
}


#declare LDX_filstud3_dot_dat_in_part = union {
// Stud Filler with 3 Ribs for Hollow Studs
// Name: filstud3.dat
// Author: Magnus Forsberg [MagFors]
// !LDRAW_ORG Primitive UPDATE 2012-03
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2012-12-28 [PTadmin] Official Update 2012-03
// //
// BFC INVERTNEXT
// BFC INVERTNEXT
// BFC INVERTNEXT
// BFC INVERTNEXT
        object {
                LDX_3_dash_16cyli_dot_dat_in_part
                matrix <4,0,0,0,4,0,0,0,4,0,0,0>
        }
// BFC INVERTNEXT
        object {
                LDX_3_dash_16cyli_dot_dat_in_part
                matrix <-1.5307,0,3.6955,0,4,0,-3.6955,0,-1.5307,0,0,0>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <-2.8284,0,-2.8284,0,4,0,2.8284,0,-2.8284,0,0,0>
        }
// //
}


#declare LDX_4_dash_4ring9_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,10,9
}


#declare LDX_4_dash_4rin15_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,16,15
}


#declare LDX_1_dash_4ring2_dot_dat_in_part = disc // Ring 0.25
{
        <0,0,0>,<0,1,0>,3,2
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_stud6_dot_dat_in_part = union {
// Stud Open For Round 2x2 Parts
// Name: stud6.dat
// Author: Steve Bliss [sbliss]
// !LDRAW_ORG Primitive UPDATE 2012-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2000-09-30 [PTadmin] Official Update 2000-02
// !HISTORY 2002-04-04 [sbliss] Modified for BFC compliance
// !HISTORY 2002-04-25 [PTadmin] Official Update 2002-02
// !HISTORY 2002-08-27 [mkennedy] Changed top polygons to 3-4ring2
// !HISTORY 2002-11-30 [sbliss] Replaced 3-4ring2 with 1-4ring2's
// !HISTORY 2003-08-01 [PTadmin] Official Update 2003-02
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2012-02-16 [Philo] Changed to CCW
// !HISTORY 2012-03-30 [PTadmin] Official Update 2012-01
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,4,0,0,0,4,0,-4,0>
        }
        object {
                LDX_1_dash_4ring2_dot_dat_in_part
                matrix <0,0,2,0,1,0,-2,0,0,0,-4,0>
        }
        object {
                LDX_1_dash_4ring2_dot_dat_in_part
                matrix <-2,0,0,0,1,0,0,0,-2,0,-4,0>
        }
        object {
                LDX_1_dash_4ring2_dot_dat_in_part
                matrix <0,0,-2,0,1,0,2,0,0,0,-4,0>
        }
        object {
                LDX_3_dash_4cyli_dot_dat_in_part
                matrix <0,0,6,0,4,0,-6,0,0,0,-4,0>
        }
}


#declare LDX_axlehole_dot_dat_in_part = union {
// Technic Axle Hole Closed
// Name: axlehole.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2005-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2000-04-23 [sbliss] Added conditional edges along outermost diameters
// !HISTORY 2000-05-07 [PTadmin] Official Update 2000-01
// !HISTORY 2002-05-08 [OrionP] Made BFC compliant
// !HISTORY 2002-08-18 [PTadmin] Official Update 2002-04
// !HISTORY 2002-11-08 [OrionP] Adjusted fit and precision
// !HISTORY 2003-03-12 [PTadmin] Official Update 2003-01
// !HISTORY 2005-05-15 [guyvivan] Use 1-8chrd.dat primitive and made BFC'ed CCW
// !HISTORY 2005-12-28 [PTadmin] Official Update 2005-01
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <5.54328,0,2.2961,0,1,0,-2.2961,0,5.54328,0,0,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <-2.2961,0,5.54328,0,1,0,-5.54328,0,-2.2961,0,0,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <-5.54328,0,-2.2961,0,1,0,2.2961,0,-5.54328,0,0,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <2.2961,0,-5.54328,0,1,0,5.54328,0,2.2961,0,0,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <5.54328,0,-2.2961,0,-1,0,-2.2961,0,-5.54328,0,1,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <-2.2961,0,-5.54328,0,-1,0,-5.54328,0,2.2961,0,1,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <-5.54328,0,2.2961,0,-1,0,2.2961,0,5.54328,0,1,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <2.2961,0,5.54328,0,-1,0,5.54328,0,-2.2961,0,1,0>
        }
}


#declare LDX_stud4a_dot_dat_in_part = union {
// Stud Tube Open without Base Edges
// Name: stud4a.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2009-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 1999-07-05 [PTadmin] Official Update 1999-05
// !HISTORY 2002-04-04 [sbliss] Modified for BFC compliance
// !HISTORY 2002-04-25 [PTadmin] Official Update 2002-02
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2009-06-21 [cwdee] Update ring references to 4-4ring
// !HISTORY 2009-09-03 [PTadmin] Official Update 2009-02
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,4,0,0,0,6,0,-4,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <8,0,0,0,4,0,0,0,8,0,-4,0>
        }
        object {
                LDX_4_dash_4ring3_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,-4,0>
        }
}


#declare LDX_3_dash_8ring2_dot_dat_in_part = disc // Ring 0.375
{
        <0,0,0>,<0,1,0>,3,2
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654768376,0,-0.70710678118654746172>,0
                }
        }
}


#declare LDX_3_dash_8rin12_dot_dat_in_part = disc // Ring 0.375
{
        <0,0,0>,<0,1,0>,13,12
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654768376,0,-0.70710678118654746172>,0
                }
        }
}


#declare LDX_4_dash_4cyls_dot_dat_in_part = cylinder // Sloped Cylinder 1
{
        <0,0,0>,<0,2,0>,1 open
        clipped_by
        {
                plane
                {
                        <1,1,0>,0.70710678118654757274
                }
        }
}


#declare LDX_stud2s_dot_dat_in_part = union {
// Stud Tube Open Sliced
// Name: stud2s.dat
// Author: Dee Earley [DeannaEarley]
// !LDRAW_ORG Primitive UPDATE 2009-03
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2006-02-20 [guyvivan] Adjust precision
// !HISTORY 2009-12-29 [PTadmin] Official Update 2009-03
        object {
                LDX_4_dash_4cyls_dot_dat_in_part
                matrix <6,0,0,0,1,0,0,0,6,0,0,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyls_dot_dat_in_part
                matrix <4,0,0,0,0.667,0,0,0,4,0,0.333,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,0.333,0,0,0,4,0,0,0>
        }
}


#declare LDX_connect_dot_dat_in_part = union {
// Technic Pin 1.0 with Base Collar
// Name: connect.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2010-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2002-06-30 [OrionP] Applied lip code from connect5.dat
// !HISTORY 2002-07-03 [sbliss] Made BFC compliant, replaced quads with ring3
// !HISTORY 2002-08-18 [PTadmin] Official Update 2002-04
// !HISTORY 2004-12-18 [guyvivan] Improve holes and use more primitives
// !HISTORY 2005-12-28 [PTadmin] Official Update 2005-01
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2010-01-15 [cwdee] Update ring3 to 4-4ring3
// !HISTORY 2010-02-19 [Philo] Added condlines
// !HISTORY 2010-04-05 [PTadmin] Official Update 2010-01
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,9.5,0,0,0,6,0,-11.5,0>
        }
        object {
                LDX_3_dash_8cyli_dot_dat_in_part
                matrix <-5.54328,0,-2.2961,0,6.5,0,2.2961,0,-5.54328,0,-18,0>
        }
        object {
                LDX_3_dash_8cyli_dot_dat_in_part
                matrix <5.54328,0,2.2961,0,6.5,0,-2.2961,0,5.54328,0,-18,0>
        }
        object {
                LDX_3_dash_8cyli_dot_dat_in_part
                matrix <6.00522,0,2.48744,0,2,0,-2.48744,0,6.00522,0,-20,0>
        }
        object {
                LDX_3_dash_8cyli_dot_dat_in_part
                matrix <-6.00522,0,-2.48744,0,2,0,2.48744,0,-6.00522,0,-20,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <8,0,0,0,2,0,0,0,8,0,-2,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,11.5,0,0,0,4,0,-11.5,0>
        }
// BFC INVERTNEXT
        object {
                LDX_3_dash_8cyli_dot_dat_in_part
                matrix <3.69552,0,1.53073,0,8.5,0,-1.53073,0,3.69552,0,-20,0>
        }
// BFC INVERTNEXT
        object {
                LDX_3_dash_8cyli_dot_dat_in_part
                matrix <-3.69552,0,-1.53073,0,8.5,0,1.53073,0,-3.69552,0,-20,0>
        }
        object {
                LDX_4_dash_4ring3_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,-2,0>
        }
        object {
                LDX_3_dash_8ring2_dot_dat_in_part
                matrix <1.84776,0,0.76537,0,1,0,-0.76537,0,1.84776,0,-20,0>
        }
        object {
                LDX_3_dash_8ring2_dot_dat_in_part
                matrix <-1.84776,0,-0.76537,0,1,0,0.76537,0,-1.84776,0,-20,0>
        }
        object {
                LDX_3_dash_8rin12_dot_dat_in_part
                matrix <0.46194,0,0.19134,0,-1,0,-0.19134,0,0.46194,0,-18,0>
        }
        object {
                LDX_3_dash_8rin12_dot_dat_in_part
                matrix <-0.46194,0,-0.19134,0,-1,0,0.19134,0,-0.46194,0,-18,0>
        }
        object {
                LDX_3_dash_8rin12_dot_dat_in_part
                matrix <0.46194,0,0.19134,0,1,0,-0.19134,0,0.46194,0,-20,0>
        }
        object {
                LDX_3_dash_8rin12_dot_dat_in_part
                matrix <-0.46194,0,-0.19134,0,1,0,0.19134,0,-0.46194,0,-20,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,1,0,1,0,0,0.199,0,1,-6,-12.5,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,1,0,1,0,0,0.199,0,-1,-6,-12.5,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,1,0,-1,0,0,-0.199,0,-1,6,-12.5,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,1,0,-1,0,0,-0.199,0,1,6,-12.5,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,1,0,-1,0,0,0.199,0,1,-4,-12.5,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,1,0,-1,0,0,0.199,0,-1,-4,-12.5,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,1,0,1,0,0,-0.199,0,-1,4,-12.5,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,1,0,1,0,0,-0.199,0,1,4,-12.5,0>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <0,1,0,2,0,0,0.199,0,1,-6,-12.5,0>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <0,1,0,2,0,0,0.199,0,-1,-6,-12.5,0>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <0,1,0,-2,0,0,-0.199,0,-1,6,-12.5,0>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <0,1,0,-2,0,0,-0.199,0,1,6,-12.5,0>
        }
// //
}


#declare LDX_peghole_dot_dat_in_part = union {
// Peg Hole End
// Name: peghole.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2010-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2002-05-01 [mkennedy] replace code with ring3
// !HISTORY 2002-05-01 [sbliss] BFC
// !HISTORY 2002-06-11 [PTadmin] Official Update 2002-03
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2010-01-14 [cwdee] Update ring3 to 4-4ring3
// !HISTORY 2010-04-05 [PTadmin] Official Update 2010-01
        object {
                LDX_4_dash_4ring3_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,2,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <8,0,0,0,2,0,0,0,8,0,0,0>
        }
}


#declare LDX_48_slash_1_dash_4disc_dot_dat_in_part = disc // Disc 0.25
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_3_dash_8chrd_dot_dat_in_part = disc // Disc 0.375
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <-0.70710678118654757274,0,-1.70710678118654746172>,-0.3826834559440612793
                }
        }
}


#declare LDX_1_dash_8ring3_dot_dat_in_part = disc // Ring 0.125
{
        <0,0,0>,<0,1,0>,4,3
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
        }
}


#declare LDX_stud4f4n_dot_dat_in_part = union {
// Stud Tube Open with  4 Fillets Narrow
// Name: stud4f4n.dat
// Author: William Howard [WilliamH]
// !LDRAW_ORG Primitive UPDATE 2012-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2012-04-06 [MagFors] subfiled fillet
// !HISTORY 2012-08-09 [PTadmin] Official Update 2012-02
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,4,0,0,0,-6,0,-4,0>
        }
        object {
                LDX_1_dash_8cyli_dot_DAT_in_part
                matrix <7.3912,0,-3.0616,0,4,0,-3.0616,0,-7.3912,0,-4,0>
        }
        object {
                LDX_1_dash_8cyli_dot_DAT_in_part
                matrix <-3.0616,0,-7.3912,0,4,0,-7.3912,0,3.0616,0,-4,0>
        }
        object {
                LDX_1_dash_8cyli_dot_DAT_in_part
                matrix <-7.3912,0,3.0616,0,4,0,3.0616,0,7.3912,0,-4,0>
        }
        object {
                LDX_1_dash_8cyli_dot_DAT_in_part
                matrix <3.0616,0,7.3912,0,4,0,7.3912,0,-3.0616,0,-4,0>
        }
        object {
                LDX_1_dash_8ring3_dot_dat_in_part
                matrix <1.8478,0,-0.7654,0,1,0,-0.7654,0,-1.8478,0,-4,0>
        }
        object {
                LDX_1_dash_8ring3_dot_dat_in_part
                matrix <-0.7654,0,-1.8478,0,1,0,-1.8478,0,0.7654,0,-4,0>
        }
        object {
                LDX_1_dash_8ring3_dot_dat_in_part
                matrix <-1.8478,0,0.7654,0,1,0,0.7654,0,1.8478,0,-4,0>
        }
        object {
                LDX_1_dash_8ring3_dot_dat_in_part
                matrix <0.7654,0,1.8478,0,1,0,1.8478,0,-0.7654,0,-4,0>
        }
}


#declare LDX_48_slash_1_dash_4con2_dot_dat_in_part = cone // Cone 0.25
{
        <0,0,0>,3,<0,1,0>,2 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_48_slash_1_dash_4ring7_dot_dat_in_part = disc // Ring 0.25
{
        <0,0,0>,<0,1,0>,8,7
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_48_slash_5_dash_24rin7_dot_dat_in_part = disc // Ring 0.208333
{
        <0,0,0>,<0,1,0>,8,7
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.96592581821160528044,0,0.25881907524802133524>,0
                }
        }
}


#declare LDX_48_slash_5_dash_24ri20_dot_dat_in_part = disc // Ring 0.208333
{
        <0,0,0>,<0,1,0>,21,20
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.96592581821160528044,0,0.25881907524802133524>,0
                }
        }
}


#declare LDX_48_slash_5_dash_24ri28_dot_dat_in_part = disc // Ring 0.208333
{
        <0,0,0>,<0,1,0>,29,28
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.96592581821160528044,0,0.25881907524802133524>,0
                }
        }
}


#declare LDX_48_slash_5_dash_24ri29_dot_dat_in_part = disc // Ring 0.208333
{
        <0,0,0>,<0,1,0>,30,29
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.96592581821160528044,0,0.25881907524802133524>,0
                }
        }
}


#declare LDX_3_dash_4ring3_dot_dat_in_part = disc // Ring 0.75
{
        <0,0,0>,<0,1,0>,4,3
        clipped_by
        {
                union
                {
                        plane
                        {
                                <0,0,-1>,0
                        }
                        plane
                        {
                                <1,0,0>,0
                        }
                }
        }
}


#declare LDX_48_slash_2_dash_4ring4_dot_dat_in_part = disc // Ring 0.5
{
        <0,0,0>,<0,1,0>,5,4
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_48_slash_4_dash_4cyli_dot_dat_in_part = cylinder // Cylinder 1
{
        <0,0,0>,<0,1,0>,1 open
}


#declare LDX_48_slash_1_dash_6cyli_dot_dat_in_part = cylinder // Cylinder 0.166667
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.8660254193888975438,0,0.49999997297228343518>,0
                }
        }
}


#declare LDX_48_slash_5_dash_24rin9_dot_dat_in_part = disc // Ring 0.208333
{
        <0,0,0>,<0,1,0>,10,9
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.96592581821160528044,0,0.25881907524802133524>,0
                }
        }
}


#declare LDX_48_slash_1_dash_8ring5_dot_dat_in_part = disc // Ring 0.125
{
        <0,0,0>,<0,1,0>,6,5
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
        }
}


#declare LDX_48_slash_1_dash_8cyli_dot_dat_in_part = cylinder // Cylinder 0.125
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
        }
}


#declare LDX_48_slash_2_dash_4disc_dot_dat_in_part = disc // Disc 0.5
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_48_slash_4_dash_4rin10_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,11,10
}


#declare LDX_3_dash_4ndis_dot_dat_in_part = disc // Not-Disc 0.75
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                union
                {
                        plane
                        {
                                <0,0,-1>,0
                        }
                        plane
                        {
                                <1,0,0>,0
                        }
                }
                box
                {
                        <-1,-1,-1>,<1,1,1>
                }
        }
}


#declare LDX_48_slash_1_dash_16cyli_dot_dat_in_part = cylinder // Cylinder 0.0625
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.38268343236508972627,0,0.92387953251128673848>,0
                }
        }
}


#declare LDX_48_slash_1_dash_6rin13_dot_dat_in_part = disc // Ring 0.166667
{
        <0,0,0>,<0,1,0>,14,13
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.8660254193888975438,0,0.49999997297228343518>,0
                }
        }
}


#declare LDX_48_slash_1_dash_6rin14_dot_dat_in_part = disc // Ring 0.166667
{
        <0,0,0>,<0,1,0>,15,14
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.8660254193888975438,0,0.49999997297228343518>,0
                }
        }
}


#declare LDX_48_slash_1_dash_4con4_dot_dat_in_part = cone // Cone 0.25
{
        <0,0,0>,5,<0,1,0>,4 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_48_slash_1_dash_4rin15_dot_dat_in_part = disc // Ring 0.25
{
        <0,0,0>,<0,1,0>,16,15
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_3_dash_16chrd_dot_dat_in_part = disc // Disc 0.1875
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <-0.92387953251128673848,0,-0.61731656763491016271>,-0.83146959543228149414
                }
        }
}


#declare LDX_1_dash_16chrd_dot_dat_in_part = disc // Disc 0.0625
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <-0.38268343236508978178,0,-0.07612046748871326152>,-0.98078525066375732422
                }
        }
}


#declare LDX_3_dash_16rin4_dot_dat_in_part = disc // Ring 0.1875
{
        <0,0,0>,<0,1,0>,5,4
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.92387953251128673848,0,0.38268343236508983729>,0
                }
        }
}


#declare LDX_1_dash_16rin4_dot_dat_in_part = disc // Ring 0.0625
{
        <0,0,0>,<0,1,0>,5,4
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.38268343236508972627,0,0.92387953251128673848>,0
                }
        }
}


#declare LDX_stug_dash_1x3_dot_dat_in_part = union {
// Stud Group  1 x  3
// Name: stug-1x3.dat
// Author: Steffen [Steffen]
// !LDRAW_ORG Primitive UPDATE 2012-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2012-03-30 [PTadmin] Official Update 2012-01
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,-20,0,0>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,20,0,0>
        }
}


#declare LDX_stug_dash_3x1_dot_dat_in_part = union {
// Stud Group  3 x  1
// Name: stug-3x1.dat
// Author: Magnus Forsberg [MagFors]
// !LDRAW_ORG Primitive UPDATE 2012-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2012-03-30 [PTadmin] Official Update 2012-01
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,20>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,-20>
        }
}


#declare LDX_stug3_dash_1x3_dot_dat_in_part = union {
// Stud Tube Solid Group  1 x  3
// Name: stug3-1x3.dat
// Author: Steffen [Steffen]
// !LDRAW_ORG Primitive UPDATE 2012-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2012-08-09 [PTadmin] Official Update 2012-02
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-20,0,0>
        }
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,20,0,0>
        }
}


#declare LDX_1_dash_8ring4_dot_dat_in_part = disc // Ring 0.125
{
        <0,0,0>,<0,1,0>,5,4
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
        }
}


#declare LDX_48_slash_t08o5000_dot_dat_in_part = torus // Torus 0.125
{
        1,0.5
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
                difference
                {
                        cylinder
                        {
                                <0,0,0>,<0,1,0>,2                       }
                        cylinder
                        {
                                <0,0,0>,<0,1,0>,1                       }
                }
        }
}


#declare LDX_1_dash_4ring3_dot_dat_in_part = disc // Ring 0.25
{
        <0,0,0>,<0,1,0>,4,3
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_48_slash_5_dash_48cyli_dot_dat_in_part = cylinder // Cylinder 0.104167
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.60876141662887051087,0,0.79335334979062810401>,0
                }
        }
}


#declare LDX_48_slash_1_dash_8ring3_dot_dat_in_part = disc // Ring 0.125
{
        <0,0,0>,<0,1,0>,4,3
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
        }
}


#declare LDX_4_dash_4rin24_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,25,24
}


#declare LDX_4_dash_4rin10_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,11,10
}


#declare LDX_4_dash_4rin22_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,23,22
}


#declare LDX_4_dash_4rin31_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,32,31
}


#declare LDX_4_dash_4ring4_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,5,4
}


#declare LDX_3_dash_16cylo_dot_dat_in_part = //union {
// Cylinder Open 0.1875
// Name: 3-16cylo.dat
// Author: J.C. Tchang [tchang]
// !LDRAW_ORG Primitive UPDATE 2013-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2013-07-21 [PTadmin] Official Update 2013-01
        object {
                LDX_3_dash_16cyli_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
//}


#declare LDX_2_dash_4chrd_dot_dat_in_part = disc // Disc 0.5
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <-0.00000000000000012246,0,-2>,-0.00000000000000006123
                }
        }
}


#declare LDX_stug_dash_2x1_dot_dat_in_part = union {
// Stud Group  2 x  1
// Name: stug-2x1.dat
// Author: Magnus Forsberg [MagFors]
// !LDRAW_ORG Primitive UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,10>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,-10>
        }
}


#declare LDX_STUD4H_dot_dat_in_part = union {
// Stud Tube Open with Extended Hole
// Name: stud4h.dat
// Author: Tim Gould [timgould]
// !LDRAW_ORG Primitive UPDATE 2012-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2012-02-07 [timgould] Modified from stud4.dat
// !HISTORY 2012-03-30 [PTadmin] Official Update 2012-01
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,8,0,0,0,6,0,-4,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <8,0,0,0,4,0,0,0,8,0,-4,0>
        }
        object {
                LDX_4_dash_4ring3_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,-4,0>
        }
}


#declare LDX_4_dash_4ring8_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,9,8
}


#declare LDX_connhole_dot_dat_in_part = union {
// Technic Connector Hole Long
// Name: connhole.dat
// Author: Thomas Woelk [t.woelk]
// !LDRAW_ORG Primitive UPDATE 2009-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2005-07-09 [mikeheide] use 4-4ring8 primitive
// !HISTORY 2009-09-03 [PTadmin] Official Update 2009-02
        object {
                LDX_peghole_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,-10,0>
        }
        object {
                LDX_peghole_dot_dat_in_part
                matrix <1,0,0,0,-1,0,0,0,1,0,10,0>
        }
// BFC INVERTNEXT
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,16,0,0,0,6,0,-8,0>
        }
        object {
                LDX_4_dash_4ring8_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,-10,0>
        }
        object {
                LDX_4_dash_4ring8_dot_dat_in_part
                matrix <1,0,0,0,-1,0,0,0,-1,0,10,0>
        }
}


#declare LDX_1_dash_4cylc_dot_dat_in_part = union {
// Cylinder Closed 0.25
// Name: 1-4cylc.dat
// Author: Mark Kennedy [mkennedy]
// !LDRAW_ORG Primitive UPDATE 2010-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2010-04-05 [PTadmin] Official Update 2010-01
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
}


#declare LDX_1_dash_4ring4_dot_dat_in_part = disc // Ring 0.25
{
        <0,0,0>,<0,1,0>,5,4
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_joint8socket2_dot_dat_in_part = union {
// Joint-8 Socket Free Square
// Name: joint8socket2.dat
// Author: Willy Tschager [Holly-Wood]
// !LDRAW_ORG Primitive UPDATE 2017-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2014-01-06 [timgould] Copied, inlined, and origin shifted from 63082
// !HISTORY 2017-12-30 [PTadmin] Official Update 2017-01
// BFC INVERTNEXT
	object {
		LDX_4_dash_4cyli_dot_dat_in_part
		matrix <0,0,4,0,3.5,0,-4,0,0,0,6.5,0>
	}
	object {
		LDX_4_dash_4ndis_dot_dat_in_part
		matrix <0,0,4,0,1,0,-4,0,0,0,6.5,0>
	}
	object {
		LDX_4_dash_4ndis_dot_dat_in_part
		matrix <0,0,4,0,-1,0,-4,0,0,0,10,0>
	}
// BFC INVERTNEXT
	object {
		LDX_4_dash_4cyli_dot_dat_in_part
		matrix <0,0,4,0,-3.5,0,4,0,0,0,-6.5,0>
	}
	object {
		LDX_4_dash_4ndis_dot_dat_in_part
		matrix <0,0,4,0,-1,0,4,0,0,0,-6.5,0>
	}
	object {
		LDX_4_dash_4ndis_dot_dat_in_part
		matrix <0,0,4,0,1,0,4,0,0,0,-10,0>
	}
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <-4,0,0,0,-1,0,0,0,-9,-6,10,1>
	}
	object {
		LDX_1_dash_4cyli_dot_dat_in_part
		matrix <-4,0,0,0,4,0,0,0,-9,-6,6,1>
	}
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <-4,0,0,0,1,0,0,0,-9,-6,6,1>
	}
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <4,0,0,0,-1,0,0,0,-9,6,10,1>
	}
	object {
		LDX_1_dash_4cyli_dot_dat_in_part
		matrix <4,0,0,0,4,0,0,0,-9,6,6,1>
	}
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <4,0,0,0,1,0,0,0,-9,6,6,1>
	}
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <4,0,0,0,1,0,0,0,-9,6,-10,1>
	}
	object {
		LDX_1_dash_4cyli_dot_dat_in_part
		matrix <4,0,0,0,-4,0,0,0,-9,6,-6,1>
	}
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <4,0,0,0,-1,0,0,0,-9,6,-6,1>
	}
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <-4,0,0,0,1,0,0,0,-9,-6,-10,1>
	}
	object {
		LDX_1_dash_4cyli_dot_dat_in_part
		matrix <-4,0,0,0,-4,0,0,0,-9,-6,-6,1>
	}
	object {
		LDX_1_dash_4disc_dot_dat_in_part
		matrix <-4,0,0,0,-1,0,0,0,-9,-6,-6,1>
	}
// // Inside ball bit
// // End inside ball bit
}


#declare LDX_stud3a_dot_dat_in_part = union {
// Stud Tube Solid without Base Edges
// Name: stud3a.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2003-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2002-08-31 [izanette] Modified with WINDZ for BFC compliance
// !HISTORY 2003-08-01 [PTadmin] Official Update 2003-02
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
        object {
                LDX_4_dash_4disc_dot_dat_in_part
                matrix <4,0,0,0,1,0,0,0,4,0,-4,0>
        }
        object {
                LDX_4_dash_4cyli_dot_dat_in_part
                matrix <4,0,0,0,4,0,0,0,4,0,-4,0>
        }
}


#declare LDX_peghole2_dot_dat_in_part = union {
// Peg Hole End Extended
// Name: peghole2.dat
// Author: Steve Bliss [sbliss]
// !LDRAW_ORG Primitive UPDATE 2012-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2002-06-11 [PTadmin] Official Update 2002-03
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2012-02-16 [Philo] Changed to CCW
// !HISTORY 2012-03-30 [PTadmin] Official Update 2012-01
// BFC INVERTNEXT
        object {
                LDX_2_dash_4cyli_dot_dat_in_part
                matrix <8,0,0,0,2,0,0,0,8,0,0,0>
        }
        object {
                LDX_2_dash_4ndis_dot_dat_in_part
                matrix <6,0,0,0,1,0,0,0,-6,0,2,0>
        }
        object {
                LDX_2_dash_4ring3_dot_dat_in_part
                matrix <2,0,0,0,1,0,0,0,2,0,2,0>
        }
}


#declare LDX_3_dash_16rin2_dot_dat_in_part = disc // Ring 0.1875
{
        <0,0,0>,<0,1,0>,3,2
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.92387953251128673848,0,0.38268343236508983729>,0
                }
        }
}


#declare LDX_1_dash_16cyli_dot_dat_in_part = cylinder // Cylinder 0.0625
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.38268343236508972627,0,0.92387953251128673848>,0
                }
        }
}


#declare LDX_npeghol4_dot_dat_in_part = union {
// Technic Peg Hole / Axle Hole Negative with Top Surface Extension
// Name: npeghol4.dat
// Author: Guy Vivan [guyvivan]
// !LDRAW_ORG Primitive UPDATE 2014-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2009-05-02 [PTadmin] Official Update 2009-01
// !HISTORY 2012-02-16 [Philo] Changed to CCW
// !HISTORY 2012-03-30 [PTadmin] Official Update 2012-01
// !HISTORY 2014-03-02 [KROACH] Fixed overlap on extensions
// !HISTORY 2014-03-03 [Philo] Used more primitives
// !HISTORY 2014-03-03 [MMR1988] Fixed some rounding errors
// !HISTORY 2014-12-23 [PTadmin] Official Update 2014-02
// // for insert between cylinder and axlehol4.dat or axlehol5.dat
        object {
                LDX_1_dash_4cylo_dot_dat_in_part
                matrix <6.36396,0,-6.36396,0,1,0,-6.36396,0,-6.36396,0,0,10>
        }
        object {
                LDX_3_dash_16rin2_dot_dat_in_part
                matrix <-3,0,0,0,1,0,0,0,3,0,0,-10>
        }
        object {
                LDX_3_dash_16rin2_dot_dat_in_part
                matrix <-3,0,0,0,-1,0,0,0,3,0,1,-10>
        }
        object {
                LDX_3_dash_16rin2_dot_dat_in_part
                matrix <3,0,0,0,1,0,0,0,3,0,0,-10>
        }
        object {
                LDX_3_dash_16rin2_dot_dat_in_part
                matrix <3,0,0,0,-1,0,0,0,3,0,1,-10>
        }
        object {
                LDX_1_dash_8ndis_dot_dat_in_part
                matrix <-9,0,0,0,1,0,0,0,9,0,0,-10>
        }
        object {
                LDX_1_dash_8ndis_dot_dat_in_part
                matrix <-9,0,0,0,-1,0,0,0,9,0,1,-10>
        }
        object {
                LDX_1_dash_8ndis_dot_dat_in_part
                matrix <9,0,0,0,1,0,0,0,9,0,0,-10>
        }
        object {
                LDX_1_dash_8ndis_dot_dat_in_part
                matrix <9,0,0,0,-1,0,0,0,9,0,1,-10>
        }
        object {
                LDX_1_dash_8ndis_dot_dat_in_part
                matrix <-9,0,0,0,1,0,0,0,-9,0,0,10>
        }
        object {
                LDX_1_dash_8ndis_dot_dat_in_part
                matrix <-9,0,0,0,-1,0,0,0,-9,0,1,10>
        }
        object {
                LDX_1_dash_8ndis_dot_dat_in_part
                matrix <9,0,0,0,1,0,0,0,-9,0,0,10>
        }
        object {
                LDX_1_dash_8ndis_dot_dat_in_part
                matrix <9,0,0,0,-1,0,0,0,-9,0,1,10>
        }
        object {
                LDX_1_dash_16cyli_dot_dat_in_part
                matrix <-6.36396,0,6.36396,0,1,0,6.36396,0,6.36396,0,0,-10>
        }
        object {
                LDX_1_dash_16cyli_dot_dat_in_part
                matrix <6.36396,0,6.36396,0,1,0,-6.36396,0,6.36396,0,0,-10>
        }
}


#declare LDX_axlehol4_dot_dat_in_part = union {
// Technic Axle Hole Open One Side
// Name: axlehol4.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2005-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2000-05-07 [PTadmin] Official Update 2000-01
// !HISTORY 2002-11-08 [OrionP] Adjusted fit and precision
// !HISTORY 2003-03-12 [PTadmin] Official Update 2003-01
// !HISTORY 2005-05-15 [guyvivan] Use 1-8chrd.dat primitive
// !HISTORY 2005-12-28 [PTadmin] Official Update 2005-01
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// 2 24 6    0 0    5.543 0 2.296
// 2 24 5.543 0 2.296 4.243 0 4.243
// 2 24 4.243 0 4.243 2.296 0 5.543
// 2 24 2.296 0 5.543 0    0 6
// 2 24 2    0 5.602 0    0 6
// 2 24 -2    0 5.602 -0    0 6
// 2 24 2    1 5.602 0    1 6
// 2 24 2    0 5.602 2    1 5.602
// 2 24 -2    0 5.602 -2    1 5.602
// 4 16 2    0 5.602 0    0 6    0    1 6    2    1 5.602
// 4 16 -2    0 5.602 -0    0 6    -0    1 6    -2    1 5.602
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <5.54328,0,2.2961,0,1,0,-2.2961,0,5.54328,0,0,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <-2.2961,0,5.54328,0,1,0,-5.54328,0,-2.2961,0,0,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <-5.54328,0,-2.2961,0,1,0,2.2961,0,-5.54328,0,0,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <2.2961,0,-5.54328,0,1,0,5.54328,0,2.2961,0,0,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <5.54328,0,-2.2961,0,-1,0,-2.2961,0,-5.54328,0,1,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <-2.2961,0,-5.54328,0,-1,0,-5.54328,0,2.2961,0,1,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <-5.54328,0,2.2961,0,-1,0,2.2961,0,5.54328,0,1,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <2.2961,0,5.54328,0,-1,0,5.54328,0,-2.2961,0,1,0>
        }
}


#declare LDX_7_dash_8cyli_dot_dat_in_part = cylinder // Cylinder 0.875
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                union
                {
                        plane
                        {
                                <0,0,-1>,0
                        }
                        plane
                        {
                                <0.70710678118654768376,0,0.70710678118654735069>,0
                        }
                }
        }
}


#declare LDX_3_dash_16ndis_dot_dat_in_part = disc // Not-Disc 0.1875
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.92387953251128673848,0,0.38268343236508983729>,0
                }
                box
                {
                        <-1,-1,-1>,<1,1,1>
                }
        }
}


#declare LDX_axlehol6_dot_dat_in_part = union {
// Technic Axle Hole Tooth
// Name: axlehol6.dat
// Author: Steve Bliss [sbliss]
// !LDRAW_ORG Primitive UPDATE 2005-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 1999-07-05 [PTadmin] Official Update 1999-05
// !HISTORY 2002-11-08 [OrionP] Adjusted fit and precision
// !HISTORY 2003-03-12 [PTadmin] Official Update 2003-01
// !HISTORY 2005-08-28 [guyvivan] Use 1-8chrd.dat primitive
// !HISTORY 2005-12-28 [PTadmin] Official Update 2005-01
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <5.543,0,2.296,0,1,0,-2.296,0,5.543,0,0,0>
        }
        object {
                LDX_1_dash_8chrd_dot_dat_in_part
                matrix <5.543,0,2.296,0,-1,0,-2.296,0,5.543,0,1,0>
        }
}


#declare LDX_3_dash_16rin9_dot_dat_in_part = disc // Ring 0.1875
{
        <0,0,0>,<0,1,0>,10,9
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.92387953251128673848,0,0.38268343236508983729>,0
                }
        }
}


#declare LDX_2_dash_4ring9_dot_dat_in_part = disc // Ring 0.5
{
        <0,0,0>,<0,1,0>,10,9
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_stud15_dot_dat_in_part = union {
// Stud for Round  2 x  2 Parts, 1 Face, Complete Edges
// Name: stud15.dat
// Author: Joerg Sommerer [Brickaneer]
// !LDRAW_ORG Primitive UPDATE 2011-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-12-29 [PTadmin] Official Update 2011-02
        object {
                LDX_3_dash_4cyli_dot_dat_in_part
                matrix <0,0,6,0,4,0,-6,0,0,0,-4,0>
        }
        object {
                LDX_3_dash_4disc_dot_dat_in_part
                matrix <0,0,6,0,1,0,-6,0,0,0,-4,0>
        }
}


#declare LDX_4_dash_4rin12_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,13,12
}


#declare LDX_4_dash_4con4_dot_dat_in_part = cone // Cone 1
{
        <0,0,0>,5,<0,1,0>,4 open
}


#declare LDX_4_dash_4con7_dot_dat_in_part = cone // Cone 1
{
        <0,0,0>,8,<0,1,0>,7 open
}


#declare LDX_4_dash_4con13_dot_dat_in_part = cone // Cone 1
{
        <0,0,0>,14,<0,1,0>,13 open
}


#declare LDX_stug3_dot_dat_in_part = //union {
// ~Moved to stug-3x3
// Name: stug3.dat
// Author: [PTadmin]
// !LDRAW_ORG Primitive UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
// // Stud Group  3 x  3
        object {
                LDX_stug_dash_3x3_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
//}


#declare LDX_stug_dash_4x4_dot_dat_in_part = union {
// Stud Group  4 x  4
// Name: stug-4x4.dat
// Author: Tore Eriksson [Tore_Eriksson]
// !LDRAW_ORG Primitive UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2004-10-31 [Steffen] used stug2.dat
// !HISTORY 2005-12-28 [PTadmin] Official Update 2005-01
// !HISTORY 2007-05-04 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2011-07-01 [PTadmin] Renamed from stug4
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
        object {
                LDX_stug_dash_2x2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-20,0,-20>
        }
        object {
                LDX_stug_dash_2x2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-20,0,20>
        }
        object {
                LDX_stug_dash_2x2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,20,0,20>
        }
        object {
                LDX_stug_dash_2x2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,20,0,-20>
        }
}



#declare LDX_stug_dash_8x8_dot_dat_in_part = union {
// Stud Group  8 x  8
// Name: stug-8x8.dat
// Author: Tore Eriksson [Tore_Eriksson]
// !LDRAW_ORG Primitive UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2005-12-28 [PTadmin] Official Update 2005-01
// !HISTORY 2007-05-04 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// !HISTORY 2011-07-01 [PTadmin] Renamed from stug8
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
        object {
                LDX_stug_dash_4x4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-40,0,-40>
        }
        object {
                LDX_stug_dash_4x4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-40,0,40>
        }
        object {
                LDX_stug_dash_4x4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,40,0,-40>
        }
        object {
                LDX_stug_dash_4x4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,40,0,40>
        }
}


#declare LDX_s_slash_6161s02_dot_dat_in_part = union {
// ~Brick 24 x 24 Corner with Cutout - Tube and Rib Segment 2
// Name: s\6161s02.dat
// Author: Steve Bliss [sbliss]
// !LDRAW_ORG Subpart UPDATE 2013-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2006-07-18 [WilliamH] closed gap between box3u2p and stud4, needed to inline box3u2p
// !HISTORY 2013-07-21 [PTadmin] Official Update 2013-01
        object {
                LDX_stud4_dot_dat_in_part
                matrix <-1,0,0,0,-5,0,0,0,1,0,4,0>
        }
        object {
                LDX_stud4_dot_dat_in_part
                matrix <-1,0,0,0,-5,0,0,0,1,-20,4,20>
        }
// // 1 16 0 4 22 0 0 -1 0 19 0 14 0 0 box3u2p.dat
// // 1 16 -20 4 0 -12 0 0 0 19 0 0 0 -1 box3u2p.dat
}


#declare LDX_s_slash_6161s01_dot_dat_in_part = union {
// ~Brick 24 x 24 Corner with Cutout - Tube and Rib Segment 1
// Name: s\6161s01.dat
// Author: Steve Bliss [sbliss]
// !LDRAW_ORG Subpart UPDATE 2013-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2006-07-18 [WilliamH] closed gap between box3u2p and stud4, needed to inline box3u2p
// !HISTORY 2013-07-21 [PTadmin] Official Update 2013-01
        object {
                LDX_stud4_dot_dat_in_part
                matrix <-1,0,0,0,-5,0,0,0,1,0,4,0>
        }
        object {
                LDX_stud4_dot_dat_in_part
                matrix <-1,0,0,0,-5,0,0,0,1,-20,4,20>
        }
// // 1 16 0 4 20 0 0 -1 0 19 0 12 0 0 box3u2p.dat
// // 1 16 -20 4 0 -12 0 0 0 19 0 0 0 -1 box3u2p.dat
}


#declare LDX_48_slash_1_dash_4con1_dot_dat_in_part = cone // Cone 0.25
{
        <0,0,0>,2,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_48_slash_1_dash_4chrd_dot_dat_in_part = disc // Disc 0.25
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <-1,0,-0.99999999999999988898>,-0.70710676908493041992
                }
        }
}


#declare LDX_48_slash_1_dash_4ring6_dot_dat_in_part = disc // Ring 0.25
{
        <0,0,0>,<0,1,0>,7,6
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_48_slash_1_dash_4ring9_dot_dat_in_part = disc // Ring 0.25
{
        <0,0,0>,<0,1,0>,10,9
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_48_slash_1_dash_24cyli_dot_dat_in_part = cylinder // Cylinder 0.041667
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.25881905263889581903,0,0.96592582426970263754>,0
                }
        }
}


#declare LDX_48_slash_1_dash_12cyli_dot_dat_in_part = cylinder // Cylinder 0.083333
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.50000001351385803261,0,0.86602539598220884542>,0
                }
        }
}


#declare LDX_1_dash_4cyli_dot_DAT_in_part = cylinder // Cylinder 0.25
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_48_slash_1_dash_12chrd_dot_dat_in_part = disc // Disc 0.083333
{
        <0,0,0>,<0,1,0>,1
        clipped_by
        {
                plane
                {
                        <-0.50000001351385825465,0,-0.13397460401779115458>,-0.96592581272125244141
                }
        }
}


#declare LDX_s_slash_48310s01_dot_dat_in_part = union {
// ~Cone  8 x  4 x  6 Half without Outside Face
// Name: s\48310s01.dat
// Author: Andy Westrate [westrate]
// !LDRAW_ORG Subpart UPDATE 2010-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2010-07-05 [PTadmin] Official Update 2010-02
// // top
        object {
                LDX_48_slash_1_dash_4chrd_dot_dat_in_part
                matrix <40,0,0,0,1,0,0,0,-40,0,0,0>
        }
        object {
                LDX_48_slash_1_dash_4chrd_dot_dat_in_part
                matrix <-40,0,0,0,1,0,0,0,-40,0,0,0>
        }
        object {
                LDX_2_dash_4ndis_dot_dat_in_part
                matrix <6,0,0,0,1,0,0,0,-6,0,0,0>
        }
// BFC INVERTNEXT
        object {
                LDX_2_dash_4cyli_dot_dat_in_part
                matrix <6,0,0,0,4,0,0,0,-6,0,0,0>
        }
// // studs
        object {
                LDX_stud2_dot_dat_in_part
                matrix <0,0,1,0,1,0,1,0,0,-30,0,-10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <0,0,1,0,1,0,1,0,0,-10,0,-10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <0,0,1,0,1,0,1,0,0,10,0,-10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <0,0,1,0,1,0,1,0,0,30,0,-10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <0,0,1,0,1,0,1,0,0,-10,0,-30>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <0,0,1,0,1,0,1,0,0,10,0,-30>
        }
// // inside
        object {
                LDX_48_slash_1_dash_4chrd_dot_dat_in_part
                matrix <37,0,0,0,-1,0,0,0,-37,0,4,0>
        }
        object {
                LDX_48_slash_1_dash_4chrd_dot_dat_in_part
                matrix <-37,0,0,0,-1,0,0,0,-37,0,4,0>
        }
        object {
                LDX_2_dash_4ndis_dot_dat_in_part
                matrix <6,0,0,0,-1,0,0,0,-6,0,4,0>
        }
// BFC INVERTNEXT
        object {
                LDX_48_slash_1_dash_4con1_dot_dat_in_part
                matrix <37,0,0,0,-132,0,0,0,-37,0,136,0>
        }
// BFC INVERTNEXT
        object {
                LDX_48_slash_1_dash_4con1_dot_dat_in_part
                matrix <-37,0,0,0,-132,0,0,0,-37,0,136,0>
        }
// BFC INVERTNEXT
        object {
                LDX_48_slash_1_dash_4cyli_dot_dat_in_part
                matrix <60,0,0,0,3,0,0,0,-60,0,136,0>
        }
// BFC INVERTNEXT
        object {
                LDX_48_slash_1_dash_4cyli_dot_dat_in_part
                matrix <-60,0,0,0,3,0,0,0,-60,0,136,0>
        }
// // bottom ledge
        object {
                LDX_48_slash_1_dash_4ring6_dot_dat_in_part
                matrix <10,0,0,0,1,0,0,0,-10,0,136,0>
        }
        object {
                LDX_48_slash_1_dash_4ring6_dot_dat_in_part
                matrix <-10,0,0,0,1,0,0,0,-10,0,136,0>
        }
        object {
                LDX_48_slash_1_dash_4ring9_dot_dat_in_part
                matrix <7.4,0,0,0,1,0,0,0,-7.4,0,136,0>
        }
        object {
                LDX_48_slash_1_dash_4ring9_dot_dat_in_part
                matrix <-7.4,0,0,0,1,0,0,0,-7.4,0,136,0>
        }
// // bottom ledge, inside
// BFC INVERTNEXT
        object {
                LDX_48_slash_1_dash_16cyli_dot_dat_in_part
                matrix <60,0,0,0,-5,0,0,0,-60,0,144,0>
        }
// BFC INVERTNEXT
        object {
                LDX_48_slash_1_dash_24cyli_dot_dat_in_part
                matrix <47.604,0,-36.528,0,-5,0,-36.528,0,-47.604,0,144,0>
        }
// BFC INVERTNEXT
        object {
                LDX_48_slash_1_dash_12cyli_dot_dat_in_part
                matrix <15.528,0,-57.953999,0,-5,0,-57.953999,0,-15.528,0,144,0>
        }
        object {
                LDX_48_slash_1_dash_16cyli_dot_dat_in_part
                matrix <-60,0,0,0,-5,0,0,0,-60,0,144,0>
        }
// BFC INVERTNEXT
        object {
                LDX_48_slash_1_dash_24cyli_dot_dat_in_part
                matrix <-47.604,0,-36.528,0,-5,0,36.528,0,-47.604,0,144,0>
        }
// // bottom outside
        object {
                LDX_48_slash_1_dash_24cyli_dot_dat_in_part
                matrix <80,0,0,0,5,0,0,0,-80,0,139,0>
        }
        object {
                LDX_48_slash_1_dash_12cyli_dot_dat_in_part
                matrix <69.281998,0,-40,0,5,0,-40,0,-69.281998,0,139,0>
        }
        object {
                LDX_48_slash_1_dash_12cyli_dot_dat_in_part
                matrix <20.704,0,-77.274002,0,5,0,-77.274002,0,-20.704,0,139,0>
        }
        object {
                LDX_48_slash_1_dash_24cyli_dot_dat_in_part
                matrix <-80,0,0,0,5,0,0,0,-80,0,139,0>
        }
        object {
                LDX_48_slash_1_dash_12cyli_dot_dat_in_part
                matrix <-69.281998,0,-40,0,5,0,40,0,-69.281998,0,139,0>
        }
// // outer cutouts
// // inner cutouts
// // underside studs
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,-1.25,0,0,0,1,0,139,-70>
        }
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,-1.25,0,0,0,1,60,139,-30>
        }
        object {
                LDX_stud3_dot_dat_in_part
                matrix <1,0,0,0,-1.25,0,0,0,1,-60,139,-30>
        }
        object {
                LDX_1_dash_4chrd_dot_dat_in_part
                matrix <2,0,0,0,-1,0,0,0,-2,74,139,-14>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_4cyli_dot_DAT_in_part
                matrix <2,0,0,0,5,0,0,0,-2,74,139,-14>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <2,0,0,0,-1,0,0,0,-2,74,144,-14>
        }
// // underside
// inside bottom
        object {
                LDX_1_dash_4chrd_dot_dat_in_part
                matrix <-2,0,0,0,-1,0,0,0,-2,-74,139,-14>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_4cyli_dot_DAT_in_part
                matrix <-2,0,0,0,5,0,0,0,-2,-74,139,-14>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <-2,0,0,0,-1,0,0,0,-2,-74,144,-14>
        }
// inside bottom
        object {
                LDX_1_dash_4chrd_dot_dat_in_part
                matrix <2,0,0,0,-1,0,0,0,-2,14,139,-74>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_4cyli_dot_DAT_in_part
                matrix <2,0,0,0,5,0,0,0,-2,14,139,-74>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <2,0,0,0,-1,0,0,0,-2,14,144,-74>
        }
        object {
                LDX_1_dash_4chrd_dot_dat_in_part
                matrix <-2,0,0,0,-1,0,0,0,-2,-14,139,-74>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_4cyli_dot_DAT_in_part
                matrix <-2,0,0,0,5,0,0,0,-2,-14,139,-74>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <-2,0,0,0,-1,0,0,0,-2,-14,144,-74>
        }
        object {
                LDX_48_slash_1_dash_12chrd_dot_dat_in_part
                matrix <20.704,0,-77.274002,0,-1,0,-77.274002,0,-20.704,0,144,0>
        }
// // end
}


#declare LDX_48310_dot_dat_sub_part =
union {
// Cone  8 x  4 x  6 Half
// Name: 48310.dat
// Author: Andy Westrate [westrate]
// !LDRAW_ORG Part UPDATE 2010-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2010-07-05 [PTadmin] Official Update 2010-02
        object {
                LDX_48_slash_1_dash_4con1_dot_dat_in_part
                matrix <40,0,0,0,-139,0,0,0,-40,0,139,0>
        }
        object {
                LDX_48_slash_1_dash_4con1_dot_dat_in_part
                matrix <-40,0,0,0,-139,0,0,0,-40,0,139,0>
        }
        object {
                LDX_s_slash_48310s01_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
}


#declare LDX_s_slash_3005s01_dot_DAT_in_part = //union {
// ~Brick  1 x  1 without Front Face
// Name: s\3005s01.dat
// Author: John Riley [jriley]
// !LDRAW_ORG Subpart UPDATE 2004-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2003-09-07 [jriley] BFCed & Subfiled
// !HISTORY 2004-03-02 [PTadmin] Official Update 2004-01
// !HISTORY 2007-08-29 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
// BFC INVERTNEXT
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <0,0,-1,0,1,0,1,0,0,0,0,0>
        }
//}


#declare LDX_1_dash_16ndis_dot_dat_in_part = disc // Not-Disc 0.0625
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.38268343236508972627,0,0.92387953251128673848>,0
                }
                box
                {
                        <-1,-1,-1>,<1,1,1>
                }
        }
}


#declare LDX_5_dash_8cyli_dot_dat_in_part = cylinder // Cylinder 0.625
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                union
                {
                        plane
                        {
                                <0,0,-1>,0
                        }
                        plane
                        {
                                <0.70710678118654746172,0,-0.70710678118654768376>,0
                        }
                }
        }
}


#declare LDX_clip6_dot_DAT_in_part = union {
// Clip Horizontal with Rounded Sides
// Name: clip6.dat
// Author: Magnus Forsberg [MagFors]
// !LDRAW_ORG Primitive UPDATE 2013-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2013-07-21 [PTadmin] Official Update 2013-01
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,-4,0,1,0,0,0,0,4,-4,2,0>
        }
        object {
                LDX_1_dash_16ndis_dot_dat_in_part
                matrix <0,-4,0,1,0,0,0,0,-4,-4,2,0>
        }
        object {
                LDX_1_dash_4chrd_dot_dat_in_part
                matrix <0,-6.32544,-4.02975,1,0,0,0,-4.19094,6.57845,-4,2,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,4,0,1,0,0,0,0,4,-4,2,0>
        }
        object {
                LDX_1_dash_16ndis_dot_dat_in_part
                matrix <0,4,0,1,0,0,0,0,-4,-4,2,0>
        }
        object {
                LDX_3_dash_16chrd_dot_dat_in_part
                matrix <0,6.32544,-4.02975,1,0,0,0,4.19094,6.57845,-4,2,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,4,0,-1,0,0,0,0,4,4,2,0>
        }
        object {
                LDX_1_dash_16ndis_dot_dat_in_part
                matrix <0,4,0,-1,0,0,0,0,-4,4,2,0>
        }
        object {
                LDX_3_dash_16chrd_dot_dat_in_part
                matrix <0,6.32544,-4.02975,-1,0,0,0,4.19094,6.57845,4,2,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0,-4,0,-1,0,0,0,0,4,4,2,0>
        }
        object {
                LDX_1_dash_16ndis_dot_dat_in_part
                matrix <0,-4,0,-1,0,0,0,0,-4,4,2,0>
        }
        object {
                LDX_1_dash_4chrd_dot_dat_in_part
                matrix <0,-6.32544,-4.02975,-1,0,0,0,-4.19094,6.57845,4,2,0>
        }
// BFC INVERTNEXT
        object {
                LDX_3_dash_16cylo_dot_dat_in_part
                matrix <0,3.5492,0,-8,0,0,0,0,-3.7034,4,-3.5492,10>
        }
        object {
                LDX_3_dash_16ndis_dot_dat_in_part
                matrix <0,3.5492,0,-8,0,0,0,0,-3.7034,4,-3.5492,10>
        }
        object {
                LDX_3_dash_16ndis_dot_dat_in_part
                matrix <0,3.5492,0,8,0,0,0,0,-3.7034,-4,-3.5492,10>
        }
// BFC INVERTNEXT
        object {
                LDX_5_dash_8cyli_dot_dat_in_part
                matrix <0,-3.69552,-1.53073,-8,0,0,0,-1.53073,3.69552,4,2,0>
        }
        object {
                LDX_1_dash_4cylo_dot_dat_in_part
                matrix <0,-6.32544,-4.02975,8,0,0,0,-4.19094,6.57845,-4,2,0>
        }
        object {
                LDX_3_dash_16cylo_dot_dat_in_part
                matrix <0,6.32544,-4.02975,8,0,0,0,4.19094,6.57845,-4,2,0>
        }
}


#declare LDX_stug2_dash_2x2_dot_dat_in_part = union {
// Stud Open Group  2 x  2
// Name: stug2-2x2.dat
// Author: Steffen [Steffen]
// !LDRAW_ORG Primitive UPDATE 2012-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2009-05-02 [PTadmin] Official Update 2009-01
// !HISTORY 2011-06-30 [PTadmin] Renamed from stug2a
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
// !HISTORY 2012-02-16 [Philo] Changed to CCW
// !HISTORY 2012-03-30 [PTadmin] Official Update 2012-01
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-10,0,-10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,10,0,-10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-10,0,10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,10,0,10>
        }
}


#declare LDX_stug2a_dot_dat_in_part = //union {
// ~Moved to stug2-2x2
// Name: stug2a.dat
// Author: [PTadmin]
// !LDRAW_ORG Primitive UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
// // Stud Hollow Group  2 x  2
        object {
                LDX_stug2_dash_2x2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
//}


#declare LDX_3_dash_8ring3_dot_dat_in_part = disc // Ring 0.375
{
        <0,0,0>,<0,1,0>,4,3
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654768376,0,-0.70710678118654746172>,0
                }
        }
}


#declare LDX_1_dash_8cyls_dot_dat_in_part = cylinder // Sloped Cylinder 0.125
{
        <0,0,0>,<0,2,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
                plane
                {
                        <1,1,0>,0.70710678118654757274
                }
        }
}


#declare LDX_48_slash_4_dash_4ring8_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,9,8
}


#declare LDX_T04O2500_dot_DAT_in_part = torus // Torus 0.25
{
        1,0.25
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
                difference
                {
                        cylinder
                        {
                                <0,0,0>,<0,1,0>,2                       }
                        cylinder
                        {
                                <0,0,0>,<0,1,0>,1                       }
                }
        }
}


#declare LDX_T04i2500_dot_DAT_in_part = torus // Torus 0.25
{
        1,0.25
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
                cylinder
                {
                        <0,0,0>,<0,1,0>,1               }
        }
}


#declare LDX_7_dash_8rin15_dot_dat_in_part = disc // Ring 0.875
{
        <0,0,0>,<0,1,0>,16,15
        clipped_by
        {
                union
                {
                        plane
                        {
                                <0,0,-1>,0
                        }
                        plane
                        {
                                <0.70710678118654768376,0,0.70710678118654735069>,0
                        }
                }
        }
}


#declare LDX_7_dash_8rin16_dot_dat_in_part = disc // Ring 0.875
{
        <0,0,0>,<0,1,0>,17,16
        clipped_by
        {
                union
                {
                        plane
                        {
                                <0,0,-1>,0
                        }
                        plane
                        {
                                <0.70710678118654768376,0,0.70710678118654735069>,0
                        }
                }
        }
}


#declare LDX_48_slash_1_dash_8ring1_dot_dat_in_part = disc // Ring 0.125
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
        }
}


#declare LDX_48_slash_1_dash_8ring8_dot_dat_in_part = disc // Ring 0.125
{
        <0,0,0>,<0,1,0>,9,8
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
        }
}


#declare LDX_48_slash_1_dash_48rin9_dot_dat_in_part = disc // Ring 0.020833
{
        <0,0,0>,<0,1,0>,10,9
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.13052619608779178484,0,0.99144486086461269814>,0
                }
        }
}


#declare LDX_48_slash_1_dash_8ring4_dot_dat_in_part = disc // Ring 0.125
{
        <0,0,0>,<0,1,0>,5,4
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
        }
}


#declare LDX_4_dash_4ring7_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,8,7
}


#declare LDX_1_dash_8ring6_dot_dat_in_part = disc // Ring 0.125
{
        <0,0,0>,<0,1,0>,7,6
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.70710678118654746172,0,0.70710678118654757274>,0
                }
        }
}


#declare LDX_t16o1429_dot_dat_in_part = torus // Torus 0.0625
{
        1,0.14290000498294830322
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-0.38268343236508972627,0,0.92387953251128673848>,0
                }
                difference
                {
                        cylinder
                        {
                                <0,0,0>,<0,1,0>,2                       }
                        cylinder
                        {
                                <0,0,0>,<0,1,0>,1                       }
                }
        }
}


#declare LDX_2_dash_8sphe_dot_dat_in_part = union {
// Sphere 0.25
// Name: 2-8sphe.dat
// Author: James Jessiman
// !LDRAW_ORG Primitive UPDATE 2003-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2002-08-31 [izanette] Modified with WINDZ for BFC compliance
// !HISTORY 2003-08-01 [PTadmin] Official Update 2003-02
// !HISTORY 2007-06-24 [PTadmin] Header formatted for Contributor Agreement
// !HISTORY 2008-07-01 [PTadmin] Official Update 2008-01
        object {
                LDX_1_dash_8sphe_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_1_dash_8sphe_dot_dat_in_part
                matrix <-1,0,0,0,1,0,0,0,1,0,0,0>
        }
}


#declare LDX_stud18a_dot_dat_in_part = union {
// Stud Tube Open Snap
// Name: stud18a.dat
// Author: Magnus Forsberg [MagFors]
// !LDRAW_ORG Primitive UPDATE 2011-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-12-29 [PTadmin] Official Update 2011-02
        object {
                LDX_4_dash_4ring7_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_1_dash_8ring6_dot_dat_in_part
                matrix <0.9239,0,0.3827,0,1,0,-0.3827,0,0.9239,0,-4,0>
        }
        object {
                LDX_1_dash_8cyli_dot_dat_in_part
                matrix <6.4672,0,2.6788,0,2,0,-2.6788,0,6.4672,0,-2,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <6.4672,0,2.6788,0,7,0,-2.6788,0,6.4672,0,-3,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <4.9497,0,4.9497,0,-7,0,4.9497,0,-4.9497,0,-3,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0.1951,0,-0.9808,-0.9808,0,-0.1951,0,1,0,6.606,-3,1.981>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <0.1951,0,-0.9808,1,0,0,0,-1,0,5.606,-3,1.981>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <0.1951,0,-0.9808,1,0,0,0,-1,0,5.606,-3,1.981>
        }
        object {
                LDX_2_dash_8sphe_dot_dat_in_part
                matrix <0,-1,0,0.1951,0,-0.9808,0.9808,0,0.1951,6.606,-3,1.981>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_8cyli_dot_dat_in_part
                matrix <5.5433,0,2.2961,0,4,0,-2.2961,0,5.5433,0,-4,0>
        }
// // mirrored
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <2.6788,0,6.4672,0,7,0,6.4672,0,-2.6788,0,-3,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <4.9497,0,4.9497,0,-7,0,-4.9497,0,4.9497,0,-3,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <-0.9808,0,0.1951,-0.1951,0,-0.9808,0,1,0,1.981,-3,6.606>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <-0.9808,0,0.1951,0,0,1,0,-1,0,1.981,-3,5.606>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <-0.9808,0,0.1951,0,0,1,0,-1,0,1.981,-3,5.606>
        }
        object {
                LDX_2_dash_8sphe_dot_dat_in_part
                matrix <0,-1,0,-0.9808,0,0.1951,0.1951,0,0.9808,1.981,-3,6.606>
        }
// // condlines
// //
        object {
                LDX_1_dash_8ring6_dot_dat_in_part
                matrix <-0.3827,0,0.9239,0,1,0,-0.9239,0,-0.3827,0,-4,0>
        }
        object {
                LDX_1_dash_8cyli_dot_dat_in_part
                matrix <-2.6788,0,6.4672,0,2,0,-6.4672,0,-2.6788,0,-2,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <-2.6788,0,6.4672,0,7,0,-6.4672,0,-2.6788,0,-3,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <-4.9497,0,4.9497,0,-7,0,4.9497,0,4.9497,0,-3,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0.9808,0,0.1951,0.1951,0,-0.9808,0,1,0,-1.981,-3,6.606>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <0.9808,0,0.1951,0,0,1,0,-1,0,-1.981,-3,5.606>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <0.9808,0,0.1951,0,0,1,0,-1,0,-1.981,-3,5.606>
        }
        object {
                LDX_2_dash_8sphe_dot_dat_in_part
                matrix <0,-1,0,0.9808,0,0.1951,-0.1951,0,0.9808,-1.981,-3,6.606>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_8cyli_dot_dat_in_part
                matrix <-2.2961,0,5.5433,0,4,0,-5.5433,0,-2.2961,0,-4,0>
        }
// // mirrored
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <-6.4672,0,2.6788,0,7,0,2.6788,0,6.4672,0,-3,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <-4.9497,0,4.9497,0,-7,0,-4.9497,0,-4.9497,0,-3,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <-0.1951,0,-0.9808,0.9808,0,-0.1951,0,1,0,-6.606,-3,1.981>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <-0.1951,0,-0.9808,-1,0,0,0,-1,0,-5.606,-3,1.981>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <-0.1951,0,-0.9808,-1,0,0,0,-1,0,-5.606,-3,1.981>
        }
        object {
                LDX_2_dash_8sphe_dot_dat_in_part
                matrix <0,-1,0,-0.1951,0,-0.9808,-0.9808,0,0.1951,-6.606,-3,1.981>
        }
// // condlines
// //
        object {
                LDX_1_dash_8ring6_dot_dat_in_part
                matrix <-0.9239,0,-0.3827,0,1,0,0.3827,0,-0.9239,0,-4,0>
        }
        object {
                LDX_1_dash_8cyli_dot_dat_in_part
                matrix <-6.4672,0,-2.6788,0,2,0,2.6788,0,-6.4672,0,-2,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <-6.4672,0,-2.6788,0,7,0,2.6788,0,-6.4672,0,-3,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <-4.9497,0,-4.9497,0,-7,0,-4.9497,0,4.9497,0,-3,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <-0.1951,0,0.9808,0.9808,0,0.1951,0,1,0,-6.606,-3,-1.981>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <-0.1951,0,0.9808,-1,0,0,0,-1,0,-5.606,-3,-1.981>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <-0.1951,0,0.9808,-1,0,0,0,-1,0,-5.606,-3,-1.981>
        }
        object {
                LDX_2_dash_8sphe_dot_dat_in_part
                matrix <0,-1,0,-0.1951,0,0.9808,-0.9808,0,-0.1951,-6.606,-3,-1.981>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_8cyli_dot_dat_in_part
                matrix <-5.5433,0,-2.2961,0,4,0,2.2961,0,-5.5433,0,-4,0>
        }
// // mirrored
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <-2.6788,0,-6.4672,0,7,0,-6.4672,0,2.6788,0,-3,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <-4.9497,0,-4.9497,0,-7,0,4.9497,0,-4.9497,0,-3,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0.9808,0,-0.1951,0.1951,0,0.9808,0,1,0,-1.981,-3,-6.606>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <0.9808,0,-0.1951,0,0,-1,0,-1,0,-1.981,-3,-5.606>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <0.9808,0,-0.1951,0,0,-1,0,-1,0,-1.981,-3,-5.606>
        }
        object {
                LDX_2_dash_8sphe_dot_dat_in_part
                matrix <0,-1,0,0.9808,0,-0.1951,-0.1951,0,-0.9808,-1.981,-3,-6.606>
        }
// // condlines
// //
        object {
                LDX_1_dash_8ring6_dot_dat_in_part
                matrix <0.3827,0,-0.9239,0,1,0,0.9239,0,0.3827,0,-4,0>
        }
        object {
                LDX_1_dash_8cyli_dot_dat_in_part
                matrix <2.6788,0,-6.4672,0,2,0,6.4672,0,2.6788,0,-2,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <2.6788,0,-6.4672,0,7,0,6.4672,0,2.6788,0,-3,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <4.9497,0,-4.9497,0,-7,0,-4.9497,0,-4.9497,0,-3,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <-0.9808,0,-0.1951,-0.1951,0,0.9808,0,1,0,1.981,-3,-6.606>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <-0.9808,0,-0.1951,0,0,-1,0,-1,0,1.981,-3,-5.606>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <-0.9808,0,-0.1951,0,0,-1,0,-1,0,1.981,-3,-5.606>
        }
        object {
                LDX_2_dash_8sphe_dot_dat_in_part
                matrix <0,-1,0,-0.9808,0,-0.1951,0.1951,0,-0.9808,1.981,-3,-6.606>
        }
// BFC INVERTNEXT
        object {
                LDX_1_dash_8cyli_dot_dat_in_part
                matrix <2.2961,0,-5.5433,0,4,0,5.5433,0,2.2961,0,-4,0>
        }
// // mirrored
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <6.4672,0,-2.6788,0,7,0,-2.6788,0,-6.4672,0,-3,0>
        }
        object {
                LDX_t16o1429_dot_dat_in_part
                matrix <4.9497,0,-4.9497,0,-7,0,4.9497,0,4.9497,0,-3,0>
        }
        object {
                LDX_1_dash_4ndis_dot_dat_in_part
                matrix <0.1951,0,0.9808,-0.9808,0,0.1951,0,1,0,6.606,-3,-1.981>
        }
        object {
                LDX_1_dash_4disc_dot_dat_in_part
                matrix <0.1951,0,0.9808,1,0,0,0,-1,0,5.606,-3,-1.981>
        }
        object {
                LDX_1_dash_4cyli_dot_dat_in_part
                matrix <0.1951,0,0.9808,1,0,0,0,-1,0,5.606,-3,-1.981>
        }
        object {
                LDX_2_dash_8sphe_dot_dat_in_part
                matrix <0,-1,0,0.1951,0,0.9808,0.9808,0,-0.1951,6.606,-3,-1.981>
        }
// // condlines
}


#declare LDX_2_dash_4ring1_dot_dat_in_part = disc // Ring 0.5
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_2_dash_4rin13_dot_dat_in_part = disc // Ring 0.5
{
        <0,0,0>,<0,1,0>,14,13
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_2_dash_4rin14_dot_dat_in_part = disc // Ring 0.5
{
        <0,0,0>,<0,1,0>,15,14
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_1_dash_4ring1_dot_dat_in_part = disc // Ring 0.25
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_1_dash_4rin13_dot_dat_in_part = disc // Ring 0.25
{
        <0,0,0>,<0,1,0>,14,13
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_1_dash_4rin14_dot_dat_in_part = disc // Ring 0.25
{
        <0,0,0>,<0,1,0>,15,14
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
        }
}


#declare LDX_48_slash_4_dash_4ring2_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,3,2
}


#declare LDX_48_slash_4_dash_4ndis_dot_dat_in_part = disc // Not-Disc 1
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                box
                {
                        <-1,-1,-1>,<1,1,1>
                }
        }
}


#declare LDX_48_slash_4_dash_4ring3_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,4,3
}


#declare LDX_48_slash_4_dash_4ring9_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,10,9
}


#declare LDX_48_slash_4_dash_4ring6_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,7,6
}


#declare LDX_48_slash_1_dash_4ndis_dot_dat_in_part = disc // Not-Disc 0.25
{
        <0,0,0>,<0,1,0>,2,1
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <-1,0,0>,0
                }
                box
                {
                        <-1,-1,-1>,<1,1,1>
                }
        }
}


#declare LDX_48_slash_1_dash_4cyls2_dot_dat_in_part = cylinder // Sloped Cylinder2 0.25
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <1,0,0>,0
                }
                plane
                {
                        <0,0,-1>,0
                }
                plane
                {
                        <1,1,0>,0
                }
        }
}


#declare LDX_48_slash_2_dash_4cyli_dot_dat_in_part = cylinder // Cylinder 0.5
{
        <0,0,0>,<0,1,0>,1 open
        clipped_by
        {
                plane
                {
                        <0,0,-1>,0
                }
        }
}


#declare LDX_4_dash_4ring6_dot_dat_in_part = disc // Ring 1
{
        <0,0,0>,<0,1,0>,7,6
}


#declare LDX_stug4_dash_3x3_dot_dat_in_part = union {
// Stud Tube Open Group  3 x  3
// Name: stug4-3x3.dat
// Author: Steffen [Steffen]
// !LDRAW_ORG Primitive UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
        object {
                LDX_stud4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-20,0,-20>
        }
        object {
                LDX_stud4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-20,0,0>
        }
        object {
                LDX_stud4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-20,0,20>
        }
        object {
                LDX_stud4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,-20>
        }
        object {
                LDX_stud4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,0>
        }
        object {
                LDX_stud4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,20>
        }
        object {
                LDX_stud4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,20,0,-20>
        }
        object {
                LDX_stud4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,20,0,0>
        }
        object {
                LDX_stud4_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,20,0,20>
        }
}


#declare LDX_stug2_dash_4x1_dot_dat_in_part = union {
// Stud Open Group  4 x  1
// Name: stug2-4x1.dat
// Author: Steffen [Steffen]
// !LDRAW_ORG Primitive UPDATE 2011-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-12-29 [PTadmin] Official Update 2011-02
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,30>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,-10>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,0,0,-30>
        }
}


#declare LDX_stug2_dash_1x4_dot_dat_in_part = union {
// Stud Open Group  1 x  4
// Name: stug2-1x4.dat
// Author: Steffen [Steffen]
// !LDRAW_ORG Primitive UPDATE 2011-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-12-29 [PTadmin] Official Update 2011-02
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-30,0,0>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,-10,0,0>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,10,0,0>
        }
        object {
                LDX_stud2_dot_dat_in_part
                matrix <1,0,0,0,1,0,0,0,1,30,0,0>
        }
}


#declare LDX_stug_dash_4x1_dot_dat_in_part = union {
// Stud Group  4 x  1
// Name: stug-4x1.dat
// Author: Magnus Forsberg [MagFors]
// !LDRAW_ORG Primitive UPDATE 2011-02
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-12-29 [PTadmin] Official Update 2011-02
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,30>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,10>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,-10>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,0,0,-30>
        }
}


#declare LDX_stug_dash_1x4_dot_dat_in_part = union {
// Stud Group  1 x  4
// Name: stug-1x4.dat
// Author: Steffen [Steffen]
// !LDRAW_ORG Primitive UPDATE 2011-01
// !LICENSE Redistributable under CCAL version 2.0 : see CAreadme.txt
// BFC CERTIFY CCW
// !HISTORY 2011-07-25 [PTadmin] Official Update 2011-01
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,-30,0,0>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,-10,0,0>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,10,0,0>
        }
        object {
                lg_knob
                matrix <0,0,-25,-25,0,0,0,-25,0,0,0,0>
                matrix <1,0,0,0,1,0,0,0,1,30,0,0>
        }
}
