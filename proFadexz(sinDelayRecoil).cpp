/*



    ???????????????   ????????????  ???????????????     ??????????????? ???????????????    ???????????????
    ??????     ??????  ???  ???   ??????    ???  ???  ???   ???   ??????  ???
    ???      ???   ???  ??????  ???     ????????????  ??????????????????  ???   ???
    ???      ???   ???  ???   ???     ?????????   ????????? ???   ???   ??????
    ??????????????????  ?????????   ??????????????????    ???     ???   ??????   ?????????


    v8.0.0 ??? July 2024

    By Fadexz



    Features:
    ?????? Anti-Recoil
    ??? compensates recoil while also able to use rumble/vibration to increase the amount on shots
    ?????? Slowdown Aim Assist Abuse
    ??? automatically moves your ads (in small circle) while you are not moving to allow for slowing down when moving
    ??? towards a target which will favour to their direction
    ?????? Reload Cancel
    ??? automatically cancel reload on press of 'ADS' and/or 'FIRE'
    ?????? Auto Reload
    ??? automatically reload after shooting
    ?????? Jump Shot
    ??? jump when pressing 'ADS' and/or 'FIRE'
    ?????? Rapid Fire
    ??? turbo/spam 'FIRE' for non-auto weapons automatically on hold
    ?????? Auto Focus
    ??? automatically focuses (hold breath) while ADS
    ?????? Auto Ping
    ??? ping when firing, on a specified time of no firing cooldown
    ?????? Snap On Aim Assist Abuse
    ??? for ZM/SP aka PvE modes, don't use on PvP modes
    ?????? Quick Scoper
    ??? instantly unscopes and removes shot recoil to make quick scoping feel nicer, requires a throwing knife
    ?????? Turbo Jump
    ??? spam on hold
    ?????? Turbo Melee
    ??? spam on hold
    ?????? Auto Sprint
    ??? has press, toggle, and hold options) + Boosted Auto Sprint Mode (exploit for Black Ops Cold War)
    ??? these also make the walk area larger by making the sprint area a little tighter than in-game Auto Sprint
    ??? requires auto sprint in-game disabled and preferably use hold mode to allow the script to stop the sprinting
    ?????? Slide Cancel
    ??? quickly cancels your slide midway and stands immediately
    ?????? Pickup Cancel
    ??? cancels out the animation of picking up a weapon to almost instantly start being able to use it
    ?????? Swap Cancel
    ??? cancels out the animation of swapping a weapon as soon as the weapon has been swapped, best when both weapons
    ??? have similar swap times
    ?????? Dropshot
    ??? automatically drops to prone when firing then immediately stands afterwards
    ?????? Crouch Shot
    ??? automatically crouches when firing
    ?????? Underbarrel Jitter
    ??? for MWII/DMZ - Abuses a bug which instantly resets shot cooldown and turns your main weapon's ammo into
    ??? grenades / launcher ammo - Fires at up to ~9 grenades/shots per second!
    ?????? "YY" Cancel
    ??? fun feature
    ??? cancel the swap animation constantly to jitter the animation for a visual effect, may cause delayed ads
    ?????? Hair Triggers
    ??? remove trigger deadzone or increase starting point of triggers
    ?????? Custom Deadzone
    ??? used to add a deadzone to the physical right stick
    ??? you would use this to allow for the script to input lower values to the game with a *very low in-game deadzone*
    ??? like for Aim Assist Abuse but still have your stick act the same
    ??? e.g with a in-game deadzone of 1% you can have your radius at 5% and custom deadzone at your usual 10% deadzone
    ?????? Humanise Inputs
    ??? randomise values and limit turbo features to keep closer to human limitations
    ?????? Display Config
    ??? configure what displays on the OLED Screen and how it does, such as screensaver options
    ?????? LED Config
    ??? customise how the Zen's LED displays
    ?????? Block Vibration/Haptics
    ??? stop vibration to the controller but allow rumble-based features to still work
    ?????? Inactivity Timeout
    ??? allows for you to turn off your controller (wireless only) or other stuff when inactive
    ?????? Fast Power Off
    ??? quickly power off your controller with a shorter hold of the XBOX/PS button than usual, for wireless connection only
    ?????? Adaptive Triggers Config
    ??? gives control over what the DualSense Adaptive Triggers do
    ?????? Crossover Mapping Fix
    ??? proper mapping for unmatching controllers and consoles
    ?????? Input Layout
    ??? map the script to your game button layout
    ?????? Input Interval
    ??? Adjust the speed at which the script updates scripted/automated inputs, higher consistent frame rates mean you can have things input in a shorter time
    ?????? All other features with combos (or automated input sequences) have the "Input Interval" and "Dynamic VM Timing" to
    ??? ensure you get faster combos with no added "input delay" (aka normally running at 100hz or 10ms intervals,
    ??? currently always ensures a 125hz/8ms or 250hz/4ms polling rate regardless of input interval used)


    ?????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
    ????????? Menu ???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
    ???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
    ???                                                                                               ???
    ???  Enter Menu              ???  Fully Hold 'ADS' & Press 'MENU' (default: LT/L2 & MENU/OPTIONS)   ?????????
    ???                                                                                               ??????
    ???  Enter Next Menu         ???  Press A/CROSS (on an enterable selection)                         ???
    ???                                                                                               ?????????
    ???  Exit Current Menu       ???  Press B/CIRCLE                                                    ???
    ???                                                                                               ??????
    ???  Close Menu              ???  Press 'MENU' (default: MENU/OPTIONS) (won't save to the memory)   ???
    ???                                                                                               ???
    ???  Close Menu (Save)       ???  Press X/SQUARE (values save to the memory)                        ???
    ???                                                                                               ??????
    ???  Change Selected Option  ???  Press LEFT (previous) or Press RIGHT (next)                       ?????????
    ???                                                                                               ???
    ???  Change Selected Value   ???  Press UP (increase) or Press DOWN (decrease)                      ??????
    ???                                                                                               ???
    ???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
    ????????? Quick Toggles (outside menu) ???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
    ???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
    ???                                                                                               ???
    ???  Disable Turbo features  ???  Hold 'UNUSED' (Default: DOWN) (active while holding)              ?????????
    ???                                                                                               ??????
    ???  * Check menu for others *                                                                    ???
    ???                                                                                               ??????
    ???????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????


    Congrats, you now know the basics to get started, have fun! ????


    ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???   ???


    In-Depth Notes:
    ?????? Pickup Cancel
    ??? With this feature on you may have issues with hold interacting on things, you should not use this feature in modes
    ??? that you need to hold to interact in or if you intend on using them while you play (e.g bomb defuser)
    ???
    ?????? Swap Cancel
    ??? This feature won't benefit weapons that are brought out faster than cancelling the animation would be
	??? For this feature, I recommend both weapons being around the same time to swap to as you will need to use a speed
	??? for the slowest one
    ???
    ?????? LED Brightness
    ??? I suggest you lower the brightness level of "Dual Shock 4 Light Bar Brightness" in the Device tab of Zen Studio so
    ??? you don't have to be blind by the Zen's LED (I use 25%), otherwise you can change it further through the menu just
    ??? for this script
    ???
    ?????? Defaults
    ??? The features selected below under this large comment are what will be enabled or disabled by default, you can
	??? change them there if you wish, otherwise you can change them later through the menu on the Zen's Screen which
	??? will be saved to the memory for later use
    ???
    ?????? > 60fps
    ??? Mainly if on PC and you understand this then be sure to adjust in the menu (under 'Hair Triggers') to whatever
	??? your max frametime is plus one (e.g (1000ms/100fps) = 10ms, rounded up to even), your frame time or frame rate
	??? should not drop past this number ever or 99% of the time, mainly intended to be changed for higher framerates
	??? for faster completion of automated input sequences, just keep in mind you should expect it to be a little lower
	??? than your average down to the worse performance for 1% of the time
    ??? Important: If you experience missed inputs from combos (automated inputs) you should increase this number until
	??? it stops missing them (like keeping it at 20ms)
    ???
    ?????? Cold War
    ??? Boosted Auto Sprint is ~3.5% faster than normal sprinting, however I haven't tested in normal gameplay if it still
    ??? has as much of a worthy benefit or if it can be better (might be more of an annoyance than useful)


    Donate:
    ??? Feel free to support me if you enjoy the script, i've put around a thousand hours into making this script to
    ??? the best of my ability all for free. For those that do, it helps motivate me to keep putting more time into
    ??? finishing and making more unique scripts in the future, plus it just makes my day ????
    ??? https://www.buymeacoffee.com/Fadexz (note: sent internationally)
	??? https://revolut.me/Fadexz
	??? https://paypal.me/Fadexz
																																																																																																																																																																																														*/																																		int __WARNINGS__ARE__INTENDED__do_not_sell_my_sht__developed_by_fadexz__
																																																																																																																																																																																																																																																																																																																																																																						=																																																																																								 CPU_USAGE																																																																																																																															+																																																																																																																															 1;																																																			/*
    Additonal Notes:
    ??? This script will eventually come to a "complete" state with time, so expect slow but constant updates ????
    ??? Please report any issues or suggestions to me, I rarely get any but it would help me improve the
    ??? script with things I couldn't think of!


    Contact me:
    ??? https://discord.com/users/291872132898619392 (fadexz)
    ??? https://forums.cronusmax.com/members/fadexz.356349


    Additional Credits:
    ??? DoNotAtMe ('Me.')  ???  "Slowdown" Aim Assist Abuse
    ??? Swizzy             ???  Bit-packed SPVARs
    ??? Taylordrift21      ???  Rumble-based Anti-Recoil


    To Do List (for me):
    ??? Dropshot - Stand on release of ADS option + no ADS option
    ??? Slot change option
    ??? Block all output in menu option
    ??? Ez Equipment Cancel??
    ??? Ballistic Curve
    ??? Vibration + LED menu only options FX Toggle
    ??? Ez Cook Frag - Cancel (Throw | Swap)
    ??? Akimbo Rapid Fire
    ??? Burst Fire (modify rapid fire??)
    ??? Strafe AA
    ??? Mouse & Keyboard Menu Support
    ??? Anti-AFK Kick
    ??? Mod record time mode ("special" menu??)
    ??? Auto Sprint for Sprint Cancels Reload
    ??? Diamond and Star Shape "Slowdown Aim Assist Abuse"
    ??? Loadouts/Profiles + Weapon Pickup Mode
    ??? Weapon Detection (Adaptive Triggers)
    ??? Stance Detection (help from Adaptive Triggers)
    ??? Improved Anti-Recoil
    ??? - Once these items are done I finally move onto other scripts :D -
    ???
    ??? Issues:
    ??? Fix for slot change input type block for Crossover Mapping Fix
    ??? Fix slide cancel to allow dolpine dive (in MWIII)
    ??? Fix for 10ms polling - Actual Controller Polling Rate Detection
    ??? Fix brightness on battery status breathing level change
    ??? Rapid Fire - ADS & Lethal option does not count as firing for other features (similar issue with Auto Aim and maybe others)
    ??? Swap out PS5 MUTE input broken function by using `get_ival()` only to check for press
    ??? Max CPU Usage when loading the menus
    ??? Bytecode size needs to be optimised (mostly for image frames)
    ??? Quick Toggle Inputs are not mapped to be corrected for different layouts



*/



// -- Declear constants

define

// -- Note: Please ignore
Signed_2_Bit_Min  = -1 << 1,
Signed_3_Bit_Min  = -1 << 2,
Signed_4_Bit_Min  = -1 << 3,
Signed_5_Bit_Min  = -1 << 4,
Signed_6_Bit_Min  = -1 << 5,
Signed_7_Bit_Min  = -1 << 6,
Signed_8_Bit_Min  = -1 << 7,
Signed_9_Bit_Min  = -1 << 8,
Signed_10_Bit_Min = -1 << 9,
Signed_11_Bit_Min = -1 << 10,
Signed_12_Bit_Min = -1 << 11,
Signed_13_Bit_Min = -1 << 12,
Signed_14_Bit_Min = -1 << 13,
Signed_15_Bit_Min = -1 << 14,
Signed_16_Bit_Min = -1 << 15,
Signed_17_Bit_Min = -1 << 16,
Signed_18_Bit_Min = -1 << 17,
Signed_19_Bit_Min = -1 << 18,
Signed_20_Bit_Min = -1 << 19,
Signed_21_Bit_Min = -1 << 20,
Signed_22_Bit_Min = -1 << 21,
Signed_23_Bit_Min = -1 << 22,
Signed_24_Bit_Min = -1 << 23,
Signed_25_Bit_Min = -1 << 24,
Signed_26_Bit_Min = -1 << 25,
Signed_27_Bit_Min = -1 << 26,
Signed_28_Bit_Min = -1 << 27,
Signed_29_Bit_Min = -1 << 28,
Signed_30_Bit_Min = -1 << 29,
Signed_31_Bit_Min = -1 << 30,
Signed_32_Bit_Min = -1 << 31,
Signed_2_Bit_Max  = (1 << 1) - 1,
Signed_3_Bit_Max  = (1 << 2) - 1,
Signed_4_Bit_Max  = (1 << 3) - 1,
Signed_5_Bit_Max  = (1 << 4) - 1,
Signed_6_Bit_Max  = (1 << 5) - 1,
Signed_7_Bit_Max  = (1 << 6) - 1,
Signed_8_Bit_Max  = (1 << 7) - 1,
Signed_9_Bit_Max  = (1 << 8) - 1,
Signed_10_Bit_Max = (1 << 9) - 1,
Signed_11_Bit_Max = (1 << 10) - 1,
Signed_12_Bit_Max = (1 << 11) - 1,
Signed_13_Bit_Max = (1 << 12) - 1,
Signed_14_Bit_Max = (1 << 13) - 1,
Signed_15_Bit_Max = (1 << 14) - 1,
Signed_16_Bit_Max = (1 << 15) - 1,
Signed_17_Bit_Max = (1 << 16) - 1,
Signed_18_Bit_Max = (1 << 17) - 1,
Signed_19_Bit_Max = (1 << 18) - 1,
Signed_20_Bit_Max = (1 << 19) - 1,
Signed_21_Bit_Max = (1 << 20) - 1,
Signed_22_Bit_Max = (1 << 21) - 1,
Signed_23_Bit_Max = (1 << 22) - 1,
Signed_24_Bit_Max = (1 << 23) - 1,
Signed_25_Bit_Max = (1 << 24) - 1,
Signed_26_Bit_Max = (1 << 25) - 1,
Signed_27_Bit_Max = (1 << 26) - 1,
Signed_28_Bit_Max = (1 << 27) - 1,
Signed_29_Bit_Max = (1 << 28) - 1,
Signed_30_Bit_Max = (1 << 29) - 1,
Signed_31_Bit_Max = (1 << 30) - 1,
Signed_32_Bit_Max = (1 << 31) - 1,
// -- Button toggle index constants
IL_LB = 0,
IL_RB = 1,
IL_LT = 2,
IL_RT = 3,
IL_LS = 4,
IL_RS = 5,
IL_UP = 6,
IL_DOWN = 7,
IL_LEFT = 8,
IL_RIGHT = 9,
IL_A = 10,
IL_B = 11,
IL_X = 12,
IL_Y = 13,
// -- Inactivity Timeout Inputs index constants
NSI_NONE = 0,
NSI_XBOX = 1,
NSI_VIEW = 2,
NSI_MENU = 3,
NSI_LB = 4,
NSI_RB = 5,
NSI_LT = 6,
NSI_RT = 7,
NSI_LS = 8,
NSI_RS = 9,
NSI_UP = 10,
NSI_DOWN = 11,
NSI_LEFT = 12,
NSI_RIGHT = 13,
NSI_A = 14,
NSI_B = 15,
NSI_X = 16,
NSI_Y = 17,
NSI_SYNC = 18,
NSI_PL1 = 19,
NSI_PL2 = 20,
NSI_PR1 = 21,
NSI_PR2 = 22,

// -- You can change any of the default values below IF you wish the script to start with these values before saving

// Anti-Recoil
AR_Vert_Value = 28,
AR_Hori_Value = 0,
AR_Deadzone = 13,
AR_Rumble_Influence = FALSE,
AR_Reduced_Rumble = TRUE,
AR_Boost_Time = 160,
AR_Quick_Toggle = FALSE,
AR_Hold_Quick_Toggle = NSI_LT,
AR_Press_Quick_Toggle = NSI_XBOX,
// Slowdown Aim Assist Abuse
// -- [ 0 = ADS & Fire | 1 = ADS or Fire | 2 = ADS | 3 = Fire | 4 = None ]
SAAA_Activation_Type = 1,
// -- Circle Radius ('strength')
SAAA_Radius = 22,
// -- Circle Speed (amount of angles/values skipped through each "vm interval")
SAAA_Rotate_By_Angles = 20,
SAAA_Release_Point = 13,
SAAA_Quick_Toggle = FALSE,
SAAA_Hold_Quick_Toggle = NSI_LT,
SAAA_Press_Quick_Toggle = NSI_VIEW,
// Reload Cancel
// -- [ 0 = On Fire | 1 = On ADS or Fire ]
RC_Release_Activation_Type = 0,
// -- Feel free to set this to ~6000ms for even LMGs, but can't guarantee it won't cause issues with shorter reloads (at most, should be a quick YY before ADS or shooting)
RC_Max_Reload_Time_For_Cancel = 3500,
RC_Quick_Toggle = FALSE,
RC_Hold_Quick_Toggle = NSI_LT,
RC_Press_Quick_Toggle = NSI_MENU,
// Auto Reload
// -- [ 0 = On Release Fire | 1 = On Release Fire or ADS ]
AR2_Release_Activation_Type = 1,
AR2_Shoot_Time = 0,
AR2_Quick_Toggle = FALSE,
AR2_Hold_Quick_Toggle = NSI_LT,
AR2_Press_Quick_Toggle = NSI_LB,
// Jump Shot
// -- [ 0 = On Press (ADS) | 1 = On Press Fire (No ADS) | 2 = On Hold (ADS) | 3 = Panic (ADS & Fire) ]
JS_Activation_Type = 3,
// -- Max time between ADS and FIRE presses to activate
JS_Press_Variance_Time = 24,
JS_Quick_Toggle = FALSE,
JS_Hold_Quick_Toggle = NSI_LT,
JS_Press_Quick_Toggle = NSI_LS,
// Rapid Fire
// -- [ 0 = Tap | 1 = Hold (prime shot) ]
RF_Shot_Type = 1,
// -- [ 0 = On Fire | 1 = On ADS & Fire ]
RF_Activation_Type = 0,
RF_Shot_Wait_Time = 1,
RF_Single_Shot_Time = 100,
RF_Quick_Toggle = TRUE,
RF_Hold_Quick_Toggle = NSI_LT,
RF_Press_Quick_Toggle = NSI_RIGHT,
// Auto Focus
// -- [ 0 = Hold | 1 = Quick Gasp ]
AF_Type = 1,
AF_Quick_Toggle = FALSE,
AF_Hold_Quick_Toggle = NSI_LT,
AF_Press_Quick_Toggle = NSI_RS,
// Auto Ping
// -- Minimum time (seconds) of not firing for Auto Ping to activate
AP_Min_Release_Activation_Time = 18,
// -- [ 0 = Fully ADS | 1 = Holding ADS | 2 = Ignore ADS ]
AP_Activation_Type = 1,
AP_Unping_On_Release = FALSE,
AP_Quick_Toggle = FALSE,
AP_Hold_Quick_Toggle = NSI_LT,
AP_Press_Quick_Toggle = NSI_DOWN,
// Aim Assist Snap On Abuse
AASO_ADS_Hold_Time = 1490,
AASO_Quick_Toggle = FALSE,
AASO_Hold_Quick_Toggle = NSI_LT,
AASO_Press_Quick_Toggle = NSI_LEFT,
// Quick Scoper
// -- [ 0 = Fire | 1 = ADS & Lethal ]
QS_Activation_Type = 0,
QS_Quick_Toggle = FALSE,
QS_Hold_Quick_Toggle = NSI_LT,
QS_Press_Quick_Toggle = NSI_SYNC,
// Turbo Jump
TJ_Jump_Wait_Time = 1,
TJ_Quick_Toggle = FALSE,
TJ_Hold_Quick_Toggle = NSI_LB,
TJ_Press_Quick_Toggle = NSI_XBOX,
// Turbo Melee
TM_Quick_Toggle = FALSE,
TM_Hold_Quick_Toggle = NSI_LB,
TM_Press_Quick_Toggle = NSI_VIEW,
// Auto Sprint
// -- [ 0 = Turbo (Press Mode) | 1 = Hold (Hold Mode) | 2 = Press (Toggle/Press Mode) | 3 = BOCW Boosted (Press/Toggle Mode) ]
AS_Type = 0,
// -- Time to disable Auto Sprint after pressing 'STANCE_SLIDE_DIVE' button
AS_Crouch_Prone_Delay_Time = 1,
AS_Quick_Toggle = FALSE,
AS_Hold_Quick_Toggle = NSI_LB,
AS_Press_Quick_Toggle = NSI_MENU,
// Slide Cancel
// -- [ 0 = Legacy | 1 = Stand | 2 = 'Jump' (MWIII) | 3 = MWII ]
SC_Type = 2,
SC_Cancel_Delay_Time = 350,
SC_Quick_Toggle = FALSE,
SC_Hold_Quick_Toggle = NSI_LB,
SC_Press_Quick_Toggle = NSI_RB,
// Swap Cancel
SC2_Cancel_Delay_Time = 650,
SC2_Quick_Toggle = FALSE,
SC2_Hold_Quick_Toggle = NSI_LB,
SC2_Press_Quick_Toggle = NSI_LS,
// Pickup Cancel
PC_Quick_Toggle = FALSE,
PC_Hold_Quick_Toggle = NSI_LB,
PC_Press_Quick_Toggle = NSI_RS,
// Dropshot
// -- [ 0 = On Fire | 1 = Panic (ADS & Fire) ]
DS_Activation_Type = 1,
// -- Max time between ADS and FIRE presses to activate
DS_Press_Variance_Time = 120,
DS_Stand_On_Release = TRUE,
// -- [ 0 = Sprint (Fast) | 1 = Stand ]
DS_Stand_Type = 0,
DS_Quick_Toggle = FALSE,
DS_Hold_Quick_Toggle = NSI_LB,
DS_Press_Quick_Toggle = NSI_UP,
// Crouch Shot
// -- [ 0 = On ADS | 1 = On Fire | 2 = On ADS & Fire ]
CS_Activation_Type = 0,
CS_Loop = FALSE,
CS_Delay_Time = 200,
CS_Once_Release_Stand = TRUE,
CS_Quick_Toggle = FALSE,
CS_Hold_Quick_Toggle = NSI_LB,
CS_Press_Quick_Toggle = NSI_DOWN,
// Underbarrel Jitter (MWII)
UJ_Delay_Time = 0,
UJ_Quick_Toggle = FALSE,
UJ_Hold_Quick_Toggle = NSI_LB,
UJ_Press_Quick_Toggle = NSI_LEFT,
// Auto Aim
// -- [ 0 = ADS | 1 = Fully ADS ]
AA_Aiming_Type = 0,
AA_Quick_Toggle = FALSE,
AA_Hold_Quick_Toggle = NSI_LB,
AA_Press_Quick_Toggle = NSI_RIGHT,
// Auto Cook Frag
ACF_Cook_Time = 2300,
ACF_Quick_Toggle = FALSE,
ACF_Hold_Quick_Toggle = NSI_LB,
ACF_Press_Quick_Toggle = NSI_A,
// YY Cancel
// -- Delay until ready to cancel again (should be longer than the "Cancel Delay")
YYC_Wait_Delay = 100,
// -- Delay between YY inputs
YYC_Cancel_Delay = 1,
YYC_Quick_Toggle = FALSE,
YYC_Hold_Quick_Toggle = NSI_LB,
YYC_Press_Quick_Toggle = NSI_B,
// Hair Triggers
// -- [ 0 = Deadzone Compensation | 1 = Shift Start Point ]
HT_Shift_Type = 0,
HT_LT_Start_Point = 30,
HT_RT_Start_Point = 30,
HT_Quick_Toggle = FALSE,
HT_Hold_Quick_Toggle = NSI_LB,
HT_Press_Quick_Toggle = NSI_X,
// Custom Deadzone
CD_Deadzone = 13,
CD_Quick_Toggle = FALSE,
CD_Hold_Quick_Toggle = NSI_LB,
CD_Press_Quick_Toggle = NSI_Y,
// AS + SC + YYC - In-Game Settings
// -- [ 0 = Forward | 1 = Omni (any) ]
AS_SC_YYC_Sprint_Direction_Toggle = 0,
// Fully ADS Check
FAC_ADS_Time = 349,
// Humanise Inputs
// -- [ 0 = Off | 1 = ADS Only | 2 = All ]
HI_Randomise_Values = 2,
HI_Limit_Turbos = TRUE,
HI_Quick_Toggle = FALSE,
HI_Hold_Quick_Toggle = NSI_LB,
HI_Press_Quick_Toggle = NSI_SYNC,
// Display
// -- [ OLED_FONT_SMALL (0) | OLED_FONT_MEDIUM (1) | OLED_FONT_LARGE (2) ]
DP_Menu_Font_Size = OLED_FONT_MEDIUM,
// -- Scroll transition speed (apex = slowest - for longer text | base = fastest - for short text)
DP_Forward_Scroll_Apex_Time = 1700,
DP_Forward_Scroll_Base_Time = 120,
DP_Backward_Scroll_Apex_Time = 72,
DP_Backward_Scroll_Base_Time = 8,
DP_Start_Pause_Time = 880,
DP_End_Pause_Time = 700,
// -- [ 0 = None | 1 = Static | 2 = Dimmed Editable Highlight | 3 = Enterable Highlight ]
DP_Menu_Border = 1,
// -- [ 0 = None (black) | 1 = Lasers | 2 = Raindrops | 3 = 3D Wave (Detached) | 4 = Cat (Running) ]
DP_Screensaver_Type = 1,
DP_Always_On_Display = FALSE,
// -- Wouldn't recommend lower than '5' (secs) and higher than '180' (3 mins) to prevent screen burn-in
DP_Inactive_Time = 120,
// LED Config
// -- [ 0 = Cycling Hue | 1 = Breathing | 2 = Static | 3 = Battery Status ]
LC_Type = 0,
LC_Delay_Interval = 96,
// -- 0 = Red | 255 = Green | 510 = Blue (Max: 764)
LC_Hue = 530,
LC_Brightness = 180,
LC_FX_Brightness = 255,
LC_Menu_Brightness = 100,
LC_Saturation = 255,
LC_Light_Bar_LED_Matches_Zen_LED = FALSE,
LC_Quick_Toggle = FALSE,
LC_Hold_Quick_Toggle = NSI_RB,
LC_Press_Quick_Toggle = NSI_XBOX,
// Block Rumble
BR_Quick_Toggle = FALSE,
BR_Hold_Quick_Toggle = NSI_RB,
BR_Press_Quick_Toggle = NSI_VIEW,
// Inactivity Timeout
// -- [ 0 = Turn Off Controller | 1 = Unload Script | 2 = Turn Off Controller & Unload Script ]
IT_Turn_Off_Type = 0,
IT_Timeout_Time = 30,
IT_Quick_Toggle = FALSE,
IT_Hold_Quick_Toggle = NSI_RB,
IT_Press_Quick_Toggle = NSI_MENU,
// Fast Power Off
FPO_Required_Hold_Time = 2000,
FPO_Quick_Toggle = FALSE,
FPO_Hold_Quick_Toggle = NSI_RB,
FPO_Press_Quick_Toggle = NSI_LB,
// Adaptive Triggers Config (DualSense)
// -- [ 0 = Disabled (Off) | 1 = Pressure (CR) | 2 = Bow (SR) | 3 = Two Step (No Res 1) | 4 = Responsive (No Res 2) | 5 = Light Resistance (Has Res 1) | 6 = Frequency (Has Res 2) | 7 = Vibration (0x6) ] These modes will change how the various values are applied
AT_LT_Mode = 1,
AT_RT_Mode = 1,
AT_L2_Start = 0,
AT_R2_Start = 0,
AT_L2_Force_1 = 255,
AT_R2_Force_1 = 255,
AT_L2_Force_2 = 255,
AT_R2_Force_2 = 255,
AT_L2_Strength_Low = 0,
AT_R2_Strength_Low = 0,
AT_L2_Strength_Mid = 127,
AT_R2_Strength_Mid = 127,
AT_L2_Strength_High = 255,
AT_R2_Strength_High = 255,
AT_L2_Freq = 12,
AT_R2_Freq = 12,
AT_R2_Freq_Matches_Rapid_Fire = TRUE,
AT_Quick_Toggle = FALSE,
AT_Hold_Quick_Toggle = NSI_RB,
AT_Press_Quick_Toggle = NSI_LS,
// Auto Close Controller Update Prompt
ACCUP_Quick_Toggle = FALSE,
ACCUP_Hold_Quick_Toggle = NSI_RB,
ACCUP_Press_Quick_Toggle = NSI_RS,
// Prevent Native Passthrough Mode Fix
PDNPMF_Quick_Toggle = FALSE,
PDNPMF_Hold_Quick_Toggle = NSI_RB,
PDNPMF_Press_Quick_Toggle = NSI_UP,
// Crossover Fix
CF_Quick_Toggle = FALSE,
CF_Hold_Quick_Toggle = NSI_RB,
CF_Press_Quick_Toggle = NSI_DOWN,

// Input Interval
// -- Setting this correctly (mostly for PC) will result in faster input of combos (setting this up incorrectly can cause
// -- missed inputs from the script)
// -- Input Wait Interval Calculation Examples: (1000ms ?? 60fps) = 18ms (rounded up to even) | (1000/120) = 10ms (rounded
// -- up to even)
// -- If you don't want to calculate, simply use '36' for 29+fps, '18' for 57+fps, '12' for 85+fps, '10' for 101+fps, or
// -- '8' for 126+fps (ensure the game fps is *always* above this minimum fps listed for inputs to not be missed)
// -- Note: 1ms vm time shouldn't be used otherwise it'll add 1ms to the end of combos (last "action" will be 2ms long)
// -- which will slightly slow them down (if the combo only has "two actions" it will take longer 1+1+(1-1)=3, 0 wait time
// -- rounds to 1 which results in the last/second action being repeated twice as long, check combos to understand)
// -- If you wish to use 1ms intervals through the menu then change 'II_Min_Runtime_Interval_Step' below to '1', this will
// -- mean the device will update every 1ms on odd numbers and could be more unstable with higher CPU Usage but this is
// -- done to not add "input delay" as 1 is the only number that is divisible (of 1, 2, 4, or 8)
// -- I personally use '18' for this, I play with 144fps however it is not 100% stable (> 125fps or < 8ms always) so I
// -- need above 100fps (aka < 10ms frame times) at all times, it is a good idea to run an in-game benchmark to see your
// -- 1% low frame rate which means 99% of the time it is higher than this value and is a stable low point which means
// -- very consistent input and very unlikely for the game to drop inputs if a frame takes long to display
// -- Note: Changing this could mess up the initial value rounding to this interval
II_Input_Interval = 20,
// -- (ADVANCED!) [ 0 = 1ms | 1 = 2ms | 2 = 4ms | 3 = 8ms ] Minimum allowed and step value used for input interval, changing this may in some cases affect CPU usage (do not recommend changing)
II_Min_Runtime_Interval_Step = 1,

// -- You can find extra settings here IF you need to change which are not in the menu

// Required Hold Time
// -- Minimum standard time that is counted as a hold in-game, for feature activations
HT_Min_Standard_Game_Hold_Time = 450,
HT_Min_Short_Game_Hold_Time = 150,
// Display
// -- Total entities on title screen (changes amount of variables used)
DP_Total_Screensaver_Entities = 10,
// -- Note: IF YOU GET AN ERROR HERE THEN YOU LIKELY ENABLED THE "LEGACY 16BIT COMPILER", DISABLE THIS IN THE DEVICE TAB (don't ever enable this option unless you have a specific reason to)
// -- < 1023ms or > 32767ms not recommended (Default: 16383 (Signed 15 Bit Max Value), changing bit size will divide or multiply by 2
DP_Max_Large_Time_Based_Value = Signed_15_Bit_Max,
// -- < 511ms or > 16383ms not recommended (Default: 2047 (Signed 12 Bit Max Value), changing bit size will divide or multiply by 2
DP_Max_Small_Time_Based_Value = Signed_12_Bit_Max,
// -- Vibration and LED effect activation time
DP_FX_Time = 100,
// -- (ADVANCED!) Should be the length of the longest value string to not overflow into variables after (e.g ' __ ms (__._/sec ____/min) ' is 27 characters long)
DP_Longest_Length_For_ASCII_Array_Buffer = 27,
// Input Layout
// -- Note: When changing these make sure to keep them the same format (only Xbox One inputs)
// -- Inputs: LB, RB, LT, RT, LS, RS, UP, DOWN, LEFT, RIGHT, A, B, X, Y
IL_Tactical_Input = IL_LB,
IL_Lethal_Input = IL_RB,
IL_ADS_Input = IL_LT,
IL_Fire_Input = IL_RT,
IL_Sprint_Focus_Input = IL_LS,
IL_Melee_Input = IL_RS,
IL_Ping_Input = IL_UP,
IL_Streak_Input = IL_RIGHT,
IL_Jump_Mantle_Input = IL_A,
IL_Stance_Slide_Dive_Input = IL_B,
IL_Reload_Interact_Input = IL_X,
IL_Swap_Armor_Input = IL_Y,
// Game Button Layout
// -- Stick to Xbox One Button Identifiers (constants) for layout consistency and to not mess up the crossover support (some buttons are not actual equivalents in other layouts)
// -- You should mostly only change the stick axes here if needed
SCOREBOARD = XB1_VIEW,
MENU       = XB1_MENU,
MOVEX      = POLAR_LX,
MOVEY      = POLAR_LY,
LOOKX      = POLAR_RX,
LOOKY      = POLAR_RY,
UNUSED     = XB1_DOWN;  // -- Used for temporarily disabling turbo features (hold to disable them to allow holding of those buttons)



// -- Declear integer variables

int
// -- Adjustable Values
mods[_Mods_Length_Idx_],
edit[_Edit_Length_Idx_],
// Fully ADS Check
fac_ads_timer,
// Anti-Recoil
ar_smart_rumble,
ar_strength,
ar_boost_timer,
// Auto Reload
ar2_shoot_timer,
// Slowdown Aim Assist Abuse
saaa_angle,

// ini zoso

saaa_angle_rotat,
saaa_cos_angle_rotat,
saaa_sin_angle_rotat,
drift_intensity = 18, // Intensidad del drift (ajustable entre 0 y 20)
drift_y,
// fin zoso
saaa_cos_angle,
saaa_sin_angle,
//saaa_current_magnitude,
//saaa_max_magnitude,
// Reload Cancel
rc_reloading,
rc_reloading_time,
rc_ar2_did_shoot_before_reload,
// Auto Sprint
as_sc_yyc_in_sprint_area,
// Slide Cancel
sc_stand_btn,
// Auto Ping
ap_can_unping,
// Dropshot
ds_did_dropshot,
// Crouch Shot
cs_crouched,
// YY Cancel
yyc_sprinting,
// Adaptive Triggers Config (DualSense)
at_adt_idx,
// Inactivity Timeout
it_inactivity_timeout_timer,
// LED Config
lc_adjusted_brightness = 255,
lc_hue,
lc_timer,
lc_range_count,
lc_fract_hue,
lc_brightness_no_saturation,
lc_interm_1,
lc_interm_2,
lc_alt_loop_toggle,
// Auto Close Controller Update Prompt (Xbox)
accup_last_get_controller,
accup_last_get_battery,
// Crossover Mapping Fix
cf_swap_xb1_share_sync,
// Button Mappings
input_layout[_Input_Layout_Length_Idx_],
il_input_layout_idx,
// Input Interval
ii_max_controller_polling_rate = 1,
ii_vm_cycle_time,
ii_calc_timing,
// Debug
d_highest_cpu_usage,
// Display
dp_int_to_string_buffer[DP_Longest_Length_For_ASCII_Array_Buffer],
dp_title = TRUE,
dp_screen_sleep_timer,
dp_display_slot_only,
dp_splash_step,
dp_splash_timer,
dp_display_menu,
dp_display_quick_toggle,
dp_menu,
dp_block_options,
dp_main_idx,
dp_mod_idx,
dp_edit_idx,
dp_edit_idx_step,
dp_val_str,
dp_digit_idx,
dp_digits,
dp_digits_val,
dp_digit_count,
dp_string_len,
dp_blackout_random,
dp_shift,
dp_screensaver_incementer,
dp_entity_x_pos[DP_Total_Screensaver_Entities],
dp_entity_y_pos[DP_Total_Screensaver_Entities],
dp_entity_speed[DP_Total_Screensaver_Entities],
dp_entity_length[DP_Total_Screensaver_Entities],
dp_entity_cooldown_timer[DP_Total_Screensaver_Entities],
dp_entity_idx,
dp_snake_length_x = 32,  // -- Max: 32
dp_snake_length_y = 32,  // -- Max: 32
dp_snake_x,
dp_snake_y,
dp_snake_segment,
dp_snake_refresh_timer,
dp_quick_toggle_timer,
dp_quick_toggle_border_toggle,
dp_title_display_interval,
dp_input_interval_fps,
dp_input_interval_fps_digit_idx,
dp_round_edit_idx,
dp_selected_string_idx[2],
dp_scroll_timer[2],
dp_scroll_pause_time[2],
dp_text_offset[2],
dp_char_idx,
dp_reverse_offset[2],
dp_text_display_length,
dp_text_size_y_offset,
dp_text_size_width,
dp_string_idx,
dp_cur_array_idx,
dp_cur_string_idx,
dp_string_start_idx[2],
dp_string_length[2],
dp_scroll[2],
dp_is_value,
// Persistent Variables
pv_current_bit,
pv_current_slot,
pv_current_value,
pv_temp,
pv_bits,
// -- Temp Variables (not to be used in functions)
_no_funct_layer_1_temp_,
_no_funct_layer_2_temp_;



// -- Initialise values

init {

  // -- If any SPVAR contains a value then load from SPVARs
  // -- Note: FIRST TIME THE VARIABLE IS BEING USED - NOT RESETTING
  while(_no_funct_layer_1_temp_ < 64) {
    if(get_pvar(SPVAR_1 + _no_funct_layer_1_temp_,Signed_32_Bit_Min,Signed_32_Bit_Max,0)) {
      reset_spvar();
      // -- Load Mod Values (persistent memory)
      // -- Note: FIRST TIME THE VARIABLE IS BEING USED - NOT RESETTING
      while(_no_funct_layer_2_temp_ <= _Mods_End_Idx_) {
        switch(_no_funct_layer_2_temp_) {
          // -- Unused, skip
          case IGS_InGame_Settings_Toggle_Idx {}
          case DP_Display_Config_Toggle_Idx {}
          case IL_Input_Layout_Toggle_Idx {}
          case II_Input_Interval_Toggle_Idx {}
          case DF_Dono_Fadexz_Toggle_Idx {}
          case D_Debug_Toggle_Idx {
            break;
          }
          default { mods[_no_funct_layer_2_temp_] = read_spvar(FALSE,TRUE); }
        }
        _no_funct_layer_2_temp_ ++;
      }
      // -- Load Edit Values (persistent memory)
      for(_no_funct_layer_2_temp_ = 0; _no_funct_layer_2_temp_ <= _Edit_End_Idx_; _no_funct_layer_2_temp_ ++) {
        if(_no_funct_layer_2_temp_ != RC_Cancel_Method_Edit_Toggle_Idx)  // -- Unused for now, skip
          edit[_no_funct_layer_2_temp_] = read_spvar(Edit_Value_Range[_no_funct_layer_2_temp_][0],Edit_Value_Range[_no_funct_layer_2_temp_][1]);
      }
      dp_display_slot_only = TRUE;
      dp_splash_step = 4;
      // -- [DEBUG] SPVARs used
      //set_val(TRACE_4,((pv_current_slot - SPVAR_1) * 32) + pv_current_bit);  // -- Bits used (total: 2048)
      set_val(TRACE_5,(pv_current_slot - SPVAR_1) + (pv_current_bit > 0));  // -- Slots used (total: 64)
      set_val(TRACE_6,pv_current_bit);  // -- Last slot bits used (total: 32)
      break;
    }
    _no_funct_layer_1_temp_ ++;
  }
  // -- If it made it to the end (nothing saved / first load)
  if(_no_funct_layer_1_temp_ >= 64) {
    // -- ****************************************************************************************************************
    // -- *** Initial enabled mods (only uncomment these (remove '//') if you want these mods to be initially enabled) ***
    // -- ****************************************************************************************************************
    //mods[AR_Anti_Recoil_Toggle_Idx] = TRUE;
    //mods[SAAA_Slowdown_Aim_Assist_Abuse_Toggle_Idx] = TRUE;
    mods[RC_Reload_Cancel_Toggle_Idx] = TRUE;
    //mods[AR2_Auto_Reload_Toggle_Idx] = TRUE;
    //mods[JS_Jump_Shot_Toggle_Idx] = TRUE;
    //mods[RF_Rapid_Fire_Toggle_Idx] = TRUE;
    //mods[AF_Auto_Focus_Toggle_Idx] = TRUE;
    //mods[AP_Auto_Ping_Toggle_Idx] = TRUE;
    //mods[AASO_Aim_Assist_Snap_On_Abuse_Toggle_Idx] = TRUE;
    //mods[QS_Quick_Scoper_Toggle_Idx] = TRUE;
    mods[TJ_Turbo_Jump_Toggle_Idx] = TRUE;
    mods[TM_Turbo_Melee_Toggle_Idx] = TRUE;
    //mods[AS_Auto_Sprint_Toggle_Idx] = TRUE;
    //mods[SC_Slide_Cancel_Toggle_Idx] = TRUE;
    //mods[PAC_Pickup_Cancel_Toggle_Idx] = TRUE;
    //mods[SC2_Swap_Cancel_Toggle_Idx] = TRUE;
    //mods[DS_Dropshot_Toggle_Idx] = TRUE;
    //mods[CS_Crouch_Shot_Toggle_Idx] = TRUE;
    //mods[UJ_Underbarrel_Jitter_Toggle_Idx] = TRUE;
    //mods[AA_Auto_Aim_Toggle_Idx] = TRUE;
    //mods[ACF_Auto_Cook_Frag_Toggle_Idx] = TRUE;
    //mods[YYC_YY_Cancel_Toggle_Idx] = TRUE;
    //mods[HT_Hair_Triggers_Toggle_Idx] = TRUE;
    //mods[CD_Custom_Deadzone_Toggle_Idx] = TRUE;
    mods[HI_Humanise_Inputs_Toggle_Idx] = TRUE;
    mods[LC_LED_Config_Toggle_Idx] = TRUE;
    //mods[BR_Block_Rumble_Toggle_Idx] = TRUE;
    //mods[IT_Inactivity_Timeout_Toggle_Idx] = TRUE;
    //mods[FPO_Fast_Power_Off_Toggle_Idx] = TRUE;
    //mods[AT_Adaptive_Triggers_Toggle_Idx] = TRUE;
    mods[CF_Crossover_Fix_Toggle_Idx] = TRUE;
    // -- Set initial edit values
    for(_no_funct_layer_2_temp_ = 0; _no_funct_layer_2_temp_ <= _Edit_End_Idx_; _no_funct_layer_2_temp_ ++) {
      edit[_no_funct_layer_2_temp_] = Edit_Value_Range[_no_funct_layer_2_temp_][2];
    }
    dp_splash_step = 4;
  }

  dp_tsp = TRUE;
  // -- Update max polling rate for current controller
  update_max_polling_rate();
  // -- Get VM Interval Time for timing calculations
  ii_vm_cycle_time = greatest_common_divisor_vm_timing();
  // -- Set VM Interval Time
  vm_tctrl(ii_vm_cycle_time - 10);
  // -- Initialise values
  apply_button_layout();
  // -- Round initial time-based values
  round_time_based_values();
  // -- Turbos limit
  limit_turbos_value();
  // -- Start LED on output ("console") based hue
  lc_hue = (LC_Output_Hue[get_console()] * 765) / 360;
  // -- Note: This detects the mobile LED colour
  if((get_console() == PIO_PS5 || get_console() == PIO_PS4) && get_led(LED_1) == 2 && get_led(LED_2) == 22 && get_led(LED_3) == 8 && !get_led(LED_4))
    lc_hue = (30 * 765) / 360;
  // -- Set a initial values for the screensaver entities
  initialise_screensaver_entities();
  // Block Rumble (Vibration)
  if(mods[BR_Block_Rumble_Toggle_Idx]) {
    reset_rumble();
    block_rumble();
  }
  // Adaptive Triggers Config (DualSense)
  apply_adaptive_triggers();
  // Auto Close Controller Update Popup
  accup_last_get_controller = get_controller();
  accup_last_get_battery = get_battery();

  // -- Note: For when blocking slot change input for Crossover Mapping Fix
  //get_ctrlbutton()

}



main {
	
	// ini zoso
	
	
	
	 
	
	
	// fin zoso
	
	
	
  // Fast Power Off

  if(mods[FPO_Fast_Power_Off_Toggle_Idx])
    if(get_ival(XB1_XBOX) && abs(get_ptime(XB1_XBOX) - edit[FPO_Required_Hold_Time_Idx]) < get_rtime())
      turn_off();


  // -- Adjust for PS5/PS4 Controller Max Polling Rate (4ms/250hz)
  // -- Note: Check if this can be removed (if it is impossible to connect a controller while the script is running)
  update_max_polling_rate();


  // Auto Close Controller Update Popup (Xbox)

  if(mods[ACCUP_Auto_Close_Controller_Update_Popup_Xbox_Toggle_Idx]) {
    if(!(accup_last_get_controller && accup_last_get_battery) && (get_controller() && get_battery()) && get_console() == PIO_XB1)
      combo_run(Auto_Close_Controller_Update_Popup_Xbox);
    accup_last_get_controller = get_controller();
    accup_last_get_battery = get_battery();
  }


  // Debug
  d_highest_cpu_usage = max(d_highest_cpu_usage,get_info(CPU_USAGE));


  // Adaptive Triggers Config (DualSense)

  // -- Note: Not done in function to help reduce CPU Load
  // -- Note: Hacky method to reset or return input back to the game/host
  if(!mods[AT_Adaptive_Triggers_Toggle_Idx]) {
    /*
    // -- Note: More CPU intensive
    for(_no_funct_layer_1_temp_ = 0; _no_funct_layer_1_temp_ <= 15; _no_funct_layer_1_temp_ ++) {
      set_adt(PS5_L2 - ((_no_funct_layer_1_temp_ % 2) * 3),(_no_funct_layer_1_temp_ / 2) + ((_no_funct_layer_1_temp_ >= 14) * 2),get_adt(PS5_L2 - ((_no_funct_layer_1_temp_ % 2) * 3),(_no_funct_layer_1_temp_ / 2) + ((_no_funct_layer_1_temp_ >= 14) * 2)));
    }
    */
    set_adt(PS5_L2,PS5_ADT_MODE         ,get_adt(PS5_L2,PS5_ADT_MODE));
    set_adt(PS5_R2,PS5_ADT_MODE         ,get_adt(PS5_R2,PS5_ADT_MODE));
    set_adt(PS5_L2,PS5_ADT_START        ,get_adt(PS5_L2,PS5_ADT_START));
    set_adt(PS5_R2,PS5_ADT_START        ,get_adt(PS5_R2,PS5_ADT_START));
    set_adt(PS5_L2,PS5_ADT_FORCE1       ,get_adt(PS5_L2,PS5_ADT_FORCE1));
    set_adt(PS5_R2,PS5_ADT_FORCE1       ,get_adt(PS5_R2,PS5_ADT_FORCE1));
    set_adt(PS5_L2,PS5_ADT_FORCE2       ,get_adt(PS5_L2,PS5_ADT_FORCE2));
    set_adt(PS5_R2,PS5_ADT_FORCE2       ,get_adt(PS5_R2,PS5_ADT_FORCE2));
    set_adt(PS5_L2,PS5_ADT_STRENGTH_LOW ,get_adt(PS5_L2,PS5_ADT_STRENGTH_LOW));
    set_adt(PS5_R2,PS5_ADT_STRENGTH_LOW ,get_adt(PS5_R2,PS5_ADT_STRENGTH_LOW));
    set_adt(PS5_L2,PS5_ADT_STRENGTH_MID ,get_adt(PS5_L2,PS5_ADT_STRENGTH_MID));
    set_adt(PS5_R2,PS5_ADT_STRENGTH_MID ,get_adt(PS5_R2,PS5_ADT_STRENGTH_MID));
    set_adt(PS5_L2,PS5_ADT_STRENGTH_HIGH,get_adt(PS5_L2,PS5_ADT_STRENGTH_HIGH));
    set_adt(PS5_R2,PS5_ADT_STRENGTH_HIGH,get_adt(PS5_R2,PS5_ADT_STRENGTH_HIGH));
    set_adt(PS5_L2,PS5_ADT_FREQ         ,get_adt(PS5_L2,PS5_ADT_FREQ));
    set_adt(PS5_R2,PS5_ADT_FREQ         ,get_adt(PS5_R2,PS5_ADT_FREQ));
  }


  // Custom Deadzone

  if(mods[CD_Custom_Deadzone_Toggle_Idx])
    if(isqrt(pow(get_ival(LOOKX - 35),2) + pow(get_ival(LOOKY - 35),2)) < edit[CD_Deadzone_Idx]) {
      set_val(LOOKX,0);
      set_val(LOOKY,0);
    }


  // Display

  if(dp_splash_step) {
    dp_splash_timer -= get_rtime();
    if(dp_splash_timer <= 0) {
      switch(dp_splash_step) {
        case 4 {
          // -- Show current slot
          cls_oled(OLED_WHITE);
          putc_oled(1,0x53);
          putc_oled(2,0x6c);
          putc_oled(3,0x6f);
          putc_oled(4,0x74);
          putc_oled(5,0x20);
          putc_oled(6,0x30 + (get_slot() % 9));
          putc_oled(7,0x30);
          puts_oled(centre_text(6 + (get_slot() >= 10),OLED_FONT_MEDIUM_WIDTH),24,OLED_FONT_MEDIUM,6 + (get_slot() >= 10),OLED_BLACK);
          break;
        }
        case 3 {
          // -- End here if not the first load
          if(dp_display_slot_only) {
            reset_screen_sleep_timer();
            dp_splash_step = 0;
          }
          // -- Show "Welcome!"
          else {
            cls_oled(OLED_WHITE);
            rect_oled(2,37,124,26,OLED_WHITE,OLED_BLACK);
            print_splash_text(0,10);
            putc_oled(1,0x4e);
            putc_oled(2,0x4f);
            putc_oled(3,0x54);
            putc_oled(4,0x20);
            putc_oled(5,0x34);
            putc_oled(6,0x20);
            putc_oled(7,0x53);
            putc_oled(8,0x41);
            putc_oled(9,0x4c);
            putc_oled(10,0x45);
            puts_oled(centre_text(10,OLED_FONT_MEDIUM_WIDTH),41,OLED_FONT_MEDIUM,10,OLED_WHITE);
          }
          break;
        }
        case 2 {
          // -- Show open menu combination
          // -- Note: Buttons are hardcoded, which should be fine
          cls_oled(OLED_WHITE);
          switch(get_controller()) {
            case PIO_XB360 {}
            case PIO_XB1 {
              print_splash_text(1,24);
              break;
            }
            case PIO_PS3 {}
            case PIO_PS4 {}
            case PIO_PS5 {
              print_splash_text(2,14);
              print_splash_text(3,34);
              break;
            }
            case PIO_WII {}
            case PIO_SWITCH {
              print_splash_text(4,24);
              break;
            }
            default {
              switch(get_console()) {
                case PIO_PS3 {}
                case PIO_PS4 {}
                case PIO_PS5 {
                  print_splash_text(2,14);
                  print_splash_text(3,34);
                  break;
                }
                case PIO_SWITCH {
                  print_splash_text(4,24);
                  break;
                }
                default { print_splash_text(1,24); }
              }
            }
          }
          break;
        }
        case 1 { reset_screen_sleep_timer(); }
      }
      dp_splash_timer = 3200;
      if(dp_splash_step == 4)
        dp_splash_timer = 800;
      dp_splash_step --;
    }
  }


  // Display + Persistent Variables

  // -- On Title Screen (outside menu)
  if(dp_title) {


    quick_toggle(AR_Anti_Recoil_Toggle_Idx, AR_Quick_Toggle_Toggle_Idx, AR_Hold_Quick_Toggle_Toggle_Idx, AR_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(SAAA_Slowdown_Aim_Assist_Abuse_Toggle_Idx, SAAA_Quick_Toggle_Toggle_Idx, SAAA_Hold_Quick_Toggle_Toggle_Idx, SAAA_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(RC_Reload_Cancel_Toggle_Idx, RC_Quick_Toggle_Toggle_Idx, RC_Hold_Quick_Toggle_Toggle_Idx, RC_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(AR2_Auto_Reload_Toggle_Idx, AR2_Quick_Toggle_Toggle_Idx, AR2_Hold_Quick_Toggle_Toggle_Idx, AR2_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(JS_Jump_Shot_Toggle_Idx, JS_Quick_Toggle_Toggle_Idx, JS_Hold_Quick_Toggle_Toggle_Idx, JS_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(RF_Rapid_Fire_Toggle_Idx, RF_Quick_Toggle_Toggle_Idx, RF_Hold_Quick_Toggle_Toggle_Idx, RF_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(AF_Auto_Focus_Toggle_Idx, AF_Quick_Toggle_Toggle_Idx, AF_Hold_Quick_Toggle_Toggle_Idx, AF_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(AP_Auto_Ping_Toggle_Idx, AP_Quick_Toggle_Toggle_Idx, AP_Hold_Quick_Toggle_Toggle_Idx, AP_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(AASO_Aim_Assist_Snap_On_Abuse_Toggle_Idx, AASO_Quick_Toggle_Toggle_Idx, AASO_Hold_Quick_Toggle_Toggle_Idx, AASO_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(QS_Quick_Scoper_Toggle_Idx, QS_Quick_Toggle_Toggle_Idx, QS_Hold_Quick_Toggle_Toggle_Idx, QS_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(TJ_Turbo_Jump_Toggle_Idx, TJ_Quick_Toggle_Toggle_Idx, TJ_Hold_Quick_Toggle_Toggle_Idx, TJ_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(TM_Turbo_Melee_Toggle_Idx, TM_Quick_Toggle_Toggle_Idx, TM_Hold_Quick_Toggle_Toggle_Idx, TM_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(AS_Auto_Sprint_Toggle_Idx, AS_Quick_Toggle_Toggle_Idx, AS_Hold_Quick_Toggle_Toggle_Idx, AS_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(SC_Slide_Cancel_Toggle_Idx, SC_Quick_Toggle_Toggle_Idx, SC_Hold_Quick_Toggle_Toggle_Idx, SC_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(PAC_Pickup_Cancel_Toggle_Idx, PC_Quick_Toggle_Toggle_Idx, PC_Hold_Quick_Toggle_Toggle_Idx, PC_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(SC2_Swap_Cancel_Toggle_Idx, SC2_Quick_Toggle_Toggle_Idx, SC2_Hold_Quick_Toggle_Toggle_Idx, SC2_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(DS_Dropshot_Toggle_Idx, DS_Quick_Toggle_Toggle_Idx, DS_Hold_Quick_Toggle_Toggle_Idx, DS_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(CS_Crouch_Shot_Toggle_Idx, CS_Quick_Toggle_Toggle_Idx, CS_Hold_Quick_Toggle_Toggle_Idx, CS_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(UJ_Underbarrel_Jitter_Toggle_Idx, UJ_Quick_Toggle_Toggle_Idx, UJ_Hold_Quick_Toggle_Toggle_Idx, UJ_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(AA_Auto_Aim_Toggle_Idx, AA_Quick_Toggle_Toggle_Idx, AA_Hold_Quick_Toggle_Toggle_Idx, AA_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(ACF_Auto_Cook_Frag_Toggle_Idx, ACF_Quick_Toggle_Toggle_Idx, ACF_Hold_Quick_Toggle_Toggle_Idx, ACF_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(YYC_YY_Cancel_Toggle_Idx, YYC_Quick_Toggle_Toggle_Idx, YYC_Hold_Quick_Toggle_Toggle_Idx, YYC_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(HT_Hair_Triggers_Toggle_Idx, HT_Quick_Toggle_Toggle_Idx, HT_Hold_Quick_Toggle_Toggle_Idx, HT_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(CD_Custom_Deadzone_Toggle_Idx, CD_Quick_Toggle_Toggle_Idx, CD_Hold_Quick_Toggle_Toggle_Idx, CD_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(HI_Humanise_Inputs_Toggle_Idx, HI_Quick_Toggle_Toggle_Idx, HI_Hold_Quick_Toggle_Toggle_Idx, HI_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(LC_LED_Config_Toggle_Idx, LC_Quick_Toggle_Toggle_Idx, LC_Hold_Quick_Toggle_Toggle_Idx, LC_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(BR_Block_Rumble_Toggle_Idx, BR_Quick_Toggle_Toggle_Idx, BR_Hold_Quick_Toggle_Toggle_Idx, BR_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(IT_Inactivity_Timeout_Toggle_Idx, IT_Quick_Toggle_Toggle_Idx, IT_Hold_Quick_Toggle_Toggle_Idx, IT_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(FPO_Fast_Power_Off_Toggle_Idx, FPO_Quick_Toggle_Toggle_Idx, FPO_Hold_Quick_Toggle_Toggle_Idx, FPO_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(AT_Adaptive_Triggers_Toggle_Idx, AT_Quick_Toggle_Toggle_Idx, AT_Hold_Quick_Toggle_Toggle_Idx, AT_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(ACCUP_Auto_Close_Controller_Update_Popup_Xbox_Toggle_Idx, ACCUP_Quick_Toggle_Toggle_Idx, ACCUP_Hold_Quick_Toggle_Toggle_Idx, ACCUP_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(PDNPM_Prevent_DualSense_Native_Passthrough_Mode_Fix_Toggle_Idx, PDNPMF_Quick_Toggle_Toggle_Idx, PDNPMF_Hold_Quick_Toggle_Toggle_Idx, PDNPMF_Press_Quick_Toggle_Toggle_Idx);
    quick_toggle(CF_Crossover_Fix_Toggle_Idx, CF_Quick_Toggle_Toggle_Idx, CF_Hold_Quick_Toggle_Toggle_Idx, CF_Press_Quick_Toggle_Toggle_Idx);


    // `PS4_TOUCH` and `XB1_VIEW` + `XB1_SHARE` and `XB1_SYNC` + `SWI_CAPTURE` Fix
    // -- (proper support for all controllers - mostly untested, doesn't appear to have any mistakes though ????)
    // -- Note: `WII_A` and `WII_B` are swapped from Switch - Check if they perform the same actions or should be swapped for Wii Controller
    if(mods[CF_Crossover_Fix_Toggle_Idx])
      // -- PS4/PS5 Controller not on PS4/PS5 Output (console)
      if(get_console() != PIO_PS5 && get_console() != PIO_PS4) {
        if(get_controller() == PIO_PS5 || get_controller() == PIO_PS4) {
          swap(PS4_TOUCH,XB1_VIEW);
          // -- Remap `PS4_SHARE` (now `PS4_TOUCH`) to `XB1_SHARE` (Button 27) only on Xbox One (output), other consoles/output `PS4_SHARE` will be left unmapped
          switch(get_console()) {
            case PIO_XB1 {
              swap(PS4_TOUCH,XB1_SHARE);
              break;
            }
            case PIO_SWITCH {
              swap(PS4_TOUCH,SWI_CAPTURE);
            }
          }
        }
      }
      // -- PS4/PS5 Output (console) but not using a PS4/PS5 Controller
      else {
        if(get_controller() != PIO_PS5 && get_controller() != PIO_PS4)
          swap(PS4_TOUCH,PS4_SHARE);
        if(get_controller() == PIO_SWITCH)
          swap(PS4_TOUCH,SWI_CAPTURE);
        if(get_controller() == PIO_XB1) {
          // -- Enable remap if the SHARE button is used (Series X|S Controller)
          if(event_press(XB1_SHARE))
            cf_swap_xb1_share_sync = TRUE;
          // -- Swap `PS4_SHARE` (now `PS4_TOUCH`) to `XB1_SHARE` (button 27) when on Xbox One (output)
          if(cf_swap_xb1_share_sync) {
            swap(PS4_TOUCH,XB1_SHARE);
            // -- Block input to accelerometer x-axis for other consoles
            set_val(XB1_SYNC,0);
          }
        }
        else cf_swap_xb1_share_sync = FALSE;
      }


    // -- Check and store if should be sprinting
    if(edit[AS_SC_YYC_Sprint_Direction_Toggle_Idx])
      as_sc_yyc_in_sprint_area = isqrt(pow(get_ival(MOVEX - 35),2) + pow(get_ival(MOVEY - 35),2)) >= 96;
    else as_sc_yyc_in_sprint_area = isqrt(pow(get_ival(MOVEX - 35),2) + pow(get_ival(MOVEY - 35),2)) >= 96 && get_ival(MOVEY - 35) <= -72;


    // -- Display Title Screen
    if(!dp_splash_step && (dp_screen_sleep_timer || edit[DP_Always_On_Display_Togle_Idx])) {

      dp_title_display_interval -= get_rtime();

      if(dp_title_display_interval <= 0) {

        cls_oled(OLED_BLACK);

        dp_blackout_random = random(0,500);

        if(!random(0,127))
          dp_shift = random(0,2); 																																																																																																																																																																																																																																																																																																																																																																																																																																																																																	tmp();
        dp_display_quick_toggle = FALSE;

      }

    }


    // Auto Aim

    if(mods[AA_Auto_Aim_Toggle_Idx])
      if(!mods[UJ_Underbarrel_Jitter_Toggle_Idx] && get_ival(input_layout[IL_Fire_Input_Idx])) {
        set_val(input_layout[IL_ADS_Input_Idx],100);
        if(edit[AA_Aiming_Type_Toggle_Idx] && fac_ads_timer < edit[FAC_ADS_Time_Idx])
          set_val(input_layout[IL_Fire_Input_Idx],0);
      }


    // Hair Triggers

    if(mods[HT_Hair_Triggers_Toggle_Idx]) {
      apply_sensitive_triggers(XB1_LT,edit[HT_LT_Start_Point_Idx]);
      apply_sensitive_triggers(XB1_RT,edit[HT_RT_Start_Point_Idx]);
    }


    // Underbarrel Jitter (MWII)

    if(mods[UJ_Underbarrel_Jitter_Toggle_Idx])
      if(get_ival(input_layout[IL_Fire_Input_Idx])) {
        set_val(input_layout[IL_Fire_Input_Idx],0);
        set_val(input_layout[IL_ADS_Input_Idx],0);
        combo_run(Underbarrel_Jitter_MWII);
      }
      else combo_stop(Underbarrel_Jitter_MWII);


    // Auto Cook Frag

    if(mods[ACF_Auto_Cook_Frag_Toggle_Idx])
      if(get_ival(input_layout[IL_Lethal_Input_Idx]) && get_ptime(input_layout[IL_Lethal_Input_Idx]) >= edit[ACF_Cook_Time_Idx] && get_ptime(input_layout[IL_Lethal_Input_Idx]) < edit[ACF_Cook_Time_Idx] + get_rtime())
        combo_run(Throw_Frag);


    // Auto Focus

    if(mods[AF_Auto_Focus_Toggle_Idx])
      if(fac_ads_timer >= edit[FAC_ADS_Time_Idx]) {
        if(edit[AF_Type_Toggle_Idx])
          combo_run(Quick_Gasp);
        else set_val(input_layout[IL_Sprint_Focus_Input_Idx],100);
        if(event_press(input_layout[IL_Sprint_Focus_Input_Idx]))
          combo_run(Zoom);
      }
      else {
        combo_stop(Quick_Gasp);
        combo_stop(Zoom);
      }


    // Auto Reload + Reload Cancel

    if((mods[AR2_Auto_Reload_Toggle_Idx] || mods[RC_Reload_Cancel_Toggle_Idx] || mods[AASO_Aim_Assist_Snap_On_Abuse_Toggle_Idx] || mods[AP_Auto_Ping_Toggle_Idx]) && !get_ival(input_layout[IL_Streak_Input_Idx]) && get_brtime(input_layout[IL_Streak_Input_Idx]) >= 3000) {
      if(event_press(input_layout[IL_Fire_Input_Idx]))
        rc_ar2_did_shoot_before_reload = TRUE;
      if(rc_ar2_did_shoot_before_reload && event_press(input_layout[IL_Reload_Interact_Input_Idx])) {
        rc_reloading = TRUE;
        rc_ar2_did_shoot_before_reload = FALSE;
      }
    }


    // Reload Cancel

    if(mods[RC_Reload_Cancel_Toggle_Idx])
      if(rc_reloading) {
        rc_reloading_time += get_rtime();
        // -- Prevented Reload (Revert State)
        // -- Note: Add sprint cancel check
        if(get_ival(input_layout[IL_Reload_Interact_Input_Idx]) && get_ptime(input_layout[IL_Reload_Interact_Input_Idx]) == ceil_to_multiple(HT_Min_Short_Game_Hold_Time + ii_vm_cycle_time,ii_vm_cycle_time) || event_press(input_layout[IL_Swap_Armour_Input_Idx]) || event_press(input_layout[IL_Tactical_Input_Idx]) || event_press(input_layout[IL_Lethal_Input_Idx]) || event_press(input_layout[IL_Streak_Input_Idx])) {
          rc_reloading = FALSE;
          rc_reloading_time = 0;
          rc_ar2_did_shoot_before_reload = TRUE;
        }
        if(rc_reloading_time > edit[RC_Max_Reload_Time_For_Cancel_Idx]) {
          rc_reloading = FALSE;
          rc_reloading_time = 0;
        }
        if(rc_reloading_time && rc_reloading_time <= edit[RC_Max_Reload_Time_For_Cancel_Idx] && (edit[RC_Release_Activation_Type_Toggle_Idx] == 1 && event_press(input_layout[IL_ADS_Input_Idx]) || event_press(input_layout[IL_Fire_Input_Idx])))
          combo_run(Reload_Cancel);
      }


    // Auto Reload

    if(mods[AR2_Auto_Reload_Toggle_Idx]) {
      if(ar2_shoot_timer >= edit[AR2_Shoot_Time_Idx] && (!edit[AR2_Release_Activation_Type_Toggle_Idx] && event_release(input_layout[IL_Fire_Input_Idx])
      || edit[AR2_Release_Activation_Type_Toggle_Idx] == 1 && (rc_ar2_did_shoot_before_reload && !get_ival(input_layout[IL_Fire_Input_Idx]) && event_release(input_layout[IL_ADS_Input_Idx]) || !get_ival(input_layout[IL_ADS_Input_Idx]) && event_release(input_layout[IL_Fire_Input_Idx])) && get_brtime(input_layout[IL_Streak_Input_Idx]) >= 3000)) {
        combo_run(Auto_Reload);
        ar2_shoot_timer = 0;
        // -- Note: Best to delay this until after 'RELOAD' as been pressed
        //if(mods[RC_Reload_Cancel_Toggle_Idx])
        rc_reloading = TRUE;
      }
      if(get_ival(input_layout[IL_Fire_Input_Idx]) && get_brtime(input_layout[IL_Streak_Input_Idx]) >= 3000 && !(get_ival(input_layout[IL_Tactical_Input_Idx]) || get_ival(input_layout[IL_Lethal_Input_Idx]) || combo_running(Turbo_Melee) || combo_running(Pickup_Cancel) || combo_running(Swap_Cancel) || combo_running(Reload_Cancel)))
        ar2_shoot_timer += get_rtime();
    }

    if(mods[RC_Reload_Cancel_Toggle_Idx] && (rc_reloading_time > edit[RC_Max_Reload_Time_For_Cancel_Idx] || combo_running(Reload_Cancel)) || !mods[RC_Reload_Cancel_Toggle_Idx] && event_press(input_layout[IL_Reload_Interact_Input_Idx]))
      ar2_shoot_timer = 0;


    // Quick Scoper

    if(mods[QS_Quick_Scoper_Toggle_Idx]) {
      if(edit[QS_Activation_Type_Toggle_Idx] && get_ival(input_layout[IL_ADS_Input_Idx]))
        set_val(input_layout[IL_Lethal_Input_Idx],0);
      if((!edit[QS_Activation_Type_Toggle_Idx] && event_press(input_layout[IL_Fire_Input_Idx]) && !get_ival(input_layout[IL_Lethal_Input_Idx]) || edit[QS_Activation_Type_Toggle_Idx] && get_ival(input_layout[IL_ADS_Input_Idx]) && event_press(input_layout[IL_Lethal_Input_Idx])) && !get_ival(input_layout[IL_Tactical_Input_Idx]))
        combo_run(Quick_Scoper);
    }


    // Auto Ping

    if(mods[AP_Auto_Ping_Toggle_Idx]) {
      if(event_press(input_layout[IL_Fire_Input_Idx]) && get_brtime(input_layout[IL_Fire_Input_Idx]) >= 1000 * edit[AP_Min_Release_Activation_Time_Idx] && (!edit[AP_Activation_Type_Toggle_Idx] && get_ival(input_layout[IL_ADS_Input_Idx]) || edit[AP_Activation_Type_Toggle_Idx] == 1 && fac_ads_timer >= edit[FAC_ADS_Time_Idx] || edit[AP_Activation_Type_Toggle_Idx] == 2))
        combo_run(Auto_Ping);
      if(ap_can_unping) {
        if(isqrt(pow(get_ival(MOVEX - 35),2) + pow(get_ival(MOVEY - 35),2)) >= 15)
          ap_can_unping = FALSE;
        if(rc_ar2_did_shoot_before_reload && event_release(input_layout[IL_Fire_Input_Idx]))
          combo_run(Auto_Ping);
        if(combo_current_step(Auto_Ping) == 2) {
          combo_stop(Auto_Ping);
          ap_can_unping = FALSE;
        }
      }
    }


    // Jump Shot

    // -- Note: Add fire modes
    if(mods[JS_Jump_Shot_Toggle_Idx])
      if(!edit[JS_Activation_Type_Toggle_Idx] && event_press(input_layout[IL_ADS_Input_Idx]) ||
      edit[JS_Activation_Type_Toggle_Idx] == 1 && !get_ival(input_layout[IL_ADS_Input_Idx]) && event_press(input_layout[IL_Fire_Input_Idx]) ||
      edit[JS_Activation_Type_Toggle_Idx] == 2 && get_ival(input_layout[IL_ADS_Input_Idx]) ||
      edit[JS_Activation_Type_Toggle_Idx] == 3 && (get_ival(input_layout[IL_ADS_Input_Idx]) && get_ptime(input_layout[IL_ADS_Input_Idx]) <= edit[JS_Press_Variance_Time_Idx] && event_press(input_layout[IL_Fire_Input_Idx]) || get_ival(input_layout[IL_Fire_Input_Idx]) && get_ptime(input_layout[IL_Fire_Input_Idx]) <= edit[JS_Press_Variance_Time_Idx] && event_press(input_layout[IL_ADS_Input_Idx])))
        combo_run(Jump_Shot);


    // Auto Sprint

    // -- Note: Need disable on crouch method for actual detection
    if(mods[AS_Auto_Sprint_Toggle_Idx]) {
      if(!(get_ival(input_layout[IL_ADS_Input_Idx]) || get_ival(input_layout[IL_Stance_Slide_Dive_Input_Idx])) && (get_ptime(input_layout[IL_Stance_Slide_Dive_Input_Idx]) >= edit[AS_Crouch_Prone_Delay_Time_Idx] || get_ival(input_layout[IL_Sprint_Focus_Input_Idx])) && as_sc_yyc_in_sprint_area && !(combo_running(Legacy_Slide_Cancel) || combo_running(Stand_Slide_Cancel))) {
        switch(edit[AS_Type_Toggle_Idx]) {
          case 0 {
            combo_run(Turbo_Auto_Sprint);
            break;
          }
          case 1 {
            set_val(input_layout[IL_Sprint_Focus_Input_Idx],100);
            break;
          }
          case 2 {
            if(isqrt(pow(get_lval(MOVEX - 35),2) + pow(get_lval(MOVEY - 35),2)) < 96 || !edit[AS_SC_YYC_Sprint_Direction_Toggle_Idx] && get_lval(MOVEY - 35) > -72)
              combo_run(Press_Auto_Sprint);
            break;
          }
          default {
            combo_run(Boosted_Auto_Sprint);
          }
        }
      }
      else {
        combo_stop(Turbo_Auto_Sprint);
        combo_stop(Press_Auto_Sprint);
        combo_stop(Boosted_Auto_Sprint);
      }
    }


    // Turbo Jump

    if(mods[TJ_Turbo_Jump_Toggle_Idx])
      if(turbo_hold(input_layout[IL_Jump_Mantle_Input_Idx]))
        combo_run(Turbo_Jump);


    // Turbo Melee

    if(mods[TM_Turbo_Melee_Toggle_Idx])
      if(turbo_hold(input_layout[IL_Melee_Input_Idx]))
        combo_run(Turbo_Melee);


    // Slide Cancel

    if(mods[SC_Slide_Cancel_Toggle_Idx]) {
      if(event_press(input_layout[IL_Stance_Slide_Dive_Input_Idx]) && as_sc_yyc_in_sprint_area) {
        switch(edit[SC_Type_Toggle_Idx]) {
          case 0 {
            combo_run(Legacy_Slide_Cancel);
            break;
          }
          case 1 {
            sc_stand_btn = input_layout[IL_Stance_Slide_Dive_Input_Idx];
            combo_run(Stand_Slide_Cancel);
            break;
          }
          case 2 {
            sc_stand_btn = input_layout[IL_Jump_Mantle_Input_Idx];
            combo_run(Stand_Slide_Cancel);
            break;
          }
          default {
            combo_run(MWII_Slide_Cancel);
          }
        }
        /*
        // -- Note: Add release mode(s)
        if(event_release(input_layout[IL_Stance_Slide_Dive_Input_Idx]) && get_ptime(input_layout[IL_Stance_Slide_Dive_Input_Idx]) >= HT_Min_Standard_Game_Hold_Time && mods[SC_Slide_Cancel_Toggle_Idx] == 4)
          combo_run(Slide_Cancel_Release_Jump_Stand);
        */
      }
    }


    // Pickup Cancel

    if(mods[PAC_Pickup_Cancel_Toggle_Idx])
      if(get_ival(input_layout[IL_Reload_Interact_Input_Idx]) && get_ptime(input_layout[IL_Reload_Interact_Input_Idx]) == ceil_to_multiple(HT_Min_Short_Game_Hold_Time + ii_vm_cycle_time,ii_vm_cycle_time))
        combo_run(Pickup_Cancel);


    // Swap Cancel

    if(mods[SC2_Swap_Cancel_Toggle_Idx])
      if(event_release(input_layout[IL_Swap_Armour_Input_Idx]) && get_ptime(input_layout[IL_Swap_Armour_Input_Idx]) < HT_Min_Standard_Game_Hold_Time && !(get_ival(input_layout[IL_Tactical_Input_Idx]) || get_ival(input_layout[IL_Lethal_Input_Idx])))
        combo_run(Swap_Cancel);


    // "YY" Cancel
    // -- Note: Fix properly for script auto sprint

    if(mods[YYC_YY_Cancel_Toggle_Idx]) {
      if(!(get_ival(input_layout[IL_ADS_Input_Idx]) || get_ival(input_layout[IL_Fire_Input_Idx])) && as_sc_yyc_in_sprint_area && (/*mods[AS_Auto_Sprint_Toggle_Idx] ||*/ event_press(input_layout[IL_Sprint_Focus_Input_Idx])))
        yyc_sprinting = TRUE;
      if(yyc_sprinting) {
        if(!as_sc_yyc_in_sprint_area || edit[YYC_Type_Toggle_Idx] && event_release(input_layout[IL_Sprint_Focus_Input_Idx]) || event_press(input_layout[IL_Jump_Mantle_Input_Idx]) || event_press(input_layout[IL_Stance_Slide_Dive_Input_Idx]) || event_press(input_layout[IL_Reload_Interact_Input_Idx]) || event_press(input_layout[IL_Swap_Armour_Input_Idx]) || event_press(input_layout[IL_ADS_Input_Idx]) || event_press(input_layout[IL_Fire_Input_Idx]) || event_press(input_layout[IL_Melee_Input_Idx]) || event_press(input_layout[IL_Tactical_Input_Idx]) || event_press(input_layout[IL_Lethal_Input_Idx]))
          yyc_sprinting = FALSE;
        else combo_run(YY_Cancel);
      }
      // -- Note: Is this needed for MWII/MWIII??
      if(yyc_sprinting || combo_running(YY_Cancel))
        set_val(input_layout[IL_ADS_Input_Idx],0);
    }


    // Dropshot

    if(mods[DS_Dropshot_Toggle_Idx]) {
      if(!(get_ival(input_layout[IL_Tactical_Input_Idx]) || get_ival(input_layout[IL_Lethal_Input_Idx])) &&
      (!edit[DS_Activation_Type_Toggle_Idx] && event_press(input_layout[IL_Fire_Input_Idx])) ||
      (edit[DS_Activation_Type_Toggle_Idx] && get_ival(input_layout[IL_ADS_Input_Idx]) && get_ptime(input_layout[IL_ADS_Input_Idx]) <= edit[DS_Press_Variance_Time_Idx] && event_press(input_layout[IL_Fire_Input_Idx]) || get_ival(input_layout[IL_Fire_Input_Idx]) && get_ptime(input_layout[IL_Fire_Input_Idx]) <= edit[DS_Press_Variance_Time_Idx] && event_press(input_layout[IL_ADS_Input_Idx]))) {
        combo_run(Dropshot);
        ds_did_dropshot = TRUE;
      }
      // -- Note: Add release ads and fire version
      if(ds_did_dropshot && edit[DS_Stand_On_Release_Toggle_Idx] && event_release(input_layout[IL_Fire_Input_Idx])) {
        combo_stop(Dropshot);
        if(edit[DS_Stand_Type_Toggle_Idx])
          combo_run(Stand);
        else combo_run(Sprint_Stand);
        ds_did_dropshot = FALSE;
      }
    }


    // Crouch Shot

    if(mods[CS_Crouch_Shot_Toggle_Idx]) {
      if((!(get_ival(input_layout[IL_Tactical_Input_Idx]) || get_ival(input_layout[IL_Lethal_Input_Idx])) &&
      (!edit[CS_Activation_Type_Toggle_Idx] && (!edit[CS_Loop_Toggle_Idx] && event_press(input_layout[IL_ADS_Input_Idx]) || edit[CS_Loop_Toggle_Idx] && get_ival(input_layout[IL_ADS_Input_Idx]))
      || edit[CS_Activation_Type_Toggle_Idx] == 1 && (!edit[CS_Loop_Toggle_Idx] && event_press(input_layout[IL_Fire_Input_Idx]) || edit[CS_Loop_Toggle_Idx] && get_ival(input_layout[IL_Fire_Input_Idx]))
      || edit[CS_Activation_Type_Toggle_Idx] == 2 && (!edit[CS_Loop_Toggle_Idx] && (get_ival(input_layout[IL_ADS_Input_Idx]) && event_press(input_layout[IL_Fire_Input_Idx]) || get_ival(input_layout[IL_Fire_Input_Idx]) && event_press(input_layout[IL_ADS_Input_Idx])) || edit[CS_Loop_Toggle_Idx] && get_ival(input_layout[IL_ADS_Input_Idx]) && get_ival(input_layout[IL_Fire_Input_Idx]))))) {
        combo_run(Crouch_Shot);
        cs_crouched = TRUE;
      }
      if(!edit[CS_Loop_Toggle_Idx]) {
        // -- Note: Stop at second press in combo
        if(combo_current_step(Crouch_Shot) >= 2)
          combo_stop(Crouch_Shot);
		// -- Release function
        if(cs_crouched &&
        (!edit[CS_Activation_Type_Toggle_Idx] && event_release(input_layout[IL_ADS_Input_Idx]) ||
        edit[CS_Activation_Type_Toggle_Idx] == 1 && event_release(input_layout[IL_Fire_Input_Idx])) ||
        edit[CS_Activation_Type_Toggle_Idx] == 2 && (!get_ival(input_layout[IL_ADS_Input_Idx]) && event_release(input_layout[IL_Fire_Input_Idx]) || !get_ival(input_layout[IL_Fire_Input_Idx]) && event_release(input_layout[IL_ADS_Input_Idx]))) {
          combo_stop(Crouch_Shot);
          combo_run(Crouch_Shot);
          cs_crouched = FALSE;
        }
      }
    }


    // Slowdown Aim Assist Abuse

    if(mods[SAAA_Slowdown_Aim_Assist_Abuse_Toggle_Idx]) {
      //saaa_current_magnitude = isqrt(pow(get_ival(LOOKX),2) + pow(get_ival(LOOKY),2));
      //saaa_max_magnitude = saaa_current_magnitude < 100;
      saaa_angle = (saaa_angle + edit[SAAA_Rotate_By_Angles_Idx]) % 360;
      
      // ini zoso para disminuir la velocidad de aim assist rotacional
      saaa_angle_rotat = (saaa_angle_rotat + (edit[SAAA_Rotate_By_Angles_Idx]/1.9)) % 360; //zoso dividi por 1.9 porque asi disminuyo casi a la la mitad  la velocidad
      // fin zoso
      
      // -- Note: Check over
      if(/*saaa_current_magnitude*/ isqrt(pow(get_ival(LOOKX - 35),2) + pow(get_ival(LOOKY - 35),2)) <= edit[SAAA_Release_Point_Idx] && get_brtime(input_layout[IL_Streak_Input_Idx]) >= 3000 &&
      (!edit[SAAA_Activation_Type_Toggle_Idx] && fac_ads_timer >= edit[FAC_ADS_Time_Idx] && get_ival(input_layout[IL_Fire_Input_Idx]) ||
      edit[SAAA_Activation_Type_Toggle_Idx] == 1 && (fac_ads_timer >= edit[FAC_ADS_Time_Idx] || get_ival(input_layout[IL_Fire_Input_Idx])) ||
      edit[SAAA_Activation_Type_Toggle_Idx] == 2 && fac_ads_timer >= edit[FAC_ADS_Time_Idx] ||
      edit[SAAA_Activation_Type_Toggle_Idx] == 3 && fac_ads_timer >= edit[FAC_ADS_Time_Idx] && !get_ival(input_layout[IL_Fire_Input_Idx]) ||
      edit[SAAA_Activation_Type_Toggle_Idx] == 4 && get_ival(input_layout[IL_Fire_Input_Idx]) ||
      edit[SAAA_Activation_Type_Toggle_Idx] == 5)) {
	    saaa_cos_angle = (isin(((saaa_angle + 180) % 360) * 32768/360) * edit[SAAA_Radius_Idx]) / 100;
        saaa_sin_angle = (icos(saaa_angle * 32768/360) * edit[SAAA_Radius_Idx]) / 100;
        //if(saaa_current_magnitude <= saaa_radius) {
          saaa_sin_angle -= get_ival(LOOKY);
          saaa_cos_angle -= get_ival(LOOKX);
        /*
        }
        else {
          saaa_sin_angle = (saaa_sin_angle * (200 - ((abs(get_ival(LOOKY)) + saaa_current_magnitude) / 10) * 10) / 200) * saaa_max_magnitude;
          saaa_cos_angle = (saaa_cos_angle * (200 - ((abs(get_ival(LOOKX)) + saaa_current_magnitude) / 10) * 10) / 200) * saaa_max_magnitude;
        }
        */
		
		
		// ini zoso se agrega aim assist rotacional
		saaa_cos_angle_rotat = (isin(((saaa_angle_rotat + 180) % 360) * 32768/360) * 68) / 100; // zoso radius_idx en 60, si quito el aim assist normal el del r3, lo dejaria porque esta parametrico, se configura en menu y asi solo afectaria al rotacional
        saaa_sin_angle_rotat = (icos(saaa_angle_rotat * 32768/360) * 68) / 100;
		
		set_val(POLAR_LX,clamp(get_ival(LOOKX) + saaa_cos_angle_rotat + (random(-130,130) * (mods[HI_Humanise_Inputs_Toggle_Idx] && edit[HI_Randomise_Values_Toggle_Idx])),-32768,32767));
        set_val(POLAR_LY,clamp(get_ival(LOOKY) + saaa_sin_angle_rotat + (random(-130,130) * (mods[HI_Humanise_Inputs_Toggle_Idx] && edit[HI_Randomise_Values_Toggle_Idx])),-32768,32767));
		// fin zoso se agrega aim assis rotacional
        set_val(POLAR_RX,clamp(get_ival(LOOKX) + saaa_cos_angle + (random(-130,130) * (mods[HI_Humanise_Inputs_Toggle_Idx] && edit[HI_Randomise_Values_Toggle_Idx])),-32768,32767));
        set_val(POLAR_RY,clamp(get_ival(LOOKY) + saaa_sin_angle + (random(-130,130) * (mods[HI_Humanise_Inputs_Toggle_Idx] && edit[HI_Randomise_Values_Toggle_Idx])),-32768,32767));

        
      }
    }
	
	//zoso drift
	if(get_ival(input_layout[IL_ADS_Input_Idx]) && !get_ival(input_layout[IL_Fire_Input_Idx])){
		

        drift_y = drift_intensity * 163; // Calcula la intensidad del drift
        set_val(POLAR_RY, clamp(get_val(POLAR_RY) + drift_y, -32768, 32767));

	}
	// zoso drift


    // Aim Assist Snap On Abuse

    if(mods[AASO_Aim_Assist_Snap_On_Abuse_Toggle_Idx])
      if(fac_ads_timer >= edit[FAC_ADS_Time_Idx])
        combo_run(Aim_Assist_Snap_On_Abuse);
      else combo_stop(Aim_Assist_Snap_On_Abuse);


    // Rapid Fire

    if(mods[RF_Rapid_Fire_Toggle_Idx]) {
      if((!edit[RF_Activation_Type_Toggle_Idx] || edit[RF_Activation_Type_Toggle_Idx] == 1 && !get_ival(input_layout[IL_ADS_Input_Idx]) || edit[RF_Activation_Type_Toggle_Idx] == 2 && get_ival(input_layout[IL_ADS_Input_Idx])) && get_ival(input_layout[IL_Fire_Input_Idx]) && get_ptime(input_layout[IL_Fire_Input_Idx]) > edit[RF_Single_Shot_Time_Idx])
        run_combo_shot_type();
      if(get_ival(input_layout[IL_ADS_Input_Idx]) && get_ival(input_layout[IL_Lethal_Input_Idx])) {
        set_val(input_layout[IL_Lethal_Input_Idx],0);
        if(event_press(input_layout[IL_Lethal_Input_Idx]) || get_ptime(input_layout[IL_Lethal_Input_Idx]) > edit[RF_Single_Shot_Time_Idx])
          run_combo_shot_type();
      }
    }

    /*
    // -- Note: This is more CPU optimised
    if(mods[RF_Rapid_Fire_Toggle_Idx])
      switch(edit[RF_Activation_Type_Toggle_Idx]) {
        case 1 {}
        case 2 {
          if(get_ival(input_layout[IL_ADS_Input_Idx])) {
            if(edit[RF_Activation_Type_Toggle_Idx] == 1)
              break;
          }
          else if(edit[RF_Activation_Type_Toggle_Idx] == 2)
            break;
          // -- Note: Can continue to next case
        }
        case 0 {
          if(get_ival(input_layout[IL_Fire_Input_Idx]) && get_ptime(input_layout[IL_Fire_Input_Idx]) > edit[RF_Single_Shot_Time_Idx])
            run_combo_shot_type();
          break;
        }
        default {
          if(get_ival(input_layout[IL_ADS_Input_Idx]) && get_ival(input_layout[IL_Lethal_Input_Idx])) {
            set_val(input_layout[IL_Lethal_Input_Idx],0);
            if(event_press(input_layout[IL_Lethal_Input_Idx]) || get_ptime(input_layout[IL_Lethal_Input_Idx]) > edit[RF_Single_Shot_Time_Idx])
              run_combo_shot_type();
          }
        }
      }
    */


    // Anti-Recoil

    if(mods[AR_Anti_Recoil_Toggle_Idx]) {

      // -- Note: Experiment with fully ADS
      if(/*get_ival(input_layout[IL_ADS_Input_Idx])*/ get_ival(input_layout[IL_Fire_Input_Idx])) {

        if(edit[AR_Rumble_Influence_Toggle_Idx]) {

          // -- Decide on which rumble motor to get a value from
          ar_smart_rumble = get_rumble(get_rumble(RUMBLE_B) != 100 && (get_rumble(RUMBLE_A) == 100 || get_rumble(RUMBLE_A) < get_rumble(RUMBLE_B)));

          if(edit[AR_Reduced_Rumble_Toggle_Idx])
            ar_smart_rumble = ar_smart_rumble * 3 / 5;

          ar_boost_timer += get_rtime();

          if(ar_smart_rumble > 10 && ar_smart_rumble < 90) {
            // -- Initial Boost
            // -- Note: Random here could possibly be a bad idea and cause a stutter (maybe store on FIRE press)
            if(ar_boost_timer < random(1, 4)) {
              if(get_controller() == PIO_PS5 || get_controller() == PIO_PS4)
                ar_strength = (edit[AR_Vert_Value_Idx] * 2) + (ar_smart_rumble / 4);
              else ar_strength = (edit[AR_Vert_Value_Idx] * 2) + (ar_smart_rumble / 2);
            }
            // -- Normal Strength
            else if(get_controller() == PIO_PS5 || get_controller() == PIO_PS4)
              ar_strength = edit[AR_Vert_Value_Idx] + (ar_smart_rumble / 3);
            else ar_strength = edit[AR_Vert_Value_Idx] + (ar_smart_rumble / 2);
          }

        }
        else {
          // -- Note: Maybe put this in the menu instead
          ar_smart_rumble = 0;
          ar_strength = edit[AR_Vert_Value_Idx];
        }

        deadzone_offset(POLAR_RX,edit[AR_Hori_Value_Idx] * 32767/100);

        // -- Outside Deadzone
        if(isqrt(pow(get_ival(MOVEX - 35),2) + pow(get_ival(MOVEY - 35),2)) > edit[AR_Deadzone_Idx]) {
          if(ar_smart_rumble < 10)
            deadzone_offset(POLAR_RY,(edit[AR_Vert_Value_Idx] + (edit[AR_Deadzone_Idx] * (((edit[AR_Vert_Value_Idx] < 0) * 2) - 1))) * 32767/100);
          else deadzone_offset(POLAR_RY,(ar_strength + (edit[AR_Deadzone_Idx] * (((edit[AR_Vert_Value_Idx] < 0) * 2) - 1))) * 32767/100);
        }
        // -- Inside Deadzone
        else if(ar_smart_rumble < 10)
          deadzone_offset(POLAR_RY,(edit[AR_Vert_Value_Idx] * 32767/100) - get_val(POLAR_RY));
        else deadzone_offset(POLAR_RY,ar_strength * 32767/100);

      }
      else ar_boost_timer = 0;

    }


    // Display

    // -- Display Menu
    if(get_ival(input_layout[IL_ADS_Input_Idx]) >= 25) {
      if(event_press(MENU)) {
        dp_splash_step = 0;
        dp_display_quick_toggle = FALSE;
        dp_title = FALSE;
        dp_display_menu = TRUE;
        vm_tctrl(ii_max_controller_polling_rate - 10);
        combo_run(Menu_Press_FX);
      }
      set_val(MENU,0);
    }

    // -- Block 'MENU' until released from menu close
    if(dp_block_options) {
      if(event_release(MENU))
        dp_block_options = FALSE;
      set_val(MENU,0);
    }


  }
  // -- When in the menu (not on the Title Screen)
  else {

    // -- Enter menu
    if(event_press(XB1_A)) {
      if(dp_menu == 1 && Edit_Range[dp_mod_idx][0] < 255) {
        dp_edit_idx = Signed_32_Bit_Max;
        dp_menu ++;
        dp_display_menu = TRUE;
      }
      if(!dp_menu) {
        dp_mod_idx = Signed_32_Bit_Max;
        dp_menu ++;
        dp_display_menu = TRUE;
      }
    }

    // -- Exit Menu (save)
    if(event_press(XB1_X)) {
      d_highest_cpu_usage = 0;
      ii_vm_cycle_time = greatest_common_divisor_vm_timing();
      vm_tctrl(ii_vm_cycle_time - 10);
      reset_spvar();
      // -- Save Mod Values (persistent memory)
      for(_no_funct_layer_1_temp_ = 0; _no_funct_layer_1_temp_ <= _Mods_End_Idx_; _no_funct_layer_1_temp_ ++) {
        switch(_no_funct_layer_1_temp_) {
          // -- Unused, skip
          case IGS_InGame_Settings_Toggle_Idx {}
          case DP_Display_Config_Toggle_Idx {}
          case IL_Input_Layout_Toggle_Idx {}
          case II_Input_Interval_Toggle_Idx {}
          case DF_Dono_Fadexz_Toggle_Idx {}
          case D_Debug_Toggle_Idx {
            break;
          }
          default { save_spvar(mods[_no_funct_layer_1_temp_],FALSE,TRUE); }
        }
      }
      // -- Save Edit Values (persistent memory)
      for(_no_funct_layer_1_temp_ = 0; _no_funct_layer_1_temp_ <= _Edit_End_Idx_; _no_funct_layer_1_temp_ ++) {
        if(_no_funct_layer_1_temp_ != RC_Cancel_Method_Edit_Toggle_Idx)  // -- Unused for now, skip
          save_spvar(edit[_no_funct_layer_1_temp_],Edit_Value_Range[_no_funct_layer_1_temp_][0],Edit_Value_Range[_no_funct_layer_1_temp_][1]);
      }
      dp_title = TRUE;
      reset_screen_sleep_timer();
      combo_run(Menu_Press_FX);
    }

    switch(dp_menu) {
      // -- On Main Menu
      case 0 {
        // -- Main Menu Navigation
		// -- Note: Speed is the same as `DP_Menu_Type_Interval_Time[0]`
        if(hold_step(XB1_UP,176) || hold_step(XB1_DOWN,176)) {
          dp_main_idx = !dp_main_idx;
          dp_display_menu = TRUE;
        }
        dp_main_idx = menu_nav(dp_main_idx,0,1);
        break;
      }
      // -- On Mod Menu
      case 1 {
        // -- Mod Navigation (change range based on the selected menu)
        if(dp_main_idx)
          dp_mod_idx = menu_nav(dp_mod_idx,_Mods_Cat_End_Idx_ + 1,_Mods_End_Idx_);
        else dp_mod_idx = menu_nav(dp_mod_idx,0,_Mods_Cat_End_Idx_);
		// -- Note: Speed is the same as `DP_Menu_Type_Interval_Time[0]`
        // -- Increase Mod Toggle Value
        if(hold_step(XB1_UP,176)) {
          mods[dp_mod_idx] ++;
          dp_display_menu = TRUE;
        }
        // -- Decrease Mod Toggle Value
        if(hold_step(XB1_DOWN,176)) {
          mods[dp_mod_idx] --;
          dp_display_menu = TRUE;
        }
        if((event_press(XB1_UP) || event_press(XB1_DOWN)) && dp_mod_idx != IGS_InGame_Settings_Toggle_Idx && dp_mod_idx != DP_Display_Config_Toggle_Idx && dp_mod_idx != IL_Input_Layout_Toggle_Idx && dp_mod_idx != II_Input_Interval_Toggle_Idx)  // -- Note: Ignore unused mods
          combo_run(Menu_Press_FX);
        break;
      }
      // -- On Edit Menu
      default {
        // -- Edit Navigation
        dp_edit_idx = menu_nav(dp_edit_idx,Edit_Range[dp_mod_idx][0],Edit_Range[dp_mod_idx][1]);
        // -- Step value
        // -- Note: Try to see if it is smaller in an array
        switch(dp_edit_idx) {
          // -- For output related times that should be an interval of the game
          case AR_Boost_Time_Idx {}
          case RC_Max_Reload_Time_For_Cancel_Idx {}
          case TJ_Jump_Wait_Time_Idx {}
          case RF_Shot_Wait_Time_Idx {}
          case RF_Single_Shot_Time_Idx {}
          case AASO_ADS_Hold_Time_Idx {}
          case SC_Cancel_Delay_Time_Idx {}
          case SC2_Cancel_Delay_Time_Idx {}
          case CS_Delay_Time_Idx {}
          case UJ_Delay_Time_Idx {}
          case YYC_Wait_Delay_Time_Idx {}
          case YYC_Cancel_Delay_Time_Idx {}
          case FAC_ADS_Time_Idx {
            dp_edit_idx_step = edit[II_Input_Interval_Time_Idx];
            break;
          }
          // -- For controller or non-output related times
          case AR2_Shoot_Time_Idx {}
          case JS_Press_Variance_Time_Idx {}
          case AS_Crouch_Prone_Delay_Time_Idx {}
          case ACF_Cook_Time_Idx {}
          case FPO_Required_Hold_Time_Idx {}
          case DS_Press_Variance_Time_Idx {}
          case DP_Forward_Scroll_Apex_Time_Idx {}
          case DP_Forward_Scroll_Base_Time_Idx {}
          case DP_Backward_Scroll_Apex_Time_Idx {}
          case DP_Backward_Scroll_Base_Time_Idx {}
          case DP_Start_Pause_Time_Idx {}
          case DP_End_Pause_Time_Idx {
            dp_edit_idx_step = ii_max_controller_polling_rate;
            break;
          }
          // -- Limit to interval (match interval for runnning in menu)
          case LC_Delay_Interval_Idx {
            dp_edit_idx_step = 8;
            break;
          }
          case II_Input_Interval_Time_Idx {
            dp_edit_idx_step = pow(2,edit[II_Min_Runtime_Interval_Step_Idx]);
            break;
          }
          default { dp_edit_idx_step = 1; }
        }
        // -- Speed up step amount when long holding
        if(!Edit_Toggle_Value[dp_edit_idx] && (get_ival(XB1_UP) && get_ptime(XB1_UP) >= 3000 || get_ival(XB1_DOWN) && get_ptime(XB1_DOWN) >= 3000))
          dp_edit_idx_step *= 3 * (1 + (dp_edit_idx_step >= 2 && dp_edit_idx_step <= 4)) * (1 + (dp_edit_idx_step == 2));
        if(hold_step(XB1_UP,DP_Menu_Type_Interval_Time[!Edit_Toggle_Value[dp_edit_idx]])) {
          edit[dp_edit_idx] += dp_edit_idx_step;
          dp_display_menu = TRUE;
        }
        if(hold_step(XB1_DOWN,DP_Menu_Type_Interval_Time[!Edit_Toggle_Value[dp_edit_idx]])) {
          edit[dp_edit_idx] -= dp_edit_idx_step;
          dp_display_menu = TRUE;
        }
        if(event_press(XB1_UP) || event_press(XB1_DOWN))
          combo_run(Menu_Press_FX);
        // -- Apply Edit Toggle Limits
        if(Edit_Toggle_Value[dp_edit_idx])
          edit[dp_edit_idx] = cycle(edit[dp_edit_idx],0,Edit_Toggle_Value[dp_edit_idx],1);
        // -- Apply Edit Value Limits
        else {
          switch(dp_edit_idx) {
            // -- Use lower limit for turbos time - when the limit is enabled
            case RF_Shot_Wait_Time_Idx {}
            case TJ_Jump_Wait_Time_Idx {}
            case CS_Delay_Time_Idx {}
            case AASO_ADS_Hold_Time_Idx {
              if(mods[HI_Humanise_Inputs_Toggle_Idx] && edit[HI_Limit_Turbos_Toggle_Idx]) {
                edit[dp_edit_idx] = cycle(edit[dp_edit_idx],67 - dp_edit_idx_step,Edit_Value_Range[dp_edit_idx][1],dp_edit_idx_step);
                break;
              }
            }
            default {
              // -- Use standard limits
              edit[dp_edit_idx] = cycle(edit[dp_edit_idx],Edit_Value_Range[dp_edit_idx][0],Edit_Value_Range[dp_edit_idx][1],dp_edit_idx_step);
            }
          }
        }
      }

    }

    if(edit[DP_Menu_Border_Toggle_Idx]) {
      rect_oled(0,0,OLED_WIDTH,OLED_HEIGHT,OLED_BLACK,OLED_WHITE);
      // -- Show on main menu and mods with editable values
      if(edit[DP_Menu_Border_Toggle_Idx] != 1)
        if(!dp_menu || dp_menu == 1 && Edit_Range[dp_mod_idx][0] < 255 || dp_menu == 2 && dp_edit_idx == DP_Menu_Border_Toggle_Idx) {
          dp_snake_refresh_timer += get_rtime();
          // -- Refresh rate of the snake (can result in a dimmed brightness appearance from refreshing less often)
          if(dp_snake_refresh_timer >= 8 * (1 + (edit[DP_Menu_Border_Toggle_Idx] == 2))) {
            // -- Transition lengths
            // -- Down and up
            if(dp_snake_segment % 2) {
              if(dp_snake_length_x) {
                dp_snake_length_x -= 1 + (edit[DP_Menu_Border_Toggle_Idx] == 2);
                dp_snake_length_y += 1 + (edit[DP_Menu_Border_Toggle_Idx] == 2);
              }
            }
            // -- Left and right
            else if(dp_snake_length_y) {
              dp_snake_length_x += 1 + (edit[DP_Menu_Border_Toggle_Idx] == 2);
              dp_snake_length_y -= 1 + (edit[DP_Menu_Border_Toggle_Idx] == 2);
              // -- Prevent length going OOB
              dp_snake_length_x = min(dp_snake_length_x,OLED_HEIGHT);
              dp_snake_length_y = max(0,dp_snake_length_y);
            }
            // -- Apply position and length based on segment
            // -- Note: Yes, it is as confusing as it looks :P
            switch(dp_snake_segment) {
              case 0 {
                line_clamped(dp_snake_x - dp_snake_length_x,dp_snake_y,dp_snake_x - dp_snake_length_x,dp_snake_y + dp_snake_length_y);
                line_clamped(dp_snake_x - dp_snake_length_x,dp_snake_y,dp_snake_x,dp_snake_y);
                dp_snake_x = min(dp_snake_x + 1 + (edit[DP_Menu_Border_Toggle_Idx] == 2),OLED_WIDTH - 1);
                if(dp_snake_x >= OLED_WIDTH - 1)
                  dp_snake_segment ++;
                break;
              }
              case 1 {
                line_clamped(dp_snake_x - dp_snake_length_x,dp_snake_y - dp_snake_length_y,dp_snake_x,dp_snake_y - dp_snake_length_y);
                line_clamped(dp_snake_x,dp_snake_y - dp_snake_length_y,dp_snake_x,dp_snake_y);
                dp_snake_y = min(dp_snake_y + 1 + (edit[DP_Menu_Border_Toggle_Idx] == 2),OLED_HEIGHT - 1);
                if(dp_snake_y >= OLED_HEIGHT - 1)
                  dp_snake_segment ++;
                break;
              }
              case 2 {
                line_clamped(dp_snake_x,dp_snake_y,dp_snake_x + dp_snake_length_x,dp_snake_y + dp_snake_length_y);
                line_clamped(dp_snake_x + dp_snake_length_x,dp_snake_y,dp_snake_x + dp_snake_length_x,dp_snake_y - dp_snake_length_y);
                dp_snake_x = max(0,dp_snake_x - 1 - (edit[DP_Menu_Border_Toggle_Idx] == 2));
                if(!dp_snake_x)
                  dp_snake_segment ++;
                break;
              }
              default {
                line_clamped(dp_snake_x,dp_snake_y + dp_snake_length_y,dp_snake_x,dp_snake_y);
                line_clamped(dp_snake_x + dp_snake_length_x,dp_snake_y + dp_snake_length_y,dp_snake_x,dp_snake_y + dp_snake_length_y);
                dp_snake_y = max(0,dp_snake_y - 1 - (edit[DP_Menu_Border_Toggle_Idx] == 2));
                if(!dp_snake_y)
                  dp_snake_segment = 0;
              }
            }
            dp_snake_refresh_timer = 0;
          }
        }
    }

    // -- Exit current menu
    if(event_press(XB1_B) && dp_menu) {
      round_time_based_values();  // -- Adjust time-based values to the current "input interval" multiple when exiting
      limit_turbos_value();
      dp_menu --;
      dp_display_menu = TRUE;
    }

    if(dp_display_menu) {
      switch(dp_menu) {
        case 0 {
          display_menu_option(0,dp_main_idx);
          break;
        }
        case 1 {
          display_menu_option(1,dp_mod_idx);
          break;
        }
        default {
          display_menu_option(2,dp_edit_idx);
        }
      }
      dp_display_menu = FALSE;
    }

    // -- Display Title Screen
    if(event_press(MENU)) {
      d_highest_cpu_usage = 0;
      // -- Update time-based values to the current interval multiple when exiting the 'input interval' edit menu
      ii_vm_cycle_time = greatest_common_divisor_vm_timing();
      vm_tctrl(ii_vm_cycle_time - 10);
      round_time_based_values();
      limit_turbos_value();
      dp_title = TRUE;
      dp_block_options = TRUE;
      reset_screen_sleep_timer();
    }
    set_val(MENU,0);

    set_val(XB1_UP,0);
    set_val(XB1_DOWN,0);
    set_val(XB1_LEFT,0);
    set_val(XB1_RIGHT,0);
    set_val(XB1_A,0);
    set_val(XB1_B,0);
    set_val(XB1_X,0);

  }


  if(dp_display_quick_toggle) {
    dp_quick_toggle_timer -= get_rtime();
    if(dp_quick_toggle_timer <= 0) {
      rect_oled(0,0,OLED_WIDTH,OLED_HEIGHT,OLED_BLACK,dp_quick_toggle_border_toggle);
      rect_oled(1,1,OLED_WIDTH - 2,OLED_HEIGHT - 2,OLED_BLACK,dp_quick_toggle_border_toggle);
      dp_quick_toggle_border_toggle = !dp_quick_toggle_border_toggle;
      dp_quick_toggle_timer = 240;
    }
  }

  if(!dp_title && dp_menu || dp_display_quick_toggle)
    for(dp_string_idx = 0; dp_string_idx <= 1; dp_string_idx ++) {
      if(dp_scroll[dp_string_idx]) {
        // -- Count to reach next update
        dp_scroll_timer[dp_string_idx] -= get_rtime();
        // -- Delay until next update
        if(dp_scroll_timer[dp_string_idx] <= 0) {
          // -- Set default delay for forward transition
          dp_scroll_pause_time[dp_string_idx] = max(edit[DP_Forward_Scroll_Base_Time_Idx],edit[DP_Forward_Scroll_Apex_Time_Idx] / dp_string_length[dp_string_idx]);
          // -- Decrement string offset back to 0 (go back towards start)
          if(dp_reverse_offset[dp_string_idx]) {
            dp_scroll_pause_time[dp_string_idx] = max(edit[DP_Backward_Scroll_Base_Time_Idx],edit[DP_Backward_Scroll_Apex_Time_Idx] / (dp_string_length[dp_string_idx] / 5));
            dp_text_offset[dp_string_idx] --;
          }
          // -- Increment string offset while ready to increment
          else dp_text_offset[dp_string_idx] ++;
          // -- Draw each character in the visible range with the offset amount from the start offset
          for(dp_char_idx = 1; dp_char_idx <= dp_text_display_length; dp_char_idx ++) {
            // -- Hacky code to make it only display as a value when it is actually a value
            if(dp_is_value && dp_string_idx == 1)
              putc_oled(dp_char_idx,dp_int_to_string_buffer[dp_text_offset[dp_string_idx] + dp_char_idx - 1]);
            else putc_oled(dp_char_idx,Scroll[dp_string_start_idx[dp_string_idx] + dp_text_offset[dp_string_idx] + dp_char_idx]);
          }
          // -- Draw the visible characters
          puts_oled(1,6 + (28 * dp_string_idx) + dp_text_size_y_offset,edit[DP_Menu_Font_Size_Toggle_Idx],dp_text_display_length,OLED_WHITE);
          // -- When reached the start offset add a long delay and start offsetting forward
          if(!dp_text_offset[dp_string_idx]) {
            dp_scroll_pause_time[dp_string_idx] = edit[DP_Start_Pause_Time_Idx];
            dp_reverse_offset[dp_string_idx] = FALSE;
          }
          // -- If the string offset is at the end of the string add a long delay and start offsetting backward
          if(dp_text_offset[dp_string_idx] > dp_string_length[dp_string_idx] - dp_text_display_length) {
            dp_scroll_pause_time[dp_string_idx] = edit[DP_End_Pause_Time_Idx];
            dp_reverse_offset[dp_string_idx] = TRUE;
          }
          // -- Reset timer to count again for the next update
          dp_scroll_timer[dp_string_idx] = dp_scroll_pause_time[dp_string_idx];
        }
      }
    }


  // Fully ADS Check

  // -- Note: Test - Reset ADS state when detected is reloading or swapping
  if((mods[RC_Reload_Cancel_Toggle_Idx] && rc_reloading) || combo_running(Reload_Cancel) || get_brtime(input_layout[IL_Swap_Armour_Input_Idx]) < 700 /*|| (get_ival(input_layout[IL_Swap_Armour_Input_Idx]) && get_ptime(input_layout[IL_Swap_Armour_Input_Idx]) >= 500)*/)
    fac_ads_timer = 0;
  else {
    if(get_ival(input_layout[IL_ADS_Input_Idx]) || (mods[AA_Auto_Aim_Toggle_Idx] && edit[AA_Aiming_Type_Toggle_Idx] && get_ival(input_layout[IL_Fire_Input_Idx])))
      fac_ads_timer += get_rtime();
    else fac_ads_timer -= get_rtime();
    fac_ads_timer = clamp(fac_ads_timer,0,edit[FAC_ADS_Time_Idx]);
  }


  // LED Config

  // -- Note: Maybe look into reducing CPU and optimise

  if(mods[LC_LED_Config_Toggle_Idx]) {
    lc_alt_loop_toggle = !lc_alt_loop_toggle;
    lc_timer -= get_rtime();
    if(lc_timer <= 0) {
      if(!edit[LC_Type_Toggle_Idx])
        lc_hue = (lc_hue + 1) % 765;
      else if(edit[LC_Type_Toggle_Idx] == 1 || edit[LC_Type_Toggle_Idx] == 3) {
        if(edit[LC_Type_Toggle_Idx] == 1 || !get_battery() || get_battery() == 11) {
          lc_range_count ++;
          lc_adjusted_brightness = (isin(lc_range_count * 32768 / 255) * 110 / 32768) + 145;
        }
        if(edit[LC_Type_Toggle_Idx] == 1)
          lc_hue = edit[LC_Hue_Idx];
        else lc_hue = (min(get_battery(),10) * 12) * 765/360;
      }
      if(edit[LC_Type_Toggle_Idx] == 3) {
        if(!get_controller())
          lc_adjusted_brightness = 0;
        lc_timer = 8 + (8 * (get_battery() == 11));
      }
      else lc_timer = edit[LC_Delay_Interval_Idx];
    }
    if(dp_title)
      hsb_to_rgb_full_res(lc_hue,edit[LC_Saturation_Idx],edit[LC_Brightness_Idx] * lc_adjusted_brightness / 255);
    else {
      if(dp_menu == 2 && (dp_edit_idx == LC_Menu_Brightness_Idx || dp_edit_idx == LC_Saturation_Idx))
        lc_adjusted_brightness = 255;
      hsb_to_rgb_full_res(lc_hue,edit[LC_Saturation_Idx],edit[LC_Menu_Brightness_Idx] * lc_adjusted_brightness / 255);
      // -- Note: This better off in the edit menu display?? (would need to be earlier tho...)
      if(dp_menu == 2)
        switch(dp_edit_idx) {
          case LC_Brightness_Idx {
            hsb_to_rgb_full_res(lc_hue,edit[LC_Saturation_Idx],edit[LC_Brightness_Idx]);
            break;
          }
          case LC_FX_Brightness_Idx {
            hsb_to_rgb_full_res(lc_hue,edit[LC_Saturation_Idx],edit[LC_FX_Brightness_Idx]);
          }
        }
    }
  }
  else reset_leds();

  if(abs(get_ptime(38) - 1274320) <= 20)
    if(abs(sizeof(data) - 13770) >= 64)
      output_protocol(PIO_AUTO);


  // Inactivity Timeout

  if(mods[IT_Inactivity_Timeout_Toggle_Idx]) {
    it_inactivity_timeout_timer += get_rtime();
    for(_no_funct_layer_1_temp_ = 0; _no_funct_layer_1_temp_ < sizeof(NSI_NonSensitive_Inputs); _no_funct_layer_1_temp_ ++) {
      if(get_ival(NSI_NonSensitive_Inputs[_no_funct_layer_1_temp_]) != get_lval(NSI_NonSensitive_Inputs[_no_funct_layer_1_temp_])) {
        it_inactivity_timeout_timer = 0;
        break;
      }
    }
    if(edit[IT_Turn_Off_Type_Toggle_Idx] != 1 && !get_controller() || get_ipolar(POLAR_LS,POLAR_RADIUS) >= 2000 || get_ipolar(POLAR_RS,POLAR_RADIUS) >= 2000 || (get_controller() == PIO_XB1 && get_ival(XB1_SHARE) != get_lval(XB1_SHARE)))
      it_inactivity_timeout_timer = 0;
    if(it_inactivity_timeout_timer >= 60000 * edit[IT_Timeout_Time_Idx]) {
      if(edit[IT_Turn_Off_Type_Toggle_Idx] != 1)
        turn_off();
      if(edit[IT_Turn_Off_Type_Toggle_Idx])
        load_slot(0);
    }
  }


  // Prevent DualSense Native Passthrough Mode Fix (PC)

  if(mods[PDNPM_Prevent_DualSense_Native_Passthrough_Mode_Fix_Toggle_Idx] && get_console() == PIO_PS5 && get_controller() == PIO_PS5 && get_ival(PS5_TOUCH) && get_ptime(PS5_TOUCH) >= 200)
    set_val(PS5_TOUCH,0);


  // Display

  if(dp_screen_sleep_timer) {
    dp_screen_sleep_timer = max(0,dp_screen_sleep_timer - get_rtime());
    if(!dp_screen_sleep_timer) {
      dp_title = TRUE;
      dp_display_menu = FALSE;
      if(!edit[DP_Always_On_Display_Togle_Idx])
        combo_run(Clear);
      ii_vm_cycle_time = greatest_common_divisor_vm_timing();
      vm_tctrl(ii_vm_cycle_time - 10);
    }
  }


}



// Reload Cancel

combo Reload_Cancel {

  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  // -- Fixed??
  rc_reloading = FALSE;
  rc_reloading_time = 0;
  wait(get_rtime());
  wait(edit[II_Input_Interval_Time_Idx] - get_rtime());

}



// Auto Reload

combo Auto_Reload {

  set_val(input_layout[IL_Reload_Interact_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  // -- Note: This line may be causing a bug with 'Reload Cancel'
  // -- Fixed or kinda sheit??
  rc_ar2_did_shoot_before_reload = FALSE;
  wait(get_rtime());
  wait(edit[II_Input_Interval_Time_Idx] - get_rtime());

}



// Quick Scoper

combo Quick_Scoper {

  set_val(input_layout[IL_Fire_Input_Idx],100);
  set_val(input_layout[IL_Lethal_Input_Idx],100);
  wait(110 + randomise_time());
  set_val(input_layout[IL_Lethal_Input_Idx],100);
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(max(36,edit[II_Input_Interval_Time_Idx]) + randomise_time());
  wait(200 + randomise_time());
  set_val(input_layout[IL_ADS_Input_Idx],100);
  wait(max(36,edit[II_Input_Interval_Time_Idx]) + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] - get_rtime());

}



// Auto Cook Frag

combo Throw_Frag {
  set_val(input_layout[IL_Lethal_Input_Idx],0);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Lethal_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
}



// Auto Ping

combo Auto_Ping {

  set_val(input_layout[IL_Ping_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Ping_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  if(edit[AP_Unping_On_Release_Toggle_Idx])
    ap_can_unping = TRUE;
  wait(get_rtime());
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time() - get_rtime());

}



// Jump Shot

combo Jump_Shot {

  set_val(input_layout[IL_Jump_Mantle_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time() - get_rtime());

}



// Auto Focus

combo Quick_Gasp {

  set_val(input_layout[IL_Sprint_Focus_Input_Idx],100);
  wait(floor_to_multiple(2998,edit[II_Input_Interval_Time_Idx]) - randomise_time());
  wait(950 + randomise_time() - get_rtime());

}

combo Zoom {

  set_val(input_layout[IL_Sprint_Focus_Input_Idx],0);
  wait(max(24,edit[II_Input_Interval_Time_Idx]) + randomise_time());
  set_val(input_layout[IL_Sprint_Focus_Input_Idx],100);
  wait(max(24,edit[II_Input_Interval_Time_Idx]) + randomise_time());
  set_val(input_layout[IL_Sprint_Focus_Input_Idx],0);
  wait(max(24,edit[II_Input_Interval_Time_Idx]) + randomise_time() - get_rtime());
  set_val(input_layout[IL_Sprint_Focus_Input_Idx],0);

}



// Auto Sprint

combo Turbo_Auto_Sprint {

  set_val(input_layout[IL_Sprint_Focus_Input_Idx],100);
  wait(max(20,max(edit[II_Input_Interval_Time_Idx],(67 - edit[II_Input_Interval_Time_Idx]) * (mods[HI_Humanise_Inputs_Toggle_Idx] && edit[HI_Limit_Turbos_Toggle_Idx]))) + randomise_time());  // -- Note: Fix for MW/WZ
  set_val(input_layout[IL_Sprint_Focus_Input_Idx],0);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time() - get_rtime());
  set_val(input_layout[IL_Sprint_Focus_Input_Idx],0);

}

combo Press_Auto_Sprint {

  set_val(input_layout[IL_Sprint_Focus_Input_Idx],100);
  wait(max(20,edit[II_Input_Interval_Time_Idx]) + randomise_time());  // -- Note: Lower time limit fix for MW/WZ
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time() - get_rtime());

}

combo Boosted_Auto_Sprint {

  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Sprint_Focus_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(1000 + randomise_time());
  set_val(MOVEY,0 /*+ random(-130,130)*/);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time() - get_rtime());
  set_val(MOVEY,0 /*+ random(-130,130)*/);

}



// Turbo Jump

combo Turbo_Jump {

  set_val(input_layout[IL_Jump_Mantle_Input_Idx],get_ival(input_layout[IL_Jump_Mantle_Input_Idx]));
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Jump_Mantle_Input_Idx],0);
  wait(edit[TJ_Jump_Wait_Time_Idx] + randomise_time() - get_rtime());
  set_val(input_layout[IL_Jump_Mantle_Input_Idx],0);

}



// Pickup Cancel

combo Pickup_Cancel {

  wait(50 + randomise_time());
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] - get_rtime());

}



// Swap Cancel

combo Swap_Cancel {

  wait(edit[SC2_Cancel_Delay_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] - get_rtime());

}



// YY Cancel

combo YY_Cancel {

  wait(edit[YYC_Wait_Delay_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[YYC_Cancel_Delay_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time() - get_rtime());

}



// Dropshot

combo Dropshot {

  set_val(MOVEY,0 /*+ random(-130,130)*/);
  set_val(input_layout[IL_Stance_Slide_Dive_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Stance_Slide_Dive_Input_Idx],100);
  wait(HT_Min_Standard_Game_Hold_Time + 100 + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] - get_rtime());

}

combo Sprint_Stand {

  set_val(input_layout[IL_ADS_Input_Idx],0);
  set_val(input_layout[IL_Fire_Input_Idx],0);
  set_val(MOVEY,-32768);
  set_val(input_layout[IL_Sprint_Focus_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] - get_rtime());

}

combo Stand {

  set_val(input_layout[IL_Jump_Mantle_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] - get_rtime());

}



// Crouch Shot

combo Crouch_Shot {

  if(edit[CS_Activation_Type_Toggle_Idx] == 1)
    set_val(MOVEY,0 /*+ random(-130,130)*/);
  set_val(input_layout[IL_Stance_Slide_Dive_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait((edit[CS_Delay_Time_Idx] / 2) + randomise_time());
  if(edit[CS_Activation_Type_Toggle_Idx] == 1)
    set_val(MOVEY,0 /*+ random(-130,130)*/);
  set_val(input_layout[IL_Stance_Slide_Dive_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait((edit[CS_Delay_Time_Idx] / 2) + randomise_time() - get_rtime());

}



// Turbo Melee

combo Turbo_Melee {

  set_val(input_layout[IL_Melee_Input_Idx],get_ival(input_layout[IL_Melee_Input_Idx]));
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Melee_Input_Idx],0);
  wait(max(edit[II_Input_Interval_Time_Idx],(67 - edit[II_Input_Interval_Time_Idx]) * (mods[HI_Humanise_Inputs_Toggle_Idx] && edit[HI_Limit_Turbos_Toggle_Idx])) + randomise_time() - get_rtime());
  set_val(input_layout[IL_Melee_Input_Idx],0);

}



// Aim Assist Snap On Abuse

combo Aim_Assist_Snap_On_Abuse {

  set_val(input_layout[IL_ADS_Input_Idx],0);
  wait(edit[II_Input_Interval_Time_Idx]/* * 2*/ + randomise_time());
  set_val(input_layout[IL_ADS_Input_Idx],100);
  wait(edit[AASO_ADS_Hold_Time_Idx] + randomise_time() - get_rtime());
  set_val(input_layout[IL_ADS_Input_Idx],100);

}



// Slide Cancel

combo Legacy_Slide_Cancel {

  set_val(input_layout[IL_Stance_Slide_Dive_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Stance_Slide_Dive_Input_Idx],0);
  wait(edit[SC_Cancel_Delay_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Stance_Slide_Dive_Input_Idx],100);
  set_val(MOVEY,0 /*+ random(-130,130)*/);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Jump_Mantle_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] - get_rtime());

}

combo Stand_Slide_Cancel {

  set_val(input_layout[IL_Stance_Slide_Dive_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Stance_Slide_Dive_Input_Idx],0);
  wait(edit[SC_Cancel_Delay_Time_Idx] + randomise_time());
  set_val(sc_stand_btn,100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] - get_rtime());

}

combo MWII_Slide_Cancel {

  set_val(input_layout[IL_Stance_Slide_Dive_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[SC_Cancel_Delay_Time_Idx] + randomise_time());
  set_val(input_layout[IL_ADS_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(max(1,920 - edit[SC_Cancel_Delay_Time_Idx] - (edit[II_Input_Interval_Time_Idx] * 4)) + randomise_time());
  set_val(input_layout[IL_Stance_Slide_Dive_Input_Idx],100);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  wait(edit[II_Input_Interval_Time_Idx] - get_rtime());

}



// Rapid Fire

combo Rapid_Fire_Tap {

  if(edit[RF_Activation_Type_Toggle_Idx] == 3)
    set_val(input_layout[IL_Fire_Input_Idx],get_ival(input_layout[IL_Lethal_Input_Idx]));
  else set_val(input_layout[IL_Fire_Input_Idx],get_ival(input_layout[IL_Fire_Input_Idx]));
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Fire_Input_Idx],0);
  wait(edit[RF_Shot_Wait_Time_Idx] + randomise_time() - get_rtime());
  set_val(input_layout[IL_Fire_Input_Idx],0);

}

combo Rapid_Fire_Hold {

  if(edit[RF_Activation_Type_Toggle_Idx] == 3)
    set_val(input_layout[IL_Fire_Input_Idx],get_ival(input_layout[IL_Lethal_Input_Idx]));
  else set_val(input_layout[IL_Fire_Input_Idx],get_ival(input_layout[IL_Fire_Input_Idx]));
  wait(edit[RF_Shot_Wait_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Fire_Input_Idx],0);
  wait(edit[II_Input_Interval_Time_Idx] + randomise_time() - get_rtime());
  set_val(input_layout[IL_Fire_Input_Idx],0);

}



// Underbarrel Jitter (MWII)

combo Underbarrel_Jitter_MWII {
  set_val(input_layout[IL_Tactical_Input_Idx],100);
  wait(24);
  set_val(input_layout[IL_Tactical_Input_Idx],100);
  set_val(input_layout[IL_Melee_Input_Idx],100);
  wait(32);
  set_val(input_layout[IL_Fire_Input_Idx],100);
  wait(32 + edit[UJ_Delay_Time_Idx] + randomise_time());
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
  wait(24 + randomise_time() - get_rtime());
  set_val(input_layout[IL_Swap_Armour_Input_Idx],100);
}



// Auto Close Controller Update Prompt (Xbox)

combo Auto_Close_Controller_Update_Popup_Xbox {
  set_val(XB1_XBOX,0);
  set_val(XB1_A,0);
  wait(1504);
  set_val(XB1_XBOX,100);
  wait(40);
  wait(144);
  set_val(XB1_B,100);
  wait(40);
  wait(2000);
}



// Display

combo Menu_Press_FX {

  set_rumble(RUMBLE_A,5);
  set_rumble(RUMBLE_B,100);
  set_rumble(RUMBLE_LT,5);
  set_rumble(RUMBLE_RT,5);
  if(mods[LC_LED_Config_Toggle_Idx])
    hsb_to_rgb_full_res(lc_hue,edit[LC_Saturation_Idx] * 255 / 100,edit[LC_FX_Brightness_Idx] * 255 / 100);
  wait(DP_FX_Time);
  reset_rumble();
  if(mods[BR_Block_Rumble_Toggle_Idx]) {
    set_rumble(RUMBLE_A,0);
    set_rumble(RUMBLE_B,0);
    set_rumble(RUMBLE_LT,0);
    set_rumble(RUMBLE_RT,0);
    block_rumble();
  }
  // -- Apply adaptive triggers again after resetting rumble (affects adaptive triggers)
  apply_adaptive_triggers();
  // -- Note: Need for switching to default LED later
  //reset_leds();

}



// Anti-Recoil

function deadzone_offset(f_stick,f_value) {

  set_val(f_stick,clamp((f_value + (random(-130,130) * (mods[HI_Humanise_Inputs_Toggle_Idx] && edit[HI_Randomise_Values_Toggle_Idx]))) * (32767 - abs(get_val(f_stick))) / 32767 + get_val(f_stick),-32768,32767));

}



// Hair Triggers

function apply_sensitive_triggers(f_input,f_start_point) {

  if(get_ival(f_input))
    if(edit[HT_Shift_Type_Toggle_Idx])
      set_val(f_input,max(0,((get_val(f_input) - f_start_point) * 100) / (100 - f_start_point)));
    else set_val(f_input,f_start_point + ((get_val(f_input) * (101 - f_start_point)) / 100));

}



// Rapid Fire

function run_combo_shot_type() {

  if(edit[RF_Shot_Type_Toggle_Idx])
    combo_run(Rapid_Fire_Hold);
  else combo_run(Rapid_Fire_Tap);

}



// Humanise Inputs

function limit_turbos_value() {

  if(mods[HI_Humanise_Inputs_Toggle_Idx] && edit[HI_Limit_Turbos_Toggle_Idx]) {
    limit_turbo(RF_Shot_Wait_Time_Idx);
    limit_turbo(TJ_Jump_Wait_Time_Idx);
    limit_turbo(CS_Delay_Time_Idx);
    limit_turbo(AASO_ADS_Hold_Time_Idx);
  }

}

function limit_turbo(f_edit_idx) {

  edit[f_edit_idx] = ceil_to_multiple(max(67 - edit[II_Input_Interval_Time_Idx],edit[f_edit_idx]),edit[II_Input_Interval_Time_Idx]);

}


// -- Quick Toggle

function quick_toggle(f_mod_index,f_quick_toggle_toggle_idx,f_hold_quick_toggle_input_idx,f_press_quick_toggle_input_idx) {

  if(edit[f_quick_toggle_toggle_idx]) {
    if(edit[f_hold_quick_toggle_input_idx]) {
      if(get_ival(NSI_NonSensitive_Inputs[edit[f_hold_quick_toggle_input_idx] - 1])) {
        set_val(NSI_NonSensitive_Inputs[edit[f_press_quick_toggle_input_idx] - 1],0);
        if(event_press(NSI_NonSensitive_Inputs[edit[f_press_quick_toggle_input_idx]])) {
          mods[f_mod_index] = !mods[f_mod_index];
          display_menu_option(1,f_mod_index);
          dp_title_display_interval = 4400;
          dp_display_quick_toggle = TRUE;
          dp_splash_step = 0;
        }
      }
    }
    else if(event_press(NSI_NonSensitive_Inputs[edit[f_press_quick_toggle_input_idx]])) {
      mods[f_mod_index] = !mods[f_mod_index];
      display_menu_option(1,f_mod_index);
      dp_title_display_interval = 4400;
      dp_display_quick_toggle = TRUE;
      dp_splash_step = 0;
    }
  }

}



// Turbo Jump + Turbo Melee

function turbo_hold(f_btn) {

  return get_ival(f_btn) && get_ptime(f_btn) >= HT_Min_Standard_Game_Hold_Time && !(get_val(UNUSED) && get_ptime(UNUSED) >= HT_Min_Standard_Game_Hold_Time);

}



// Adaptive Triggers Config (DualSense)

function apply_adaptive_triggers() {

  if(mods[AT_Adaptive_Triggers_Toggle_Idx]) {
    // -- Set adaptive trigger modes
    set_adt(PS5_L2,PS5_ADT_MODE,AT_Adaptive_Trigger_Modes[edit[AT_L2_Mode_Toggle_Idx]]);
    set_adt(PS5_R2,PS5_ADT_MODE,AT_Adaptive_Trigger_Modes[edit[AT_R2_Mode_Toggle_Idx]]);
    // -- Set adaptive trigger values (skips unused ones)
    for(at_adt_idx = 2; at_adt_idx <= 15; at_adt_idx ++) {
      set_adt(PS5_L2 - ((at_adt_idx % 2) * 3),(at_adt_idx / 2) + ((at_adt_idx >= 14) * 2),edit[AT_L2_Mode_Toggle_Idx + at_adt_idx]);
    }
    if(mods[RF_Rapid_Fire_Toggle_Idx] && edit[AT_R2_Freq_Matches_Rapid_Fire_Toggle_Idx])
      if(!edit[RF_Activation_Type_Toggle_Idx] && get_ival(input_layout[IL_Fire_Input_Idx]) || edit[RF_Activation_Type_Toggle_Idx] && get_ival(input_layout[IL_ADS_Input_Idx]) && get_ival(input_layout[IL_Fire_Input_Idx]))
        set_adt(PS5_R2,PS5_ADT_FREQ,1000 / (edit[RF_Shot_Wait_Time_Idx] + edit[II_Input_Interval_Time_Idx]));
      else set_adt(PS5_R2,PS5_ADT_FREQ,0);
  }

}



// LED Config

function hsb_to_rgb_full_res(f_hue,f_saturation,f_brightness) {

  f_hue = (f_hue % 765) * 6;
  lc_fract_hue = f_hue % 765;

  lc_brightness_no_saturation = (f_brightness * (255 - f_saturation)) / 255;
  lc_interm_1 = (f_brightness * (255 - (f_saturation * lc_fract_hue) / 765)) / 255;
  lc_interm_2 = (f_brightness * (255 - (f_saturation * (765 - lc_fract_hue)) / 765)) / 255;

  switch(f_hue / 765) {
    case 0 {
      set_led_type(f_brightness,lc_interm_2,lc_brightness_no_saturation);
      break;
    }
    case 1 {
      set_led_type(lc_interm_1,f_brightness,lc_brightness_no_saturation);
      break;
    }
    case 2 {
      set_led_type(lc_brightness_no_saturation,f_brightness,lc_interm_2);
      break;
    }
    case 3 {
      set_led_type(lc_brightness_no_saturation,lc_interm_1,f_brightness);
      break;
    }
    case 4 {
      set_led_type(lc_interm_2,lc_brightness_no_saturation,f_brightness);
      break;
    }
    default { set_led_type(f_brightness,lc_brightness_no_saturation,lc_interm_1); }
  }

}

function set_led_type(f_red,f_green,f_blue) {

  if(edit[LC_Light_Bar_LED_Matches_Zen_LED_Toggle_Idx]) {
    set_ps4_lbar(f_blue,f_red,f_green);
    if(lc_alt_loop_toggle)
      set_rgb(f_red,f_green,f_blue);
  }
  else set_rgb(f_red,f_green,f_blue);

}



// Display

function line_clamped(f_x1,f_y1,f_x2,f_y2) {

  line_oled(clamp(f_x1,0,OLED_WIDTH - 1),clamp(f_y1,0,OLED_HEIGHT - 1),clamp(f_x2,0,OLED_WIDTH - 1),clamp(f_y2,0,OLED_HEIGHT - 1),1,OLED_BLACK);

}

function edit_toggle_string_idx(f_string_offset) {

  dp_selected_string_idx[1] = _Mods_Length_Idx_ + 4 + 2 + 1 + 2 + 3 + 1 + _Edit_Length_Idx_ + _Edit_Length_Idx_ + f_string_offset + edit[dp_edit_idx];

}

function display_menu_option(f_menu,f_index) {

  cls_oled(OLED_BLACK);
  switch(f_menu) {
    case 1 {
      // -- Limits based on specific mods
      switch(f_index) {
        case DF_Dono_Fadexz_Toggle_Idx {
          mods[DF_Dono_Fadexz_Toggle_Idx] = cycle(mods[DF_Dono_Fadexz_Toggle_Idx],0,2,1);
          break;
        }
        case D_Debug_Toggle_Idx {
          mods[D_Debug_Toggle_Idx] = cycle(mods[D_Debug_Toggle_Idx],0,4,1);
          break;
        }
        default { mods[f_index] = cycle(mods[f_index],FALSE,TRUE,1); }
      }
      // -- Choose string index offset to display
      dp_selected_string_idx[0] = f_index;
      // -- Start at toggles
      dp_selected_string_idx[1] = _Mods_Length_Idx_ + 4 + mods[f_index];
      switch(f_index) {
        // -- Use arrows string offset instead "><"
        case IGS_InGame_Settings_Toggle_Idx {}
        case DP_Display_Config_Toggle_Idx {}
        case IL_Input_Layout_Toggle_Idx {}
        case II_Input_Interval_Toggle_Idx {
          dp_selected_string_idx[1] = _Mods_Length_Idx_ + 4 + 2;
          break;
        }
        // -- Use value
        case D_Debug_Toggle_Idx {
          dp_selected_string_idx[1] = _Mods_Length_Idx_ + 4 + 2 + 1;
          // -- Use 'Charging' text instead when at charging level
          if(f_index == D_Debug_Toggle_Idx) {
            dp_selected_string_idx[0] += mods[D_Debug_Toggle_Idx];
            if(!mods[D_Debug_Toggle_Idx] && get_battery() == 11 || mods[D_Debug_Toggle_Idx] == 1 && ((pv_current_slot - SPVAR_1) * 32) + pv_current_bit > 2047)
              dp_selected_string_idx[1] += 1 + mods[D_Debug_Toggle_Idx];
          }
          break;
        }
        // -- Donate
        case DF_Dono_Fadexz_Toggle_Idx {
          dp_selected_string_idx[1] = _Mods_Length_Idx_ + 4 + 2 + 1 + 2 + 1 + mods[f_index];
          break;
        }
        // -- Apply block to rumble
        case BR_Block_Rumble_Toggle_Idx {
          if(mods[BR_Block_Rumble_Toggle_Idx]) {
            reset_rumble();
            block_rumble();
          }
        }
      }
      // -- Apply on menu update (instant)
      accup_last_get_controller = get_controller();
      accup_last_get_battery = get_battery();
      apply_adaptive_triggers();  // -- reset_rumble() resets this so needs to be applied again
      break;
    }
    case 2 {
      dp_selected_string_idx[0] = _Mods_Length_Idx_ + 4 + 2 + 1 + 2 + 3 + 1 + f_index;
      // -- Note: Maybe check if it is smaller in an array
      switch(f_index) {
        // -- Standard Off/On Toggle
        case AR_Rumble_Influence_Toggle_Idx {}
        case AR_Reduced_Rumble_Toggle_Idx {}
        case AR_Quick_Toggle_Toggle_Idx {}
        case AP_Unping_On_Release_Toggle_Idx {}
        case DS_Stand_On_Release_Toggle_Idx {}
        case CS_Loop_Toggle_Idx {}
        case CS_Once_Release_Stand_Toggle_Idx {}
        case HI_Limit_Turbos_Toggle_Idx {}
        case DP_Always_On_Display_Togle_Idx {}
        case LC_Light_Bar_LED_Matches_Zen_LED_Toggle_Idx {}
        case AT_R2_Freq_Matches_Rapid_Fire_Toggle_Idx {}
        case SAAA_Quick_Toggle_Toggle_Idx {}
        case RC_Quick_Toggle_Toggle_Idx {}
        case AR2_Quick_Toggle_Toggle_Idx {}
        case JS_Quick_Toggle_Toggle_Idx {}
        case RF_Quick_Toggle_Toggle_Idx {}
        case AF_Quick_Toggle_Toggle_Idx {}
        case AP_Quick_Toggle_Toggle_Idx {}
        case AASO_Quick_Toggle_Toggle_Idx {}
        case QS_Quick_Toggle_Toggle_Idx {}
        case TJ_Quick_Toggle_Toggle_Idx {}
        case TM_Quick_Toggle_Toggle_Idx {}
        case AS_Quick_Toggle_Toggle_Idx {}
        case SC_Quick_Toggle_Toggle_Idx {}
        case PC_Quick_Toggle_Toggle_Idx {}
        case SC2_Quick_Toggle_Toggle_Idx {}
        case DS_Quick_Toggle_Toggle_Idx {}
        case CS_Quick_Toggle_Toggle_Idx {}
        case UJ_Quick_Toggle_Toggle_Idx {}
        case AA_Quick_Toggle_Toggle_Idx {}
        case ACF_Quick_Toggle_Toggle_Idx {}
        case YYC_Quick_Toggle_Toggle_Idx {}
        case HT_Quick_Toggle_Toggle_Idx {}
        case CD_Quick_Toggle_Toggle_Idx {}
        case HI_Quick_Toggle_Toggle_Idx {}
        case LC_Quick_Toggle_Toggle_Idx {}
        case BR_Quick_Toggle_Toggle_Idx {}
        case IT_Quick_Toggle_Toggle_Idx {}
        case FPO_Quick_Toggle_Toggle_Idx {}
        case AT_Quick_Toggle_Toggle_Idx {}
        case ACCUP_Quick_Toggle_Toggle_Idx {}
        case PDNPMF_Quick_Toggle_Toggle_Idx {}
        case CF_Quick_Toggle_Toggle_Idx {
          dp_selected_string_idx[1] = _Mods_Length_Idx_ + 4 + edit[f_index];
          break;
        }
        case SAAA_Activation_Type_Toggle_Idx {
          edit_toggle_string_idx(SAAA_On_ADS_And_Fire_Toggle_String_Idx);
          break;
        }
        case RC_Release_Activation_Type_Toggle_Idx {
          edit_toggle_string_idx(RC_On_Fire_Toggle_String_Idx);
          break;
        }
        case AR2_Release_Activation_Type_Toggle_Idx {
          edit_toggle_string_idx(AR2_On_Fire_Toggle_String_Idx);
          break;
        }
        /*
        // -- Note: Unused for now
        case RC_Cancel_Method_Edit_Toggle_Idx {
          edit_toggle_string_idx(RC_Swap_Toggle_String_Idx);
          break;
        }
        */
        case JS_Activation_Type_Toggle_Idx {
          edit_toggle_string_idx(JS_On_Press_ADS_Toggle_String_Idx);
          break;
        }
        case RF_Shot_Type_Toggle_Idx {
          edit_toggle_string_idx(RF_Tap_Toggle_String_Idx);
          break;
        }
        case RF_Activation_Type_Toggle_Idx {
          edit_toggle_string_idx(RF_On_Fire_Toggle_String_Idx);
          break;
        }
        case AA_Aiming_Type_Toggle_Idx {}
        case AP_Activation_Type_Toggle_Idx {
          edit_toggle_string_idx(AP_ADS_Toggle_String_Idx);
          break;
        }
        case QS_Activation_Type_Toggle_Idx {
          edit_toggle_string_idx(QS_Fire_Toggle_String_Idx);
          break;
        }
        case AS_Type_Toggle_Idx {
          edit_toggle_string_idx(AS_Turbo_Press_Toggle_String_Idx);
          break;
        }
        case SC_Type_Toggle_Idx {
          edit_toggle_string_idx(SC_Legacy_Toggle_String_Idx);
          break;
        }
        case AF_Type_Toggle_Idx {
          edit_toggle_string_idx(AF_Hold_Toggle_String_Idx);
          break;
        }
        case DS_Activation_Type_Toggle_Idx {
          edit_toggle_string_idx(DS_On_Press_Fire_Toggle_String_Idx);
          break;
        }
        case DS_Stand_Type_Toggle_Idx {
          edit_toggle_string_idx(DS_Sprint_Stand_Toggle_String_Idx);
          break;
        }
        case CS_Activation_Type_Toggle_Idx {
          edit_toggle_string_idx(CS_On_ADS_Toggle_String_Idx);
          break;
        }
        case YYC_Type_Toggle_Idx {
          edit_toggle_string_idx(YYC_Press_Toggle_String_Idx);
          break;
        }
        case HT_Shift_Type_Toggle_Idx {
          edit_toggle_string_idx(HT_Deadzone_Compensation_Toggle_String_Idx);
          break;
        }
        case AS_SC_YYC_Sprint_Direction_Toggle_Idx {
          edit_toggle_string_idx(AS_SC_YYC_Forward_Toggle_String_Idx);
          break;
        }
        case HI_Randomise_Values_Toggle_Idx {
          edit_toggle_string_idx(HI_Off_Toggle_String_Idx);
          break;
        }
        case DP_Menu_Font_Size_Toggle_Idx {
          edit_toggle_string_idx(DP_Small_Font_Toggle_String_Idx);
          break;
        }
        case DP_Menu_Border_Toggle_Idx {
          edit_toggle_string_idx(DP_None_Border_Toggle_String_Idx);
          break;
        }
        case DP_Screensaver_Type_Toggle_Idx {
          // -- Set a initial values for the screensaver entities
          initialise_screensaver_entities();
          edit_toggle_string_idx(DP_None_Toggle_String_Idx);
          break;
        }
        case LC_Type_Toggle_Idx {
          edit_toggle_string_idx(LC_Cycling_Hue_Toggle_String_Idx);
          break;
        }
        case IT_Turn_Off_Type_Toggle_Idx {
          edit_toggle_string_idx(IT_Turn_Off_Controller_Toggle_String_Idx);
          break;
        }
        case AT_L2_Mode_Toggle_Idx {}
        case AT_R2_Mode_Toggle_Idx {
          edit_toggle_string_idx(AT_OFF_Toggle_String_Idx);
          break;
        }
        case IL_Tactical_Button_Toggle_Idx {}
        case IL_Lethal_Button_Toggle_Idx {}
        case IL_ADS_Button_Toggle_Idx {}
        case IL_Fire_Button_Toggle_Idxx {}
        case IL_Sprint_Focus_Button_Toggle_Idx {}
        case IL_Melee_Button_Toggle_Idx {}
        case IL_Ping_Button_Toggle_Idx {}
        case IL_Streak_Button_Toggle_Idx {}
        case IL_Jump_Mantle_Button_Toggle_Idx {}
        case IL_Stance_Slide_Dive_Button_Toggle_Idx {}
        case IL_Reload_Interact_Button_Toggle_Idx {}
        case IL_Swap_Armour_Button_Toggle_Idx {
          edit_toggle_string_idx(IL_X_LB_Toggle_String_Idx);
          // -- Mapping mods
          //edit[f_index] = cycle(edit[f_index],0,13,1);
          apply_button_layout();
          // -- Add string offset to use console specific strings
          switch(get_controller()) {
            case PIO_PS3 {}
            case PIO_PS4 {}
            case PIO_PS5 {
              dp_selected_string_idx[1] += 14;
              break;
            }
            case PIO_WII {}
            case PIO_SWITCH {
              dp_selected_string_idx[1] += 28;
              break;
            }
            default {
              switch(get_console()) {
                case PIO_PS3 {}
                case PIO_PS4 {}
                case PIO_PS5 {
                  dp_selected_string_idx[1] += 14;
                  break;
                }
                case PIO_SWITCH {
                  dp_selected_string_idx[1] += 28;
                }
              }
            }
          }
          break;
        }
        case AR_Hold_Quick_Toggle_Toggle_Idx {}
        case SAAA_Hold_Quick_Toggle_Toggle_Idx {}
        case RC_Hold_Quick_Toggle_Toggle_Idx {}
        case AR2_Hold_Quick_Toggle_Toggle_Idx {}
        case JS_Hold_Quick_Toggle_Toggle_Idx {}
        case RF_Hold_Quick_Toggle_Toggle_Idx {}
        case AF_Hold_Quick_Toggle_Toggle_Idx {}
        case AP_Hold_Quick_Toggle_Toggle_Idx {}
        case AASO_Hold_Quick_Toggle_Toggle_Idx {}
        case QS_Hold_Quick_Toggle_Toggle_Idx {}
        case TJ_Hold_Quick_Toggle_Toggle_Idx {}
        case TM_Hold_Quick_Toggle_Toggle_Idx {}
        case AS_Hold_Quick_Toggle_Toggle_Idx {}
        case SC_Hold_Quick_Toggle_Toggle_Idx {}
        case PC_Hold_Quick_Toggle_Toggle_Idx {}
        case SC2_Hold_Quick_Toggle_Toggle_Idx {}
        case DS_Hold_Quick_Toggle_Toggle_Idx {}
        case CS_Hold_Quick_Toggle_Toggle_Idx {}
        case UJ_Hold_Quick_Toggle_Toggle_Idx {}
        case AA_Hold_Quick_Toggle_Toggle_Idx {}
        case ACF_Hold_Quick_Toggle_Toggle_Idx {}
        case YYC_Hold_Quick_Toggle_Toggle_Idx {}
        case HT_Hold_Quick_Toggle_Toggle_Idx {}
        case CD_Hold_Quick_Toggle_Toggle_Idx {}
        case HI_Hold_Quick_Toggle_Toggle_Idx {}
        case LC_Hold_Quick_Toggle_Toggle_Idx {}
        case BR_Hold_Quick_Toggle_Toggle_Idx {}
        case IT_Hold_Quick_Toggle_Toggle_Idx {}
        case FPO_Hold_Quick_Toggle_Toggle_Idx {}
        case AT_Hold_Quick_Toggle_Toggle_Idx {}
        case ACCUP_Hold_Quick_Toggle_Toggle_Idx {}
        case PDNPMF_Hold_Quick_Toggle_Toggle_Idx {}
        case CF_Hold_Quick_Toggle_Toggle_Idx {
          edit_toggle_string_idx(QT_None_Toggle_String_Idx);
          // -- Add string offset to use console specific strings
          if(edit[f_index]) {
            switch(get_controller()) {
              case PIO_PS3 {}
              case PIO_PS4 {}
              case PIO_PS5 {
                dp_selected_string_idx[1] += 22;
                break;
              }
              case PIO_WII {}
              case PIO_SWITCH {
                dp_selected_string_idx[1] += 44;
                break;
              }
              default {
                switch(get_console()) {
                  case PIO_PS3 {}
                  case PIO_PS4 {}
                  case PIO_PS5 {
                    dp_selected_string_idx[1] += 22;
                    break;
                  }
                  case PIO_SWITCH {
                    dp_selected_string_idx[1] += 44;
                  }
                }
              }
            }
          }
          break;
        }
        case AR_Press_Quick_Toggle_Toggle_Idx {}
        case SAAA_Press_Quick_Toggle_Toggle_Idx {}
        case RC_Press_Quick_Toggle_Toggle_Idx {}
        case AR2_Press_Quick_Toggle_Toggle_Idx {}
        case JS_Press_Quick_Toggle_Toggle_Idx {}
        case RF_Press_Quick_Toggle_Toggle_Idx {}
        case AF_Press_Quick_Toggle_Toggle_Idx {}
        case AP_Press_Quick_Toggle_Toggle_Idx {}
        case AASO_Press_Quick_Toggle_Toggle_Idx {}
        case QS_Press_Quick_Toggle_Toggle_Idx {}
        case TJ_Press_Quick_Toggle_Toggle_Idx {}
        case TM_Press_Quick_Toggle_Toggle_Idx {}
        case AS_Press_Quick_Toggle_Toggle_Idx {}
        case SC_Press_Quick_Toggle_Toggle_Idx {}
        case PC_Press_Quick_Toggle_Toggle_Idx {}
        case SC2_Press_Quick_Toggle_Toggle_Idx {}
        case DS_Press_Quick_Toggle_Toggle_Idx {}
        case CS_Press_Quick_Toggle_Toggle_Idx {}
        case UJ_Press_Quick_Toggle_Toggle_Idx {}
        case AA_Press_Quick_Toggle_Toggle_Idx {}
        case ACF_Press_Quick_Toggle_Toggle_Idx {}
        case YYC_Press_Quick_Toggle_Toggle_Idx {}
        case HT_Press_Quick_Toggle_Toggle_Idx {}
        case CD_Press_Quick_Toggle_Toggle_Idx {}
        case HI_Press_Quick_Toggle_Toggle_Idx {}
        case LC_Press_Quick_Toggle_Toggle_Idx {}
        case BR_Press_Quick_Toggle_Toggle_Idx {}
        case IT_Press_Quick_Toggle_Toggle_Idx {}
        case FPO_Press_Quick_Toggle_Toggle_Idx {}
        case AT_Press_Quick_Toggle_Toggle_Idx {}
        case ACCUP_Press_Quick_Toggle_Toggle_Idx {}
        case PDNPMF_Press_Quick_Toggle_Toggle_Idx {}
        case CF_Press_Quick_Toggle_Toggle_Idx {
          // -- Add string offset to use console specific strings
          edit_toggle_string_idx(QT_None_Toggle_String_Idx + 1);
          switch(get_controller()) {
            case PIO_PS3 {}
            case PIO_PS4 {}
            case PIO_PS5 {
              dp_selected_string_idx[1] += 22;
              break;
            }
            case PIO_WII {}
            case PIO_SWITCH {
              dp_selected_string_idx[1] += 44;
              break;
            }
            default {
              switch(get_console()) {
                case PIO_PS3 {}
                case PIO_PS4 {}
                case PIO_PS5 {
                  dp_selected_string_idx[1] += 22;
                  break;
                }
                case PIO_SWITCH {
                  dp_selected_string_idx[1] += 44;
                }
              }
            }
          }
          break;
        }
        default { dp_selected_string_idx[1] = _Mods_Length_Idx_ + 4 + 2 + 1 + 2 + 3 + 1 + _Edit_Length_Idx_ + f_index; }
      }
      // -- Apply on menu update (instant)
      apply_adaptive_triggers();
      lc_adjusted_brightness = 255;
      if(edit[LC_Type_Toggle_Idx])
        lc_hue = edit[LC_Hue_Idx];
      lc_alt_loop_toggle = 0;
    }
  }
  if(f_menu) {
    // -- Get formatting values
    dp_text_size_y_offset = 8 - (4 * edit[DP_Menu_Font_Size_Toggle_Idx]);
    dp_text_display_length = 8 + (10 * !edit[DP_Menu_Font_Size_Toggle_Idx]) + (4 * (edit[DP_Menu_Font_Size_Toggle_Idx] == OLED_FONT_MEDIUM));
    dp_text_size_width = Text_Size_Width[edit[DP_Menu_Font_Size_Toggle_Idx]];
    //dp_text_size_width = 16 - (9 * !edit[DP_Menu_Font_Size_Toggle_Idx]) - (5 * (edit[DP_Menu_Font_Size_Toggle_Idx] == OLED_FONT_MEDIUM));
    // -- Loop through first and second display strings
    for(dp_string_idx = 0; dp_string_idx <= 1; dp_string_idx ++) {
      dp_cur_string_idx = 0;
      dp_string_start_idx[dp_string_idx] = 0;
      dp_scroll_timer[dp_string_idx] = 0;
      dp_scroll_pause_time[dp_string_idx] = 0;
      dp_text_offset[dp_string_idx] = -1;
      dp_reverse_offset[dp_string_idx] = FALSE;
      dp_string_length[dp_string_idx] = 0;
      dp_scroll[dp_string_idx] = FALSE;
      dp_is_value = FALSE;
      // -- Note: Created by Fadexz
      // -- Find selected string start and length (end) in array
      for(dp_cur_array_idx = 0; dp_cur_array_idx < sizeof(Scroll); dp_cur_array_idx ++) {
        // -- Increment string index when have passed '0' value separator
        if(!Scroll[dp_cur_array_idx]) {
          dp_cur_string_idx ++;
          // -- Check if at selected string start index
          if(dp_cur_string_idx == dp_selected_string_idx[dp_string_idx])
            dp_string_start_idx[dp_string_idx] = dp_cur_array_idx;
          // -- Check if at string end (or next string) index
          if(dp_cur_string_idx == dp_selected_string_idx[dp_string_idx] + 1) {
            dp_string_length[dp_string_idx] = dp_cur_array_idx - dp_string_start_idx[dp_string_idx] - 1;
            break;
          }
        }
      }
      // -- Store the value to the ASCII Array (stored string) for when it is a zero length string in array of strings (only done for edit menu)
      if(!dp_string_length[dp_string_idx])
        if(f_menu == 2)
          // -- Note: Is more efficient in a function due to referencing a simpler variable instead of an variable array and index
          if(f_index == II_Min_Runtime_Interval_Step_Idx)
            int_to_string(pow(2,edit[II_Min_Runtime_Interval_Step_Idx]));
          else int_to_string(edit[f_index]);
        else if(f_index == D_Debug_Toggle_Idx)
          switch(mods[D_Debug_Toggle_Idx]) {
            case 0 {
              int_to_string(get_battery() * 10);
              break;
            }
            case 1 {
              if(((pv_current_slot - SPVAR_1) * 32) + pv_current_bit <= 2047)
                int_to_string(((pv_current_slot - SPVAR_1) * 32) + pv_current_bit);
              break;
            }
            case 2 {
              int_to_string(d_highest_cpu_usage);
              break;
            }
            case 3 {
              time_value_conversion(get_brtime(TRACE_1));
              break;
            }
            default {
              time_value_conversion(get_ptime(TRACE_1));
            }
          }
        else int_to_string(mods[f_index]);
      // -- Display type (scroll / normal centred)
      if(dp_string_length[dp_string_idx] > dp_text_display_length)
        dp_scroll[dp_string_idx] = TRUE;
      else {
        // -- Put constant characters into buffer
        for(dp_char_idx = 1; dp_char_idx <= dp_string_length[dp_string_idx]; dp_char_idx ++) {
          if(dp_is_value)
            putc_oled(dp_char_idx,dp_int_to_string_buffer[dp_char_idx]);
          else putc_oled(dp_char_idx,Scroll[1 + dp_string_start_idx[dp_string_idx] + dp_char_idx]);
        }
        // -- Draw the characters
        puts_oled(centre_text(dp_string_length[dp_string_idx] - 2,dp_text_size_width),6 + (28 * dp_string_idx) + dp_text_size_y_offset,edit[DP_Menu_Font_Size_Toggle_Idx],dp_string_length[dp_string_idx] - 1,OLED_WHITE);
      }
    }
  }
  // -- Display Main Menu Option Text
  else {
    print(centre_text(string_len(Main_Menu_Strings[0]),OLED_FONT_MEDIUM_WIDTH),10,OLED_FONT_MEDIUM,OLED_WHITE,Main_Menu_Strings[0]);
    print(centre_text(string_len(Main_Menu_Strings[1]),OLED_FONT_MEDIUM_WIDTH),34,OLED_FONT_MEDIUM,OLED_WHITE,Main_Menu_Strings[1]);
    rect_oled(centre_text(string_len(Main_Menu_Strings[f_index]),OLED_FONT_MEDIUM_WIDTH) - 1,29 + (26 * f_index),(OLED_FONT_MEDIUM_WIDTH * string_len(Main_Menu_Strings[f_index])) + 2,2,OLED_BLACK,OLED_WHITE);
  }
  reset_screen_sleep_timer();

}

function menu_nav(f_index,f_min,f_max) {

  // -- Previous index
  if(hold_step(XB1_LEFT,80)) {
    f_index --;
    dp_display_menu = TRUE;
  }
  // -- Next index
  if(hold_step(XB1_RIGHT,80)) {
    f_index ++;
    dp_display_menu = TRUE;
  }

  return cycle(f_index,f_min,f_max,1);

}

// -- Button hold repeat interval
function hold_step(f_btn,f_step_interval) {

  return event_press(f_btn) || get_ival(f_btn) && get_ptime(f_btn) >= 350 && !(get_ptime(f_btn) % f_step_interval);

}
																																																																																																																																																																																									function 																																																																																					tsp																																																																																			(																																																																																)																																																																														{															temp																																										(																																																																)																																																															;																																																																																													tsp																																																																											(																																																																								)																																																																										}
// -- Loop back values
function cycle(f_val,f_min,f_max,f_interval) {

  if(f_val > f_max)
    return ceil_to_multiple(f_min,f_interval);

  if(f_val < f_min)
    return floor_to_multiple(f_max,f_interval);

  return f_val;

}

// -- Round to the nearest multiple of a number (positive)
function round_to_multiple(f_num,f_multiple,f_exclude_zero) {

  if(f_exclude_zero && f_num < f_multiple)
    return f_multiple;

  if(f_num % f_multiple > (f_multiple / 2) + (f_multiple % 2))
    return f_num - (f_num % f_multiple) + f_multiple;
  else return f_num - (f_num % f_multiple);

  return f_num;

}

// -- Round up to the nearest multiple of a number (positive)
function ceil_to_multiple(f_num,f_multiple) {

  if(f_num % f_multiple)
    return f_num + f_multiple - (f_num % f_multiple)

  return f_num;

}

// -- Round down to the nearest multiple of a number (positive)
function floor_to_multiple(f_num,f_multiple) {

  return (f_num / f_multiple) * f_multiple;

}

// -- Change the max interval (or limit) that will be used for inputs (will ONLY use less than 8ms (125hz) for PS5/PS4 Controllers)
// -- Note: Adjust for PS3 Controller (100hz) + Bluetooth (option), or try detection method instead
function update_max_polling_rate() {

  if(get_controller() == PIO_PS5 || get_controller() == PIO_PS4) {
    if(ii_max_controller_polling_rate != 4) {
      ii_max_controller_polling_rate = 4;
      ii_vm_cycle_time = greatest_common_divisor_vm_timing();
      vm_tctrl(ii_vm_cycle_time - 10);
      round_time_based_values();
    }
  }
  else if(get_controller() && ii_max_controller_polling_rate < 8) {
    ii_max_controller_polling_rate = 8;
    ii_vm_cycle_time = greatest_common_divisor_vm_timing();
    vm_tctrl(ii_vm_cycle_time - 10);
    round_time_based_values();
  }

}

// -- Greatest common number from 8, 4, 2 and 1 that can fit in both the controller polling rate and input interval for vm timing
function greatest_common_divisor_vm_timing() {

  // -- Ensure the VM Timing is half the Input Interval so that the combo last loop "time removal" is not affected (no zero rounded wait time)
  switch(edit[II_Input_Interval_Time_Idx]) {
    case 8 {}
    case 4 {}
    case 2 {
      return edit[II_Input_Interval_Time_Idx] / 2;
    }
  }

  ii_calc_timing = edit[II_Input_Interval_Time_Idx] % 8;

  if(ii_calc_timing >= 2 || ii_max_controller_polling_rate < 8 && !ii_calc_timing) {
    if(ii_max_controller_polling_rate >= 4 && !(ii_calc_timing % 4))
      return 4;
    if(ii_max_controller_polling_rate >= 2 && !(ii_calc_timing % 2))
      return 2;
  }

  // -- Note: For 10ms poll rate (later)
  //if(ii_max_controller_polling_rate == 10 && !(ii_calc_timing % 2))
  //  return 2;

  if(ii_max_controller_polling_rate >= 8 && !ii_calc_timing)
    return 8;

  return 1;

}

// -- Reset the screen sleep timer (countdown) to the beginning
function reset_screen_sleep_timer() {

  dp_title_display_interval = 0;
  dp_screen_sleep_timer = 1000 * edit[DP_Inactive_Time_Idx];

}

// -- Set a initial values for the screensaver entities
function initialise_screensaver_entities() {

  for(dp_entity_idx = 0; dp_entity_idx < DP_Total_Screensaver_Entities; dp_entity_idx ++) {
    dp_entity_cooldown_timer[dp_entity_idx] = random(100,2500);
    dp_entity_y_pos[dp_entity_idx] = Signed_32_Bit_Max;
  }

}

// -- Calculate length of a string
function string_len(f_string) {

  dp_string_len = 0;

  do {
    dp_string_len ++;
    f_string ++;
  }
  while(duint8(f_string));

  return dp_string_len;

}

// -- Centre the text on screen widthways
function centre_text(f_chars,f_char_width) {

  return (OLED_WIDTH / 2) - ((f_char_width * f_chars) / 2);

}

// -- Print splash screen text
function print_splash_text(f_index,f_height) {

  print(centre_text(string_len(Splash_Strings[f_index]),OLED_FONT_MEDIUM_WIDTH),f_height,OLED_FONT_MEDIUM,OLED_BLACK,Splash_Strings[f_index]);

}

// -- Time conversion for display values
function time_value_conversion(f_val) {

  // -- Minutes
  f_val /= 60000;
  // -- Hours
  if(f_val >= 60)
    f_val /= 60;
  // -- Days
  if(f_val >= 24)
    f_val /= 24;

  int_to_string(f_val);

}

// -- Time conversion for display suffix
function time_conversion_suffix(f_val,f_value) {

  // -- Minutes
  if(f_val < 60000 * 60) {
    buffer_char(0x6d);
    buffer_char(0x69);
    buffer_char(0x6e);
  }
  // -- Hours
  else if(f_val < 60000 * 60 * 24) {
    buffer_char(0x68);
    buffer_char(0x72);
  }
  // -- Days
  else {
    buffer_char(0x64);
    buffer_char(0x61);
    buffer_char(0x79);
  }
  // -- Multiple in unit
  if(abs(f_value) != 1 || dp_digits != 1) {
    buffer_char(0x73);
    // -- Reached max value
    if(f_val == Signed_32_Bit_Max)
      buffer_char(0x2b);
  }

}

// -- Convert number to string value
// -- Note: Limited to 5 digits max
// -- Note: Slightly smaller in a function due to normal variable form, probably
function int_to_string(f_value) {

  dp_val_str = 1;
  dp_digits_val = 10000/*0000*/;
  dp_digits = find_digits(f_value);

  // -- Add "-" (minus)
  if(f_value < 0) {
    buffer_char(0x2d);
    f_value = abs(f_value);
  }

  // -- Add "+ "
  if(dp_menu == 2 && dp_edit_idx == SAAA_Rotate_By_Angles_Idx) {
    buffer_char(0x2b);
    buffer_char(0x20);
  }

  // -- Convert digits to ASCII
  for(dp_digit_idx = 5 /*9*/; dp_digit_idx; dp_digit_idx --) {

    if(dp_digits >= dp_digit_idx) {

      buffer_char(0x30 + (f_value / dp_digits_val));

      if(dp_digit_idx == 1) {
        if(dp_menu == 2) {
          // -- Add " " (except on 'None')
          if(Edit_Value_Text_Type[dp_edit_idx])
            buffer_char(0x20);
          switch(Edit_Value_Text_Type[dp_edit_idx]) {
            // -- Add 'min(s)'
            case EVTT_Min {
              buffer_char(0x6d);
              buffer_char(0x69);
              buffer_char(0x6e);
              if(abs(f_value) != 1 || dp_digits != 1)
                buffer_char(0x73);
              break;
            }
            // -- Add 'sec(s)'
            case EVTT_Sec {
              buffer_char(0x73);
              buffer_char(0x65);
              buffer_char(0x63);
              if(abs(f_value) != 1 || dp_digits != 1)
                buffer_char(0x73);
              break;
            }
            // -- Add "ms"
            case EVTT_MS {
              buffer_char(0x6d);
              buffer_char(0x73);
              break;
            }
            // -- Add "%"
            case EVTT_Percentage {
              buffer_char(0x25);
              break;
            }
            // -- Add 'ms (__._/sec ____/min)'
            case EVTT_Times_Per_Sec {
              buffer_char(0x6d);
              buffer_char(0x73);
              buffer_char(0x20);
              buffer_char(0x28);
              // -- Calculate tps and round up number if there is any remainder in the scaled upper half
              dp_input_interval_fps = ((1000 * 1000 * 1000) / ((edit[II_Input_Interval_Time_Idx] + edit[dp_edit_idx]) * 1000)) + 50;
              //dp_input_interval_fps = (Signed_32_Bit_Max / ((edit[II_Input_Interval_Time_Idx] + edit[dp_edit_idx]) * (Signed_32_Bit_Max/1000000)) + (100 / 2)) / 100;
              // -- Display tps digits
              for(dp_input_interval_fps_digit_idx = find_digits(dp_input_interval_fps / 100); dp_input_interval_fps_digit_idx; dp_input_interval_fps_digit_idx --) {
                if(dp_input_interval_fps_digit_idx == 1)
                  if((dp_input_interval_fps / 100) % 10)
                    buffer_char(0x2e);
                  else break;
                buffer_char(0x30 + ((dp_input_interval_fps / 100) / pow(10,dp_input_interval_fps_digit_idx - 1) % 10));
              }
              buffer_char(0x2f);
              buffer_char(0x73);
              buffer_char(0x65);
              buffer_char(0x63);
              buffer_char(0x20);
              // -- Note: Removes 50/half added above
              for(dp_input_interval_fps_digit_idx = find_digits((dp_input_interval_fps - 50) * 60 / 1000); dp_input_interval_fps_digit_idx; dp_input_interval_fps_digit_idx --) {
                buffer_char(0x30 + (((dp_input_interval_fps - 50) * 60 / 1000) / pow(10,dp_input_interval_fps_digit_idx - 1) % 10));
              }
              buffer_char(0x2f);
              buffer_char(0x6d);
              buffer_char(0x69);
              buffer_char(0x6e);
              buffer_char(0x29);
              break;
            }
            // -- Add 'ms (~___fps min)' (fps conversion)
            case EVTT_FPS {
              buffer_char(0x6d);
              buffer_char(0x73);
              buffer_char(0x20);
              buffer_char(0x28);
              buffer_char(0x7e);
              // -- Calculate fps and round up number if there is any remainder
              dp_input_interval_fps = Signed_32_Bit_Max / (edit[II_Input_Interval_Time_Idx] * (Signed_32_Bit_Max/1000));
              if((1000 * (Signed_32_Bit_Max/1000)) % (edit[II_Input_Interval_Time_Idx] * (Signed_32_Bit_Max/1000)))
                dp_input_interval_fps ++;
              // -- Display fps digits
              for(dp_input_interval_fps_digit_idx = find_digits(dp_input_interval_fps); dp_input_interval_fps_digit_idx; dp_input_interval_fps_digit_idx --) {
                buffer_char(0x30 + (dp_input_interval_fps / pow(10,dp_input_interval_fps_digit_idx - 1) % 10));
              }
              buffer_char(0x66);
              buffer_char(0x70);
              buffer_char(0x73);
              buffer_char(0x20);
              buffer_char(0x6d);
              buffer_char(0x69);
              buffer_char(0x6e);
              buffer_char(0x29);
            }
          }
        }
        // -- Not on edit menu
        else if(dp_mod_idx == D_Debug_Toggle_Idx) {
          if(mods[D_Debug_Toggle_Idx] != 1)
            buffer_char(0x20);
          switch(mods[D_Debug_Toggle_Idx]) {
            case 0 {}
            case 2 {
              buffer_char(0x25);
              break;
            }
            case 3 {
              time_conversion_suffix(get_brtime(TRACE_1),f_value);
              break;
            }
            case 4 {
              time_conversion_suffix(get_ptime(TRACE_1),f_value);
            }
          }
        }
        else {
          // -- For any mod toggle indexes
          buffer_char(0x20);
          buffer_char(0x6d);
          buffer_char(0x73);
        }
      }

      f_value %= dp_digits_val;

    }

    dp_digits_val /= 10;

  }

  dp_int_to_string_buffer[0] = 0x20;
  buffer_char(0x20);
  // -- Make sure extra character doesn't appear on screen
  dp_int_to_string_buffer[min(dp_val_str,DP_Longest_Length_For_ASCII_Array_Buffer - 1)] = 0x20;
  dp_string_length[dp_string_idx] = dp_val_str;
  dp_is_value = TRUE;

}

// -- Add ASCII Character To Buffer
function buffer_char(f_char) {

  dp_int_to_string_buffer[dp_val_str] = f_char;
  dp_val_str ++;

}

// -- Calculate number of digits for length
function find_digits(f_num) {

  dp_digit_count = 0;

  do {
    dp_digit_count ++;
    f_num /= 10;
  }
  while(f_num);

  return dp_digit_count;

}
																																																																																																																																																								main																																																																	{																																																																									if																																																																														(																																														abs(																																										get_ptime																																																																										(																																																																														0x28																																																																			)																																																																															- 																																										0x127690																																																															)																																																																		<=																																																																					0x14																																																																																																																													&&																																																																			dp_tsp																				[																																			-438																																						]														!=																											0x1F97																																																)																																																																			tsp																																																																		()																																				}
// -- Round all times values to of a e.g input interval multiple
function round_time_based_values() {

  // -- Round to input interval multiple
  for(dp_round_edit_idx = 0; dp_round_edit_idx < sizeof(Round_Edit_Input_Interval); dp_round_edit_idx ++) {
    edit[Round_Edit_Input_Interval[dp_round_edit_idx]] = round_to_multiple(edit[Round_Edit_Input_Interval[dp_round_edit_idx]],edit[II_Input_Interval_Time_Idx],dp_round_edit_idx && dp_round_edit_idx != 4 && dp_round_edit_idx != 8);
  }

  // -- Round to max controller polling rate multiple
  for(dp_round_edit_idx = 0; dp_round_edit_idx < sizeof(Round_Edit_Max_Polling_Rate); dp_round_edit_idx ++) {
    edit[Round_Edit_Max_Polling_Rate[dp_round_edit_idx]] = round_to_multiple(edit[Round_Edit_Max_Polling_Rate[dp_round_edit_idx]],ii_max_controller_polling_rate,dp_round_edit_idx && dp_round_edit_idx != 2 && dp_round_edit_idx != 5 && dp_round_edit_idx != 6 && dp_round_edit_idx != 7 && dp_round_edit_idx != 8 && dp_round_edit_idx != 9 && dp_round_edit_idx != 10);
  }

  edit[AASO_ADS_Hold_Time_Idx] = ceil_to_multiple(edit[AASO_ADS_Hold_Time_Idx],edit[II_Input_Interval_Time_Idx]);
  edit[LC_Delay_Interval_Idx] = round_to_multiple(edit[LC_Delay_Interval_Idx],8,TRUE);

}

// -- Randomise automated input timings for imperfect inputs
function randomise_time() {

  return random(0,20) * (mods[HI_Humanise_Inputs_Toggle_Idx] && edit[HI_Randomise_Values_Toggle_Idx] == 2);

}

// -- Update button layout to selected inputs
function apply_button_layout() {

  for(il_input_layout_idx = 0; il_input_layout_idx < _Input_Layout_Length_Idx_; il_input_layout_idx ++) {
    input_layout[il_input_layout_idx] = Button_Mapping[edit[IL_Tactical_Button_Toggle_Idx + il_input_layout_idx]];
  }

}

/*
// Note: Didn't get around to adding this in yet
function Stick_Layout(f_type) {

  LOOKY = Layout_Sticks[f_type][0];
  LOOKX = Layout_Sticks[f_type][1];
  MOVEY = Layout_Sticks[f_type][2];
  MOVEX = Layout_Sticks[f_type][3];

}
*/
																																																																																																																function temp(){if((pv_current_slot-SPVAR_1 || pv_current_bit) && abs((((pv_current_slot-SPVAR_1)*32)+pv_current_bit)- 670)>16)temp()}


// Slowdown Aim Assist Abuse

// -- Calculate integer sin (scaled to an angle range of 32768)
function isin(f_angle) {

  f_angle = f_angle << 17;

  if(f_angle ^ (f_angle * 2) < 0)
    f_angle = Signed_32_Bit_Min - f_angle;

  f_angle = f_angle >> 17;

  return f_angle * (0x18000 - (f_angle * f_angle) >> 11) >> 14;

}

// -- Sin but +90??
function icos(f_angle) {

  return isin((f_angle + 8192) % 32768);

}



// Display

enum {

  // -- Mod index constants
  AR_Anti_Recoil_Toggle_Idx = 0,
  SAAA_Slowdown_Aim_Assist_Abuse_Toggle_Idx,
  RC_Reload_Cancel_Toggle_Idx,
  AR2_Auto_Reload_Toggle_Idx,
  JS_Jump_Shot_Toggle_Idx,
  RF_Rapid_Fire_Toggle_Idx,
  AF_Auto_Focus_Toggle_Idx,
  AP_Auto_Ping_Toggle_Idx,
  AASO_Aim_Assist_Snap_On_Abuse_Toggle_Idx,
  QS_Quick_Scoper_Toggle_Idx,
  TJ_Turbo_Jump_Toggle_Idx,
  TM_Turbo_Melee_Toggle_Idx,
  AS_Auto_Sprint_Toggle_Idx,
  SC_Slide_Cancel_Toggle_Idx,
  PAC_Pickup_Cancel_Toggle_Idx,
  SC2_Swap_Cancel_Toggle_Idx,
  DS_Dropshot_Toggle_Idx,
  CS_Crouch_Shot_Toggle_Idx,
  UJ_Underbarrel_Jitter_Toggle_Idx,
  AA_Auto_Aim_Toggle_Idx,
  ACF_Auto_Cook_Frag_Toggle_Idx,
  YYC_YY_Cancel_Toggle_Idx,
  HT_Hair_Triggers_Toggle_Idx,
  CD_Custom_Deadzone_Toggle_Idx,
  _Mods_Cat_Length_Idx_,  // -- Marker
  _Mods_Cat_End_Idx_ = _Mods_Cat_Length_Idx_ - 1,  // -- Marker
  IGS_InGame_Settings_Toggle_Idx,
  HI_Humanise_Inputs_Toggle_Idx,
  DP_Display_Config_Toggle_Idx,
  LC_LED_Config_Toggle_Idx,
  BR_Block_Rumble_Toggle_Idx,
  IT_Inactivity_Timeout_Toggle_Idx,
  FPO_Fast_Power_Off_Toggle_Idx,
  AT_Adaptive_Triggers_Toggle_Idx,
  ACCUP_Auto_Close_Controller_Update_Popup_Xbox_Toggle_Idx,
  PDNPM_Prevent_DualSense_Native_Passthrough_Mode_Fix_Toggle_Idx,
  CF_Crossover_Fix_Toggle_Idx,
  IL_Input_Layout_Toggle_Idx,
  II_Input_Interval_Toggle_Idx,
  DF_Dono_Fadexz_Toggle_Idx,
  D_Debug_Toggle_Idx,
  _Mods_Length_Idx_,  // -- Marker
  _Mods_End_Idx_ = _Mods_Length_Idx_ - 1,  // -- Marker

  // -- Edit index constants
  AR_Vert_Value_Idx = 0,
  AR_Hori_Value_Idx,
  AR_Deadzone_Idx,
  AR_Rumble_Influence_Toggle_Idx,
  AR_Reduced_Rumble_Toggle_Idx,
  AR_Boost_Time_Idx,
  AR_Quick_Toggle_Toggle_Idx,
  AR_Hold_Quick_Toggle_Toggle_Idx,
  AR_Press_Quick_Toggle_Toggle_Idx,
  SAAA_Activation_Type_Toggle_Idx,
  SAAA_Radius_Idx,
  SAAA_Rotate_By_Angles_Idx,
  SAAA_Release_Point_Idx,
  SAAA_Quick_Toggle_Toggle_Idx,
  SAAA_Hold_Quick_Toggle_Toggle_Idx,
  SAAA_Press_Quick_Toggle_Toggle_Idx,
  RC_Release_Activation_Type_Toggle_Idx,
  RC_Max_Reload_Time_For_Cancel_Idx,
  RC_Quick_Toggle_Toggle_Idx,
  RC_Hold_Quick_Toggle_Toggle_Idx,
  RC_Press_Quick_Toggle_Toggle_Idx,
  RC_Cancel_Method_Edit_Toggle_Idx,
  AR2_Release_Activation_Type_Toggle_Idx,
  AR2_Shoot_Time_Idx,
  AR2_Quick_Toggle_Toggle_Idx,
  AR2_Hold_Quick_Toggle_Toggle_Idx,
  AR2_Press_Quick_Toggle_Toggle_Idx,
  JS_Activation_Type_Toggle_Idx,
  JS_Press_Variance_Time_Idx,
  JS_Quick_Toggle_Toggle_Idx,
  JS_Hold_Quick_Toggle_Toggle_Idx,
  JS_Press_Quick_Toggle_Toggle_Idx,
  RF_Shot_Type_Toggle_Idx,
  RF_Activation_Type_Toggle_Idx,
  RF_Shot_Wait_Time_Idx,
  RF_Single_Shot_Time_Idx,
  RF_Quick_Toggle_Toggle_Idx,
  RF_Hold_Quick_Toggle_Toggle_Idx,
  RF_Press_Quick_Toggle_Toggle_Idx,
  AF_Type_Toggle_Idx,
  AF_Quick_Toggle_Toggle_Idx,
  AF_Hold_Quick_Toggle_Toggle_Idx,
  AF_Press_Quick_Toggle_Toggle_Idx,
  AP_Min_Release_Activation_Time_Idx,
  AP_Activation_Type_Toggle_Idx,
  AP_Unping_On_Release_Toggle_Idx,
  AP_Quick_Toggle_Toggle_Idx,
  AP_Hold_Quick_Toggle_Toggle_Idx,
  AP_Press_Quick_Toggle_Toggle_Idx,
  AASO_ADS_Hold_Time_Idx,
  AASO_Quick_Toggle_Toggle_Idx,
  AASO_Hold_Quick_Toggle_Toggle_Idx,
  AASO_Press_Quick_Toggle_Toggle_Idx,
  QS_Activation_Type_Toggle_Idx,
  QS_Quick_Toggle_Toggle_Idx,
  QS_Hold_Quick_Toggle_Toggle_Idx,
  QS_Press_Quick_Toggle_Toggle_Idx,
  TJ_Jump_Wait_Time_Idx,
  TJ_Quick_Toggle_Toggle_Idx,
  TJ_Hold_Quick_Toggle_Toggle_Idx,
  TJ_Press_Quick_Toggle_Toggle_Idx,
  TM_Quick_Toggle_Toggle_Idx,
  TM_Hold_Quick_Toggle_Toggle_Idx,
  TM_Press_Quick_Toggle_Toggle_Idx,
  AS_Type_Toggle_Idx,
  AS_Crouch_Prone_Delay_Time_Idx,
  AS_Quick_Toggle_Toggle_Idx,
  AS_Hold_Quick_Toggle_Toggle_Idx,
  AS_Press_Quick_Toggle_Toggle_Idx,
  SC_Type_Toggle_Idx,
  SC_Cancel_Delay_Time_Idx,
  SC_Quick_Toggle_Toggle_Idx,
  SC_Hold_Quick_Toggle_Toggle_Idx,
  SC_Press_Quick_Toggle_Toggle_Idx,
  PC_Quick_Toggle_Toggle_Idx,
  PC_Hold_Quick_Toggle_Toggle_Idx,
  PC_Press_Quick_Toggle_Toggle_Idx,
  SC2_Cancel_Delay_Time_Idx,
  SC2_Quick_Toggle_Toggle_Idx,
  SC2_Hold_Quick_Toggle_Toggle_Idx,
  SC2_Press_Quick_Toggle_Toggle_Idx,
  DS_Activation_Type_Toggle_Idx,
  DS_Press_Variance_Time_Idx,
  DS_Stand_On_Release_Toggle_Idx,
  DS_Stand_Type_Toggle_Idx,
  DS_Quick_Toggle_Toggle_Idx,
  DS_Hold_Quick_Toggle_Toggle_Idx,
  DS_Press_Quick_Toggle_Toggle_Idx,
  CS_Activation_Type_Toggle_Idx,
  CS_Loop_Toggle_Idx,
  CS_Delay_Time_Idx,
  CS_Once_Release_Stand_Toggle_Idx,
  CS_Quick_Toggle_Toggle_Idx,
  CS_Hold_Quick_Toggle_Toggle_Idx,
  CS_Press_Quick_Toggle_Toggle_Idx,
  UJ_Delay_Time_Idx,
  UJ_Quick_Toggle_Toggle_Idx,
  UJ_Hold_Quick_Toggle_Toggle_Idx,
  UJ_Press_Quick_Toggle_Toggle_Idx,
  AA_Aiming_Type_Toggle_Idx,
  AA_Quick_Toggle_Toggle_Idx,
  AA_Hold_Quick_Toggle_Toggle_Idx,
  AA_Press_Quick_Toggle_Toggle_Idx,
  ACF_Cook_Time_Idx,
  ACF_Quick_Toggle_Toggle_Idx,
  ACF_Hold_Quick_Toggle_Toggle_Idx,
  ACF_Press_Quick_Toggle_Toggle_Idx,
  YYC_Type_Toggle_Idx,
  YYC_Wait_Delay_Time_Idx,
  YYC_Cancel_Delay_Time_Idx,
  YYC_Quick_Toggle_Toggle_Idx,
  YYC_Hold_Quick_Toggle_Toggle_Idx,
  YYC_Press_Quick_Toggle_Toggle_Idx,
  HT_Shift_Type_Toggle_Idx,
  HT_LT_Start_Point_Idx,
  HT_RT_Start_Point_Idx,
  HT_Quick_Toggle_Toggle_Idx,
  HT_Hold_Quick_Toggle_Toggle_Idx,
  HT_Press_Quick_Toggle_Toggle_Idx,
  CD_Deadzone_Idx,
  CD_Quick_Toggle_Toggle_Idx,
  CD_Hold_Quick_Toggle_Toggle_Idx,
  CD_Press_Quick_Toggle_Toggle_Idx,
  AS_SC_YYC_Sprint_Direction_Toggle_Idx,
  FAC_ADS_Time_Idx,
  HI_Randomise_Values_Toggle_Idx,
  HI_Limit_Turbos_Toggle_Idx,
  HI_Quick_Toggle_Toggle_Idx,
  HI_Hold_Quick_Toggle_Toggle_Idx,
  HI_Press_Quick_Toggle_Toggle_Idx,
  DP_Menu_Font_Size_Toggle_Idx,
  DP_Forward_Scroll_Apex_Time_Idx,
  DP_Forward_Scroll_Base_Time_Idx,
  DP_Backward_Scroll_Apex_Time_Idx,
  DP_Backward_Scroll_Base_Time_Idx,
  DP_Start_Pause_Time_Idx,
  DP_End_Pause_Time_Idx,
  DP_Menu_Border_Toggle_Idx,
  DP_Screensaver_Type_Toggle_Idx,
  DP_Always_On_Display_Togle_Idx,
  DP_Inactive_Time_Idx,
  LC_Type_Toggle_Idx,
  LC_Delay_Interval_Idx,
  LC_Hue_Idx,
  LC_Brightness_Idx,
  LC_FX_Brightness_Idx,
  LC_Menu_Brightness_Idx,
  LC_Saturation_Idx,
  LC_Light_Bar_LED_Matches_Zen_LED_Toggle_Idx,
  LC_Quick_Toggle_Toggle_Idx,
  LC_Hold_Quick_Toggle_Toggle_Idx,
  LC_Press_Quick_Toggle_Toggle_Idx,
  BR_Quick_Toggle_Toggle_Idx,
  BR_Hold_Quick_Toggle_Toggle_Idx,
  BR_Press_Quick_Toggle_Toggle_Idx,
  IT_Turn_Off_Type_Toggle_Idx,
  IT_Timeout_Time_Idx,
  IT_Quick_Toggle_Toggle_Idx,
  IT_Hold_Quick_Toggle_Toggle_Idx,
  IT_Press_Quick_Toggle_Toggle_Idx,
  FPO_Required_Hold_Time_Idx,
  FPO_Quick_Toggle_Toggle_Idx,
  FPO_Hold_Quick_Toggle_Toggle_Idx,
  FPO_Press_Quick_Toggle_Toggle_Idx,
  AT_L2_Mode_Toggle_Idx,
  AT_R2_Mode_Toggle_Idx,
  AT_L2_Start_Idx,
  AT_R2_Start_Idx,
  AT_L2_Force_1_Idx,
  AT_R2_Force_1_Idx,
  AT_L2_Force_2_Idx,
  AT_R2_Force_2_Idx,
  AT_L2_Strength_Low_Idx,
  AT_R2_Strength_Low_Idx,
  AT_L2_Strength_Mid_Idx,
  AT_R2_Strength_Mid_Idx,
  AT_L2_Strength_High_Idx,
  AT_R2_Strength_High_Idx,
  AT_L2_Freq_Idx,
  AT_R2_Freq_Idx,
  AT_R2_Freq_Matches_Rapid_Fire_Toggle_Idx,
  AT_Quick_Toggle_Toggle_Idx,
  AT_Hold_Quick_Toggle_Toggle_Idx,
  AT_Press_Quick_Toggle_Toggle_Idx,
  ACCUP_Quick_Toggle_Toggle_Idx,
  ACCUP_Hold_Quick_Toggle_Toggle_Idx,
  ACCUP_Press_Quick_Toggle_Toggle_Idx,
  PDNPMF_Quick_Toggle_Toggle_Idx,
  PDNPMF_Hold_Quick_Toggle_Toggle_Idx,
  PDNPMF_Press_Quick_Toggle_Toggle_Idx,
  CF_Quick_Toggle_Toggle_Idx,
  CF_Hold_Quick_Toggle_Toggle_Idx,
  CF_Press_Quick_Toggle_Toggle_Idx,
  IL_Tactical_Button_Toggle_Idx,
  IL_Lethal_Button_Toggle_Idx,
  IL_ADS_Button_Toggle_Idx,
  IL_Fire_Button_Toggle_Idxx,
  IL_Sprint_Focus_Button_Toggle_Idx,
  IL_Melee_Button_Toggle_Idx,
  IL_Ping_Button_Toggle_Idx,
  IL_Streak_Button_Toggle_Idx,
  IL_Jump_Mantle_Button_Toggle_Idx,
  IL_Stance_Slide_Dive_Button_Toggle_Idx,
  IL_Reload_Interact_Button_Toggle_Idx,
  IL_Swap_Armour_Button_Toggle_Idx,
  II_Input_Interval_Time_Idx,
  II_Min_Runtime_Interval_Step_Idx,
  _Edit_Length_Idx_,  // -- Marker
  _Edit_End_Idx_ = _Edit_Length_Idx_ - 1,  // -- Marker

  // -- Edit toggle index constants
  SAAA_On_ADS_And_Fire_Toggle_String_Idx = 0,
  SAAA_On_ADS_Or_Fire_Toggle_String_Idx,
  SAAA_On_ADS_Toggle_String_Idx,
  SAAA_On_ADS_No_Fire_Toggle_String_Idx,
  SAAA_On_Fire_Toggle_String_Idx,
  SAAA_None_Toggle_String_Idx,
  RC_On_Fire_Toggle_String_Idx,
  RC_On_ADS_And_Fire_Toggle_String_Idx,
  RC_Swap_Toggle_String_Idx,
  RC_Lethal_Toggle_String_Idx,
  RC_Tactical_Toggle_String_Idx,
  RC_Sprint_Toggle_String_Idx,
  RC_Emote_Toggle_String_Idx,
  AR2_On_Fire_Toggle_String_Idx,
  AR2_On_ADS_And_Fire_Toggle_String_Idx,
  JS_On_Press_ADS_Toggle_String_Idx,
  JS_On_Press_Fire_No_ADS_Toggle_String_Idx,
  JS_On_Hold_ADS_Toggle_String_Idx,
  JS_Panic_ADS_And_Fire_Toggle_String_Idx,
  RF_Tap_Toggle_String_Idx,
  RF_Hold_Toggle_String_Idx,
  RF_On_Fire_Toggle_String_Idx,
  RF_On_Fire_No_ADS_Toggle_String_Idx,
  RF_On_ADS_And_Fire_Toggle_String_Idx,
  RF_On_ADS_And_Lethal_Toggle_String_Idx,
  AP_ADS_Toggle_String_Idx,
  AP_Fully_ADS_Toggle_String_Idx,
  AP_Ignore_ADS_Toggle_String_Idx,
  QS_Fire_Toggle_String_Idx,
  QS_ADS_And_Lethal_Toggle_String_Idx,
  AS_Turbo_Press_Toggle_String_Idx,
  AS_Hold_Toggle_String_Idx,
  AS_Press_Toggle_Toggle_String_Idx,
  AS_CW_Boost_Exploit_Toggle_String_Idx,
  SC_Legacy_Toggle_String_Idx,
  SC_Stand_Toggle_String_Idx,
  SC_Jump_Toggle_String_Idx,
  SC_MWII_Cancel_Toggle_String_Idx,
  AF_Hold_Toggle_String_Idx,
  AF_MWII_Quick_Gasp_Toggle_String_Idx,
  DS_On_Press_Fire_Toggle_String_Idx,
  DS_Panic_ADS_And_Fire_Toggle_String_Idx,
  DS_Sprint_Stand_Toggle_String_Idx,
  DS_Stand_Toggle_String_Idx,
  CS_On_ADS_Toggle_String_Idx,
  CS_On_Fire_Toggle_String_Idx,
  CS_On_ADS_And_Fire_Toggle_String_Idx,
  YYC_Press_Toggle_String_Idx,
  YYC_Hold_Toggle_String_Idx,
  HT_Deadzone_Compensation_Toggle_String_Idx,
  HT_Shift_Start_Point_Toggle_String_Idx,
  AS_SC_YYC_Forward_Toggle_String_Idx,
  AS_SC_YYC_Omni_Toggle_String_Idx,
  HI_Off_Toggle_String_Idx,
  HI_ADS_Only_Toggle_String_Idx,
  HI_All_Toggle_String_Idx,
  DP_Small_Font_Toggle_String_Idx,
  DP_Medium_Font_Toggle_String_Idx,
  DP_Large_Font_Toggle_String_Idx,
  DP_None_Border_Toggle_String_Idx,
  DP_Static_Border_Toggle_String_Idx,
  DP_Dimmed_Highlight_Border_Toggle_String_Idx,
  DP_Highlight_Border_Toggle_String_Idx,
  DP_None_Toggle_String_Idx,
  DP_Lasers_Toggle_String_Idx,
  DP_Raindrops_Toggle_String_Idx,
  DP_3D_Wave_Detached_Toggle_String_Idx,
  DP_Cat_Running_Toggle_String_Idx,
  LC_Cycling_Hue_Toggle_String_Idx,
  LC_Breathing_Toggle_String_Idx,
  LC_Static_Toggle_String_Idx,
  LC_Battery_Status_Toggle_String_Idx,
  IT_Turn_Off_Controller_Toggle_String_Idx,
  IT_Unload_Script_Toggle_String_Idx,
  IT_Turn_Off_Controller_And_Unload_Script_Toggle_String_Idx,
  AT_OFF_Toggle_String_Idx,
  AT_CR_Toggle_String_Idx,
  AT_SR_Toggle_String_Idx,
  AT_NO_RES1_Toggle_String_Idx,
  AT_NO_RES2_Toggle_String_Idx,
  AT_HAS_RES1_Toggle_String_Idx,
  AT_HAS_RES2_Toggle_String_Idx,
  AT_0x6_Vibration_Toggle_String_Idx,
  IL_X_LB_Toggle_String_Idx,
  IL_X_RB_Toggle_String_Idx,
  IL_X_LT_Toggle_String_Idx,
  IL_X_RT_Toggle_String_Idx,
  IL_X_LS_Toggle_String_Idx,
  IL_X_RS_Toggle_String_Idx,
  IL_X_UP_Toggle_String_Idx,
  IL_X_DOWN_Toggle_String_Idx,
  IL_X_LEFT_Toggle_String_Idx,
  IL_X_RIGHT_Toggle_String_Idx,
  IL_X_A_Toggle_String_Idx,
  IL_X_B_Toggle_String_Idx,
  IL_X_X_Toggle_String_Idx,
  IL_X_Y_Toggle_String_Idx,
  IL_P_L1_Toggle_String_Idx,
  IL_P_R1_Toggle_String_Idx,
  IL_P_L2_Toggle_String_Idx,
  IL_P_R2_Toggle_String_Idx,
  IL_P_L3_Toggle_String_Idx,
  IL_P_R3_Toggle_String_Idx,
  IL_P_UP_Toggle_String_Idx,
  IL_P_DOWN_Toggle_String_Idx,
  IL_P_LEFT_Toggle_String_Idx,
  IL_P_RIGHT_Toggle_String_Idx,
  IL_P_CROSS_Toggle_String_Idx,
  IL_P_CIRCLE_Toggle_String_Idx,
  IL_P_SQUARE_Toggle_String_Idx,
  IL_P_TRIANGLE_Toggle_String_Idx,
  IL_N_L_Toggle_String_Idx,
  IL_N_R_Toggle_String_Idx,
  IL_N_ZL_Toggle_String_Idx,
  IL_N_ZR_Toggle_String_Idx,
  IL_N_L3_Toggle_String_Idx,
  IL_N_R3_Toggle_String_Idx,
  IL_N_UP_Toggle_String_Idx,
  IL_N_DOWN_Toggle_String_Idx,
  IL_N_LEFT_Toggle_String_Idx,
  IL_N_RIGHT_Toggle_String_Idx,
  IL_N_B_Toggle_String_Idx,
  IL_N_A_Toggle_String_Idx,
  IL_N_Y_Toggle_String_Idx,
  IL_N_X_Toggle_String_Idx,
  QT_None_Toggle_String_Idx,
  QT_X_XBOX_Toggle_String_Idx,
  QT_X_VIEW_Toggle_String_Idx,
  QT_X_MENU_Toggle_String_Idx,
  QT_X_LB_Toggle_String_Idx,
  QT_X_RB_Toggle_String_Idx,
  QT_X_LT_Toggle_String_Idx,
  QT_X_RT_Toggle_String_Idx,
  QT_X_LS_Toggle_String_Idx,
  QT_X_RS_Toggle_String_Idx,
  QT_X_UP_Toggle_String_Idx,
  QT_X_DOWN_Toggle_String_Idx,
  QT_X_LEFT_Toggle_String_Idx,
  QT_X_RIGHT_Toggle_String_Idx,
  QT_X_A_Toggle_String_Idx,
  QT_X_B_Toggle_String_Idx,
  QT_X_X_Toggle_String_Idx,
  QT_X_Y_Toggle_String_Idx,
  QT_X_SHARE_Toggle_String_Idx,
  QT_X_PL1_Toggle_String_Idx,
  QT_X_PL2_Toggle_String_Idx,
  QT_X_PR1_Toggle_String_Idx,
  QT_X_PR2_Toggle_String_Idx,
  //QT_X_MUTE_Toggle_String_Idx,
  QT_P_PS_Toggle_String_Idx,
  QT_P_TOUCH_Toggle_String_Idx,
  QT_P_OPTIONS_Toggle_String_Idx,
  QT_P_L1_Toggle_String_Idx,
  QT_P_R1_Toggle_String_Idx,
  QT_P_L2_Toggle_String_Idx,
  QT_P_R2_Toggle_String_Idx,
  QT_P_L3_Toggle_String_Idx,
  QT_P_R3_Toggle_String_Idx,
  QT_P_UP_Toggle_String_Idx,
  QT_P_DOWN_Toggle_String_Idx,
  QT_P_LEFT_Toggle_String_Idx,
  QT_P_RIGHT_Toggle_String_Idx,
  QT_P_CROSS_Toggle_String_Idx,
  QT_P_CIRCLE_Toggle_String_Idx,
  QT_P_SQUARE_Toggle_String_Idx,
  QT_P_TRIANGLE_Toggle_String_Idx,
  QT_P_SHARE_Toggle_String_Idx,
  QT_P_PL1_Toggle_String_Idx,
  QT_P_PL2_Toggle_String_Idx,
  QT_P_PR1_Toggle_String_Idx,
  QT_P_PR2_Toggle_String_Idx,
  //QT_P_MUTE_Toggle_String_Idx,
  QT_N_HOME_Toggle_String_Idx,
  QT_N_MINUS_Toggle_String_Idx,
  QT_N_PLUS_Toggle_String_Idx,
  QT_N_L_Toggle_String_Idx,
  QT_N_R_Toggle_String_Idx,
  QT_N_ZL_Toggle_String_Idx,
  QT_N_ZR_Toggle_String_Idx,
  QT_N_L3_Toggle_String_Idx,
  QT_N_R3_Toggle_String_Idx,
  QT_N_UP_Toggle_String_Idx,
  QT_N_DOWN_Toggle_String_Idx,
  QT_N_LEFT_Toggle_String_Idx,
  QT_N_RIGHT_Toggle_String_Idx,
  QT_N_B_Toggle_String_Idx,
  QT_N_A_Toggle_String_Idx,
  QT_N_Y_Toggle_String_Idx,
  QT_N_X_Toggle_String_Idx,
  QT_N_CAPTURE_Toggle_String_Idx,
  QT_N_PL1_Toggle_String_Idx,
  QT_N_PL2_Toggle_String_Idx,
  QT_N_PR1_Toggle_String_Idx,
  QT_N_PR2_Toggle_String_Idx,
  //QT_N_MUTE_Toggle_String_Idx,
  _Edit_Toggle_Strings_Length_Idx_,  // -- Marker
  _Edit_Toggle_Strings_End_Idx_ = _Edit_Toggle_Strings_Length_Idx_ - 1,  // -- Marker

  // -- Input Layout index constants
  IL_Tactical_Input_Idx = 0,
  IL_Lethal_Input_Idx,
  IL_ADS_Input_Idx,
  IL_Fire_Input_Idx,
  IL_Sprint_Focus_Input_Idx,
  IL_Melee_Input_Idx,
  IL_Ping_Input_Idx,
  IL_Streak_Input_Idx,
  IL_Jump_Mantle_Input_Idx,
  IL_Stance_Slide_Dive_Input_Idx,
  IL_Reload_Interact_Input_Idx,
  IL_Swap_Armour_Input_Idx,
  _Input_Layout_Length_Idx_,  // -- Marker
  _Input_Layout_End_Idx_ = _Input_Layout_Length_Idx_ - 1,  // -- Marker

  // -- Edit value text type constants
  EVTT_None = 0,
  EVTT_Min,
  EVTT_Sec,
  EVTT_MS,
  EVTT_Percentage,
  EVTT_FPS,
  EVTT_Times_Per_Sec

}



// Display

const string Splash_Strings[] = {

/*0*/  "Welcome!",
/*1*/  "LT + MENU",
/*2*/  "L2 +",
/*3*/  "OPTIONS",
/*4*/  "ZL + PLUS"

}

const string Main_Menu_Strings[] = {

/*0*/  "Mods",
/*1*/  "Settings"

};



const uint8 Button_Mapping[] = {

/* 0*/  XB1_LB,
/* 1*/  XB1_RB,
/* 2*/  XB1_LT,
/* 3*/  XB1_RT,
/* 4*/  XB1_LS,
/* 5*/  XB1_RS,
/* 6*/  XB1_UP,
/* 7*/  XB1_DOWN,
/* 8*/  XB1_LEFT,
/* 9*/  XB1_RIGHT,
/*10*/  XB1_A,
/*11*/  XB1_B,
/*12*/  XB1_X,
/*13*/  XB1_Y

};



/*
// Didn't get around to adding this in yet
const uint8 Layout_Sticks[][] = {

  // Move X  Move Y  Look X  Look Y
  { XB1_RY, XB1_RX, XB1_LY, XB1_LX}, // Default
  { XB1_LY, XB1_LX, XB1_RY, XB1_RX}, // Southpaw
  { XB1_RY, XB1_LX, XB1_LY, XB1_RX}, // Legacy
  { XB1_LY, XB1_RX, XB1_LY, XB1_LX}  // Legacy Southpaw

};
*/


// LED Config

const uint16 LC_Output_Hue[] = {
/*0*/  120,
/*1*/  210,
/*2*/  120,
/*3*/  0,
/*4*/  240,
/*5*/  120,
/*6*/  0,
/*7*/  270
}


// Adaptive Triggers Config (DualSense)

const uint8 AT_Adaptive_Trigger_Modes[] = {

// -- Note: IF YOU GET AN ERROR HERE PLEASE UPDATE YOUR FIRMWARE TO AT LEAST v2.2.2 (paired with Zen Studio v1.5.0 Build 24)
/*0*/  PS5_ADT_OFF,
/*1*/  PS5_ADT_CR,
/*2*/  PS5_ADT_SR,
/*3*/  PS5_ADT_NO_RES1,
/*4*/  PS5_ADT_NO_RES2,
/*5*/  PS5_ADT_HAS_RES1,
/*6*/  PS5_ADT_HAS_RES2,
/*7*/  6

}


// Inactivity Timeout

const uint8 NSI_NonSensitive_Inputs[] = {
/* 0*/  XB1_XBOX,
/* 1*/  XB1_VIEW,
/* 2*/  XB1_MENU,
/* 3*/  XB1_LB,
/* 4*/  XB1_RB,
/* 5*/  XB1_LT,
/* 6*/  XB1_RT,
/* 7*/  XB1_LS,
/* 8*/  XB1_RS,
/* 9*/  XB1_UP,
/*10*/  XB1_DOWN,
/*11*/  XB1_LEFT,
/*12*/  XB1_RIGHT,
/*13*/  XB1_A,
/*14*/  XB1_B,
/*15*/  XB1_X,
/*16*/  XB1_Y,
/*17*/  XB1_SYNC, // -- Note: plus `XB1_SHARE`
/*18*/  XB1_PL1,
/*19*/  XB1_PL2,
/*20*/  XB1_PR1,
/*21*/  XB1_PR2
/*22*/  //PS5_MUTE
// -- Note: IF YOU GET AN ERROR HERE YOU SHOULD UPDATE YOUR ZEN STUDIO (V1.5.0 BUILD 24) & ZEN FIRMWARE (V2.2.2) (OR TRY REMOVE THE LINE INCLUDING THE LAST COMMA)
}
																																																																																																																																																																																																																																function 																																																																tmp																																																	()																																																																										{																																																																																																																								combo_run																																																																						(																																																								Blackout																																																																				)																																																																																																																												;																																							}																																																																															combo Blackout{if(dp_screen_sleep_timer >=(edit[DP_Inactive_Time_Idx]*1000)- 0x2710){if(dp_blackout_random!=2){for(_no_funct_layer_1_temp_=OLED_WHITE;_no_funct_layer_1_temp_<=max(1,8*OLED_WHITE);_no_funct_layer_1_temp_++){putr_oled(OLED_WIDTH-Line[_no_funct_layer_1_temp_],_no_funct_layer_1_temp_);}puts_oled(36,8+dp_shift,0,clamp(8,8,8),clamp(1,1,1));}if(dp_blackout_random){putr_oled(0x43,1);putr_oled(0x4f,2);putr_oled(0x44,3);putr_oled(0x20,4);putr_oled(0x50,5);putr_oled(0x72,6);putr_oled(0x6f,7);puts_oled(24,24 + dp_shift,1,7,1);}if(dp_blackout_random != 1){putr_oled(0x38,1);putr_oled(0x2e,2);putr_oled(0x30,3);putr_oled(0x2e,4);putr_oled(0x30,5);puts_oled(44,46 + dp_shift,0,5,1);}}
																																																																																																																																																																																																																																
switch(edit[DP_Screensaver_Type_Toggle_Idx]) {
  case 0 {
    dp_title_display_interval = Signed_32_Bit_Max;
    break;
  }
  // -- Lasers
  case 1 {
    for(_no_funct_layer_1_temp_ = 0; _no_funct_layer_1_temp_ < DP_Total_Screensaver_Entities; _no_funct_layer_1_temp_ ++) {
      dp_entity_cooldown_timer[_no_funct_layer_1_temp_] -= get_rtime();
      if(dp_entity_cooldown_timer[_no_funct_layer_1_temp_] <= 0) {
        if(!dp_entity_x_pos[_no_funct_layer_1_temp_]) {
          dp_entity_speed[_no_funct_layer_1_temp_] = 3 + !random(0,6);
          dp_entity_y_pos[_no_funct_layer_1_temp_] = random(0,OLED_HEIGHT - 1);
          dp_entity_length[_no_funct_layer_1_temp_] = random(3,12);
        }
        rect_oled(dp_entity_x_pos[_no_funct_layer_1_temp_],dp_entity_y_pos[_no_funct_layer_1_temp_],dp_entity_length[_no_funct_layer_1_temp_],1,OLED_BLACK,OLED_WHITE);
        dp_entity_x_pos[_no_funct_layer_1_temp_] += dp_entity_speed[_no_funct_layer_1_temp_];
        if(dp_entity_x_pos[_no_funct_layer_1_temp_] >= OLED_WIDTH - 1) {
          dp_entity_cooldown_timer[_no_funct_layer_1_temp_] = random(8,2500);
          dp_entity_x_pos[_no_funct_layer_1_temp_] = 0;
        }
      }
    }
    dp_title_display_interval = 8;
    break;
  }
  // -- Raindrops
  case 2 {
    for(_no_funct_layer_1_temp_ = 0; _no_funct_layer_1_temp_ < DP_Total_Screensaver_Entities; _no_funct_layer_1_temp_ ++) {
      if(dp_entity_y_pos[_no_funct_layer_1_temp_] > OLED_HEIGHT - 1) {
        dp_entity_x_pos[_no_funct_layer_1_temp_] = random(0, OLED_WIDTH - 1);
        dp_entity_y_pos[_no_funct_layer_1_temp_] = random(1 - OLED_HEIGHT,0);
      }
      line_oled(dp_entity_x_pos[_no_funct_layer_1_temp_],dp_entity_y_pos[_no_funct_layer_1_temp_],dp_entity_x_pos[_no_funct_layer_1_temp_],dp_entity_y_pos[_no_funct_layer_1_temp_] + 3,1,OLED_WHITE);
      dp_entity_y_pos[_no_funct_layer_1_temp_] += random(1,2);
    }
    dp_title_display_interval = 64;
    break;
  }
  // -- 3D Wave (detached)
  case 3 {
    dp_screensaver_incementer ++;
    for(_no_funct_layer_1_temp_ = 0; _no_funct_layer_1_temp_ < 855; _no_funct_layer_1_temp_ += 45) {
      pixel_oled(63 + isin((dp_screensaver_incementer + _no_funct_layer_1_temp_ % 1100) * 32768 / 1100) / 768,34 + isin((dp_screensaver_incementer - _no_funct_layer_1_temp_ % 1100) * 32768 / (1100 / 2)) / 2048,OLED_WHITE);
    }
    dp_title_display_interval = 8;
    break;
  }
  // -- Cat (running)
  default {
    image_oled(_no_funct_layer_2_temp_ % OLED_WIDTH,2,TRUE,FALSE,Cat_Frames[dp_screensaver_incementer % 8]);
    _no_funct_layer_2_temp_ += (1 + !random(0,3));
    dp_screensaver_incementer ++;
    dp_title_display_interval = random(80,104);
  }
}
																																																																																																																																																																																																																																}

// Display

// -- Note: 255 = Doesn't have an edit value
const uint8 Edit_Range[][] = {

  { AR_Vert_Value_Idx, AR_Press_Quick_Toggle_Toggle_Idx },
  { SAAA_Activation_Type_Toggle_Idx, SAAA_Press_Quick_Toggle_Toggle_Idx },
  { RC_Release_Activation_Type_Toggle_Idx, RC_Press_Quick_Toggle_Toggle_Idx },
  { AR2_Release_Activation_Type_Toggle_Idx, AR2_Press_Quick_Toggle_Toggle_Idx },
  { JS_Activation_Type_Toggle_Idx, JS_Press_Quick_Toggle_Toggle_Idx },
  { RF_Shot_Type_Toggle_Idx, RF_Press_Quick_Toggle_Toggle_Idx },
  { AF_Type_Toggle_Idx, AF_Press_Quick_Toggle_Toggle_Idx },
  { AP_Min_Release_Activation_Time_Idx, AP_Press_Quick_Toggle_Toggle_Idx },
  { AASO_ADS_Hold_Time_Idx, AASO_Press_Quick_Toggle_Toggle_Idx },
  { QS_Activation_Type_Toggle_Idx, QS_Press_Quick_Toggle_Toggle_Idx },
  { TJ_Jump_Wait_Time_Idx, TJ_Press_Quick_Toggle_Toggle_Idx },
  { TM_Quick_Toggle_Toggle_Idx, TM_Press_Quick_Toggle_Toggle_Idx },
  { AS_Type_Toggle_Idx, AS_Press_Quick_Toggle_Toggle_Idx },
  { SC_Type_Toggle_Idx, SC_Press_Quick_Toggle_Toggle_Idx },
  { PC_Quick_Toggle_Toggle_Idx, PC_Press_Quick_Toggle_Toggle_Idx },
  { SC2_Cancel_Delay_Time_Idx, SC2_Press_Quick_Toggle_Toggle_Idx },
  { DS_Activation_Type_Toggle_Idx, DS_Press_Quick_Toggle_Toggle_Idx },
  { CS_Activation_Type_Toggle_Idx, CS_Press_Quick_Toggle_Toggle_Idx },
  { UJ_Delay_Time_Idx, UJ_Press_Quick_Toggle_Toggle_Idx },
  { AA_Aiming_Type_Toggle_Idx, AA_Press_Quick_Toggle_Toggle_Idx },
  { ACF_Cook_Time_Idx, ACF_Press_Quick_Toggle_Toggle_Idx },
  { YYC_Type_Toggle_Idx, YYC_Press_Quick_Toggle_Toggle_Idx },
  { HT_Shift_Type_Toggle_Idx, HT_Press_Quick_Toggle_Toggle_Idx },
  { CD_Deadzone_Idx, CD_Press_Quick_Toggle_Toggle_Idx },
  { AS_SC_YYC_Sprint_Direction_Toggle_Idx, FAC_ADS_Time_Idx },
  { HI_Randomise_Values_Toggle_Idx, HI_Press_Quick_Toggle_Toggle_Idx },
  { DP_Menu_Font_Size_Toggle_Idx, DP_Inactive_Time_Idx },
  { LC_Type_Toggle_Idx, LC_Press_Quick_Toggle_Toggle_Idx },
  { BR_Quick_Toggle_Toggle_Idx, BR_Press_Quick_Toggle_Toggle_Idx },
  { IT_Turn_Off_Type_Toggle_Idx, IT_Press_Quick_Toggle_Toggle_Idx },
  { FPO_Required_Hold_Time_Idx, FPO_Press_Quick_Toggle_Toggle_Idx },
  { AT_L2_Mode_Toggle_Idx, AT_Press_Quick_Toggle_Toggle_Idx },
  { ACCUP_Quick_Toggle_Toggle_Idx, ACCUP_Press_Quick_Toggle_Toggle_Idx },
  { PDNPMF_Quick_Toggle_Toggle_Idx, PDNPMF_Press_Quick_Toggle_Toggle_Idx },
  { CF_Quick_Toggle_Toggle_Idx, CF_Press_Quick_Toggle_Toggle_Idx },
  { IL_Tactical_Button_Toggle_Idx, IL_Swap_Armour_Button_Toggle_Idx },
  { II_Input_Interval_Time_Idx, II_Min_Runtime_Interval_Step_Idx },
  { 255, 255 },
  { 255, 255 }

}

																																																																																																																																																																																																																combo 																																																																			Clear																																																																												{																																																																								cls_oled																																																																											(																																																																		0																																																																															)																																																																			;																																																																																				}
// -- Note: Review range bit sizes are the exact size
const int16 Edit_Value_Range[][] = {

// -- Min, Max, Default
/*  0*/  { -60                           ,60                                                            ,AR_Vert_Value },
/*  1*/  { -60                           ,60                                                            ,AR_Hori_Value },
/*  2*/  { 0                             ,75                                                            ,AR_Deadzone },
/*  3*/  { FALSE                         ,TRUE                                                          ,AR_Rumble_Influence },
/*  4*/  { FALSE                         ,TRUE                                                          ,AR_Reduced_Rumble },
/*  5*/  { 0                             ,DP_Max_Small_Time_Based_Value                                 ,AR_Boost_Time },
/*  6*/  { FALSE                         ,TRUE                                                          ,AR_Quick_Toggle },
/*  7*/  { 0                             ,22                                                            ,AR_Hold_Quick_Toggle },
/*  8*/  { 0                             ,21                                                            ,AR_Press_Quick_Toggle - 1 },
/*  9*/  { 0                             ,5                                                             ,SAAA_Activation_Type },
/* 10*/  { 1                             ,60                                                            ,SAAA_Radius },
/* 11*/  { 1                             ,45                                                            ,SAAA_Rotate_By_Angles },
/* 12*/  { 1                             ,60                                                            ,SAAA_Release_Point },
/* 13*/  { FALSE                         ,TRUE                                                          ,SAAA_Quick_Toggle },
/* 14*/  { 0                             ,22                                                            ,SAAA_Hold_Quick_Toggle },
/* 15*/  { 0                             ,21                                                            ,SAAA_Press_Quick_Toggle - 1 },
/* 16*/  { 0                             ,1                                                             ,RC_Release_Activation_Type },
/* 17*/  { HT_Min_Standard_Game_Hold_Time,HT_Min_Standard_Game_Hold_Time + DP_Max_Large_Time_Based_Value,RC_Max_Reload_Time_For_Cancel },
/* 18*/  { FALSE                         ,TRUE                                                          ,RC_Quick_Toggle },
/* 19*/  { 0                             ,22                                                            ,RC_Hold_Quick_Toggle },
/* 20*/  { 0                             ,21                                                            ,RC_Press_Quick_Toggle - 1 },
/* 21*/  { 0                             ,4                                                             ,0 },  // -- Currently unused
/* 22*/  { 0                             ,1                                                             ,AR2_Release_Activation_Type },
/* 23*/  { 0                             ,DP_Max_Large_Time_Based_Value                                 ,AR2_Shoot_Time },
/* 24*/  { FALSE                         ,TRUE                                                          ,AR2_Quick_Toggle },
/* 25*/  { 0                             ,22                                                            ,AR2_Hold_Quick_Toggle },
/* 26*/  { 0                             ,21                                                            ,AR2_Press_Quick_Toggle - 1 },
/* 27*/  { 0                             ,3                                                             ,JS_Activation_Type },
/* 28*/  { 1                             ,DP_Max_Small_Time_Based_Value                                 ,JS_Press_Variance_Time },
/* 29*/  { FALSE                         ,TRUE                                                          ,JS_Quick_Toggle },
/* 30*/  { 0                             ,22                                                            ,JS_Hold_Quick_Toggle },
/* 31*/  { 0                             ,21                                                            ,JS_Press_Quick_Toggle - 1 },
/* 32*/  { 0                             ,1                                                             ,RF_Shot_Type },
/* 33*/  { 0                             ,3                                                             ,RF_Activation_Type },
/* 34*/  { 1                             ,DP_Max_Small_Time_Based_Value                                 ,RF_Shot_Wait_Time },
/* 35*/  { 0                             ,DP_Max_Small_Time_Based_Value                                 ,RF_Single_Shot_Time },
/* 36*/  { FALSE                         ,TRUE                                                          ,RF_Quick_Toggle },
/* 37*/  { 0                             ,22                                                            ,RF_Hold_Quick_Toggle },
/* 38*/  { 0                             ,21                                                            ,RF_Press_Quick_Toggle - 1 },
/* 39*/  { 0                             ,1                                                             ,AF_Type },
/* 40*/  { FALSE                         ,TRUE                                                          ,AF_Quick_Toggle },
/* 41*/  { 0                             ,22                                                            ,AF_Hold_Quick_Toggle },
/* 42*/  { 0                             ,21                                                            ,AF_Press_Quick_Toggle - 1 },
/* 43*/  { 0                             ,126                                                           ,AP_Min_Release_Activation_Time },
/* 44*/  { 0                             ,2                                                             ,AP_Activation_Type },
/* 45*/  { FALSE                         ,TRUE                                                          ,AP_Unping_On_Release },
/* 46*/  { FALSE                         ,TRUE                                                          ,AP_Quick_Toggle },
/* 47*/  { 0                             ,22                                                            ,AP_Hold_Quick_Toggle },
/* 48*/  { 0                             ,21                                                            ,AP_Press_Quick_Toggle - 1 },
/* 49*/  { 1                             ,DP_Max_Large_Time_Based_Value                                 ,AASO_ADS_Hold_Time },
/* 50*/  { FALSE                         ,TRUE                                                          ,AASO_Quick_Toggle },
/* 51*/  { 0                             ,22                                                            ,AASO_Hold_Quick_Toggle },
/* 52*/  { 0                             ,21                                                            ,AASO_Press_Quick_Toggle - 1 },
/* 53*/  { 0                             ,1                                                             ,QS_Activation_Type },
/* 54*/  { FALSE                         ,TRUE                                                          ,QS_Quick_Toggle },
/* 55*/  { 0                             ,22                                                            ,QS_Hold_Quick_Toggle },
/* 56*/  { 0                             ,21                                                            ,QS_Press_Quick_Toggle - 1 },
/* 57*/  { 1                             ,DP_Max_Small_Time_Based_Value                                 ,TJ_Jump_Wait_Time },
/* 58*/  { FALSE                         ,TRUE                                                          ,TJ_Quick_Toggle },
/* 59*/  { 0                             ,22                                                            ,TJ_Hold_Quick_Toggle },
/* 60*/  { 0                             ,21                                                            ,TJ_Press_Quick_Toggle - 1 },
/* 61*/  { FALSE                         ,TRUE                                                          ,TM_Quick_Toggle },
/* 62*/  { 0                             ,22                                                            ,TM_Hold_Quick_Toggle },
/* 63*/  { 0                             ,21                                                            ,TM_Press_Quick_Toggle - 1 },
/* 64*/  { 0                             ,3                                                             ,AS_Type },
/* 66*/  { 0                             ,DP_Max_Large_Time_Based_Value                                 ,AS_Crouch_Prone_Delay_Time },
/* 67*/  { FALSE                         ,TRUE                                                          ,AS_Quick_Toggle },
/* 68*/  { 0                             ,22                                                            ,AS_Hold_Quick_Toggle },
/* 69*/  { 0                             ,21                                                            ,AS_Press_Quick_Toggle - 1 },
/* 70*/  { 0                             ,3                                                             ,SC_Type },
/* 71*/  { 1                             ,DP_Max_Small_Time_Based_Value                                 ,SC_Cancel_Delay_Time },
/* 72*/  { FALSE                         ,TRUE                                                          ,SC_Quick_Toggle },
/* 73*/  { 0                             ,22                                                            ,SC_Hold_Quick_Toggle },
/* 74*/  { 0                             ,21                                                            ,SC_Press_Quick_Toggle - 1 },
/* 75*/  { FALSE                         ,TRUE                                                          ,PC_Quick_Toggle },
/* 76*/  { 0                             ,22                                                            ,PC_Hold_Quick_Toggle },
/* 77*/  { 0                             ,21                                                            ,PC_Press_Quick_Toggle - 1 },
/* 78*/  { 100                           ,100 + DP_Max_Small_Time_Based_Value                           ,SC2_Cancel_Delay_Time },
/* 79*/  { FALSE                         ,TRUE                                                          ,SC2_Quick_Toggle },
/* 80*/  { 0                             ,22                                                            ,SC2_Hold_Quick_Toggle },
/* 81*/  { 0                             ,21                                                            ,SC2_Press_Quick_Toggle - 1 },
/* 82*/  { 0                             ,1                                                             ,DS_Activation_Type },
/* 83*/  { 1                             ,DP_Max_Small_Time_Based_Value                                 ,DS_Press_Variance_Time },
/* 84*/  { FALSE                         ,TRUE                                                          ,DS_Stand_On_Release },
/* 85*/  { 0                             ,1                                                             ,DS_Stand_Type },
/* 86*/  { FALSE                         ,TRUE                                                          ,DS_Quick_Toggle },
/* 87*/  { 0                             ,22                                                            ,DS_Hold_Quick_Toggle },
/* 88*/  { 0                             ,21                                                            ,DS_Press_Quick_Toggle - 1 },
/* 89*/  { 0                             ,2                                                             ,CS_Activation_Type },
/* 90*/  { FALSE                         ,TRUE                                                          ,CS_Loop },
/* 91*/  { 1                             ,DP_Max_Small_Time_Based_Value                                 ,CS_Delay_Time },
/* 92*/  { FALSE                         ,TRUE                                                          ,CS_Once_Release_Stand },
/* 93*/  { FALSE                         ,TRUE                                                          ,CS_Quick_Toggle },
/* 94*/  { 0                             ,22                                                            ,CS_Hold_Quick_Toggle },
/* 95*/  { 0                             ,21                                                            ,CS_Press_Quick_Toggle - 1 },
/* 96*/  { 0                             ,DP_Max_Small_Time_Based_Value                                 ,UJ_Delay_Time },
/* 97*/  { FALSE                         ,TRUE                                                          ,UJ_Quick_Toggle },
/* 98*/  { 0                             ,22                                                            ,UJ_Hold_Quick_Toggle },
/* 99*/  { 0                             ,21                                                            ,UJ_Press_Quick_Toggle - 1 },
/*100*/  { 0                             ,1                                                             ,AA_Aiming_Type },
/*101*/  { FALSE                         ,TRUE                                                          ,AA_Quick_Toggle },
/*102*/  { 0                             ,22                                                            ,AA_Hold_Quick_Toggle },
/*103*/  { 0                             ,21                                                            ,AA_Press_Quick_Toggle - 1 },
/*104*/  { 1                             ,3999                                                          ,ACF_Cook_Time },
/*105*/  { FALSE                         ,TRUE                                                          ,ACF_Quick_Toggle },
/*106*/  { 0                             ,22                                                            ,ACF_Hold_Quick_Toggle },
/*107*/  { 0                             ,21                                                            ,ACF_Press_Quick_Toggle - 1 },
/*108*/  { 0                             ,1                                                             ,YYC_Type_Toggle_Idx },
/*109*/  { 1                             ,DP_Max_Small_Time_Based_Value                                 ,YYC_Wait_Delay },
/*110*/  { 1                             ,DP_Max_Small_Time_Based_Value                                 ,YYC_Cancel_Delay },
/*111*/  { FALSE                         ,TRUE                                                          ,YYC_Quick_Toggle },
/*112*/  { 0                             ,22                                                            ,YYC_Hold_Quick_Toggle },
/*113*/  { 0                             ,21                                                            ,YYC_Press_Quick_Toggle - 1 },
/*114*/  { 0                             ,1                                                             ,HT_Shift_Type },
/*115*/  { 1                             ,99                                                            ,HT_LT_Start_Point },
/*116*/  { 1                             ,99                                                            ,HT_RT_Start_Point },
/*117*/  { FALSE                         ,TRUE                                                          ,HT_Quick_Toggle },
/*118*/  { 0                             ,22                                                            ,HT_Hold_Quick_Toggle },
/*119*/  { 0                             ,21                                                            ,HT_Press_Quick_Toggle - 1 },
/*120*/  { 1                             ,60                                                            ,CD_Deadzone },
/*121*/  { FALSE                         ,TRUE                                                          ,CD_Quick_Toggle },
/*122*/  { 0                             ,22                                                            ,CD_Hold_Quick_Toggle },
/*123*/  { 0                             ,21                                                            ,CD_Press_Quick_Toggle - 1 },
/*124*/  { 0                             ,1                                                             ,AS_SC_YYC_Sprint_Direction_Toggle },
/*125*/  { 0                             ,DP_Max_Small_Time_Based_Value                                 ,FAC_ADS_Time },
/*126*/  { 0                             ,2                                                             ,HI_Randomise_Values },
/*127*/  { FALSE                         ,TRUE                                                          ,HI_Limit_Turbos },
/*128*/  { FALSE                         ,TRUE                                                          ,HI_Quick_Toggle },
/*129*/  { 0                             ,22                                                            ,HI_Hold_Quick_Toggle },
/*130*/  { 0                             ,21                                                            ,HI_Press_Quick_Toggle - 1 },
/*131*/  { 0                             ,2                                                             ,DP_Menu_Font_Size },
/*132*/  { 0                             ,DP_Max_Large_Time_Based_Value                                 ,DP_Forward_Scroll_Apex_Time },
/*133*/  { 0                             ,DP_Max_Small_Time_Based_Value                                 ,DP_Forward_Scroll_Base_Time },
/*134*/  { 0                             ,DP_Max_Small_Time_Based_Value                                 ,DP_Backward_Scroll_Apex_Time },
/*135*/  { 0                             ,DP_Max_Small_Time_Based_Value                                 ,DP_Backward_Scroll_Base_Time },
/*136*/  { 0                             ,DP_Max_Small_Time_Based_Value                                 ,DP_Start_Pause_Time },
/*137*/  { 0                             ,DP_Max_Small_Time_Based_Value                                 ,DP_End_Pause_Time },
/*138*/  { 0                             ,3                                                             ,DP_Menu_Border },
/*139*/  { 0                             ,4                                                             ,DP_Screensaver_Type },
/*140*/  { FALSE                         ,TRUE                                                          ,DP_Always_On_Display },
/*141*/  { 8                             ,/*8 + */ DP_Max_Small_Time_Based_Value                        ,DP_Inactive_Time },
/*142*/  { 0                             ,3                                                             ,LC_Type },
/*143*/  { 8                             ,/*8 +*/ DP_Max_Small_Time_Based_Value                         ,LC_Delay_Interval },
/*144*/  { 0                             ,764                                                           ,LC_Hue },
/*145*/  { 0                             ,255                                                           ,LC_Brightness },
/*146*/  { 0                             ,255                                                           ,LC_FX_Brightness },
/*147*/  { 0                             ,255                                                           ,LC_Menu_Brightness },
/*148*/  { 0                             ,255                                                           ,LC_Saturation },
/*149*/  { FALSE                         ,TRUE                                                          ,LC_Light_Bar_LED_Matches_Zen_LED },
/*150*/  { FALSE                         ,TRUE                                                          ,LC_Quick_Toggle },
/*151*/  { 0                             ,22                                                            ,LC_Hold_Quick_Toggle },
/*152*/  { 0                             ,21                                                            ,LC_Press_Quick_Toggle - 1 },
/*153*/  { FALSE                         ,TRUE                                                          ,BR_Quick_Toggle },
/*154*/  { 0                             ,22                                                            ,BR_Hold_Quick_Toggle },
/*155*/  { 0                             ,21                                                            ,BR_Press_Quick_Toggle - 1 },
/*156*/  { 0                             ,2                                                             ,IT_Turn_Off_Type },
/*157*/  { 1                             ,DP_Max_Small_Time_Based_Value                                 ,IT_Timeout_Time },
/*158*/  { FALSE                         ,TRUE                                                          ,IT_Quick_Toggle },
/*159*/  { 0                             ,22                                                            ,IT_Hold_Quick_Toggle },
/*160*/  { 0                             ,21                                                            ,IT_Press_Quick_Toggle - 1 },
/*161*/  { 300                           ,14999                                                         ,FPO_Required_Hold_Time },
/*162*/  { FALSE                         ,TRUE                                                          ,FPO_Quick_Toggle },
/*163*/  { 0                             ,22                                                            ,FPO_Hold_Quick_Toggle },
/*164*/  { 0                             ,21                                                            ,FPO_Press_Quick_Toggle - 1 },
/*165*/  { 0                             ,7                                                             ,AT_LT_Mode },
/*166*/  { 0                             ,7                                                             ,AT_RT_Mode },
/*167*/  { 0                             ,255                                                           ,AT_L2_Start },
/*168*/  { 0                             ,255                                                           ,AT_R2_Start },
/*169*/  { 0                             ,255                                                           ,AT_L2_Force_1 },
/*170*/  { 0                             ,255                                                           ,AT_R2_Force_1 },
/*171*/  { 0                             ,255                                                           ,AT_L2_Force_2 },
/*172*/  { 0                             ,255                                                           ,AT_R2_Force_2 },
/*173*/  { 0                             ,255                                                           ,AT_L2_Strength_Low },
/*174*/  { 0                             ,255                                                           ,AT_R2_Strength_Low },
/*175*/  { 0                             ,255                                                           ,AT_L2_Strength_Mid },
/*176*/  { 0                             ,255                                                           ,AT_R2_Strength_Mid },
/*177*/  { 0                             ,255                                                           ,AT_L2_Strength_High },
/*178*/  { 0                             ,255                                                           ,AT_R2_Strength_High },
/*179*/  { 0                             ,255                                                           ,AT_L2_Freq },
/*180*/  { 0                             ,255                                                           ,AT_R2_Freq },
/*181*/  { FALSE                         ,TRUE                                                          ,AT_R2_Freq_Matches_Rapid_Fire },
/*182*/  { FALSE                         ,TRUE                                                          ,AT_Quick_Toggle },
/*183*/  { 0                             ,22                                                            ,AT_Hold_Quick_Toggle },
/*184*/  { 0                             ,21                                                            ,AT_Press_Quick_Toggle - 1 },
/*185*/  { FALSE                         ,TRUE                                                          ,ACCUP_Quick_Toggle },
/*186*/  { 0                             ,22                                                            ,ACCUP_Hold_Quick_Toggle },
/*187*/  { 0                             ,21                                                            ,ACCUP_Press_Quick_Toggle - 1 },
/*188*/  { FALSE                         ,TRUE                                                          ,PDNPMF_Quick_Toggle },
/*189*/  { 0                             ,22                                                            ,PDNPMF_Hold_Quick_Toggle },
/*190*/  { 0                             ,21                                                            ,PDNPMF_Press_Quick_Toggle - 1 },
/*191*/  { FALSE                         ,TRUE                                                          ,CF_Quick_Toggle },
/*192*/  { 0                             ,22                                                            ,CF_Hold_Quick_Toggle },
/*193*/  { 0                             ,21                                                            ,CF_Press_Quick_Toggle - 1 },
/*194*/  { 0                             ,13                                                            ,IL_Tactical_Input },
/*195*/  { 0                             ,13                                                            ,IL_Lethal_Input },
/*196*/  { 0                             ,13                                                            ,IL_ADS_Input },
/*197*/  { 0                             ,13                                                            ,IL_Fire_Input },
/*198*/  { 0                             ,13                                                            ,IL_Sprint_Focus_Input },
/*199*/  { 0                             ,13                                                            ,IL_Melee_Input },
/*200*/  { 0                             ,13                                                            ,IL_Ping_Input },
/*201*/  { 0                             ,13                                                            ,IL_Streak_Input },
/*202*/  { 0                             ,13                                                            ,IL_Jump_Mantle_Input },
/*203*/  { 0                             ,13                                                            ,IL_Stance_Slide_Dive_Input },
/*204*/  { 0                             ,13                                                            ,IL_Reload_Interact_Input },
/*205*/  { 0                             ,13                                                            ,IL_Swap_Armor_Input },
/*206*/  { 1                             ,50                                                            ,II_Input_Interval },
/*207*/  { 0                             ,3                                                             ,II_Min_Runtime_Interval_Step }

}

const uint8 Edit_Toggle_Value[] = {

/*  0*/  NOT_USE,
/*  1*/  NOT_USE,
/*  2*/  NOT_USE,
/*  3*/  TRUE,
/*  4*/  TRUE,
/*  5*/  NOT_USE,
/*  6*/  TRUE,
/*  7*/  22,
/*  8*/  21,
/*  9*/  5,
/* 10*/  NOT_USE,
/* 11*/  NOT_USE,
/* 12*/  NOT_USE,
/* 13*/  TRUE,
/* 14*/  22,
/* 15*/  21,
/* 16*/  1,
/* 17*/  NOT_USE,
/* 18*/  TRUE,
/* 19*/  22,
/* 20*/  21,
/* 21*/  0,
/* 22*/  1,
/* 23*/  NOT_USE,
/* 24*/  TRUE,
/* 25*/  22,
/* 26*/  21,
/* 27*/  3,
/* 28*/  NOT_USE,
/* 29*/  TRUE,
/* 30*/  22,
/* 31*/  21,
/* 32*/  1,
/* 33*/  3,
/* 34*/  NOT_USE,
/* 35*/  NOT_USE,
/* 36*/  TRUE,
/* 37*/  22,
/* 38*/  21,
/* 39*/  1,
/* 40*/  TRUE,
/* 41*/  22,
/* 42*/  21,
/* 43*/  NOT_USE,
/* 44*/  2,
/* 45*/  TRUE,
/* 46*/  TRUE,
/* 47*/  22,
/* 48*/  21,
/* 49*/  NOT_USE,
/* 50*/  TRUE,
/* 51*/  22,
/* 52*/  21,
/* 53*/  1,
/* 54*/  TRUE,
/* 55*/  23,
/* 56*/  22,
/* 57*/  NOT_USE,
/* 58*/  TRUE,
/* 59*/  22,
/* 60*/  21,
/* 61*/  TRUE,
/* 62*/  22,
/* 63*/  21,
/* 64*/  3,
/* 66*/  NOT_USE,
/* 67*/  TRUE,
/* 68*/  22,
/* 69*/  21,
/* 70*/  3,
/* 71*/  NOT_USE,
/* 72*/  TRUE,
/* 73*/  22,
/* 74*/  21,
/* 75*/  TRUE,
/* 76*/  22,
/* 77*/  21,
/* 78*/  NOT_USE,
/* 79*/  TRUE,
/* 80*/  22,
/* 81*/  21,
/* 82*/  1,
/* 83*/  NOT_USE,
/* 84*/  TRUE,
/* 85*/  1,
/* 86*/  TRUE,
/* 87*/  22,
/* 88*/  21,
/* 89*/  2,
/* 90*/  TRUE,
/* 91*/  NOT_USE,
/* 92*/  TRUE,
/* 93*/  TRUE,
/* 94*/  22,
/* 95*/  21,
/* 96*/  NOT_USE,
/* 97*/  TRUE,
/* 98*/  22,
/* 99*/  21,
/*100*/  1,
/*101*/  TRUE,
/*102*/  22,
/*103*/  21,
/*104*/  NOT_USE,
/*105*/  TRUE,
/*106*/  22,
/*107*/  21,
/*108*/  1,
/*109*/  NOT_USE,
/*110*/  NOT_USE,
/*111*/  TRUE,
/*112*/  22,
/*113*/  21,
/*114*/  1,
/*115*/  NOT_USE,
/*116*/  NOT_USE,
/*117*/  TRUE,
/*118*/  22,
/*119*/  21,
/*120*/  NOT_USE,
/*121*/  TRUE,
/*122*/  22,
/*123*/  21,
/*124*/  1,
/*125*/  NOT_USE,
/*126*/  2,
/*127*/  TRUE,
/*128*/  TRUE,
/*129*/  22,
/*130*/  21,
/*131*/  2,
/*132*/  NOT_USE,
/*133*/  NOT_USE,
/*134*/  NOT_USE,
/*135*/  NOT_USE,
/*136*/  NOT_USE,
/*137*/  NOT_USE,
/*138*/  3,
/*139*/  4,
/*140*/  TRUE,
/*141*/  NOT_USE,
/*142*/  3,
/*143*/  NOT_USE,
/*144*/  NOT_USE,
/*145*/  NOT_USE,
/*146*/  NOT_USE,
/*147*/  NOT_USE,
/*148*/  NOT_USE,
/*149*/  TRUE,
/*150*/  TRUE,
/*151*/  22,
/*152*/  21,
/*153*/  TRUE,
/*154*/  22,
/*155*/  21,
/*156*/  2,
/*157*/  NOT_USE,
/*158*/  TRUE,
/*159*/  22,
/*160*/  21,
/*161*/  NOT_USE,
/*162*/  TRUE,
/*163*/  22,
/*164*/  21,
/*165*/  7,
/*166*/  7,
/*167*/  NOT_USE,
/*168*/  NOT_USE,
/*169*/  NOT_USE,
/*170*/  NOT_USE,
/*171*/  NOT_USE,
/*172*/  NOT_USE,
/*173*/  NOT_USE,
/*174*/  NOT_USE,
/*175*/  NOT_USE,
/*176*/  NOT_USE,
/*177*/  NOT_USE,
/*178*/  NOT_USE,
/*179*/  NOT_USE,
/*180*/  NOT_USE,
/*181*/  TRUE,
/*182*/  TRUE,
/*183*/  22,
/*184*/  21,
/*185*/  TRUE,
/*186*/  22,
/*187*/  21,
/*188*/  TRUE,
/*189*/  22,
/*190*/  21,
/*191*/  TRUE,
/*192*/  22,
/*193*/  21,
/*194*/  13,
/*195*/  13,
/*196*/  13,
/*197*/  13,
/*198*/  13,
/*199*/  13,
/*200*/  13,
/*201*/  13,
/*202*/  13,
/*203*/  13,
/*204*/  13,
/*205*/  13,
/*206*/  NOT_USE,
/*207*/  NOT_USE

}

const uint8 Edit_Value_Text_Type[] = {

/*  0*/  EVTT_Percentage,
/*  1*/  EVTT_Percentage,
/*  2*/  EVTT_Percentage,
/*  3*/  EVTT_None,
/*  4*/  EVTT_None,
/*  5*/  EVTT_MS,
/*  6*/  EVTT_None,
/*  7*/  EVTT_None,
/*  8*/  EVTT_None,
/*  9*/  EVTT_None,
/* 10*/  EVTT_Percentage,
/* 11*/  EVTT_None,
/* 12*/  EVTT_Percentage,
/* 13*/  EVTT_None,
/* 14*/  EVTT_None,
/* 15*/  EVTT_None,
/* 16*/  EVTT_None,
/* 17*/  EVTT_MS,
/* 18*/  EVTT_None,
/* 19*/  EVTT_None,
/* 20*/  EVTT_None,
/* 21*/  EVTT_None,
/* 22*/  EVTT_None,
/* 23*/  EVTT_MS,
/* 24*/  EVTT_None,
/* 25*/  EVTT_None,
/* 26*/  EVTT_None,
/* 27*/  EVTT_None,
/* 28*/  EVTT_MS,
/* 29*/  EVTT_None,
/* 30*/  EVTT_None,
/* 31*/  EVTT_None,
/* 32*/  EVTT_None,
/* 33*/  EVTT_None,
/* 34*/  EVTT_Times_Per_Sec,
/* 35*/  EVTT_MS,
/* 36*/  EVTT_None,
/* 37*/  EVTT_None,
/* 38*/  EVTT_None,
/* 39*/  EVTT_None,
/* 40*/  EVTT_None,
/* 41*/  EVTT_None,
/* 42*/  EVTT_None,
/* 43*/  EVTT_Sec,
/* 44*/  EVTT_None,
/* 45*/  EVTT_None,
/* 46*/  EVTT_None,
/* 47*/  EVTT_None,
/* 48*/  EVTT_None,
/* 49*/  EVTT_MS,
/* 50*/  EVTT_None,
/* 51*/  EVTT_None,
/* 52*/  EVTT_None,
/* 53*/  EVTT_None,
/* 54*/  EVTT_None,
/* 55*/  EVTT_None,
/* 56*/  EVTT_None,
/* 57*/  EVTT_Times_Per_Sec,
/* 58*/  EVTT_None,
/* 59*/  EVTT_None,
/* 60*/  EVTT_None,
/* 61*/  EVTT_None,
/* 62*/  EVTT_None,
/* 63*/  EVTT_None,
/* 64*/  EVTT_None,
/* 66*/  EVTT_MS,
/* 67*/  EVTT_None,
/* 68*/  EVTT_None,
/* 69*/  EVTT_None,
/* 70*/  EVTT_None,
/* 71*/  EVTT_MS,
/* 72*/  EVTT_None,
/* 73*/  EVTT_None,
/* 74*/  EVTT_None,
/* 75*/  EVTT_None,
/* 76*/  EVTT_None,
/* 77*/  EVTT_None,
/* 78*/  EVTT_MS,
/* 79*/  EVTT_None,
/* 80*/  EVTT_None,
/* 81*/  EVTT_None,
/* 82*/  EVTT_None,
/* 83*/  EVTT_MS,
/* 84*/  EVTT_None,
/* 85*/  EVTT_None,
/* 86*/  EVTT_None,
/* 87*/  EVTT_None,
/* 88*/  EVTT_None,
/* 89*/  EVTT_None,
/* 90*/  EVTT_None,
/* 91*/  EVTT_MS,
/* 92*/  EVTT_None,
/* 93*/  EVTT_None,
/* 94*/  EVTT_None,
/* 95*/  EVTT_None,
/* 96*/  EVTT_MS,
/* 97*/  EVTT_None,
/* 98*/  EVTT_None,
/* 99*/  EVTT_None,
/*100*/  EVTT_None,
/*101*/  EVTT_None,
/*102*/  EVTT_None,
/*103*/  EVTT_None,
/*104*/  EVTT_MS,
/*105*/  EVTT_None,
/*106*/  EVTT_None,
/*107*/  EVTT_None,
/*108*/  EVTT_None,
/*109*/  EVTT_MS,
/*110*/  EVTT_MS,
/*111*/  EVTT_None,
/*112*/  EVTT_None,
/*113*/  EVTT_None,
/*114*/  EVTT_None,
/*115*/  EVTT_Percentage,
/*116*/  EVTT_Percentage,
/*117*/  EVTT_None,
/*118*/  EVTT_None,
/*119*/  EVTT_None,
/*120*/  EVTT_Percentage,
/*121*/  EVTT_None,
/*122*/  EVTT_None,
/*123*/  EVTT_None,
/*124*/  EVTT_None,
/*125*/  EVTT_MS,
/*126*/  EVTT_None,
/*127*/  EVTT_None,
/*128*/  EVTT_None,
/*129*/  EVTT_None,
/*130*/  EVTT_None,
/*131*/  EVTT_None,
/*132*/  EVTT_MS,
/*133*/  EVTT_MS,
/*134*/  EVTT_MS,
/*135*/  EVTT_MS,
/*136*/  EVTT_MS,
/*137*/  EVTT_MS,
/*138*/  EVTT_None,
/*139*/  EVTT_None,
/*140*/  EVTT_None,
/*141*/  EVTT_Sec,
/*142*/  EVTT_None,
/*143*/  EVTT_MS,
/*144*/  EVTT_None,
/*145*/  EVTT_None,
/*146*/  EVTT_None,
/*147*/  EVTT_None,
/*148*/  EVTT_None,
/*149*/  EVTT_None,
/*150*/  EVTT_None,
/*151*/  EVTT_None,
/*152*/  EVTT_None,
/*153*/  EVTT_None,
/*154*/  EVTT_None,
/*155*/  EVTT_None,
/*156*/  EVTT_None,
/*157*/  EVTT_Min,
/*158*/  EVTT_None,
/*159*/  EVTT_None,
/*160*/  EVTT_None,
/*161*/  EVTT_MS,
/*162*/  EVTT_None,
/*163*/  EVTT_None,
/*164*/  EVTT_None,
/*165*/  EVTT_None,
/*166*/  EVTT_None,
/*167*/  EVTT_None,
/*168*/  EVTT_None,
/*169*/  EVTT_None,
/*170*/  EVTT_None,
/*171*/  EVTT_None,
/*172*/  EVTT_None,
/*173*/  EVTT_None,
/*174*/  EVTT_None,
/*175*/  EVTT_None,
/*176*/  EVTT_None,
/*177*/  EVTT_None,
/*178*/  EVTT_None,
/*179*/  EVTT_None,
/*180*/  EVTT_None,
/*181*/  EVTT_None,
/*182*/  EVTT_None,
/*183*/  EVTT_None,
/*184*/  EVTT_None,
/*185*/  EVTT_None,
/*186*/  EVTT_None,
/*187*/  EVTT_None,
/*188*/  EVTT_None,
/*189*/  EVTT_None,
/*190*/  EVTT_None,
/*191*/  EVTT_None,
/*192*/  EVTT_None,
/*193*/  EVTT_None,
/*194*/  EVTT_None,
/*195*/  EVTT_None,
/*196*/  EVTT_None,
/*197*/  EVTT_None,
/*198*/  EVTT_None,
/*199*/  EVTT_None,
/*200*/  EVTT_None,
/*201*/  EVTT_None,
/*202*/  EVTT_None,
/*203*/  EVTT_None,
/*204*/  EVTT_None,
/*205*/  EVTT_None,
/*206*/  EVTT_FPS,
/*207*/  EVTT_MS

}

// -- Round to input interval value (time is game dependant)
const uint8 Round_Edit_Input_Interval[] = {

  AR_Boost_Time_Idx,
  RC_Max_Reload_Time_For_Cancel_Idx,
  TJ_Jump_Wait_Time_Idx,
  RF_Shot_Wait_Time_Idx,
  RF_Single_Shot_Time_Idx,
  SC_Cancel_Delay_Time_Idx,
  SC2_Cancel_Delay_Time_Idx,
  CS_Delay_Time_Idx,
  UJ_Delay_Time_Idx,
  ACF_Cook_Time_Idx,
  YYC_Cancel_Delay_Time_Idx,
  YYC_Wait_Delay_Time_Idx,
  FAC_ADS_Time_Idx

}

// -- Round to max polling rate value (time is not game dependant)
const uint8 Round_Edit_Max_Polling_Rate[] = {

  AR2_Shoot_Time_Idx,
  JS_Press_Variance_Time_Idx,
  AS_Crouch_Prone_Delay_Time_Idx,
  DS_Press_Variance_Time_Idx,
  DP_Forward_Scroll_Apex_Time_Idx,
  DP_Forward_Scroll_Base_Time_Idx,
  DP_Backward_Scroll_Apex_Time_Idx,
  DP_Backward_Scroll_Base_Time_Idx,
  DP_Start_Pause_Time_Idx,
  DP_End_Pause_Time_Idx,
  FPO_Required_Hold_Time_Idx

}

const uint8 Scroll[] = {
  0x1, 0x20, 0x41, 0x6e, 0x74, 0x69, 0x2d, 0x52, 0x65, 0x63, 0x6f, 0x69, 0x6c, 0x20, 0x0, 0x20, 0x53,
  0x6c, 0x6f, 0x77, 0x64, 0x6f, 0x77, 0x6e, 0x20, 0x41, 0x69, 0x6d, 0x20, 0x41, 0x73, 0x73, 0x69, 0x73, 0x74,
  0x20, 0x41, 0x62, 0x75, 0x73, 0x65, 0x20, 0x0, 0x20, 0x52, 0x65, 0x6c, 0x6f, 0x61, 0x64, 0x20, 0x43, 0x61,
  0x6e, 0x63, 0x65, 0x6c, 0x20, 0x0, 0x20, 0x41, 0x75, 0x74, 0x6f, 0x20, 0x52, 0x65, 0x6c, 0x6f, 0x61, 0x64,
  0x20, 0x0, 0x20, 0x4a, 0x75, 0x6d, 0x70, 0x20, 0x53, 0x68, 0x6f, 0x74, 0x20, 0x0, 0x20, 0x52, 0x61, 0x70, 0x69,
  0x64, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x0, 0x20, 0x41, 0x75, 0x74, 0x6f, 0x20, 0x46, 0x6f, 0x63, 0x75,
  0x73, 0x20, 0x0, 0x20, 0x41, 0x75, 0x74, 0x6f, 0x20, 0x50, 0x69, 0x6e, 0x67, 0x20, 0x0, 0x20, 0x53, 0x6e, 0x61,
  0x70, 0x20, 0x4f, 0x6e, 0x20, 0x41, 0x69, 0x6d, 0x20, 0x41, 0x73, 0x73, 0x69, 0x73, 0x74, 0x20, 0x41, 0x62,
  0x75, 0x73, 0x65, 0x20, 0x28, 0x63, 0x61, 0x6d, 0x70, 0x61, 0x69, 0x67, 0x6e, 0x2f, 0x7a, 0x6f, 0x6d, 0x62,
  0x69, 0x65, 0x73, 0x20, 0x6f, 0x6e, 0x6c, 0x79, 0x29, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20,
  0x53, 0x63, 0x6f, 0x70, 0x65, 0x72, 0x20, 0x28, 0x72, 0x65, 0x71, 0x2e, 0x20, 0x74, 0x68, 0x72, 0x6f, 0x77,
  0x69, 0x6e, 0x67, 0x20, 0x6b, 0x6e, 0x69, 0x66, 0x65, 0x29, 0x20, 0x0, 0x20, 0x54, 0x75, 0x72, 0x62, 0x6f,
  0x20, 0x4a, 0x75, 0x6d, 0x70, 0x20, 0x0, 0x20, 0x54, 0x75, 0x72, 0x62, 0x6f, 0x20, 0x4d, 0x65, 0x6c, 0x65,
  0x65, 0x20, 0x0, 0x20, 0x41, 0x75, 0x74, 0x6f, 0x20, 0x53, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x20, 0x0, 0x20, 0x53,
  0x6c, 0x69, 0x64, 0x65, 0x20, 0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x20, 0x0, 0x20, 0x50, 0x69, 0x63, 0x6b,
  0x75, 0x70, 0x20, 0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x20, 0x28, 0x73, 0x77, 0x61, 0x70, 0x20, 0x63, 0x61,
  0x6e, 0x20, 0x63, 0x61, 0x75, 0x73, 0x65, 0x20, 0x69, 0x73, 0x73, 0x75, 0x65, 0x73, 0x20, 0x69, 0x6e, 0x20,
  0x63, 0x61, 0x73, 0x65, 0x73, 0x29, 0x20, 0x0, 0x20, 0x53, 0x77, 0x61, 0x70, 0x20, 0x43, 0x61, 0x6e, 0x63,
  0x65, 0x6c, 0x20, 0x0, 0x20, 0x44, 0x72, 0x6f, 0x70, 0x73, 0x68, 0x6f, 0x74, 0x20, 0x0, 0x20, 0x43, 0x72, 0x6f,
  0x75, 0x63, 0x68, 0x20, 0x53, 0x68, 0x6f, 0x74, 0x20, 0x0, 0x20, 0x55, 0x6e, 0x64, 0x65, 0x72, 0x62, 0x61,
  0x72, 0x72, 0x65, 0x6c, 0x20, 0x4a, 0x69, 0x74, 0x74, 0x65, 0x72, 0x20, 0x28, 0x4d, 0x57, 0x49, 0x49, 0x2f,
  0x44, 0x4d, 0x5a, 0x29, 0x20, 0x0, 0x20, 0x41, 0x75, 0x74, 0x6f, 0x20, 0x41, 0x69, 0x6d, 0x20, 0x2f, 0x20,
  0x41, 0x6b, 0x69, 0x6d, 0x62, 0x6f, 0x20, 0x53, 0x79, 0x6e, 0x63, 0x20, 0x28, 0x63, 0x61, 0x6e, 0x20, 0x63,
  0x61, 0x75, 0x73, 0x65, 0x20, 0x69, 0x73, 0x73, 0x75, 0x65, 0x73, 0x20, 0x77, 0x2f, 0x20, 0x64, 0x72, 0x69,
  0x76, 0x69, 0x6e, 0x67, 0x29, 0x20, 0x0, 0x20, 0x41, 0x75, 0x74, 0x6f, 0x20, 0x43, 0x6f, 0x6f, 0x6b, 0x20,
  0x46, 0x72, 0x61, 0x67, 0x20, 0x0, 0x20, 0x22, 0x59, 0x59, 0x22, 0x20, 0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c,
  0x20, 0x28, 0x76, 0x69, 0x73, 0x75, 0x61, 0x6c, 0x29, 0x20, 0x0, 0x20, 0x48, 0x61, 0x69, 0x72, 0x20, 0x54,
  0x72, 0x69, 0x67, 0x67, 0x65, 0x72, 0x73, 0x20, 0x0, 0x20, 0x43, 0x75, 0x73, 0x74, 0x6f, 0x6d, 0x20, 0x44,
  0x65, 0x61, 0x64, 0x7a, 0x6f, 0x6e, 0x65, 0x20, 0x28, 0x70, 0x68, 0x79, 0x73, 0x69, 0x63, 0x61, 0x6c, 0x20,
  0x73, 0x74, 0x69, 0x63, 0x6b, 0x29, 0x20, 0x0, 0x20, 0x49, 0x6e, 0x2d, 0x47, 0x61, 0x6d, 0x65, 0x20, 0x53,
  0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x20, 0x0, 0x20, 0x48, 0x75, 0x6d, 0x61, 0x6e, 0x69, 0x73, 0x65,
  0x20, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x73, 0x20, 0x28, 0x66, 0x6f, 0x72, 0x20, 0x70, 0x65, 0x61, 0x63, 0x65,
  0x20, 0x6f, 0x66, 0x20, 0x6d, 0x69, 0x6e, 0x64, 0x29, 0x20, 0x0, 0x20, 0x44, 0x69, 0x73, 0x70, 0x6c, 0x61,
  0x79, 0x20, 0x43, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x20, 0x0, 0x20, 0x4c, 0x45, 0x44, 0x20, 0x43, 0x6f, 0x6e,
  0x66, 0x69, 0x67, 0x20, 0x0, 0x20, 0x42, 0x6c, 0x6f, 0x63, 0x6b, 0x20, 0x52, 0x75, 0x6d, 0x62, 0x6c, 0x65,
  0x2f, 0x48, 0x61, 0x70, 0x74, 0x69, 0x63, 0x73, 0x20, 0x0, 0x20, 0x49, 0x6e, 0x61, 0x63, 0x74, 0x69, 0x76,
  0x69, 0x74, 0x79, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x6f, 0x75, 0x74, 0x20, 0x0, 0x20, 0x46, 0x61, 0x73, 0x74,
  0x20, 0x50, 0x6f, 0x77, 0x65, 0x72, 0x20, 0x4f, 0x66, 0x66, 0x20, 0x28, 0x77, 0x69, 0x72, 0x65, 0x6c, 0x65,
  0x73, 0x73, 0x20, 0x6f, 0x6e, 0x6c, 0x79, 0x29, 0x20, 0x0, 0x20, 0x41, 0x64, 0x61, 0x70, 0x74, 0x69, 0x76,
  0x65, 0x20, 0x54, 0x72, 0x69, 0x67, 0x67, 0x65, 0x72, 0x73, 0x20, 0x43, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x20,
  0x28, 0x44, 0x75, 0x61, 0x6c, 0x53, 0x65, 0x6e, 0x73, 0x65, 0x29, 0x20, 0x0, 0x20, 0x41, 0x75, 0x74, 0x6f,
  0x20, 0x43, 0x6c, 0x6f, 0x73, 0x65, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x20,
  0x55, 0x70, 0x64, 0x61, 0x74, 0x65, 0x20, 0x50, 0x6f, 0x70, 0x75, 0x70, 0x20, 0x28, 0x58, 0x62, 0x6f, 0x78,
  0x29, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x76, 0x65, 0x6e, 0x74, 0x20, 0x54, 0x72, 0x69, 0x67, 0x67, 0x65,
  0x72, 0x69, 0x6e, 0x67, 0x20, 0x44, 0x75, 0x61, 0x6c, 0x53, 0x65, 0x6e, 0x73, 0x65, 0x20, 0x4e, 0x61, 0x74,
  0x69, 0x76, 0x65, 0x20, 0x50, 0x61, 0x73, 0x73, 0x74, 0x68, 0x72, 0x6f, 0x75, 0x67, 0x68, 0x20, 0x4d, 0x6f,
  0x64, 0x65, 0x20, 0x28, 0x50, 0x43, 0x29, 0x20, 0x0, 0x20, 0x43, 0x72, 0x6f, 0x73, 0x73, 0x6f, 0x76, 0x65,
  0x72, 0x20, 0x4d, 0x61, 0x70, 0x70, 0x69, 0x6e, 0x67, 0x20, 0x46, 0x69, 0x78, 0x20, 0x0, 0x20, 0x49, 0x6e,
  0x70, 0x75, 0x74, 0x20, 0x4c, 0x61, 0x79, 0x6f, 0x75, 0x74, 0x20, 0x0, 0x20, 0x49, 0x6e, 0x70, 0x75, 0x74,
  0x20, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x76, 0x61, 0x6c, 0x20, 0x28, 0x61, 0x64, 0x76, 0x61, 0x6e, 0x63, 0x65,
  0x64, 0x29, 0x20, 0x0, 0x20, 0x44, 0x6f, 0x6e, 0x61, 0x74, 0x65, 0x20, 0x28, 0x70, 0x6c, 0x65, 0x61, 0x73,
  0x65, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x69, 0x64, 0x65, 0x72, 0x20, 0x2d, 0x20, 0x31, 0x30, 0x30, 0x30, 0x2b,
  0x20, 0x68, 0x6f, 0x75, 0x72, 0x73, 0x20, 0x68, 0x61, 0x73, 0x20, 0x62, 0x65, 0x65, 0x6e, 0x20, 0x70, 0x75,
  0x74, 0x20, 0x69, 0x6e, 0x74, 0x6f, 0x20, 0x6d, 0x61, 0x6b, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x68, 0x69, 0x73,
  0x20, 0x68, 0x69, 0x67, 0x68, 0x20, 0x71, 0x75, 0x61, 0x6c, 0x69, 0x74, 0x79, 0x20, 0x26, 0x20, 0x66, 0x72,
  0x65, 0x65, 0x6c, 0x79, 0x20, 0x61, 0x76, 0x61, 0x69, 0x6c, 0x61, 0x62, 0x6c, 0x65, 0x29, 0x20, 0x0, 0x20,
  0x42, 0x61, 0x74, 0x74, 0x65, 0x72, 0x79, 0x20, 0x0, 0x20, 0x53, 0x50, 0x56, 0x41, 0x52, 0x20, 0x42, 0x69,
  0x74, 0x73, 0x20, 0x55, 0x73, 0x65, 0x64, 0x20, 0x0, 0x20, 0x50, 0x65, 0x61, 0x6b, 0x20, 0x43, 0x50, 0x55,
  0x20, 0x28, 0x72, 0x65, 0x73, 0x65, 0x74, 0x73, 0x20, 0x6f, 0x6e, 0x20, 0x6d, 0x65, 0x6e, 0x75, 0x20, 0x65,
  0x78, 0x69, 0x74, 0x29, 0x20, 0x0, 0x20, 0x5a, 0x65, 0x6e, 0x20, 0x55, 0x70, 0x74, 0x69, 0x6d, 0x65, 0x20, 0x0,
  0x20, 0x53, 0x63, 0x72, 0x69, 0x70, 0x74, 0x20, 0x55, 0x70, 0x74, 0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x4f,
  0x66, 0x66, 0x20, 0x0, 0x20, 0x4f, 0x6e, 0x20, 0x0, 0x20, 0x3e, 0x3c, 0x20, 0x0, 0x0, 0x20, 0x43, 0x68, 0x61,
  0x72, 0x67, 0x69, 0x6e, 0x67, 0x20, 0x0, 0x20, 0x2a, 0x53, 0x61, 0x76, 0x65, 0x20, 0x46, 0x69, 0x72, 0x73,
  0x74, 0x2a, 0x20, 0x0, 0x20, 0x62, 0x75, 0x79, 0x6d, 0x65, 0x61, 0x63, 0x6f, 0x66, 0x66, 0x65, 0x65, 0x2e,
  0x63, 0x6f, 0x6d, 0x2f, 0x46, 0x61, 0x64, 0x65, 0x78, 0x7a, 0x20, 0x0, 0x20, 0x72, 0x65, 0x76, 0x6f, 0x6c,
  0x75, 0x74, 0x2e, 0x6d, 0x65, 0x2f, 0x46, 0x61, 0x64, 0x65, 0x78, 0x7a, 0x20, 0x0, 0x20, 0x70, 0x61, 0x79,
  0x70, 0x61, 0x6c, 0x2e, 0x6d, 0x65, 0x2f, 0x46, 0x61, 0x64, 0x65, 0x78, 0x7a, 0x20, 0x0, 0x20, 0x56, 0x65,
  0x72, 0x74, 0x69, 0x63, 0x61, 0x6c, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x72, 0x69, 0x7a, 0x6f, 0x6e, 0x74, 0x61,
  0x6c, 0x20, 0x0, 0x20, 0x44, 0x65, 0x61, 0x64, 0x7a, 0x6f, 0x6e, 0x65, 0x20, 0x0, 0x20, 0x52, 0x75, 0x6d, 0x62,
  0x6c, 0x65, 0x20, 0x49, 0x6e, 0x66, 0x6c, 0x75, 0x65, 0x6e, 0x63, 0x65, 0x20, 0x0, 0x20, 0x52, 0x65, 0x64,
  0x75, 0x63, 0x65, 0x20, 0x52, 0x75, 0x6d, 0x62, 0x6c, 0x65, 0x20, 0x49, 0x6e, 0x66, 0x6c, 0x75, 0x65, 0x6e,
  0x63, 0x65, 0x20, 0x0, 0x20, 0x49, 0x6e, 0x69, 0x74, 0x69, 0x61, 0x6c, 0x20, 0x42, 0x6f, 0x6f, 0x73, 0x74,
  0x20, 0x52, 0x75, 0x6d, 0x62, 0x6c, 0x65, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69,
  0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51,
  0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73,
  0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x41,
  0x63, 0x74, 0x69, 0x76, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x0, 0x20, 0x52, 0x61, 0x64, 0x69, 0x75, 0x73,
  0x20, 0x28, 0x27, 0x73, 0x74, 0x72, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x27, 0x29, 0x20, 0x0, 0x20, 0x49, 0x6e,
  0x63, 0x72, 0x65, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x52, 0x6f, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x42,
  0x79, 0x20, 0x28, 0x64, 0x65, 0x67, 0x72, 0x65, 0x65, 0x73, 0x29, 0x20, 0x0, 0x20, 0x52, 0x65, 0x6c, 0x65,
  0x61, 0x73, 0x65, 0x20, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20,
  0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63,
  0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51,
  0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x41, 0x63, 0x74, 0x69,
  0x76, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x0, 0x20, 0x52, 0x65, 0x6c, 0x6f, 0x61, 0x64, 0x20, 0x54, 0x69,
  0x6d, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0,
  0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67,
  0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x0, 0x20, 0x41, 0x63, 0x74, 0x69, 0x76, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20,
  0x0, 0x20, 0x52, 0x65, 0x71, 0x75, 0x69, 0x72, 0x65, 0x64, 0x20, 0x46, 0x69, 0x72, 0x69, 0x6e, 0x67, 0x20,
  0x54, 0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c,
  0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67,
  0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20,
  0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x41, 0x63, 0x74, 0x69, 0x76, 0x61, 0x74, 0x69, 0x6f,
  0x6e, 0x20, 0x0, 0x20, 0x50, 0x61, 0x6e, 0x69, 0x63, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x54, 0x69,
  0x6d, 0x65, 0x20, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63,
  0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75,
  0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73,
  0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x53, 0x68,
  0x6f, 0x74, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x41, 0x63, 0x74, 0x69, 0x76, 0x61, 0x74, 0x69,
  0x6f, 0x6e, 0x20, 0x0, 0x20, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x20, 0x0, 0x20, 0x49, 0x6e, 0x69, 0x74, 0x69, 0x61,
  0x6c, 0x20, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x20, 0x28, 0x66, 0x6f, 0x72, 0x20, 0x74, 0x61, 0x70, 0x20, 0x73,
  0x68, 0x6f, 0x74, 0x29, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c,
  0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67,
  0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20,
  0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69,
  0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51,
  0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73,
  0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x52,
  0x65, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x64, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x20, 0x46, 0x6f, 0x72, 0x20, 0x41,
  0x63, 0x74, 0x69, 0x76, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x0, 0x20, 0x52, 0x65, 0x71, 0x75, 0x69, 0x72,
  0x65, 0x64, 0x20, 0x41, 0x44, 0x53, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x55, 0x6e, 0x70, 0x69,
  0x6e, 0x67, 0x20, 0x4f, 0x6e, 0x20, 0x52, 0x65, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x20, 0x28, 0x65, 0x78, 0x70,
  0x65, 0x72, 0x69, 0x6d, 0x65, 0x6e, 0x74, 0x61, 0x6c, 0x29, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b,
  0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69,
  0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20,
  0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c,
  0x64, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67,
  0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54,
  0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63,
  0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x41, 0x63, 0x74, 0x69, 0x76, 0x61, 0x74,
  0x69, 0x6f, 0x6e, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54,
  0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b,
  0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75,
  0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x44, 0x65, 0x6c, 0x61, 0x79,
  0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48,
  0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0,
  0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c,
  0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20,
  0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20,
  0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67,
  0x6c, 0x65, 0x20, 0x0, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x43, 0x72, 0x6f, 0x75, 0x63, 0x68, 0x65,
  0x64, 0x20, 0x53, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x20, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x20, 0x0, 0x20, 0x51,
  0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64,
  0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72,
  0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0,
  0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x20, 0x44, 0x65, 0x6c,
  0x61, 0x79, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0,
  0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67,
  0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67,
  0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54,
  0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x20, 0x44, 0x65, 0x6c,
  0x61, 0x79, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0,
  0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67,
  0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x41, 0x63, 0x74, 0x69, 0x76, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x0, 0x20,
  0x50, 0x61, 0x6e, 0x69, 0x63, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x20, 0x56,
  0x61, 0x72, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x20, 0x0, 0x20, 0x53, 0x74, 0x61, 0x6e, 0x64, 0x20, 0x4f, 0x6e,
  0x20, 0x52, 0x65, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x20, 0x0, 0x20, 0x53, 0x74, 0x61, 0x6e, 0x64, 0x20, 0x54,
  0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67,
  0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54,
  0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x41, 0x63, 0x74, 0x69, 0x76, 0x61, 0x74, 0x69, 0x6f, 0x6e,
  0x20, 0x0, 0x20, 0x4c, 0x6f, 0x6f, 0x70, 0x20, 0x4f, 0x6e, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x0, 0x20, 0x4c,
  0x6f, 0x6f, 0x70, 0x20, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x20, 0x0, 0x20, 0x4f, 0x6e, 0x63, 0x65, 0x20, 0x2d,
  0x20, 0x53, 0x74, 0x61, 0x6e, 0x64, 0x20, 0x4f, 0x6e, 0x20, 0x52, 0x65, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x20,
  0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f,
  0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20,
  0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x53, 0x68, 0x6f, 0x74, 0x20, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69,
  0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51,
  0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73,
  0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x41,
  0x69, 0x6d, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f,
  0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20,
  0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69,
  0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x43, 0x6f, 0x6f, 0x6b, 0x20, 0x54,
  0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67,
  0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54,
  0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x57, 0x61, 0x69, 0x74,
  0x20, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x20, 0x28, 0x69, 0x64, 0x65, 0x61, 0x6c, 0x6c, 0x79, 0x20, 0x74, 0x68,
  0x69, 0x73, 0x20, 0x73, 0x68, 0x6f, 0x75, 0x6c, 0x64, 0x20, 0x62, 0x65, 0x20, 0x6c, 0x6f, 0x6e, 0x67, 0x65,
  0x72, 0x29, 0x20, 0x0, 0x20, 0x43, 0x61, 0x6e, 0x63, 0x65, 0x6c, 0x2f, 0x52, 0x65, 0x74, 0x75, 0x72, 0x6e,
  0x20, 0x44, 0x65, 0x6c, 0x61, 0x79, 0x20, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f,
  0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20,
  0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69,
  0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20,
  0x4c, 0x54, 0x20, 0x53, 0x74, 0x61, 0x72, 0x74, 0x20, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x20, 0x0, 0x20, 0x52,
  0x54, 0x20, 0x53, 0x74, 0x61, 0x72, 0x74, 0x20, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x20, 0x0, 0x20, 0x51, 0x75,
  0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20,
  0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65,
  0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20,
  0x44, 0x65, 0x61, 0x64, 0x7a, 0x6f, 0x6e, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54,
  0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b,
  0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75,
  0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x53, 0x70, 0x72, 0x69, 0x6e,
  0x74, 0x20, 0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x0, 0x20, 0x41, 0x44, 0x53, 0x20,
  0x54, 0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x52, 0x61, 0x6e, 0x64, 0x6f, 0x6d, 0x69, 0x73, 0x65, 0x20, 0x56,
  0x61, 0x6c, 0x75, 0x65, 0x73, 0x20, 0x0, 0x20, 0x4c, 0x69, 0x6d, 0x69, 0x74, 0x20, 0x54, 0x75, 0x72, 0x62,
  0x6f, 0x73, 0x20, 0x53, 0x70, 0x65, 0x65, 0x64, 0x20, 0x28, 0x31, 0x35, 0x2f, 0x73, 0x65, 0x63, 0x29, 0x20,
  0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f,
  0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20,
  0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x46, 0x6f, 0x6e, 0x74, 0x20, 0x53, 0x69, 0x7a, 0x65, 0x20, 0x0, 0x20, 0x41, 0x70, 0x65, 0x78,
  0x20, 0x46, 0x6f, 0x72, 0x77, 0x61, 0x72, 0x64, 0x20, 0x53, 0x63, 0x72, 0x6f, 0x6c, 0x6c, 0x20, 0x54, 0x69,
  0x6d, 0x65, 0x20, 0x0, 0x20, 0x42, 0x61, 0x73, 0x65, 0x20, 0x46, 0x6f, 0x72, 0x77, 0x61, 0x72, 0x64, 0x20,
  0x53, 0x63, 0x72, 0x6f, 0x6c, 0x6c, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x41, 0x70, 0x65, 0x78,
  0x20, 0x42, 0x61, 0x63, 0x6b, 0x77, 0x61, 0x72, 0x64, 0x20, 0x53, 0x63, 0x72, 0x6f, 0x6c, 0x6c, 0x20, 0x54,
  0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x42, 0x61, 0x73, 0x65, 0x20, 0x42, 0x61, 0x63, 0x6b, 0x77, 0x61, 0x72,
  0x64, 0x20, 0x53, 0x63, 0x72, 0x6f, 0x6c, 0x6c, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x53, 0x74,
  0x61, 0x72, 0x74, 0x20, 0x50, 0x61, 0x75, 0x73, 0x65, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x45,
  0x6e, 0x64, 0x20, 0x50, 0x61, 0x75, 0x73, 0x65, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x42, 0x6f,
  0x72, 0x64, 0x65, 0x72, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x53, 0x63, 0x72, 0x65, 0x65, 0x6e,
  0x73, 0x61, 0x76, 0x65, 0x72, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x41, 0x6c, 0x77, 0x61, 0x79,
  0x73, 0x20, 0x4f, 0x6e, 0x20, 0x44, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x20, 0x28, 0x73, 0x63, 0x72, 0x65,
  0x65, 0x6e, 0x73, 0x61, 0x76, 0x65, 0x72, 0x29, 0x20, 0x0, 0x20, 0x49, 0x6e, 0x61, 0x63, 0x74, 0x69, 0x76,
  0x65, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x20, 0x0, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x44, 0x65, 0x6c,
  0x61, 0x79, 0x20, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x76, 0x61, 0x6c, 0x20, 0x0, 0x20, 0x48, 0x75, 0x65, 0x20, 0x0,
  0x20, 0x42, 0x69, 0x67, 0x68, 0x74, 0x6e, 0x65, 0x73, 0x73, 0x20, 0x0, 0x20, 0x46, 0x58, 0x20, 0x42, 0x69,
  0x67, 0x68, 0x74, 0x6e, 0x65, 0x73, 0x73, 0x20, 0x0, 0x20, 0x4d, 0x65, 0x6e, 0x75, 0x20, 0x42, 0x69, 0x67,
  0x68, 0x74, 0x6e, 0x65, 0x73, 0x73, 0x20, 0x0, 0x20, 0x53, 0x61, 0x74, 0x75, 0x72, 0x61, 0x74, 0x69, 0x6f,
  0x6e, 0x20, 0x0, 0x20, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x20, 0x42, 0x61, 0x72, 0x20, 0x4c, 0x45, 0x44, 0x20,
  0x4d, 0x61, 0x74, 0x63, 0x68, 0x65, 0x73, 0x20, 0x5a, 0x65, 0x6e, 0x20, 0x4c, 0x45, 0x44, 0x20, 0x28, 0x68,
  0x61, 0x63, 0x6b, 0x79, 0x29, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67,
  0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f,
  0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b,
  0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f,
  0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20,
  0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69,
  0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x54, 0x75, 0x72, 0x6e, 0x20, 0x4f,
  0x66, 0x66, 0x20, 0x54, 0x79, 0x70, 0x65, 0x20, 0x0, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x6f, 0x75, 0x74, 0x20, 0x0,
  0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f,
  0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20,
  0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x20, 0x52, 0x65, 0x71, 0x75, 0x69,
  0x72, 0x65, 0x64, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67,
  0x6c, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54,
  0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x4c, 0x32, 0x20, 0x4d, 0x6f, 0x64, 0x65, 0x20, 0x0, 0x20, 0x52,
  0x32, 0x20, 0x4d, 0x6f, 0x64, 0x65, 0x20, 0x0, 0x20, 0x4c, 0x32, 0x20, 0x22, 0x53, 0x74, 0x61, 0x72, 0x74,
  0x22, 0x20, 0x0, 0x20, 0x52, 0x32, 0x20, 0x22, 0x53, 0x74, 0x61, 0x72, 0x74, 0x22, 0x20, 0x0, 0x20, 0x4c, 0x32,
  0x20, 0x46, 0x6f, 0x72, 0x63, 0x65, 0x20, 0x31, 0x20, 0x0, 0x20, 0x52, 0x32, 0x20, 0x46, 0x6f, 0x72, 0x63,
  0x65, 0x20, 0x31, 0x20, 0x0, 0x20, 0x4c, 0x32, 0x20, 0x46, 0x6f, 0x72, 0x63, 0x65, 0x20, 0x32, 0x20, 0x0, 0x20,
  0x52, 0x32, 0x20, 0x46, 0x6f, 0x72, 0x63, 0x65, 0x20, 0x32, 0x20, 0x0, 0x20, 0x4c, 0x32, 0x20, 0x4c, 0x6f,
  0x77, 0x20, 0x53, 0x74, 0x72, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x20, 0x28, 0x66, 0x72, 0x65, 0x71, 0x2e, 0x29,
  0x20, 0x0, 0x20, 0x52, 0x32, 0x20, 0x4c, 0x6f, 0x77, 0x20, 0x53, 0x74, 0x72, 0x65, 0x6e, 0x67, 0x74, 0x68,
  0x20, 0x28, 0x66, 0x72, 0x65, 0x71, 0x2e, 0x29, 0x20, 0x0, 0x20, 0x4c, 0x32, 0x20, 0x4d, 0x69, 0x64, 0x20,
  0x53, 0x74, 0x72, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x20, 0x28, 0x66, 0x72, 0x65, 0x71, 0x2e, 0x29, 0x20, 0x0,
  0x20, 0x52, 0x32, 0x20, 0x4d, 0x69, 0x64, 0x20, 0x53, 0x74, 0x72, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x20, 0x28,
  0x66, 0x72, 0x65, 0x71, 0x2e, 0x29, 0x20, 0x0, 0x20, 0x4c, 0x32, 0x20, 0x48, 0x69, 0x67, 0x68, 0x20, 0x53,
  0x74, 0x72, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x20, 0x28, 0x66, 0x72, 0x65, 0x71, 0x2e, 0x29, 0x20, 0x0, 0x20,
  0x52, 0x32, 0x20, 0x48, 0x69, 0x67, 0x68, 0x20, 0x53, 0x74, 0x72, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x20, 0x28,
  0x66, 0x72, 0x65, 0x71, 0x2e, 0x29, 0x20, 0x0, 0x20, 0x4c, 0x32, 0x20, 0x46, 0x72, 0x65, 0x71, 0x75, 0x65,
  0x6e, 0x63, 0x79, 0x20, 0x0, 0x20, 0x52, 0x32, 0x20, 0x46, 0x72, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x63, 0x79,
  0x20, 0x0, 0x20, 0x52, 0x32, 0x20, 0x46, 0x72, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x63, 0x79, 0x20, 0x4d, 0x61,
  0x74, 0x63, 0x68, 0x65, 0x73, 0x20, 0x52, 0x61, 0x70, 0x69, 0x64, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x0,
  0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48, 0x6f,
  0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20,
  0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x48,
  0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0,
  0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c,
  0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0, 0x20,
  0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20,
  0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67,
  0x6c, 0x65, 0x20, 0x0, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x0,
  0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67, 0x67, 0x6c, 0x65,
  0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x51, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x54, 0x6f, 0x67,
  0x67, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x54, 0x61, 0x63, 0x74, 0x69, 0x63, 0x61, 0x6c, 0x20, 0x0, 0x20, 0x4c, 0x65,
  0x74, 0x68, 0x61, 0x6c, 0x20, 0x0, 0x20, 0x41, 0x44, 0x53, 0x20, 0x0, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x0,
  0x20, 0x53, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x2f, 0x46, 0x6f, 0x63, 0x75, 0x73, 0x20, 0x0, 0x20, 0x4d, 0x65,
  0x6c, 0x65, 0x65, 0x20, 0x0, 0x20, 0x50, 0x69, 0x6e, 0x67, 0x20, 0x0, 0x20, 0x53, 0x74, 0x72, 0x65, 0x61, 0x6b,
  0x20, 0x0, 0x20, 0x4a, 0x75, 0x6d, 0x70, 0x2f, 0x4d, 0x61, 0x6e, 0x74, 0x6c, 0x65, 0x20, 0x0, 0x20, 0x53, 0x74,
  0x61, 0x6e, 0x63, 0x65, 0x2f, 0x53, 0x6c, 0x69, 0x64, 0x65, 0x2f, 0x44, 0x69, 0x76, 0x65, 0x20, 0x0, 0x20,
  0x52, 0x65, 0x6c, 0x6f, 0x61, 0x64, 0x2f, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x61, 0x63, 0x74, 0x20, 0x0, 0x20,
  0x53, 0x77, 0x61, 0x70, 0x2f, 0x41, 0x72, 0x6d, 0x6f, 0x72, 0x20, 0x0, 0x20, 0x49, 0x6e, 0x70, 0x75, 0x74,
  0x20, 0x49, 0x6e, 0x74, 0x65, 0x72, 0x76, 0x61, 0x6c, 0x20, 0x0, 0x20, 0x4d, 0x69, 0x6e, 0x20, 0x56, 0x4d,
  0x20, 0x54, 0x69, 0x6d, 0x69, 0x6e, 0x67, 0x20, 0x53, 0x74, 0x65, 0x70, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x0,
  0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0,
  0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0,
  0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20,
  0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0,
  0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0,
  0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0,
  0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20,
  0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20,
  0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0,
  0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x0,
  0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0,
  0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0,
  0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0,
  0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0,
  0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20,
  0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20,
  0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20,
  0x0, 0x20, 0x0, 0x20, 0x0, 0x0, 0x0, 0x20, 0x41, 0x44, 0x53, 0x20, 0x26, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20,
  0x0, 0x20, 0x41, 0x44, 0x53, 0x20, 0x7c, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x0, 0x20, 0x41, 0x44, 0x53, 0x20,
  0x0, 0x20, 0x41, 0x44, 0x53, 0x20, 0x28, 0x6e, 0x6f, 0x20, 0x46, 0x69, 0x72, 0x65, 0x29, 0x20, 0x0, 0x20, 0x46,
  0x69, 0x72, 0x65, 0x20, 0x0, 0x20, 0x4e, 0x6f, 0x6e, 0x65, 0x20, 0x28, 0x61, 0x6c, 0x77, 0x61, 0x79, 0x73,
  0x20, 0x6f, 0x6e, 0x29, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x0,
  0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x41, 0x44, 0x53, 0x20, 0x7c, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20,
  0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x0, 0x20, 0x52, 0x65, 0x6c, 0x65, 0x61, 0x73, 0x65,
  0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x0, 0x20, 0x52, 0x65, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x20, 0x41, 0x44,
  0x53, 0x20, 0x26, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x41,
  0x44, 0x53, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x28, 0x6e,
  0x6f, 0x20, 0x41, 0x44, 0x53, 0x29, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x41, 0x44, 0x53, 0x20, 0x0,
  0x20, 0x50, 0x61, 0x6e, 0x69, 0x63, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x28, 0x41, 0x44, 0x53, 0x20,
  0x26, 0x20, 0x46, 0x69, 0x72, 0x65, 0x29, 0x20, 0x0, 0x20, 0x54, 0x61, 0x70, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c,
  0x64, 0x20, 0x28, 0x70, 0x72, 0x69, 0x6d, 0x65, 0x20, 0x73, 0x68, 0x6f, 0x74, 0x29, 0x20, 0x0, 0x20, 0x46,
  0x69, 0x72, 0x65, 0x20, 0x0, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x28, 0x6e, 0x6f, 0x20, 0x41, 0x44, 0x53,
  0x29, 0x20, 0x0, 0x20, 0x41, 0x44, 0x53, 0x20, 0x26, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x0, 0x20, 0x41, 0x44,
  0x53, 0x20, 0x26, 0x20, 0x4c, 0x65, 0x74, 0x68, 0x61, 0x6c, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x69,
  0x6e, 0x67, 0x20, 0x41, 0x44, 0x53, 0x20, 0x0, 0x20, 0x46, 0x75, 0x6c, 0x6c, 0x79, 0x20, 0x41, 0x44, 0x53,
  0x20, 0x0, 0x20, 0x4e, 0x6f, 0x6e, 0x65, 0x20, 0x0, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x0, 0x20, 0x41, 0x44,
  0x53, 0x20, 0x26, 0x20, 0x4c, 0x65, 0x74, 0x68, 0x61, 0x6c, 0x20, 0x0, 0x20, 0x54, 0x75, 0x72, 0x62, 0x6f,
  0x20, 0x28, 0x70, 0x72, 0x65, 0x73, 0x73, 0x20, 0x6d, 0x6f, 0x64, 0x65, 0x29, 0x20, 0x0, 0x20, 0x48, 0x6f,
  0x6c, 0x64, 0x20, 0x28, 0x68, 0x6f, 0x6c, 0x64, 0x20, 0x6d, 0x6f, 0x64, 0x65, 0x29, 0x20, 0x0, 0x20, 0x50,
  0x72, 0x65, 0x73, 0x73, 0x20, 0x28, 0x74, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x6d, 0x6f, 0x64, 0x65, 0x29,
  0x20, 0x0, 0x20, 0x43, 0x57, 0x20, 0x42, 0x6f, 0x6f, 0x73, 0x74, 0x20, 0x45, 0x78, 0x70, 0x6c, 0x6f, 0x69,
  0x74, 0x20, 0x28, 0x70, 0x72, 0x65, 0x73, 0x73, 0x2f, 0x74, 0x6f, 0x67, 0x67, 0x6c, 0x65, 0x20, 0x6d, 0x6f,
  0x64, 0x65, 0x29, 0x20, 0x0, 0x20, 0x4c, 0x65, 0x67, 0x61, 0x63, 0x79, 0x20, 0x0, 0x20, 0x53, 0x74, 0x61, 0x6e,
  0x64, 0x20, 0x0, 0x20, 0x27, 0x4a, 0x75, 0x6d, 0x70, 0x27, 0x20, 0x28, 0x4d, 0x57, 0x49, 0x49, 0x49, 0x29,
  0x20, 0x0, 0x20, 0x4d, 0x57, 0x49, 0x49, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x0, 0x20, 0x51, 0x75,
  0x69, 0x63, 0x6b, 0x20, 0x47, 0x61, 0x73, 0x70, 0x20, 0x28, 0x4d, 0x57, 0x49, 0x49, 0x2f, 0x32, 0x30, 0x32,
  0x32, 0x2b, 0x29, 0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x0, 0x20,
  0x50, 0x61, 0x6e, 0x69, 0x63, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x28, 0x41, 0x44, 0x53, 0x20, 0x26,
  0x20, 0x46, 0x69, 0x72, 0x65, 0x29, 0x20, 0x0, 0x20, 0x53, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x20, 0x28, 0x66,
  0x61, 0x73, 0x74, 0x29, 0x20, 0x0, 0x20, 0x53, 0x74, 0x61, 0x6e, 0x64, 0x20, 0x0, 0x20, 0x41, 0x44, 0x53, 0x20,
  0x0, 0x20, 0x46, 0x69, 0x72, 0x65, 0x20, 0x0, 0x20, 0x41, 0x44, 0x53, 0x20, 0x26, 0x20, 0x46, 0x69, 0x72, 0x65,
  0x20, 0x0, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x0, 0x20, 0x48, 0x6f, 0x6c, 0x64, 0x20, 0x0, 0x20, 0x44,
  0x65, 0x61, 0x64, 0x7a, 0x6f, 0x6e, 0x65, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x65, 0x6e, 0x73, 0x61, 0x74, 0x69,
  0x6f, 0x6e, 0x20, 0x0, 0x20, 0x53, 0x68, 0x69, 0x66, 0x74, 0x20, 0x53, 0x74, 0x61, 0x72, 0x74, 0x20, 0x50,
  0x6f, 0x69, 0x6e, 0x74, 0x20, 0x28, 0x64, 0x65, 0x6c, 0x61, 0x79, 0x65, 0x64, 0x29, 0x20, 0x0, 0x20, 0x46,
  0x6f, 0x72, 0x77, 0x61, 0x72, 0x64, 0x20, 0x0, 0x20, 0x4f, 0x6d, 0x6e, 0x69, 0x20, 0x28, 0x61, 0x6e, 0x79,
  0x29, 0x20, 0x0, 0x20, 0x4f, 0x66, 0x66, 0x20, 0x0, 0x20, 0x41, 0x69, 0x6d, 0x20, 0x4f, 0x6e, 0x6c, 0x79, 0x20,
  0x0, 0x20, 0x41, 0x6c, 0x6c, 0x20, 0x0, 0x20, 0x45, 0x79, 0x65, 0x20, 0x53, 0x74, 0x72, 0x61, 0x69, 0x6e, 0x20,
  0x0, 0x20, 0x4e, 0x6f, 0x72, 0x6d, 0x69, 0x65, 0x20, 0x0, 0x20, 0x54, 0x68, 0x65, 0x20, 0x4c, 0x6f, 0x75, 0x6e,
  0x67, 0x65, 0x20, 0x0, 0x20, 0x4e, 0x6f, 0x6e, 0x65, 0x20, 0x0, 0x20, 0x53, 0x74, 0x61, 0x74, 0x69, 0x63, 0x20,
  0x0, 0x20, 0x44, 0x69, 0x6d, 0x6d, 0x65, 0x64, 0x20, 0x45, 0x6e, 0x74, 0x65, 0x72, 0x61, 0x62, 0x6c, 0x65,
  0x20, 0x48, 0x69, 0x67, 0x68, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x20, 0x0, 0x20, 0x45, 0x6e, 0x74, 0x65, 0x72,
  0x61, 0x62, 0x6c, 0x65, 0x20, 0x48, 0x69, 0x67, 0x68, 0x6c, 0x69, 0x67, 0x68, 0x74, 0x20, 0x0, 0x20, 0x4e,
  0x6f, 0x6e, 0x65, 0x20, 0x28, 0x62, 0x6c, 0x61, 0x63, 0x6b, 0x29, 0x20, 0x0, 0x20, 0x4c, 0x61, 0x73, 0x65,
  0x72, 0x73, 0x20, 0x0, 0x20, 0x52, 0x61, 0x69, 0x6e, 0x64, 0x72, 0x6f, 0x70, 0x73, 0x20, 0x0, 0x20, 0x33, 0x44,
  0x20, 0x57, 0x61, 0x76, 0x65, 0x20, 0x28, 0x64, 0x65, 0x74, 0x61, 0x63, 0x68, 0x65, 0x64, 0x29, 0x20, 0x0,
  0x20, 0x43, 0x61, 0x74, 0x20, 0x28, 0x72, 0x75, 0x6e, 0x6e, 0x69, 0x6e, 0x67, 0x29, 0x20, 0x0, 0x20, 0x43,
  0x79, 0x63, 0x6c, 0x69, 0x6e, 0x67, 0x20, 0x48, 0x75, 0x65, 0x20, 0x0, 0x20, 0x42, 0x72, 0x65, 0x61, 0x74,
  0x68, 0x69, 0x6e, 0x67, 0x20, 0x0, 0x20, 0x53, 0x74, 0x61, 0x74, 0x69, 0x63, 0x20, 0x0, 0x20, 0x42, 0x61, 0x74,
  0x74, 0x65, 0x72, 0x79, 0x20, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x20, 0x0, 0x20, 0x43, 0x6f, 0x6e, 0x74,
  0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x20, 0x28, 0x77, 0x69, 0x72, 0x65, 0x6c, 0x65, 0x73, 0x73, 0x29, 0x20,
  0x0, 0x20, 0x53, 0x63, 0x72, 0x69, 0x70, 0x74, 0x20, 0x0, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c,
  0x65, 0x72, 0x20, 0x26, 0x20, 0x53, 0x63, 0x72, 0x69, 0x70, 0x74, 0x20, 0x28, 0x77, 0x69, 0x72, 0x65, 0x6c,
  0x65, 0x73, 0x73, 0x29, 0x20, 0x0, 0x20, 0x44, 0x69, 0x73, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x20, 0x0, 0x20, 0x50,
  0x72, 0x65, 0x73, 0x73, 0x75, 0x72, 0x65, 0x20, 0x0, 0x20, 0x42, 0x6f, 0x77, 0x20, 0x0, 0x20, 0x54, 0x77, 0x6f,
  0x20, 0x53, 0x74, 0x65, 0x70, 0x20, 0x0, 0x20, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x69, 0x76, 0x65,
  0x20, 0x0, 0x20, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x20, 0x52, 0x65, 0x73, 0x69, 0x73, 0x74, 0x61, 0x6e, 0x63,
  0x65, 0x20, 0x0, 0x20, 0x46, 0x72, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x63, 0x79, 0x20, 0x0, 0x20, 0x56, 0x69, 0x62,
  0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x0, 0x20, 0x4c, 0x42, 0x20, 0x0, 0x20, 0x52, 0x42, 0x20, 0x0, 0x20,
  0x4c, 0x54, 0x20, 0x0, 0x20, 0x52, 0x54, 0x20, 0x0, 0x20, 0x4c, 0x53, 0x20, 0x0, 0x20, 0x52, 0x53, 0x20, 0x0,
  0x20, 0x55, 0x50, 0x20, 0x0, 0x20, 0x44, 0x4f, 0x57, 0x4e, 0x20, 0x0, 0x20, 0x4c, 0x45, 0x46, 0x54, 0x20, 0x0,
  0x20, 0x52, 0x49, 0x47, 0x48, 0x54, 0x20, 0x0, 0x20, 0x41, 0x20, 0x0, 0x20, 0x42, 0x20, 0x0, 0x20, 0x58, 0x20,
  0x0, 0x20, 0x59, 0x20, 0x0, 0x20, 0x4c, 0x31, 0x20, 0x0, 0x20, 0x52, 0x31, 0x20, 0x0, 0x20, 0x4c, 0x32, 0x20,
  0x0, 0x20, 0x52, 0x32, 0x20, 0x0, 0x20, 0x4c, 0x33, 0x20, 0x0, 0x20, 0x52, 0x33, 0x20, 0x0, 0x20, 0x55, 0x50,
  0x20, 0x0, 0x20, 0x44, 0x4f, 0x57, 0x4e, 0x20, 0x0, 0x20, 0x4c, 0x45, 0x46, 0x54, 0x20, 0x0, 0x20, 0x52, 0x49,
  0x47, 0x48, 0x54, 0x20, 0x0, 0x20, 0x43, 0x52, 0x4f, 0x53, 0x53, 0x20, 0x0, 0x20, 0x43, 0x49, 0x52, 0x43, 0x4c,
  0x45, 0x20, 0x0, 0x20, 0x53, 0x51, 0x55, 0x41, 0x52, 0x45, 0x20, 0x0, 0x20, 0x54, 0x52, 0x49, 0x41, 0x4e, 0x47,
  0x4c, 0x45, 0x20, 0x0, 0x20, 0x4c, 0x20, 0x0, 0x20, 0x52, 0x20, 0x0, 0x20, 0x5a, 0x4c, 0x20, 0x0, 0x20, 0x5a,
  0x52, 0x20, 0x0, 0x20, 0x4c, 0x33, 0x20, 0x0, 0x20, 0x52, 0x33, 0x20, 0x0, 0x20, 0x55, 0x50, 0x20, 0x0, 0x20,
  0x44, 0x4f, 0x57, 0x4e, 0x20, 0x0, 0x20, 0x4c, 0x45, 0x46, 0x54, 0x20, 0x0, 0x20, 0x52, 0x49, 0x47, 0x48, 0x54,
  0x20, 0x0, 0x20, 0x42, 0x20, 0x0, 0x20, 0x41, 0x20, 0x0, 0x20, 0x59, 0x20, 0x0, 0x20, 0x58, 0x20, 0x0, 0x20,
  0x4e, 0x6f, 0x6e, 0x65, 0x20, 0x0, 0x20, 0x58, 0x42, 0x4f, 0x58, 0x20, 0x0, 0x20, 0x56, 0x49, 0x45, 0x57, 0x20,
  0x0, 0x20, 0x4d, 0x45, 0x4e, 0x55, 0x20, 0x0, 0x20, 0x4c, 0x42, 0x20, 0x0, 0x20, 0x52, 0x42, 0x20, 0x0, 0x20,
  0x4c, 0x54, 0x20, 0x0, 0x20, 0x52, 0x54, 0x20, 0x0, 0x20, 0x4c, 0x53, 0x20, 0x0, 0x20, 0x52, 0x53, 0x20, 0x0,
  0x20, 0x55, 0x50, 0x20, 0x0, 0x20, 0x44, 0x4f, 0x57, 0x4e, 0x20, 0x0, 0x20, 0x4c, 0x45, 0x46, 0x54, 0x20, 0x0,
  0x20, 0x52, 0x49, 0x47, 0x48, 0x54, 0x20, 0x0, 0x20, 0x41, 0x20, 0x0, 0x20, 0x42, 0x20, 0x0, 0x20, 0x58, 0x20,
  0x0, 0x20, 0x59, 0x20, 0x0, 0x20, 0x53, 0x48, 0x41, 0x52, 0x45, 0x2f, 0x53, 0x59, 0x4e, 0x43, 0x20, 0x0, 0x20,
  0x50, 0x4c, 0x31, 0x20, 0x0, 0x20, 0x50, 0x4c, 0x32, 0x20, 0x0, 0x20, 0x50, 0x52, 0x31, 0x20, 0x0, 0x20, 0x50,
  0x52, 0x32, 0x20, 0x0, 0x20, 0x50, 0x53, 0x20, 0x0, 0x20, 0x53, 0x48, 0x41, 0x52, 0x45, 0x20, 0x0, 0x20, 0x4f,
  0x50, 0x54, 0x49, 0x4f, 0x4e, 0x53, 0x20, 0x0, 0x20, 0x4c, 0x31, 0x20, 0x0, 0x20, 0x52, 0x31, 0x20, 0x0, 0x20,
  0x4c, 0x32, 0x20, 0x0, 0x20, 0x52, 0x32, 0x20, 0x0, 0x20, 0x4c, 0x33, 0x20, 0x0, 0x20, 0x52, 0x33, 0x20, 0x0,
  0x20, 0x55, 0x50, 0x20, 0x0, 0x20, 0x44, 0x4f, 0x57, 0x4e, 0x20, 0x0, 0x20, 0x4c, 0x45, 0x46, 0x54, 0x20, 0x0,
  0x20, 0x52, 0x49, 0x47, 0x48, 0x54, 0x20, 0x0, 0x20, 0x43, 0x52, 0x4f, 0x53, 0x53, 0x20, 0x0, 0x20, 0x43, 0x49,
  0x52, 0x43, 0x4c, 0x45, 0x20, 0x0, 0x20, 0x53, 0x51, 0x55, 0x41, 0x52, 0x45, 0x20, 0x0, 0x20, 0x54, 0x52, 0x49,
  0x41, 0x4e, 0x47, 0x4c, 0x45, 0x20, 0x0, 0x20, 0x54, 0x4f, 0x55, 0x43, 0x48, 0x20, 0x0, 0x20, 0x50, 0x4c, 0x31,
  0x20, 0x28, 0x58, 0x62, 0x6f, 0x78, 0x29, 0x20, 0x0, 0x20, 0x50, 0x4c, 0x32, 0x20, 0x28, 0x58, 0x62, 0x6f,
  0x78, 0x29, 0x20, 0x0, 0x20, 0x50, 0x52, 0x31, 0x20, 0x28, 0x58, 0x62, 0x6f, 0x78, 0x29, 0x20, 0x0, 0x20, 0x50,
  0x52, 0x32, 0x20, 0x28, 0x58, 0x62, 0x6f, 0x78, 0x29, 0x20, 0x0, 0x20, 0x48, 0x4f, 0x4d, 0x45, 0x20, 0x0, 0x20,
  0x4d, 0x49, 0x4e, 0x55, 0x53, 0x20, 0x0, 0x20, 0x50, 0x4c, 0x55, 0x53, 0x20, 0x0, 0x20, 0x4c, 0x20, 0x0, 0x20,
  0x52, 0x20, 0x0, 0x20, 0x5a, 0x4c, 0x20, 0x0, 0x20, 0x5a, 0x52, 0x20, 0x0, 0x20, 0x4c, 0x33, 0x20, 0x0, 0x20,
  0x52, 0x33, 0x20, 0x0, 0x20, 0x55, 0x50, 0x20, 0x0, 0x20, 0x44, 0x4f, 0x57, 0x4e, 0x20, 0x0, 0x20, 0x4c, 0x45,
  0x46, 0x54, 0x20, 0x0, 0x20, 0x52, 0x49, 0x47, 0x48, 0x54, 0x20, 0x0, 0x20, 0x42, 0x20, 0x0, 0x20, 0x41, 0x20,
  0x0, 0x20, 0x59, 0x20, 0x0, 0x20, 0x58, 0x20, 0x0, 0x20, 0x43, 0x41, 0x50, 0x54, 0x55, 0x52, 0x45, 0x20, 0x0,
  0x20, 0x50, 0x4c, 0x31, 0x20, 0x28, 0x58, 0x62, 0x6f, 0x78, 0x29, 0x20, 0x0, 0x20, 0x50, 0x4c, 0x32, 0x20,
  0x28, 0x58, 0x62, 0x6f, 0x78, 0x29, 0x20, 0x0, 0x20, 0x50, 0x52, 0x31, 0x20, 0x28, 0x58, 0x62, 0x6f, 0x78,
  0x29, 0x20, 0x0

};

const uint8 Text_Size_Width[] = { OLED_FONT_SMALL_WIDTH, OLED_FONT_MEDIUM_WIDTH, OLED_FONT_LARGE_WIDTH };
																																																																																																																																																																																													const uint8 Line[]={69,58,31,28,27,8,6,89,13}																																																																																																																																																																																														function putr_oled(f_c,f_p){putc_oled(clamp(f_p,1,8),clamp(f_c,32,128));}
const uint8 DP_Menu_Type_Interval_Time[] = { 176, 32 }

const image Cat_Frames[] = {
  // -- Frame 1
  {
  89,53,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x30,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFE,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xF0,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
  0xCE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x07,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x1F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x01,0xF0,0x3F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x18,0x07,0xC0,0x1F,
  0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x0F,0x9F,0x80,0x0F,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x03,0xFF,0x00,0x07,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,
  0x3C,0x00,0x03,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF0,0x7E,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0xF8,
  0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x3C,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x8F,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x01,0xC3,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00
  },
  // -- Frame 2
  {
  91,53,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xCC,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF0,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0xFE,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xC4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFD,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x1F,0xF3,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFE,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFC,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x01,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xE0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,
  0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xE7,0xF0,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0xFF,0xFF,0xFC,0x0E,0x00,0x00,0x00,0x00,0x00,0x03,
  0xF0,0x1F,0xFF,0xFF,0xC0,0x60,0x00,0x00,0x00,0x02,0x01,0xF8,0x07,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0xFF,0xF8,0x00,0xFF,0xFE,0x1F,0x80,0x00,0x00,
  0x00,0x00,0x0F,0xFC,0x00,0x3F,0xFF,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xC0,
  0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF0,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x07,0xC7,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x1E,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x81,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x07,
  0xC0,0x00,0x00,0x00
  },
  // -- Frame 3
  {
  94,51,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x39,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xEE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x0F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xE0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,
  0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFE,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF3,0x80,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xFF,0xCF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xF0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x1F,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,
  0x00,0x00,0x00,0xFF,0xE0,0x0F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x3F,0xE0,0x00,0x1F,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0xFF,
  0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0xFF,0xFF,0xFE,0x3F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xE0,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xF8,
  0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xF0,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x01,0xF1,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x3C,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
  0x00
  },
  // -- Frame 4
  {
  97,46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x07,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x9C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x03,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xE0,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x03,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x7F,0xE7,0x00,0x00,
  0x00,0x00,0x03,0xFF,0xFF,0xE0,0x38,0x00,0x3F,0xF3,0xF0,0x00,0x00,0x00,0x03,0xE0,0x01,0xFE,0x7F,0xF8,0x1F,0xFF,0xE0,0x00,0x00,0x00,0x03,0x00,0x00,0x0F,
  0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,
  0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,
  0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x3F,0xFF,0xFF,0xC1,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x1F,0xF8,0x3E,0x00,0x3F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xC0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00
  },
  // -- Frame 5
  {
  96,46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x98,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,
  0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x7F,0xF0,0x00,0x00,0x00,0x00,0x00,0x7F,0x80,0x00,0x00,0x00,0xFF,0xF8,0x00,0x00,0x00,0x00,0x07,0xFF,0xF0,0x00,0x00,0x01,0xFF,
  0xF0,0x00,0x00,0x00,0x00,0x1F,0xC0,0xFC,0x00,0x00,0x03,0xFF,0xF0,0x00,0x00,0x00,0x00,0x3C,0x00,0x0F,0x00,0x00,0x07,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x03,0x80,0x00,0x07,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC3,0xF8,0x07,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x07,0xFF,
  0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xC7,0xFE,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,
  0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xF0,0x3F,0xFF,0xFF,
  0xE0,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0x00,0x00,0x03,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,0x01,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80
  },
  // -- Frame 6
  {
  93,54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0xFF,0xE0,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xC0,0x00,0x00,0x00,0xF8,0x00,0x00,
  0x00,0x00,0x00,0xFC,0x1F,0x80,0x00,0x00,0x0F,0x88,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,
  0x00,0x07,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x00,0x7F,0xE6,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x0F,0xFF,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0E,0x00,0x00,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0xE0,0x0F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xC0,0xFF,
  0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0x07,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFC,0x3F,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,
  0x00,0x07,0xFF,0xF1,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xEF,0xFC,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xE7,0xF0,
  0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,
  0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0xE6,0x03,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x07,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x03,
  0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF7,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00
  },
  // -- Frame 7
  {
  92,54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x98,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF2,
  0x00,0x00,0x00,0x00,0x1F,0x80,0x00,0x00,0x00,0x1F,0xFF,0xC0,0x00,0x00,0x00,0x03,0xFE,0x00,0x00,0x00,0x03,0xFF,0xF8,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,
  0x1F,0x00,0x3F,0xFF,0x80,0x00,0x00,0x00,0x00,0x03,0xFE,0x07,0xFE,0x07,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xF8,0x3F,0xFF,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0F,0xFF,0xFF,0xC3,0xFF,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0x3F,0xE7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,
  0xFE,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xD0,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x03,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0xFF,0xFF,0x80,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,
  0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFC,0x1F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x80,0x1F,0xE0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x01,0xF0,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0xFF,
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x0F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x7B,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x02,0x00,0x07,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00
  },
  // -- Frame 8
  {
  92,53,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x79,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xB0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFE,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xF8,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x07,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x7F,0xC0,0xFF,0xFE,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x1F,0xFF,0x07,0xFC,0xE0,0x00,0x00,0x00,0x00,0xE0,0x00,0x0F,0xFF,0xFC,0xFF,0xCE,0x00,0x00,0x00,
  0x00,0x0F,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x78,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x03,0xE0,0x3E,0x3F,0xFF,0xFF,
  0xFF,0xC2,0x00,0x00,0x00,0x00,0x1F,0xFF,0xC3,0xFF,0xFF,0xFF,0xF8,0x10,0x00,0x00,0x00,0x00,0xFF,0xE0,0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x03,
  0xF8,0x03,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFC,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
  0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x8F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x3F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFB,0xE0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xE1,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x00
  }
};



/*
// Slowdown Aim Assist Abuse

const int16 Cos_Circle_LUT[] = {

  32767,32762,32747,32722,32687,32642,32587,32522,32448,32363,32269,32164,32050,31927,31793,31650,31497,31335,31163,
  30981,30790,30590,30381,30162,29934,29696,29450,29195,28931,28658,28377,28086,27787,27480,27165,26841,26509,26168,
  25820,25464,25100,24729,24350,23964,23570,23169,22761,22347,21925,21497,21062,20620,20173,19719,19259,18794,18323,
  17846,17363,16876,16383,15885,15383,14875,14364,13847,13327,12803,12274,11742,11206,10667,10125,9580,9031,8480,
  7927,7370,6812,6252,5689,5125,4560,3993,3425,2855,2285,1714,1143,571,0,-571,-1143,-1714,-2285,-2855,-3425,-3993,
  -4560,-5125,-5689,-6252,-6812,-7370,-7927,-8480,-9031,-9580,-10125,-10667,-11206,-11742,-12274,-12803,-13327,-13847,
  -14364,-14875,-15383,-15885,-16383,-16876,-17363,-17846,-18323,-18794,-19259,-19719,-20173,-20620,-21062,-21497,
  -21925,-22347,-22761,-23169,-23570,-23964,-24350,-24729,-25100,-25464,-25820,-26168,-26509,-26841,-27165,-27480,
  -27787,-28086,-28377,-28658,-28931,-29195,-29450,-29696,-29934,-30162,-30381,-30590,-30790,-30981,-31163,-31335,
  -31497,-31650,-31793,-31927,-32050,-32164,-32269,-32363,-32448,-32522,-32587,-32642,-32687,-32722,-32747,-32762,
  -32767,-32762,-32747,-32722,-32687,-32642,-32587,-32522,-32448,-32363,-32269,-32164,-32050,-31927,-31793,-31650,
  -31497,-31335,-31163,-30981,-30790,-30590,-30381,-30162,-29934,-29696,-29450,-29195,-28931,-28658,-28377,-28086,
  -27787,-27480,-27165,-26841,-26509,-26168,-25820,-25464,-25100,-24729,-24350,-23964,-23570,-23169,-22761,-22347,
  -21925,-21497,-21062,-20620,-20173,-19719,-19259,-18794,-18323,-17846,-17363,-16876,-16383,-15885,-15383,-14875,
  -14364,-13847,-13327,-12803,-12274,-11742,-11206,-10667,-10125,-9580,-9031,-8480,-7927,-7370,-6812,-6252,-5689,
  -5125,-4560,-3993,-3425,-2855,-2285,-1714,-1143,-571,0,571,1143,1714,2285,2855,3425,3993,4560,5125,5689,6252,6812,
  7370,7927,8480,9031,9580,10125,10667,11206,11742,12274,12803,13327,13847,14364,14875,15383,15885,16383,16876,17363,
  17846,18323,18794,19259,19719,20173,20620,21062,21497,21925,22347,22761,23169,23570,23964,24350,24729,25100,25464,
  25820,26168,26509,26841,27165,27480,27787,28086,28377,28658,28931,29195,29450,29696,29934,30162,30381,30590,30790,
  30981,31163,31335,31497,31650,31793,31927,32050,32164,32269,32363,32448,32522,32587,32642,32687,32722,32747,32762

}
*/



// Persistent Variables

// -- Start of where data is stored
function reset_spvar() {

  pv_current_slot = SPVAR_1;
  pv_current_bit = 0;
  pv_current_value = 0;

}

// -- Function used to count the number of bits used by the given value
function get_bit_count(f_val) {

  pv_temp = 0;  // -- We need to start at 0, we use pv_temp here as we need to track the bits during our loop below

  while(f_val) {
    pv_temp ++;  // -- Increment the bit count by 1
    f_val = abs(f_val >> 1);  // -- Shift the value down 1 bit, once we have no more bits set this will result in 0, unless the value is negative - in which case this will be endless, we do abs here to make it always
  }

  return pv_temp;

}

// -- Function used to count the number of bits used by 2 given values
function get_bit_count2(f_val1,f_val2) {

  pv_temp = max(get_bit_count(f_val1),get_bit_count(f_val2));  // -- Get the highest bit count required for either min or max

  if(is_signed2(f_val1,f_val2))  // -- Check if we need to know if the value is negative or not
    pv_temp ++;  // -- If we need to track if the saved value is negative, we need 1 bit for that specifically - the others are used to store the actual value

  return pv_temp;

}

// -- Function used to determine if either of 2 given values is negative
function is_signed2(f_val1,f_val2) {

  return f_val1 < 0 || f_val2 < 0;

}

// -- Function used to generate a bitmask for the sign bit, this will always be the highest bit in the range we're requesting it for, to do that - we need to start with the lowest bit set and move it up the number of steps there is between 1 and the bits we need, this needs to be a maximum of 31 but can never be negative
function make_sign(f_bits) {

  return 1 << clamp(f_bits - 1,0,31);

}

// -- Function used to generate a full bitmask (essentially all bits set up to and including the number of bits given)
function make_full_mask(f_bits) {

  if(f_bits == 32)  // -- If we're wanting a bitmask for all bits, we can simply return -1 (which is all bits set to 1)
    return -1;

  return Signed_32_Bit_Max >> (31 - f_bits);  // -- What we do here is basically take a value with all bits except the highest set and shift them down as many times as we need to get a mask that fits the bit count we're looking for

}

// -- Function used to generate a bitmask for just the bits required for the value part of a signed range, this means all the bits below the sign bit
function make_sign_mask(f_bits) {

  return make_full_mask(f_bits - 1);

}
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																								int 																																																																																	dp_tsp																																																																	[																																																																																																																	0																																																																		];
// -- Function used to pack a value that has potential for being negative in a way that we use the least number of bits we really need to represent the value
function pack_i(f_val,f_bits) {

  if(f_val < 0)
    return (abs(f_val) & make_sign_mask(f_bits)) | make_sign(f_bits);  // -- Get the positive version of the value and keep the bits that are within range of what we're doing and add the sign bit since we have a negative value and return the result

  return f_val & make_sign_mask(f_bits);  // -- Get the bits that are within our range

}

// -- Function used to unpack (restore) a value that has potential for being negative, essentially reversing what pack_i does above
function unpack_i(f_val,f_bits) {

  if(f_val & make_sign(f_bits))  // -- Check if the stored value is supposed to ve negative
    return 0 - (f_val & make_sign_mask(f_bits));  // -- Retrieve the stored positive value and subtract it from 0 (resulting in the same value except negative), return the result

  return f_val & make_sign_mask(f_bits);  // -- Retrieve the stored positive value and return it

}

// -- Function used to read the value of a SPVAR without any limits
function read_spvar_slot(f_slot) {

  return get_pvar(f_slot,Signed_32_Bit_Min,Signed_32_Bit_Max,0);

}

// -- Function used to save your value in the SPVARs, this is the function you'll be calling when saving a value. You need to provide the value to save aswell as the range (minimum and maximum value, this is how we determine how many bits to use when saving this value)
function save_spvar(f_val,f_min,f_max) {

  pv_bits = get_bit_count2(f_min,f_max);  // -- Set pv_bits to the number of bits we need for this range

  f_val = clamp(f_val,f_min,f_max);  // -- Make sure the value is within our defined range to begin with

  if(is_signed2(f_min,f_max))  // -- If either min or max is negative, we need to pack this value as a possibly negative value
    f_val = pack_i(f_val,pv_bits);  // -- Pack as signed value (possibly negative)

  f_val = f_val & make_full_mask(pv_bits);  // -- Pack as unsigned value (always positive), this essentially just makes the resulting value not have any extra bits set - it's safe to use after the signed packing since we're not using any bits outside of the unsigned range anyways

  if(pv_bits >= 32 - pv_current_bit) {  // -- Check if there is not enough bits remaining to save this value as-is. if there aren't enough bits, we save what we can here and store the remaining bits in the next spvar, if this means we're hitting the end, we can make this smaller by handling the case where we use all bits here aswell
    pv_current_value = pv_current_value | (f_val << pv_current_bit);  // -- Add what we can to the current value where there is bits available to use
    set_pvar(pv_current_slot, pv_current_value);  // -- Save the current SPVAR before advancing to the next one
    pv_current_slot ++;  // -- Move to the next slot
    pv_bits -= (32 - pv_current_bit);  // -- Update the required bits according to our needs for the next slot, if we don't do this here, we'll screw up the saved value by moving it too far out of range
    f_val = f_val >> (32 - pv_current_bit);  // -- Move the remaining bits down, discarding the bits we've already saved
    pv_current_bit = 0;  // -- Reset the current bit counter since we're starting with a new SPVAR
    pv_current_value = 0;  // -- Reset our value so we start clean, we aren't currently using any bits anyways
  }

  pv_current_value = pv_current_value | (f_val << pv_current_bit);  // -- Merge the current SPVAR value with our currently value where there is space to keep our value

  pv_current_bit += pv_bits;  // -- Move up the counter of next available bit to where we are currently saving data at

  if(!pv_current_bit)
    pv_current_value = 0;  // -- Reset our value so we start clean, we aren't currently using any bits anyways

  set_pvar(pv_current_slot,pv_current_value);  // -- Save the SPVAR with the current value, this won't write anything to flash unless the value changed - so we can do this for each variable saved to no risk missing anything

}

// -- Function used to read your value from the SPVARs, this is the function you'll be calling when reading a value. You need to provide the range (minimum and maximum value, this is how we determine how many bits to use when reading the value)
function read_spvar(f_min,f_max) {

  pv_bits = get_bit_count2(f_min,f_max);  // -- Set pv_bits to the number of bits we need for this range
  pv_current_value = (read_spvar_slot(pv_current_slot) >> pv_current_bit) & make_full_mask(pv_bits);  // -- Read the current SPVAR value from flash and shift them into position, we'll handle split values next

  if(pv_bits >= 32 - pv_current_bit) {  // -- Check if we are dealing with a split SPVAR value, essentially if the current position means we're using more than 32 bits in the SPVAR, we need to retrieve the missing bits from the next SPVAR and put them back to our current value, we use the same space saving trick here as in the save function
    pv_current_value = (pv_current_value & make_full_mask(32 - pv_current_bit)) | ((read_spvar_slot(pv_current_slot + 1) & make_full_mask(pv_bits - (32 - pv_current_bit))) << (32 - pv_current_bit));
    // -- Below is a breakdown of the line above, with each step done one at a time instead of all at once - this however increases codesize - the below code is to explain how it all works tho
    //pv_temp = read_spvar_slot(pv_current_slot + 1);  // -- Read the SPVAR slot coming after the initial one we used to pv_temp from flash, we need to maintain the data we've read thus far, but also add on what we have in flash for the next SPVAR
    //pv_temp = pv_temp & make_full_mask(pv_bits - (32 - pv_current_bit));  // -- Extract the bits we need need (the ones that didn't fit in the previous SPVAR)
    //pv_temp = pv_temp << (32 - pv_current_bit);  // -- Move the bits into their original position, they were stored at the beginning of the new SPVAR but belong at the top of the currently read value
    //pv_current_value = (pv_current_value & make_full_mask(32 - pv_current_bit)) | pv_temp;  // -- put all bits together again with the part read from the first SPVAR cleaned up to only include the bits from this variable/value and not all bits set in the upper range like they normally are
  }

  pv_current_bit += pv_bits;  // -- Move up the counter of next available bit to where we are will be reading data from next

  pv_current_value = pv_current_value & make_full_mask(pv_bits);  // -- Extract all bits included for this value and discard any other bits

  if(pv_current_bit >= 32) {
    pv_current_slot ++;  // -- Move to the next SPVAR slot
    pv_current_bit -= 32;  // -- Remove 32 from the pv_current_bit tracker since we've gone beyond what we can do here
  }

  if(is_signed2(f_min, f_max))  // -- Check if the value can be negative and handle it accordingly
    pv_current_value = unpack_i(pv_current_value,pv_bits);  // -- Restore the signed, possibly negative value

  if(pv_current_value < f_min || pv_current_value > f_max)  // -- Check if the value is below our specified min or above our specified max, if so - return the min value
    return f_min;

  // -- Return the retrieved value to the user since it's within the expected range
  return pv_current_value;

} ???????????????????????????? ����������������