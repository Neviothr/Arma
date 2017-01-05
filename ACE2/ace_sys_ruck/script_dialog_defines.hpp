/* ace_sys_ruck (.pbo) (c) 2009 by tcp */
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUT_BUTTON  16 // Arma 2 - textured button

#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_List_N_Box       102 // Arma 2 - N columns list box


// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0c

#define ST_TYPE           0xF0
#define ST_SINGLE         0
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

#define FontM             "Zeppelin32"

// IDCS
#define GEAR_TITLE_IDC 1001
#define CA_FILTER_ICON_IDC 148
#define CA_FILTER_LEFT_ICON_IDC 1301
#define CA_FILTER_RIGHT_ICON_IDC 1302
#define CA_FILTER_ARROW_LEFT_IDC 150
#define CA_FILTER_ARROW_RIGHT_IDC 151
#define CA_FILTER_ICON1_IDC 149
#define UNIT_TITLE_IDC 101
//#define AVAILABLE_ITEMS_TEXT_IDC 1100
#define AVAILABLE_ITEMS_TEXT_IDC 156
#define CA_B_ADD_IDC 146
#define AVAILABLE_ITEMS_IDC 105
#define CA_B_REMOVE_IDC 147
#define CA_ITEMNAME_IDC 1101
#define CA_ITEM_PICTURE_IDC 1104
#define CA_CUSTOMDESCRIPTION_IDC 1106

#define CA_MONEY_IDC 1102
#define CA_MONEY_VALUE_IDC 1102

#define ACE_RUCK_ITEMS_IDC 90000
#define ACE_RUCK_B_ADD_IDC 90001
#define ACE_RUCK_CONTENTS_IDC 90002
#define ACE_RUCK_B_REMOVE_IDC 90003

#define ACE_ITEM_WEIGHT_NAME_IDC 90004
#define ACE_ITEM_WEIGHT_IDC 90005
#define ACE_ITEM_VOLUME_NAME_IDC 90006
#define ACE_ITEM_VOLUME_IDC 90007
#define ACE_TOTAL_WEIGHT_NAME_IDC 90008
#define ACE_TOTAL_WEIGHT_IDC 90009
#define ACE_TOTAL_VOLUME_NAME_IDC 90010
#define ACE_TOTAL_VOLUME_IDC 90011

#define ACE_GEAR_SLOT_WOB_IDC 90020

#define CA_GEAR_SLOT_PRIMARY_IDC 107
#define CA_GEAR_SLOT_SECONDARY_IDC 108
#define CA_GEAR_SLOT_ITEM1_IDC 109
#define CA_GEAR_SLOT_ITEM2_IDC 110
#define CA_GEAR_SLOT_ITEM3_IDC 111
#define CA_GEAR_SLOT_ITEM4_IDC 112
#define CA_GEAR_SLOT_ITEM5_IDC 113
#define CA_GEAR_SLOT_ITEM6_IDC 114
#define CA_GEAR_SLOT_ITEM7_IDC 115
#define CA_GEAR_SLOT_ITEM8_IDC 116
#define CA_GEAR_SLOT_ITEM9_IDC 117
#define CA_GEAR_SLOT_ITEM10_IDC 118
#define CA_GEAR_SLOT_ITEM11_IDC 119
#define CA_GEAR_SLOT_ITEM12_IDC 120
#define CA_GEAR_SLOT_HANDGUN_IDC 121
#define CA_GEAR_SLOT_HANDGUN_ITEM1_IDC 122
#define CA_GEAR_SLOT_HANDGUN_ITEM2_IDC 123
#define CA_GEAR_SLOT_HANDGUN_ITEM3_IDC 124
#define CA_GEAR_SLOT_HANDGUN_ITEM4_IDC 125
#define CA_GEAR_SLOT_HANDGUN_ITEM5_IDC 126
#define CA_GEAR_SLOT_HANDGUN_ITEM6_IDC 127
#define CA_GEAR_SLOT_HANDGUN_ITEM7_IDC 128
#define CA_GEAR_SLOT_HANDGUN_ITEM8_IDC 129
#define CA_GEAR_SLOT_SPECIAL1_IDC 130
#define CA_GEAR_SLOT_SPECIAL2_IDC 131
#define CA_GEAR_SLOT_INVENTORY1_IDC 134
#define CA_GEAR_SLOT_INVENTORY2_IDC 135
#define CA_GEAR_SLOT_INVENTORY3_IDC 136
#define CA_GEAR_SLOT_INVENTORY4_IDC 137
#define CA_GEAR_SLOT_INVENTORY5_IDC 138
#define CA_GEAR_SLOT_INVENTORY6_IDC 139
#define CA_GEAR_SLOT_INVENTORY7_IDC 140
#define CA_GEAR_SLOT_INVENTORY8_IDC 141
#define CA_GEAR_SLOT_INVENTORY9_IDC 142
#define CA_GEAR_SLOT_INVENTORY10_IDC 143
#define CA_GEAR_SLOT_INVENTORY11_IDC 144
#define CA_GEAR_SLOT_INVENTORY12_IDC 145
#define CA_GEAR_SLOT_INVENTORY13_IDC 1122

#define BUTTONFILTERS_IDC 148
#define BUTTONREARM_IDC 132
#define BUTTONCONTINUE_IDC 1
#define BUTTONCLOSE_IDC 2

#define ACE_BUTTON_WOB_IDC 90100
#define ACE_BUTTON_PACK_IDC 90101
#define ACE_BUTTON_UNPACK_IDC 90102
#define ACE_BUTTON_DRUCK_IDC 90103
#define ACE_IFAK_1P_IDC 90104
#define ACE_IFAK_2P_IDC 90105
#define ACE_IFAK_3P_IDC 90106
#define ACE_IFAK_1C_IDC 90107
#define ACE_IFAK_2C_IDC 90108
#define ACE_IFAK_3C_IDC 90109
#define ACE_UNIT_L_IDC 90110
#define ACE_UNIT_R_IDC 90111
#define ACE_UNIT_BL_IDC 90112
#define ACE_UNIT_BR_IDC 90113
#define ACE_IFAK_1B_IDC 90114
#define ACE_IFAK_2B_IDC 90115
#define ACE_IFAK_3B_IDC 90116
#define ACE_IFAK_1T_IDC 90117
#define ACE_IFAK_2T_IDC 90118
#define ACE_IFAK_3T_IDC 90119
#define ACE_RLOCK_PIC_IDC 90120
#define ACE_RLOCK_TXT_IDC 90121
#define ACE_RLOCK_BTN_IDC 90122
#define ACE_RLOCK_INUSE_IDC 90123
#define ACE_RLOCK_CNX_PIC_IDC 90124
#define ACE_RLOCK_CNX_BTN_IDC 90125
