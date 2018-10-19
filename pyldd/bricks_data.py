"""

pyldd/bricks_data.py

Author: Oliver Cordes

History:
 2018-09-30: seperate bricks_data from bricks.py


"""




known_bricks = { 2341:  [ '2341', None ],     # brick 45 3 x 1 inverted double
                 2356:  [ '2356', None ],     # brick 4 x 6
                 2357:  [ '2357', None ],     # brick 2 x 2 corner
                 2376:  [ '2376', None ],     # tile 2 x 2 round with lifting ring
                 2412:  [ '2412', None ],     # tile 1 x 2 grille without groove
                 2420:  [ '2420', None ],     # plate 2 x 2 corner
                 2431:  [ '2431', None ],     # flat tile 1 x 4
                 2445:  [ '2445', None ],     # plate 2 x 12
                 2449:  [ '2449', None ],     # slope brick 75 2 x 1 x 3 inverted
                 2450:  [ '2450', None ],     # plate 3 x 3 without corner
                 2454:  [ '2454', None ],     # brick 1 x 2 x 5
                 2462:  [ '2462', None ],     # brick 3 x 3 facet
                 2577:  [ '2577', None ],     # brick 4 x 4 with round corner
                 2639:  [ '2639', None ],     # plate 4 x 4 corner
                 2654:  [ '2654', None ],     # boot stud 2 x 2
                 2877:  [ '2877', None ],     # brick 1 x 2 with grille
                 2921:  [ '2921', None ],     # brick 1 x 1 with handle
                 3001:  [ '3001', None ],     # brick 2 x 4
                 3002:  [ '3002', None ],     # brick 2 x 3
                 3003:  [ '3003', None ],     # brick 2 x 2
                 3004:  [ '3004', None ],     # brick 1 x 2
                 3005:  [ '3005', None ],     # brick 1 x 1
                 3006:  [ '3006', None ],     # brick 2 x 10
                 3007:  [ '3007', None ],     # brick 2 x 8
                 3008:  [ '3008', None ],     # brick 1 x 8
                 3009:  [ '3009', None ],     # brick 1 x 6
                 3010:  [ '3010', None ],     # brick 1 x 4
                 3020:  [ '3020', None ],     # plate 2 x 4
                 3021:  [ '3021', None ],     # plate 2 x 3
                 3022:  [ '3022', None ],     # plate 2 x 2
                 3023:  [ '3023', None ],     # plate 1 x 2
                 3024:  [ '3024', None ],     # plate 1 x 1
                 3027:  [ '3027', None ],     # plate 6 x 16
                 3028:  [ '3028', None ],     # plate 6 x 12
                 3029:  [ '3029', None ],     # plate 4 x 12
                 3030:  [ '3030', None ],     # plate 4 x 10
                 3031:  [ '3031', None ],     # plate 4 x 4
                 3032:  [ '3032', None ],     # plate 4 x 6
                 3033:  [ '3033', None ],     # plate 6 x 10
                 3034:  [ '3034', None ],     # plate 2 x 8
                 3035:  [ '3035', None ],     # plate 4 x 8
                 3036:  [ '3036', None ],     # plate 6 x 8
                 3037:  [ '3037', None ],     # slope brick 45 2 x 4
                 3038:  [ '3038', None ],     # slope brick 45 2 x 3
                 3039:  [ '3039', None ],     # slope brick 45 2 x 2
                 3040:  [ '3040', None ],     # roof tile 1 x 2 / 45°
                 3041:  [ '3041', None ],     # slope brick 45 2 x 4 double
                 3044:  [ '3044', None ],     # slope brick 45 2 x 1 double
                 3045:  [ '3045', None ],     # slope brick 45 2 x 2 double convex
                 3046:  [ '3046', None ],     # slope brick 45 2 x 2 double concave
                 3048:  [ '3048', None ],     # slope brick 45 1 x 2 triple
                 3049:  [ '3049', None ],     # slope brick 45 1 x 2 double / inverted with center stud
                 3063:  [ '3063', None ],     # brick 2 x 2 corner round
                 3062:  [ '3062', None ],     # brick 1 x 1 round open stud
                 3068:  [ '3068', None ],     # tile 2 x 2 with groove
                 3069:  [ '3069', None ],     # tile 1 x 2 with groove
                 3070:  [ '3070', None ],     # flat tile 1 x 1
                 3185:  [ '3185', None ],     # fence 1 x 4 x 2
                 3245:  [ '3245', None ],     # brick 1 x 2 x 2
                 3297:  [ '3297', None ],     # slope brick 33 3 x 4
                 3298:  [ '3298', None ],     # slope brick 33 3 x 2
                 3300:  [ '3300', None ],     # slope brick 33 2 x 2 double
                 3307:  [ '3307', None ],     # arch 1 x 6 x 2
                 3456:  [ '3456', None ],     # plate 6 x 14
                 3460:  [ '3460', None ],     # plate 1 x 8
                 3470:  [ '3470', None ],     # plant tree oval 4 x 4 x 6
                 3471:  [ '3471', None ],     # plant tree pyramidal 4 x 4 x 6.667 type 1
                 3622:  [ '3622', None ],     # brick 1 x 3
                 3623:  [ '3623', None ],     # plate 1 x 3
                 3660:  [ '3660', None ],     # slope brick 45 2 x 2 inverted
                 3665:  [ '3665', None ],     # slope brick 45 2 x 1 inverted
                 3666:  [ '3666', None ],     # plate 1 x 6
                 3676:  [ '3676', None ],     # slope brick 45 2x 2 inverted double convex
                 3678:  [ '3678', None ],     # slope brick 65 2 x 2 x 2
                 3684:  [ '3684', None ],     # slope brick 75 2 x 2 x 3
                 3685:  [ '3685', None ],     # slope brick 75 2 x 2 x 3 double convex
                 3688:  [ '3688', None ],     # slope brick 75 2 x 2 x 2 quad. convex
                 3710:  [ '3710', None ],     # plate 1 x 4
                 3747:  [ '3747', None ],     # slope brick 33 3 x 2 inverted
                 3754:  [ '3754', None ],     # brick 1 x 6 x 5
                 3794:  [ '3794', None ],     # plate 1 x 2 with stud
                 3795:  [ '3795', None ],     # plate 2 x 6
                 3811:  [ '3811', None ],     # base 32 x 32 plate
                 3828:  [ '3828', None ],     # car steering wheel
                 3829:  [ '3829', None ],     # car steering wheel stand
                 3832:  [ '3832', None ],     # plate 2 x 10
                 3900:  [ '3900', None ],     # minifig signal holder (stop sign)
                 3940:  [ '3940', None ],     # space stand 2 x 2 x 2
                 3941:  [ '3941', None ],     # brick 2 x 2 round
                 3942:  [ '3942', None ],     # cone 2 x 2 x 2 open stud
                 4032:  [ '4032', None ],     # plate 2 x 2 round
                 4070:  [ '4070', None ],     # brick 1 x 1 x 1 with vertical stud (headlight brick)
                 4079:  [ '4079', None ],     # town seat 2 x 2
                 4083:  [ '4083', None ],     # bar 1 x 4 x 2
                 4150:  [ '4150', None ],     # tile 2 x 2 round
                 4162:  [ '4162', None ],     # flat tile 1 x 8
                 4175:  [ '4175', None ],     # plate 1 x 2 with ladder
                 4201:  [ '4201', None ],     # brick 8 x 8
                 4202:  [ '4202', None ],     # brick 4 x 12
                 4204:  [ '4204', None ],     # brick 8 x 16
                 4209:  [ '4209', None ],     # hose reel 2 x 4 x 2 holder
                 4216:  [ '4216', None ],     # brick 1 x 2 with groove
                 4282:  [ '4282', None ],     # plate 2 x 16
                 4286:  [ '4286', None ],     # slope brick 33 3 x 1
                 4287:  [ '4287', None ],     # slope brick 33 3 x 1 inverted
                 4345:  [ '4345', None ],     # mail box 2 x 2 x 2 open studs
                 4346:  [ '4346', None ],     # mail box 2 x 2 x 2 door
                 4445:  [ '4445', None ],     # slope brick 45 2 x 8
                 4460:  [ '4460', None ],     # slope brick 75 2 x 1 x 3
                 4477:  [ '4477', None ],     # plate 1 x 10
                 4488:  [ '4488', None ],     # plate 2 x 2 with wheel holder
                 4490:  [ '4490', None ],     # arch 1 x 3
                 4509:  [ '4509', None ],     # train roof 33 6 x 6 double
                 4515:  [ '4515', None ],     # slope brick 10 6 x 8
                 4532:  [ '4532', None ],     # cupboard 2 x 3 x 2
                 4533:  [ '4533', None ],     # cupboard 2 x 3 x 2 door
                 4536:  [ '4536', None ],     # cupboard 2 x 3 x 2 drawer
                 4589:  [ '4589', None ],     # nose cone small 1 x 1
                 4733:  [ '4733', None ],     # brick 1 x 1 with studs on sides
                 4740:  [ '4740', None ],     # satellite dish 2 x 2
                 4844:  [ '4844', None ],     # boat mast base 4 x 4 x 9 with top notches
                 4854:  [ '4854', None ],     # slope brick 45 4 x 4 inverted double
                 4861:  [ '4861', None ],     # slope brick 45 3 x 4 double / 33 slope
                 4871:  [ '4871', None ],     # slope brick 45 4 x 2 inverted double
                 6014:  [ '6014' ,None ],     # wheel wide
                 6015:  [ '6015', None ],     # tyre wide
                 6066:  [ '6066', None ],     # castle turrent top 4 x 8 x 2 1/3
                 6091:  [ '6091', None ],     # brick 2 x 1 x 1 & 1/3 with curved top
                 6098:  [ '3867', None ],     # base 16 x 16 plate
                 6141:  [ '6141', None ],     # plate 1 x 1 round
                 6143:  [ '3941', None ],     # brick 2 x 2 round
                 6178:  [ '6178', None ],     # plate 6 x 12 with studs on edges
                 6179:  [ '6179', None ],     # plate 4 x 4 with studs on edges
                 6180:  [ '6180', None ],     # plate 4 x 6 with studs on edges
                 6205:  [ '6205', None ],     # plate 6 x 16 with studs on edges
                 6212:  [ '6212', None ],     # brick 4 x 10
                 6213:  [ '6213', None ],     # brick 2 x 6 x 3
                 6215:  [ '6215', None ],     # brick 2 x 3 with curved top
                 6222:  [ '6222', None ],     # brick 4 x 4 round with holes
                 6564:  [ '6564', None ],     # wedge 3 x 2 right
                 6565:  [ '6565', None ],     # wedge 3 x 2 left
                 6576:  [ '6576', None ],     # plate 4 x 8 with studs in center
                 6636:  [ '6636', None ],     # flat tile 1 x 6
                 10314: [ '10314', None ],    # brick 1 x 4 x 1.333 with curved top without understuds
                 11477: [ '11477', None ],    # slope brick curved 2 x 1
                 14719: [ '14719', None ],    # flat tile 2 x 2 corner
                 14769: [ '4150', None ],     # tile 2 x 2 round
                 15068: [ '15068', None ],    # slope brick curved 2 x 2 x 2/3
                 15332: [ '15332', None ],    # fence 1 x 4 x 2 with 4 knobs
                 15397: [ '15397', None ],    # plate 3 x 3 cross
                 15571: [ '3048', None ],     # slope brick 45 1 x 2 triple
                 15573: [ '3794', None ],     # plate 1 x 2 with stud
                 15647: [ '30390', None ],    # slope brick 45 2 x 4 inverted double with pins
                 30055: [ '30055', None ],    # fence 1 x 4 x 2 spindled
                 30072: [ '30072', None ],    # brick 12 x 24
                 30136: [ '30136', None ],    # log brick 1 x 2
                 30137: [ '30137', None ],    # log brick 1 x 4
                 30144: [ '30144', None ],    # brick 2 x 4 x 3
                 30145: [ '30145', None ],    # brick 2 x 2 x 3
                 30179: [ '30179', None ],    # door 1 x 4 x 6 framte type 1
                 30181: [ '30181', None ],    # brick 4 x 10 with cut corners
                 30183: [ '30183', None ],    # slope brick 45 6 x 4 inverted double with hole
                 30241: [ '30241', None ],    # brick 1 x 1 with clip vertical
                 30357: [ '30357', None ],    # plate 3 x 3 corner round
                 30360: [ '30360', None ],    # cylinder 3 x 6 x 2 2/3 horizontal
                 30361: [ '30361', None ],    # cylinder 2 x 2 x 2 robot body
                 30363: [ '30363', None ],    # slope brick 18 4 x 2
                 30364: [ '30364', None ],    # brick 1 x 2 locking with 1 finger on end
                 30365: [ '30365', None ],    # brick 1 x 2 locking with 2 fingers on end
                 30367: [ '30367', None ],    # cylinder 2 x 2 with dome top with blocked stud, R2-D2
                 30373: [ '30373', None ],    # slope brick 65 6 x 6 x 2 inverted quadruple
                 30390: [ '30390', None ],    # slope brick 45 4 x 2 double inverted with pins
                 30499: [ '3684', None ],     # slope brick 75 2 x 2 x 3
                 30505: [ '30505', None ],    # brick 3 x 3 without corner
                 30540: [ '30540', None ],    # hinge brick 1 x 2 locking with 2 fingers horizontal on end
                 41539: [ '41539', None ],    # plate 8 x 8
                 41767: [ '41767', None ],    # wedge 4 x 2 right
                 41768: [ '41768', None ],    # wedge 4 x 2 left
                 41769: [ '41769', None ],    # wedge plate 4 x 2 right
                 41770: [ '41770', None ],    # wedge plate 4 x 2 left
                 43722: [ '43722', None ],    # wedge plate 3 x 2 right
                 43723: [ '43723', None ],    # wedge plate 3 x 2 left
                 43802: [ '4201', None ],     # brick 8 x 8
                 44041: [ '4204', None ],     # brick 8 x 16
                 44042: [ '2356', None ],     # brick 4 x 6
                 44237: [ '44237', None ],    # brick 2 x 6
                 44336: [ '44336', None ],    # baseplate 32 x 32 road 6-stud straight
                 45677: [ '45677', None ],    # wedge 4 x 4 x 2/3 curved
                 47905: [ '47905', None ],    # brick 1 x 1 with studs on the two opposite sides
                 47974: [ '47974', None ],    # brick 4 x 8 round half circle
                 48092: [ '48092', None ],    # brick 4 x 4 corner round
                 48183: [ '48183', None ],    # wedge plate 3 x 4 with stud notches
                 48288: [ '48288', None ],    # tile 8 x 16
                 50746: [ '50746', None ],    # slope tile 30 1 x 1 x 2/3
                 50950: [ '50950', None ],    # slope brick curved 3 x 1
                 51739: [ '51739', None ],    # wing 2 x 4
                 52031: [ '52031', None ],    # wedge 4 x 6 x 2/3 curved
                 52501: [ '52501', None ],    # slope brick 45 6 x 1 inverted double
                 58846: [ '58846', None ],    # brick 10 x 10 corner round with tapered edge and cutout
                 60033: [ '4202', None ],     # brick 4 x 12
                 60219: [ '60219', None ],    # slope brick 45 6 x 4 inverted double with open center and 3 holes
                 60475: [ '30241', None ],    # brick 1 x 1 with clip vertical
                 60477: [ '60477', None ],    # slope brick 18 4 x 1
                 60479: [ '60479', None ],    # plate 1 x 12
                 60481: [ '60481', None ],    # slope brick 65 2 x 1 x 2
                 60592: [ '60592', None ],    # window  1 x 2 x 2 without sill
                 60594: [ '60594', None ],    # window 1 x 4 x 3 without shutter tabs
                 60601: [ '60601', None ],    # glass for window 1 x 2 x 2 without sill
                 60603: [ '60603', None ],    # glass for window 1 x 4 x 3 opening
                 60608: [ '60608', None ],    # window 1 x 2 x 3 pane with thick corner tabs
                 60616: [ '60616', None ],    # door 1 x 4 x 6 smooth with square handle plinth
                 60623: [ '60623', None ],    # door 1 x 4 x 6 with 4 panes and stud handle
                 63864: [ '63864', None ],    # flat tile 1 x 3
                 64799: [ '64799', None ],    # frame plate 4 x 4
                 72454: [ '72454', None ],    # slope brick 45 4 x 4 inverted double with holes
                 74698: [ '2376', None ],     # tile 2 x 2 round with lifting ring
                 85080: [ '3063', None ],     # brick 2 x 2 corner round ?? LEGO has a different description but looks similar
                 85984: [ '85984', None ],    # Slope Tile 30 2 x 1 x 2/3
                 87087: [ '87087', None ],    # brick 1 x 1 with stud on 1 side
                 87079: [ '87079', None ],    # tile 2 x 4 with groove
                 87559: [ '87559', None ],    # brick round corner 6 x 6 x 2
                 87580: [ '87580', None ],    # plate 2 x 2 with stud
                 87620: [ '87620', None ],    # brick 2 x 2 facet
                 88646: [ '88646', None ],    # plate 3 x 4 with 4 knobs
                 90194: [ '48183', None ],    # wedge plate 3 x 4 with stud notches
                 90498: [ '48288', None ],    # tile 8 x 16
                 91049: [ '91049', None ],    # plate 1.5 x 1.5 x 2/3 round
                 91988: [ '91988', None ],    # plate 2 x 14
                 92410: [ '92410', None ],    # cupboard 2 x 3 x 2 open studs
                 92438: [ '92438', None ],    # plate 8 x 16
                 92593: [ '92593', None ],    # plate 1 x 4 with 2 knobs
                 92946: [ '92946', None ],    # roof tile 1 x 2 45° W 1/3 Plate
                 93273: [ '93273', None ],    # plate with bow 1 x 4 x 2/3
                 95188: [ '95188', None ],    # brick 6 x 6 corner round with slope 33
                 98283: [ '98283', None ]     # brick 1 x 2 with embossed bricks
}
