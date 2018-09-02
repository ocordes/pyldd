// all includes for handling LDX commands from LDView

// Oliver Cordes 2018-08-31
//

// the content is copied from povray files which are
// created by LDView 4.2.1.1

// some constants
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
