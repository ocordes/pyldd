"""

pyldd/bricks_data.py

Author: Oliver Cordes

History:
 2018-09-30: seperate bricks_data from bricks.py


"""




known_bricks = { 2341:  [ '2341', None ],     # brick 45 3 x 1 inverted double
                 2356:  [ '2356', None ],     # brick 4 x 6
                 2357:  [ '2357', None ],     # brick 2 x 2 corner
                 2412:  [ '2412', None ],     # tile 1 x 2 grille without groove
                 2420:  [ '2420', None ],     # plate 2 x 2 corner
                 2431:  [ '2431', None ],     # flat tile 1 x 4
                 2454:  [ '2454', None ],     # brick 1 x 2 x 5
                 2462:  [ '2462', None ],     # brick 3 x 3 facet
                 2577:  [ '2577', None ],     # brick 4 x 4 with round corner
                 2877:  [ '2877', None ],     # brick 1 x 2 with grille
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
                 3023:  [ '3023', None ],     # plate 1 x 2
                 3024:  [ '3024', None ],     # plate 1 x 1
                 3028:  [ '3028', None ],     # plate 6 x 12
                 3029:  [ '3029', None ],     # plate 4 x 12
                 3035:  [ '3035', None ],     # plate 4 x 8
                 3036:  [ '3036', None ],     # plate 6 x 8
                 3039:  [ '3039', None ],     # slope brick 45 2 x 2
                 3040:  [ '3040', None ],     # roof tile 1 x 2 / 45°
                 3044:  [ '3044', None ],     # slope brick 45 2 x 1 double
                 3045:  [ '3045', None ],     # slope brick 45 2 x 2 double convex
                 3046:  [ '3046', None ],     # slope brick 45 2 x 2 double concave
                 3048:  [ '3048', None ],     # slope brick 45 1 x 2 triple
                 3063:  [ '3063', None ],     # brick 2 x 2 corner round
                 3062:  [ '3062', None ],     # brick 1 x 1 round open stud
                 3069:  [ '3069', None ],     # tile 1 x 2 with groove
                 3070:  [ '3070', None ],     # flat tile 1 x 1
                 3185:  [ '3185', None ],     # fence 1 x 4 x 2
                 3245:  [ '3245', None ],     # brick 1 x 2 x 2
                 3300:  [ '3300', None ],     # slope brick 33 2 x 2 double
                 3460:  [ '3460', None ],     # plate 1 x 8
                 3470:  [ '3470', None ],     # plant tree oval 4 x 4 x 6
                 3471:  [ '3471', None ],     # plant tree pyramidal 4 x 4 x 6.667 type 1
                 3622:  [ '3622', None ],     # brick 1 x 3
                 3623:  [ '3623', None ],     # plate 1 x 3
                 3660:  [ '3660', None ],     # slope brick 45 2 x 2 inverted
                 3665:  [ '3665', None ],     # slope brick 45 2 x 1 inverted
                 3666:  [ '3666', None ],     # plate 1 x 6
                 3710:  [ '3710', None ],     # plate 1 x 4
                 3754:  [ '3754', None ],     # brick 1 x 6 x 5
                 3811:  [ '3811', None ],     # base 32 x 32 plate
                 3832:  [ '3832', None ],     # plate 2 x 10
                 3900:  [ '3900', None ],     # minifig signal holder (stop sign)
                 3940:  [ '3940', None ],     # space stand 2 x 2 x 2
                 3941:  [ '3941', None ],     # brick 2 x 2 round
                 3942:  [ '3942', None ],     # cone 2 x 2 x 2 open stud
                 4079:  [ '4079', None ],     # town seat 2 x 2
                 4083:  [ '4083', None ],     # bar 1 x 4 x 2
                 4162:  [ '4162', None ],     # flat tile 1 x 8
                 4201:  [ '4201', None ],     # brick 8 x 8
                 4202:  [ '4202', None ],     # brick 4 x 12
                 4204:  [ '4204', None ],     # brick 8 x 16
                 4282:  [ '4282', None ],     # plate 2 x 16
                 4286:  [ '4286', None ],     # slope brick 33 3 x 1
                 4287:  [ '4287', None ],     # slope brick 33 3 x 1 inverted
                 4477:  [ '4477', None ],     # plate 1 x 10
                 4589:  [ '4589', None ],     # nose cone small 1 x 1
                 4740:  [ '4740', None ],     # satellite dish 2 x 2
                 6098:  [ '3867', None ],     # base 16 x 16 plate
                 6141:  [ '6141', None ],     # plate 1 x 1 round
                 6143:  [ '3941', None ],     # brick 2 x 2 round
                 6212:  [ '6212', None ],     # brick 4 x 10
                 6213:  [ '6213', None ],     # brick 2 x 6 x 3
                 6215:  [ '6215', None ],     # brick 2 x 3 with curved top
                 6222:  [ '6222', None ],     # brick 4 x 4 round with holes
                 6564:  [ '6564', None ],     # wedge 3 x 2 right
                 6565:  [ '6565', None ],     # wedge 3 x 2 left
                 6636:  [ '6636', None ],     # flat tile 1 x 6
                 14719: [ '14719', None ],    # flat tile 2 x 2 corner
                 15571: [ '3048', None ],     # slope brick 45 1 x 2 triple
                 30055: [ '30055', None ],    # fence 1 x 4 x 2 spindled
                 30072: [ '30072', None ],    # brick 12 x 24
                 30136: [ '30136', None ],    # log brick 1 x 2
                 30137: [ '30137', None ],    # log brick 1 x 4
                 30144: [ '30144', None ],    # brick 2 x 4 x 3
                 30145: [ '30145', None ],    # brick 2 x 2 x 3
                 30179: [ '30179', None ],    # door 1 x 4 x 6 framte type 1
                 30361: [ '30361', None ],    # cylinder 2 x 2 x 2 robot body
                 30367: [ '30367', None ],    # cylinder 2 x 2 with dome top with blocked stud, R2-D2
                 30505: [ '30505', None ],    # brick 3 x 3 without corner
                 41539: [ '41539', None ],    # plate 8 x 8
                 41767: [ '41767', None ],    # wedge 4 x 2 right
                 41768: [ '41768', None ],    # wedge 4 x 2 left
                 43802: [ '4201', None ],     # brick 8 x 8
                 44041: [ '4204', None ],     # brick 8 x 16
                 44042: [ '2356', None ],     # brick 4 x 6
                 44237: [ '44237', None ],    # brick 2 x 6
                 44336: [ '44336', None ],    # baseplate 32 x 32 road 6-stud straight
                 48092: [ '48092', None ],    # brick 4 x 4 corner round
                 50746: [ '50746', None ],    # slope tile 30 1 x 1 x 2/3
                 60033: [ '4202', None ],     # brick 4 x 12
                 60481: [ '60481', None ],    # slope brick 65 2 x 1 x 2
                 60592: [ '60592', None ],    # window  1 x 2 x 2 without sill
                 60594: [ '60594', None ],    # window 1 x 4 x 3 without shutter tabs
                 60601: [ '60601', None ],    # glass for window 1 x 2 x 2 without sill
                 60603: [ '60603', None ],    # glass for window 1 x 4 x 3 opening
                 60608: [ '60608', None ],    # window 1 x 2 x 3 pane with thick corner tabs
                 60616: [ '60616', None ],    # door 1 x 4 x 6 smooth with square handle plinth
                 60623: [ '60623', None ],    # door 1 x 4 x 6 with 4 panes and stud handle
                 85080: [ '3063', None ],     # brick 2 x 2 corner round ?? LEGO has a different description but looks similar
                 85984: [ '85984', None ],    # Slope Tile 30 2 x 1 x 2/3
                 87087: [ '87087', None ],    # brick 1 x 1 with stud on 1 side
                 87620: [ '87620', None ],    # 2 x 2 facet
                 93273: [ '93273', None ],    # plate with bow 1 x 4 x 2/3
                 92946: [ '92946', None ],    # roof tile 1 x 2 45° W 1/3 Plate
                 98283: [ '98283', None ]     # brick 1 x 2 with embossed bricks
}
