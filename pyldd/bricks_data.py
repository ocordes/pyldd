"""

pyldd/bricks_data.py

Author: Oliver Cordes

History:
 2019-05-11: add space plates
 2018-09-30: seperate bricks_data from bricks.py


"""




known_bricks = { '0608':  [ '0608p01', None ],     # base 32 x 32 road T intersection 9 studs
                 '0608p01': ['0608p01', None],     # base 32 x 32 road T intersection 9 studs with road pattern
                 '0608p03': ['0608p03', None],     # base 32 x 32 road T intersection 9 studs with space pattern
                 '0609':  [ '0609p01', None ],     # base 32 x 32 road curve 9 studs
                 '0609p01': [ '0609p01', None ], # base 32 x 32 road curve 9 studs with road pattern
                 '0609p03': [ '0609p03', None ], # base 32 x 32 road curve 9 studs with space pattern
                 '2336':  [ '2336', None ],     # space nose 2 x 6 x 2
                 '2341':  [ '2341', None ],     # brick 45 3 x 1 inverted double
                 '2356':  [ '2356', None ],     # brick 4 x 6
                 '2357':  [ '2357', None ],     # brick 2 x 2 corner
                 '2362':  [ '2362', None ],     # panel 1 x 2 x 3 studs hollow
                 '2376':  [ '2376', None ],     # tile 2 x 2 round with lifting ring
                 '2412':  [ '2412', None ],     # tile 1 x 2 grille without groove
                 '2420':  [ '2420', None ],     # plate 2 x 2 corner
                 '2429':  [ '2429', None ],     # hinge plate 1 x 4 base
                 '2430':  [ '2430', None ],     # hinge plate 1 x 4 top
                 '2431':  [ '2431', None ],     # flat tile 1 x 4
                 '2432':  [ '2432', None ],     # tile 1 x 2 with handle
                 '2434':  [ '2434', None ],     # brick 2 x 4 x 2 with studs on sides
                 '2435':  [ '2435', None ],     # tree pine small 2 x 2 x 4
                 '2445':  [ '2445', None ],     # plate 2 x 12
                 '2449':  [ '2449', None ],     # slope brick 75 2 x 1 x 3 inverted
                 '2450':  [ '2450', None ],     # plate 3 x 3 without corner
                 '2453':  [ '2453', None ],     # brick 1 x 1 x 5
                 '2454':  [ '2454', None ],     # brick 1 x 2 x 5
                 '2462':  [ '2462', None ],     # brick 3 x 3 facet
                 '2465':  [ '2465', None ],     # brick 1 x 16
                 '2486':  [ '2486', None ],     # bar 1 x 8 x 2
                 '2508':  [ '2508', None ],     # plate 1 x 2 with towball long
                 '2577':  [ '2577', None ],     # brick 4 x 4 with round corner
                 '2584':  [ '2584', None ],     # hose reel 2 x 2 holder
                 '2585':  [ '2585', None ],     # hose reel 2 x 2
                 '2639':  [ '2639', None ],     # plate 4 x 4 corner
                 '2653':  [ '2653', None ],     # brick 1 x 4 with groove
                 '2654':  [ '2654', None ],     # boot stud 2 x 2
                 '2680':  [ '2680', None ],     # support 4 x 4 x 5 stanchion
                 '2730':  [ '2730', None ],     # technic beam 1 x 10 with holes
                 '2748':  [ '3857', None ],     # baseplate 16 x 32
                 '2875':  [ '2875', None ],     # slope brick 45 2 x 6 x 2/3
                 '2877':  [ '2877', None ],     # brick 1 x 2 with grille
                 '2921':  [ '2921', None ],     # brick 1 x 1 with handle
                 '3001':  [ '3001', None ],     # brick 2 x 4
                 '3002':  [ '3002', None ],     # brick 2 x 3
                 '3003':  [ '3003', None ],     # brick 2 x 2
                 '3004':  [ '3004', None ],     # brick 1 x 2
                 '3005':  [ '3005', None ],     # brick 1 x 1
                 '3006':  [ '3006', None ],     # brick 2 x 10
                 '3007':  [ '3007', None ],     # brick 2 x 8
                 '3008':  [ '3008', None ],     # brick 1 x 8
                 '3009':  [ '3009', None ],     # brick 1 x 6
                 '3010':  [ '3010', None ],     # brick 1 x 4
                 '3020':  [ '3020', None ],     # plate 2 x 4
                 '3021':  [ '3021', None ],     # plate 2 x 3
                 '3022':  [ '3022', None ],     # plate 2 x 2
                 '3023':  [ '3023', None ],     # plate 1 x 2
                 '3024':  [ '3024', None ],     # plate 1 x 1
                 '3027':  [ '3027', None ],     # plate 6 x 16
                 '3028':  [ '3028', None ],     # plate 6 x 12
                 '3029':  [ '3029', None ],     # plate 4 x 12
                 '3030':  [ '3030', None ],     # plate 4 x 10
                 '3031':  [ '3031', None ],     # plate 4 x 4
                 '3032':  [ '3032', None ],     # plate 4 x 6
                 '3033':  [ '3033', None ],     # plate 6 x 10
                 '3034':  [ '3034', None ],     # plate 2 x 8
                 '3035':  [ '3035', None ],     # plate 4 x 8
                 '3036':  [ '3036', None ],     # plate 6 x 8
                 '3037':  [ '3037', None ],     # slope brick 45 2 x 4
                 '3038':  [ '3038', None ],     # slope brick 45 2 x 3
                 '3039':  [ '3039', None ],     # slope brick 45 2 x 2
                 '3040':  [ '3040', None ],     # roof tile 1 x 2 / 45°
                 '3041':  [ '3041', None ],     # slope brick 45 2 x 4 double
                 '3042':  [ '3042', None ],     # slope brick 45 2 x 3 double
                 '3043':  [ '3043', None ],     # slope brick 45 2 x 2 double
                 '3044':  [ '3044', None ],     # slope brick 45 2 x 1 double
                 '3045':  [ '3045', None ],     # slope brick 45 2 x 2 double convex
                 '3046':  [ '3046', None ],     # slope brick 45 2 x 2 double concave
                 '3048':  [ '3048', None ],     # slope brick 45 1 x 2 triple
                 '3049':  [ '3049', None ],     # slope brick 45 1 x 2 double / inverted with center stud
                 '3062':  [ '3062', None ],     # brick 1 x 1 round open stud
                 '3063':  [ '3063', None ],     # brick 2 x 2 corner round
                 '3065':  [ '3065', None ],     # brick 1 x 2 without center studs
                 '3066':  [ '3066', None ],     # brick 1 x 4 without center studs
                 '3067':  [ '3067', None ],     # brick 1 x 6 without center studs
                 '3068':  [ '3068', None ],     # flat tile 2 x 2
                 '3069':  [ '3069', None ],     # tile 1 x 2 with groove
                 '3070':  [ '3070', None ],     # flat tile 1 x 1
                 '3134':  [ '3134', None ],     # brick 1 x 2 cable cutout
                 '3144':  [ '3144', None ],     # antenna with side spokes
                 '3185':  [ '3185', None ],     # fence 1 x 4 x 2
                 '3188':  [ '3188', None ],     # door 1 x 3 x 2 right
                 '3189':  [ '3189', None ],     # door 1 x 3 x 2 left
                 '3192':  [ '3192', None ],     # door 1 x 3 x 3 right
                 '3193':  [ '3193', None ],     # door 1 x 3 x 3 left
                 '3245':  [ '3245', None ],     # brick 1 x 2 x 2
                 '3297':  [ '3297', None ],     # slope brick 33 3 x 4
                 '3298':  [ '3298', None ],     # slope brick 33 3 x 2
                 '3299':  [ '3299', None ],     # slope brick 33 2 x 4 double
                 '3300':  [ '3300', None ],     # slope brick 33 2 x 2 double
                 '3307':  [ '3307', None ],     # arch 1 x 6 x 2
                 '3455':  [ '3455', None ],     # arch 1 x 6
                 '3456':  [ '3456', None ],     # plate 6 x 14
                 '3460':  [ '3460', None ],     # plate 1 x 8
                 '3470':  [ '3470', None ],     # plant tree oval 4 x 4 x 6
                 '3471':  [ '3471', None ],     # plant tree pyramidal 4 x 4 x 6.667 type 1
                 '3475':  [ '3475', None ],     # plate 1 x 2 with jet enginde with axle hole
                 '3479':  [ '3479', None ],     # tail 4 x 2 x 2
                 '3622':  [ '3622', None ],     # brick 1 x 3
                 '3623':  [ '3623', None ],     # plate 1 x 3
                 '3626':  [ '3626', None ],     # Minifig head with hollow stud
                 '3633':  [ '3633', None ],     # fence 1 x 4 x 1
                 '3660':  [ '3660', None ],     # slope brick 45 2 x 2 inverted
                 '3665':  [ '3665', None ],     # slope brick 45 2 x 1 inverted
                 '3666':  [ '3666', None ],     # plate 1 x 6
                 '3673':  [ '3673', None ],     # technic pin
                 '3675':  [ '3675', None ],     # slope brick 33 3 x 3 double convex
                 '3676':  [ '3676', None ],     # slope brick 45 2 x 2 inverted double convex
                 '3678':  [ '3678', None ],     # slope brick 65 2 x 2 x 2
                 '3679':  [ '3679', None ],     # turntable 2 x 2 plate top
                 '3680':  [ '3680', None ],     # turntable 2 x 2 plate base
                 '3684':  [ '3684', None ],     # slope brick 75 2 x 2 x 3
                 '3685':  [ '3685', None ],     # slope brick 75 2 x 2 x 3 double convex
                 '3688':  [ '3688', None ],     # slope brick 75 2 x 2 x 2 quad. convex
                 '3700':  [ '3700', None ],     # technic beam 1 x 2 with hole
                 '3701':  [ '3701', None ],     # technic beam 1 x 4 with holes
                 '3702':  [ '3702', None ],     # technic beam 1 x 8 with holes
                 '3703':  [ '3703', None ],     # technic beam 1 x 16 with holes
                 '3706':  [ '3706', None ],     # technic axle 6
                 '3710':  [ '3710', None ],     # plate 1 x 4
                 '3730':  [ '3730', None ],     # plate 2 x 2 with towball coupling
                 '3741':  [ '3741', None ],     # flower stem
                 '3742':  [ '3742', None ],     # flower
                 '3747':  [ '3747', None ],     # slope brick 33 3 x 2 inverted
                 '3754':  [ '3754', None ],     # brick 1 x 6 x 5
                 '3755':  [ '3755', None ],     # brick 1 x 3 x 5
                 '3778':  [ '3778', None ],     # cypress
                 '3794':  [ '3794', None ],     # plate 1 x 2 with stud
                 '3795':  [ '3795', None ],     # plate 2 x 6
                 '3811':  [ '3811', None ],     # base 32 x 32 plate
                 '3814':  [ '3814', None ],     # Minifig torso
                 '3815':  [ '3815', None ],     # Minifig hips
                 '3816':  [ '3816', None ],     # Minifig leg right
                 '3817':  [ '3817', None ],     # Minifig leg left
                 '3818':  [ '3818', None ],     # Minifig arm left
                 '3819':  [ '3819', None ],     # Minifig arm right
                 '3820':  [ '3820', None ],     # Minifig hand
                 '3821':  [ '3821', None ],     # door 1 x 3 x 2 right
                 '3822':  [ '3822', None ],     # door 1 x 3 x 1 left
                 '3823':  [ '3823', None ],     # windscreen 2 x 4 x 2
                 '3828':  [ '3828', None ],     # car steering wheel
                 '3829':  [ '3829', None ],     # car steering wheel stand
                 '3830':  [ '3830', None ],     # hinge brick 1 x 4 top
                 '3831':  [ '3831', None ],     # hinge brick 1 x 4 base
                 '3832':  [ '3832', None ],     # plate 2 x 10
                 '3838':  [ '3838', None ],     # minifig airtanks
                 '3839':  [ '3839', None ],     # plate 1 x 2 with handles low attachment
                 '3842':  [ '3842', None ],     # minifig helmet classic with thick chin guard and visor dimples
                 '3853':  [ '3853', None ],     # window 1 x 4 x 3
                 '3857':  [ '3857', None ],     # baseplate 16 x 32
                 '3861':  [ '3861', None ],     # door 1 x 4 x 5
                 '3865':  [ '3865', None ],     # base plate 8 x 16
                 '3867':  [ '3867', None ],     # base plate 16 x 16
                 '3894':  [ '3894', None ],     # technic beam 1 x 6 with holes
                 '3895':  [ '3895', None ],     # technic beam 1 x 12 with holes
                 '3899':  [ '3899', None ],     # town mug
                 '3901':  [ '3901', None ],     # minifig, hair female
                 '3933':  [ '3933', None ],     # wing 8 x 4 left
                 '3934':  [ '3934', None ],     # wing 8 x 4 right
                 '3935':  [ '3935', None ],     # wing 4 x 4 left
                 '3936':  [ '3936', None ],     # wing 4 x 4 right
                 '3937':  [ '3937', None ],     # hinge 1 x 2 base
                 '3938':  [ '3938', None ],     # hinge 1 x 2 top
                 '3939':  [ '3939', None ],     # slope brick 33 3 x 6
                 '3900':  [ '3900', None ],     # minifig signal holder (stop sign)
                 '3940':  [ '3940', None ],     # space stand 2 x 2 x 2
                 '3941':  [ '3941', None ],     # brick 2 x 2 round
                 '3942':  [ '3942', None ],     # cone 2 x 2 x 2 open stud
                 '3943':  [ '3943', None ],     # cone 4 x 4 x 2
                 '3947':  [ '3947', None ],     # base 32 x 32 plate with craters
                 '3956':  [ '3956', None ],     # bracket 2 x 2 - 2 x 2
                 '3957':  [ '3957', None ],     # antenna
                 '3958':  [ '3958', None ],     # plate 6 x 6
                 '3959':  [ '3959', None ],     # space gun
                 '3963':  [ '3963', None ],     # space positioning rockets
                 '3960':  [ '30065', None ],    # space radar dish 4 x 4
                 '4032':  [ '4032', None ],     # plate 2 x 2 round
                 '4070':  [ '4070', None ],     # brick 1 x 1 x 1 with vertical stud (headlight brick)
                 '4079':  [ '4079', None ],     # town seat 2 x 2
                 '4083':  [ '4083', None ],     # bar 1 x 4 x 2
                 '4085':  [ '4085', None ],     # plate 1 x 1 with clip vertical
                 '4150':  [ '4150', None ],     # tile 2 x 2 round
                 '4161':  [ '4161', None ],     # slope brick 33 3 x 3
                 '4162':  [ '4162', None ],     # flat tile 1 x 8
                 '4175':  [ '4175', None ],     # plate 1 x 2 with ladder
                 '4176':  [ '4176', None ],     # windscreen 2 x 6 x 2
                 '4201':  [ '4201', None ],     # brick 8 x 8
                 '4202':  [ '4202', None ],     # brick 4 x 12
                 '4204':  [ '4204', None ],     # brick 8 x 16
                 '4209':  [ '4209', None ],     # hose reel 2 x 4 x 2 holder
                 '4215':  [ '4215', None ],     # panel 1 x 4 x 3 open studs
                 '4216':  [ '4216', None ],     # brick 1 x 2 with groove
                 '4217':  [ '4217', None ],     # brick 1 x 14 with groove
                 '4266':  [ '4266', None ],     # technic wheel centre "20 x 30"
                 '4275':  [ '4275', None ],     # plate 1 x 2 with hinge open studs counter part 4276
                 '4276':  [ '4276', None ],     # plate 1 x 2 with hinge open studs counter part 4275
                 '4282':  [ '4282', None ],     # plate 2 x 16
                 '4286':  [ '4286', None ],     # slope brick 33 3 x 1
                 '4287':  [ '4287', None ],     # slope brick 33 3 x 1 inverted
                 '4345':  [ '4345', None ],     # mail box 2 x 2 x 2 open studs
                 '4346':  [ '4346', None ],     # mail box 2 x 2 x 2 door
                 '4445':  [ '4445', None ],     # slope brick 45 2 x 8
                 '4447':  [ '4447', None ],     # window 4 x 4 x 3 roof
                 '4448':  [ '4448', None ],     # window 4 x 4 x 3 roof glass
                 '4460':  [ '4460', None ],     # slope brick 75 2 x 1 x 3
                 '4477':  [ '4477', None ],     # plate 1 x 10
                 '4488':  [ '4488', None ],     # plate 2 x 2 with wheel holder
                 '4490':  [ '4490', None ],     # arch 1 x 3
                 '4509':  [ '4509', None ],     # train roof 33 6 x 6 double
                 '4515':  [ '4515', None ],     # slope brick 10 6 x 8
                 '4519':  [ '4519', None ],     # technic axle 3
                 '4528':  [ '4528', None ],     # town frypan
                 '4530':  [ '4530', None ],     # minifig hair girl
                 '4532':  [ '4532', None ],     # cupboard 2 x 3 x 2
                 '4533':  [ '4533', None ],     # cupboard 2 x 3 x 2 door
                 '4536':  [ '4536', None ],     # cupboard 2 x 3 x 2 drawer
                 '4589':  [ '4589', None ],     # nose cone small 1 x 1
                 '4597':  [ '4597', None ],     # space cabin base 6 x 6
                 '4599':  [ '4599', None ],     # Tap 1 x 1
                 '4623':  [ '4623', None ],     # plate 1 x 2 with arm
                 '4729':  [ '4729', None ],     # brick 2 x 2 no studs with pin
                 '4732':  [ '4732', None ],     # bracket 8 x 2 x 1 & 1/3
                 '4733':  [ '4733', None ],     # brick 1 x 1 with studs on sides
                 '4740':  [ '4740', None ],     # satellite dish 2 x 2
                 '4741':  [ '4741', None ],     # frame right/inv 1 x 4 x 6
                 '4742':  [ '4742', None ],     # cone 4 x 4 x 2 hollow no studs
                 '4844':  [ '4844', None ],     # boat mast base 4 x 4 x 9 with top notches
                 '4854':  [ '4854', None ],     # slope brick 45 4 x 4 inverted double
                 '4861':  [ '4861', None ],     # slope brick 45 3 x 4 double / 33 slope
                 '4864':  [ '4864', None ],     # panel 1 x 2 x 2 open studs
                 '4865':  [ '4865', None ],     # panel 1 x 2 x 1
                 '4871':  [ '4871', None ],     # slope brick 45 4 x 2 inverted double
                 '6014':  [ '6014' ,None ],     # wheel wide
                 '6015':  [ '6015', None ],     # tyre wide
                 '6019':  [ '6019', None ],     # plate 1 x 1 with clip horizontal
                 '6037':  [ '6037', None ],     # brick 2 x 2 x 3 & 1/3 octagonal
                 '6061':  [ '6061', None ],     # brick 2 x 4 x 2 with holes on sides
                 '6056':  [ '6056', None ],     # brick 2 x 2 x 6 with groove
                 '6066':  [ '6066', None ],     # castle turret top 4 x 8 x 2 1/3
                 '6072':  [ '6072', None ],     # castle turret quarter 7 x 7 x 2 1/3
                 '6082':  [ '6082', None ],     # rock piece 4 x 10 x 6 rectangular
                 '6087':  [ '6087', None ],     # bracket 2 x 5 x 2 1/3
                 '6083':  [ '6083', None ],     # rock piece 3 x 8 x 7 triangular
                 '6091':  [ '6091', None ],     # brick 2 x 1 x 1 & 1/3 with curved top
                 '6098':  [ '3867', None ],     # base 16 x 16 plate road 9-stud landing pad with green octagon
                 '6099':  [ '6099', None ],     # base 32 x 32 road 9-stud landing pad
                 '6107':  [ '6107', None ],     # brick 5 x 5 facet
                 '6111':  [ '6111', None ],     # brick 1 x 10
                 '6112':  [ '6112', None ],     # brick 1 x 12
                 '6134':  [ '6134', None ],     # hinge 2 x 2 top
                 '6141':  [ '6141', None ],     # plate 1 x 1 round
                 '6143':  [ '3941', None ],     # brick 2 x 2 round
                 '6162':  [ '6162', None ],     # brick 12 x 12 corner round
                 '6178':  [ '6178', None ],     # plate 6 x 12 with studs on edges
                 '6179':  [ '6179', None ],     # plate 4 x 4 with studs on edges
                 '6180':  [ '6180', None ],     # plate 4 x 6 with studs on edges
                 '6188':  [ '6188', None ],     # nose cone small 1 x 1
                 '6205':  [ '6205', None ],     # plate 6 x 16 with studs on edges
                 '6212':  [ '6212', None ],     # brick 4 x 10
                 '6213':  [ '6213', None ],     # brick 2 x 6 x 3
                 '6215':  [ '6215', None ],     # brick 2 x 3 with curved top
                 '6222':  [ '6222', None ],     # brick 4 x 4 round with holes
                 '6231':  [ '6231', None ],     # panel 1 x 1 x 1 corner
                 '6233':  [ '6233', None ],     # cone 3 x 3 x 2
                 '6269':  [ '6269', None ],     # crystal cup
                 '6541':  [ '6541', None ],     # technic beam 1 x 1 with hole
                 '6558':  [ '6558', None ],     # technic pin long with friction
                 '6562':  [ '43093', None ],    # technic axle pin with friction
                 '6564':  [ '6564', None ],     # wedge 3 x 2 right
                 '6565':  [ '6565', None ],     # wedge 3 x 2 left
                 '6576':  [ '6576', None ],     # plate 4 x 8 with studs in center
                 '6636':  [ '6636', None ],     # flat tile 1 x 6
                 '10247': [ '10247', None ],    # plate 2 x 2 with hole and complete underside rib
                 '10314': [ '10314', None ],    # brick 1 x 4 x 1.333 with curved top without understuds
                 '11211': [ '11211', None ],    # brick 1 x 2 with studs on one opposite side
                 '11477': [ '11477', None ],    # slope brick curved 2 x 1
                 '13548': [ '13548', None ],    # slope brick 45 2 x 2 double convex with cant *wrong texture*
                 '14413': [ '14413', None ],    # brick 4 x 4 facet
                 '14716': [ '14716', None ],    # brick 1 x 1 x 3
                 '14719': [ '14719', None ],    # flat tile 2 x 2 corner
                 '14769': [ '4150', None ],     # tile 2 x 2 round
                 '14918': [ '3942', None ],     # Cone 2 x 2 x 2 open stud
                 '15533': [ '15533', None ],    # brick 1 x 4 with embossed bricks
                 '15068': [ '15068', None ],    # slope brick curved 2 x 2 x 2/3
                 '15332': [ '15332', None ],    # fence 1 x 4 x 2 with 4 knobs
                 '15395': [ '15395', None ],    # dome 2 x 2 inverted with stud and tube
                 '15397': [ '15397', None ],    # plate 3 x 3 cross
                 '15444': [ '15444', None ],    # brick 1 x 1 x 2 with square hole in 1 side
                 '15571': [ '3048', None ],     # slope brick 45 1 x 2 triple
                 '15573': [ '3794', None ],     # plate 1 x 2 with stud
                 '15647': [ '30390', None ],    # slope brick 45 2 x 4 inverted double with pins
                 '17485': [ '17485', None ],    # brick 2 x 2 round with hole o 4,85
                 '18654': [ '18654', None ],    # technic beam 1
                 '18759': [ '18759', None ],    # slope brick 45 3 x 1 inverted double with inner stopper rings *wrong texture*
                 '18841': [ '30367', None ],    # cylinder 2 x 2 with dome top with blocked stud, R2-D2
                 '18897': [ '18897', None ],    # circle brick 6 x 6 with 4.85 hole
                 '20460': [ '3817', None ],     # minifig leg left
                 '20461': [ '3816', None ],     # minifig leg right
                 '20953': [ '20953', None ],    # double sphere 2 x 2 x 1 2/3 w knob
                 '21445': [ '21445', None ],    # plate 1 x 2 with wheel holder
                 '22388': [ '22388', None ],    # slope brick 50 1 x 1 x 2/3 quadruple  *wrong texture*
                 '22391': [ '22391', None ],    # wedge 4 x 4 pointed
                 '22885': [ '22885', None ],    # brick 1 x 2 x 1 2/3 with stud on 1 side
                 '22886': [ '22886', None ],    # brick 1 x 2 x 3 with inside axlehole
                 '22889': [ '22889', None ],    # slope brick 45 6 x 2 double inverted with open centre
                 '23949': [ '23949', None ],    # slope brick 45 2 x 6 *wrong texture*
                 '23950': [ '23950', None ],    # panel 1 x 3 x 1
                 '24947': [ '24947', None ],    # sphere 2 x 2 x 1 1/3 inverted
                 '26597': [ '34816', None ],    # brick 1 x 2 with handle on end with trimmed arm
                 '26604': [ '26604', None ],    # brick 1 x 1 with studs on two adjacent sides
                 '28192': [ '28192', None ],    # slope brick 45 2 x 1 with cutout and without stud
                 '30000': [ '30000', None ],    # brick 2 x 2 with pins
                 '30055': [ '30055', None ],    # fence 1 x 4 x 2 spindled
                 '30064': [ '3957', None ],     # antenna
                 '30065': [ '30065', None ],    # space radar dish 4 x 4
                 '30072': [ '30072', None ],    # brick 12 x 24
                 '30136': [ '30136', None ],    # log brick 1 x 2
                 '30137': [ '30137', None ],    # log brick 1 x 4
                 '30144': [ '30144', None ],    # brick 2 x 4 x 3
                 '30145': [ '30145', None ],    # brick 2 x 2 x 3
                 '30151': [ '30151', None ],    # cylinder 2 x 2 x 1 & 2/3 half-dome
                 '30176': [ '30176', None ],    # plant brick 1 x 1 round with 3 bamboo leaves
                 '30179': [ '30179', None ],    # door 1 x 4 x 6 framte type 1
                 '30180': [ '30180', None ],    # slope brick 45 6 x 2 x 2 double
                 '30181': [ '30181', None ],    # brick 4 x 10 with cut corners
                 '30183': [ '30183', None ],    # slope brick 45 6 x 4 inverted double with hole
                 '30236': [ '30236', None ],    # brick 1 x 2 with handle
                 '30237': [ '30237', None ],    # brick 1 x 2 with clip horizontal
                 '30241': [ '30241', None ],    # brick 1 x 1 with clip vertical
                 '30249': [ '30249', None ],    # slope brick 55 1 x 6 x 5
                 '30250': [ '30250', None ],    # bracket 4 x 7 x 3
                 '30340': [ '30340', None ],    # minifig life ring
                 '30357': [ '30357', None ],    # plate 3 x 3 corner round
                 '30360': [ '30360', None ],    # cylinder 3 x 6 x 2 2/3 horizontal
                 '30361': [ '30361', None ],    # cylinder 2 x 2 x 2 robot body
                 '30363': [ '30363', None ],    # slope brick 18 4 x 2
                 '30364': [ '30364', None ],    # brick 1 x 2 locking with 1 finger on end
                 '30365': [ '30365', None ],    # brick 1 x 2 locking with 2 fingers on end
                 '30367': [ '30367', None ],    # cylinder 2 x 2 with dome top with blocked stud, R2-D2
                 '30373': [ '30373', None ],    # slope brick 65 6 x 6 x 2 inverted quadruple
                 '30386': [ '30386', None ],    # hinge brick 1 x 2 locking double
                 '30387': [ '30387', None ],    # hinge brick 1 x 4 locking double
                 '30388': [ '30388', None ],    # hinge brick 1 x 6 locking double
                 '30389': [ '30389', None ],    # hinge brick 2 x 2 locking with 1 finger on end with LDX_axlehole_dot_dat_in_part
                 '30390': [ '30390', None ],    # slope brick 45 4 x 2 double inverted with pins
                 '30400': [ '30400', None ],    # brick 4 x 18
                 '30413': [ '30413', None ],    # panel 1 x 4 x 1
                 '30414': [ '30414', None ],    # brick 1 x 4 with studs on side
                 '30499': [ '3684', None ],     # slope brick 75 2 x 2 x 3
                 '30505': [ '30505', None ],    # brick 3 x 3 without corner
                 '30517': [ '30517', None ],    # support 2 x 2 x 10 girder triangular
                 '30535': [ '30535', None ],    # brick 2 x 4 x 4 with propellor housing
                 '30540': [ '30540', None ],    # hinge brick 1 x 2 locking with 2 fingers horizontal on end
                 '30541': [ '30541', None ],    # hinge brick 1 x 2 locking with 1 finger on end horizontal
                 '30586': [ '30586', None ],    # plate 2 x 8 with liding groove
                 '32013': [ '32013', None ],    # technic connecttor #1 end
                 '32018': [ '32018', None ],    # technical beam 1 x 14 with holes
                 '32028': [ '32028', None ],    # plate 1 x 2 with door rail
                 '32039': [ '32039', None ],    # technic connector with axlehole
                 '32065': [ '32065', None ],    # technic liftarm 1 x 7 thin
                 '32073': [ '32073', None ],    # technic axle 5
                 '32083': [ '32083', None ],    # slope brick 45 4 x 6 double
                 '32123': [ '32123', None ],    # technic bush 1/2 type smooth
                 '32316': [ '32316', None ],    # technic liftarm 1 x 5 straight
                 '32524': [ '32524', None ],    # technic liftarm 1 x 7 straight
                 '32952': [ '32952', None ],    # brick 1 x 1 x 1 2/3 with studs on 1 side
                 '33009': [ '33009', None ],    # minifig book
                 '33303': [ '33303', None ],    # fence 1 x 4 x 2 picket
                 '33176': [ '33176', None ],    # decoration ball
                 '33909': [ '33909', None ],    # plate 2 x 2 with reduced knobs
                 '34816': [ '34816', None ],    # brick 1 x 2 witj handle on end with trimmed arm
                 '40902': [ '40902', None ],    # hinge brick 2 x 2 locking with 2 fingrs on end with X axlehole
                 '41539': [ '41539', None ],    # plate 8 x 8
                 '41767': [ '41767', None ],    # wedge 4 x 2 right
                 '41768': [ '41768', None ],    # wedge 4 x 2 left
                 '41769': [ '41769', None ],    # wedge plate 4 x 2 right
                 '41770': [ '41770', None ],    # wedge plate 4 x 2 left
                 '43093': [ '43093', None ],    # technic axle pin with friction
                 '43722': [ '43722', None ],    # wedge plate 3 x 2 right
                 '43723': [ '43723', None ],    # wedge plate 3 x 2 left
                 '43802': [ '4201', None ],     # brick 8 x 8
                 '43888': [ '43888', None ],    # column 1 x 1 x 6
                 '44041': [ '4204', None ],     # brick 8 x 16
                 '44042': [ '2356', None ],     # brick 4 x 6
                 '44237': [ '44237', None ],    # brick 2 x 6
                 '44336': [ '44336', None ],    # baseplate 32 x 32 road 6-stud straight
                 '45410': [ '45410', None ],    # slope brick curved 6 x 8 x 2 inverted double
                 '45411': [ '45411', None ],    # slope brick curved 6 x 8 x 2 double
                 '45677': [ '45677', None ],    # wedge 4 x 4 x 2/3 curved
                 '47432': [ '47432', None ],    # technic brick 2 x 3 w/ holes, click rot. hinge (v) and socket
                 '47455': [ '47455', None ],    # technic brick 2 x 2 with hole, half rotation joint ball vert
                 '47507': [ '47507', None ],    # plate 6 x 6 x 2 with recessed base 4 x 4 and 6 pegholes
                 '47543': [ '47543', None ],    # cone 8 x 4 half
                 '47847': [ '47847', None ],    # panel 2 x 4 x 6 rock
                 '47905': [ '47905', None ],    # brick 1 x 1 with studs on the two opposite sides
                 '47974': [ '47974', None ],    # brick 4 x 8 round half circle
                 '47975': [ '47975', None ],    # hinge brick 1 x 2 locking with 2gers horizontal
                 '48092': [ '48092', None ],    # brick 4 x 4 corner round
                 '48170': [ '48170', None ],    # brick 2 x 2 with hole, half rotation joint ball horiz
                 '48171': [ '48171', None ],    # brick 2 x 2 with hole, half rotation joint ball vert
                 '48183': [ '48183', None ],    # wedge plate 3 x 4 with stud notches
                 '48288': [ '48288', None ],    # tile 8 x 16
                 '49668': [ '49668', None ],    # plate 1 x 1 with tooth in-line
                 '50303': [ '50303', None ],    # boat bow plate 6 x 7 with stud notches
                 '50745': [ '50745', None ],    # car mudguard 4 x 2.5 x 2
                 '50746': [ '50746', None ],    # slope tile 30 1 x 1 x 2/3
                 '50950': [ '50950', None ],    # slope brick curved 3 x 1
                 '51739': [ '51739', None ],    # wing 2 x 4
                 '52031': [ '52031', None ],    # wedge 4 x 6 x 2/3 curved
                 '52040': [ '52040', None ],    # brick 12 x 12 with 3 pin holes on sides & axle holes in corners
                 '52501': [ '52501', None ],    # slope brick 45 6 x 1 inverted double
                 '52107': [ '52107', None ],    # brick 1 x 2 with studs on two opposite sides
                 '53400': [ '53400', None ],    # train track curved 22.5 degrees
                 '53401': [ '53401', None ],    # train track 6 studs wide straight
                 '54383': [ '54383', None ],    # wedge plate 6 x 3 right
                 '54384': [ '54384', None ],    # wedge plate 6 x 3 left
                 '54755': [ '54755', None ],    # train motor 2006
                 '54757': [ '54757', None ],    # train motor 2006 axle tube
                 '56750': [ '56750', None ],    # flower head
                 '57893': [ '57893', None ],    # lattice tower with wall 2 x 2 x 10
                 '57894': [ '57894', None ],    # window 1 x 4 x 6 frame with three panes
                 '57895': [ '57895', None ],    # glass for window 1 x 4 x 6
                 '57999': [ '57999', None ],    # train wheel w/o ring
                 '58181': [ '3939', None ],     # slope brick 33 3 x 6
                 '58827': [ '58827', None ],    # support 2 x 2 x 10 girder triangular with axlehole
                 '58846': [ '58846', None ],    # brick 10 x 10 corner round with tapered edge and cutout
                 '59900': [ '59900', None ],    # cone 1 x 1 with stop
                 '60033': [ '4202', None ],     # brick 4 x 12
                 '60219': [ '60219', None ],    # slope brick 45 6 x 4 inverted double with open center and 3 holes
                 '60475': [ '30241', None ],    # brick 1 x 1 with clip vertical
                 '60474': [ '60474', None ],    # plate 4 x 4 round with hole and snapstud
                 '60476': [ '60476', None ],    # brick 1 x 1 with clip horizontal
                 '60477': [ '60477', None ],    # slope brick 18 4 x 1
                 '60478': [ '60478', None ],    # plate 1 x 2 with handle on end
                 '60479': [ '60479', None ],    # plate 1 x 12
                 '60481': [ '60481', None ],    # slope brick 65 2 x 1 x 2
                 '60592': [ '60592', None ],    # window  1 x 2 x 2 without sill
                 '60594': [ '60594', None ],    # window 1 x 4 x 3 without shutter tabs
                 '60601': [ '60601', None ],    # glass for window 1 x 2 x 2 without sill
                 '60603': [ '60603', None ],    # glass for window 1 x 4 x 3 opening
                 '60608': [ '60608', None ],    # window 1 x 2 x 3 pane with thick corner tabs
                 '60616': [ '60616', None ],    # door 1 x 4 x 6 smooth with square handle plinth
                 '60623': [ '60623', None ],    # door 1 x 4 x 6 with 4 panes and stud handle
                 '60797': [ '60797', None ],    # door glas t/frame 1 x 4 x 6 multicolor
                 '60803': [ '60803', None ],    # glass for window 1 x 4 x 6
                 '60897': [ '4085', None ],     # plate 1 x 1 with clip vertical
                 '61252': [ '6019', None ],     # plate 1 x 1 with clip horizontal
                 '62712': [ '62712', None ],    # brick 2 x 2 with ball socket and axlehole
                 '62810': [ '62810', None ],    # Minifig hair short, tousled with side parting
                 '63082': [ '63082', None ],    # plate 2 x 2 with socket joint-8 square and axlehole
                 '63864': [ '63864', None ],    # flat tile 1 x 3
                 '64449': [ '64449', None ],    # support  1 x  6 x 10 girder triangular
                 '64453': [ '64453', None ],    # windscreen 1 x 6 x 3
                 '64799': [ '64799', None ],    # frame plate 4 x 4
                 '63965': [ '63965', None ],    # bar 6L with thick stop
                 '64417': [ '64417', None ],    # train buffer sealed magnet casing
                 '64424': [ '64424', None ],    # train buffer beam with sealed magnet
                 '72454': [ '72454', None ],    # slope brick 45 4 x 4 inverted double with holes
                 '74698': [ '2376', None ],     # tile 2 x 2 round with lifting ring
                 '74746': [ '53401', None ],    # train track 6 studs wide straight
                 '74747': [ '53400', None ],    # train track curved 22.5 degrees
                 '74784': [ '74784', None ],    # train wheel bearing element 3 x 6
                 '75347': [ '75347', None ],    # pillar 2 x 2 x 11
                 '75541': [ '75541', None ],    # train right points
                 '75542': [ '75542', None ],    # train left points
                 '76385': [ '76385', None ],    # hinge brick 1 x 2 locking with 1 finger on top
                 '76766': [ '76766', None ],    # bracket 5 x 2 x 2 1/3 with inside fillets
                 '85080': [ '3063', None ],     # brick 2 x 2 corner round ?? LEGO has a different description but looks similar
                 '85984': [ '85984', None ],    # slope tile 30 2 x 1 x 2/3
                 '85943': [ '85943', None ],    # technic brick 1 x 2 with two liftarms
                 '86500': [ '86500', None ],    # dome 4 x 4 smooth
                 '87079': [ '87079', None ],    # tile 2 x 4 with groove
                 '87081': [ '87081', None ],    # brick 4 x 4 round with pinhole and snapstud
                 '87087': [ '87087', None ],    # brick 1 x 1 with stud on 1 side
                 '87544': [ '2362', None ],     # panel 1 x 2 x 3 studs hollow
                 '87559': [ '87559', None ],    # brick round corner 6 x 6 x 2
                 '87580': [ '87580', None ],    # plate 2 x 2 with stud
                 '87620': [ '87620', None ],    # brick 2 x 2 facet
                 '88072': [ '4623', None ],     # plate 1 x 2 with arm
                 '88293': [ '88293', None ],    # brick 3 x 3 x 2 round corner with dome top
                 '88393': [ '88393', None ],    # brick 1 x 2 x 5 with groove
                 '88646': [ '88646', None ],    # plate 3 x 4 with 4 knobs
                 '88930': [ '88930', None ],    # slope brick curved 2 x 4 with underside studs
                 '90194': [ '48183', None ],    # wedge plate 3 x 4 with stud notches
                 '90498': [ '48288', None ],    # tile 8 x 16
                 '91049': [ '91049', None ],    # plate 1.5 x 1.5 x 2/3 round
                 '91405': [ '91405', None ],    # plate 16 x 16
                 '91988': [ '91988', None ],    # plate 2 x 14
                 '92013': [ '92013', None ],    # brick 2 x 2 with ball socket and axlehole
                 '92410': [ '92410', None ],    # cupboard 2 x 3 x 2 open studs
                 '92438': [ '92438', None ],    # plate 8 x 16
                 '92583': [ '92583', None ],    # windscreen 3 x 6 x 2
                 '92593': [ '92593', None ],    # plate 1 x 4 with 2 knobs
                 '92947': [ '92947', None ],    # brick 2 x 2 round with grille
                 '92946': [ '92946', None ],    # roof tile 1 x 2 45° W 1/3 Plate
                 '92950': [ '3455', None ],     # arch 1 x 6
                 '93888': [ '3007', None ],     # brick 2 x 8
                 '93273': [ '93273', None ],    # plate with bow 1 x 4 x 2/3
                 '95188': [ '95188', None ],    # brick 6 x 6 corner round with slope 33
                 '95347': [ '95347', None ],    # lattice tower w/cross 2 x 2 x 10
                 '95820': [ '30237', None ],    # brick 1 x 2 with clip horizontal
                 '95831': [ '95831', None ],    # M4
                 '97492': [ '30144', None ],    # brick 2 x 4 x 3
                 '98100': [ '98100', None ],    # slope brick 2 x 2 round w knob
                 '98138': [ '98138', None ],    # tile 1 x 1 round with groove
                 '98283': [ '98283', None ],    # brick 1 x 2 with embossed bricks
                 '98285': [ '98285', None ],    # hinge plate 2 x 4.5 base with technic pin hole
                 '98286': [ '98286', None ],    # hinge plate 2 x 4.5 base with technic pin hole
                 '98302': [ '3475', None ],     # plate 1 x 2 with jet enginde with axle hole
                 '98549': [ '98549', None ],    # tile, modified 2 x 2 with bar and stud with stop ring
                 '98560': [ '98560', None ],    # slope brick 75 2 x 2 x 3 not open studs
                 '99206': [ '99206', None ],    # plate 2 x 2 x 2/3 with two studs on side and two raised
                 '99249': [ '99249', None ],    # mini bouq. stem with 3.2 shaft
                 '99301': [ '99301', None ],    # slope brick 33 3 x 3 double concave *wrong texture*
}
