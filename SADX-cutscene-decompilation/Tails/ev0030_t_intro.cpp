#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0030_t_intro(int state)
{
	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(74);
		EventSe_Init(5);
		hogel = CIchimaie2_Create(&SS_BG_TEXLIST, 0);
		CIchimaie2_SetTextureId(hogel, 0);
		CIchimaie2_SetPriority(hogel, -790.0f);
		SMOKE = CObjSmoke_Create();
		SMOKE2 = CObjSmoke_Create(); //This doesn't get used lol
		WriteData((float*)SMOKE->Data1->LoopData, 1.2f);
		WriteData((float*)(SMOKE->Data1->LoopData) + 2, 0.09f);
		WriteData((float*)(SMOKE->Data1->LoopData) + 11, 0.9f);
		WriteData((float*)(SMOKE->Data1->LoopData) + 12, 0.3f);
		WriteData((float*)(SMOKE->Data1->LoopData) + 13, 0.3f);
		WriteData((float*)(SMOKE->Data1->LoopData) + 14, 0.3f);
		EV_SetPos(SMOKE, 313.0f, 933.34998f, 752.26001f);
		LoadEventObject(&pmiles, miles_with_ptr, 400.0f, 470.0f, 400.0f, 0, 0, 0);
		EV_CameraPos(1, 0, 103.7f, 247.7f, 1002.0f);
		EV_CameraAng(1, 0, 3584, 64256, 0);
		EventSe_Play(0, 1333, 1800);
		EventSe_Volume(0, -65, 1);
		moveObject(pmiles, 400.0f, 470.0f, 400.0f, 180.0f, 470.0f, 400.0f, 180);
		EV_Wait(180);
		stopObjectAll();
		CIchimaie2_SetDstAlpha(hogel, 1.0f, 1);
		EV_SetPos(pmiles, 321.04239f, 933.84003f, 750.79999f);
		EV_CameraPos(0, 0, 323.20999f, 941.0f, 762.33502f);
		EV_CameraAng(0, 0, 61696, 0, 0);
		EventSe_Volume(0, -30, 1);
		CEcCloud_Start(2.2f, 8);
		EV_CameraPos(0, 140, 315.79999f, 941.0f, 759.5f);
		EV_CameraAng(0, 140, 61696, 60672, 0);
		EV_Wait(50);
		EV_SerifPlay(616);
		EV_Wait(5);
		EV_Msg(msgTbl_ev0030[TextLanguage][0]); //"\aEverything's working great!"
		EV_Wait(35);
		EV_MsgClose();
		EV_CameraPos(0, 130, 314.95001f, 942.0f, 767.85699f);
		EV_CameraAng(0, 130, 63488, 60672, 0);
		EV_SerifPlay(617);
		EV_Msg(msgTbl_ev0030[TextLanguage][1]); //"\aAll systems go... \nFull speed ahead!"
		EV_SerifWait();
		EV_Wait(20);
		EV_CameraPos(1, 0, 307.97f, 930.90002f, 760.90002f);
		EV_CameraAng(1, 0, 3072, 57088, 0);
		EV_CameraPos(1, 95, 305.66f, 930.90002f, 759.0f);
		EV_Wait(110);
		miles_motchg(1, 2.0999999f);
		EV_CameraAng(1, 4, 4352, 57088, 0);
		EventSe_Play(2, 1325, 1800);
		EV_Wait(3);
		EV_CameraAng(1, 4, 1280, 57088, 0);
		EV_Wait(3);
		EV_CameraAng(1, 4, 3840, 57088, 0);
		EV_Wait(3);
		EV_CameraAng(1, 4, 2304, 57088, 0);
		EV_Wait(3);
		EV_CameraAng(1, 4, 3328, 57088, 0);
		EV_Wait(3);
		EV_CameraAng(1, 4, 2560, 57088, 0);
		EV_Wait(3);
		EV_CameraAng(1, 4, 3072, 57088, 0);
		EV_Wait(3);
		EV_CameraAng(1, 4, 2560, 57088, 0);
		EventSe_Stop(2);
		EV_Wait(37);
		miles_motchg(3, 0.1f);
		EV_CameraPerspective(1, 1, 8556);
		EV_CameraPos(1, 0, 316.17001f, 940.12201f, 760.04401f);
		EV_CameraAng(1, 0, 63744, 58624, 0);
		EV_Wait(1);
		EV_SerifPlay(618);
		EV_Msg(msgTbl_ev0030[TextLanguage][2]); //"\aUh oh!   What's this?"
		miles_motchg(3, 1.4f);
		EV_SerifWait();
		EV_MsgClose();
		BGM_Play(MusicIDs_circuit);
		CIchimaie2_SetPriority(hogel, -700.0f);
		EV_CameraPerspective(1, 1, 15474);
		EV_CameraPos(0, 0, 321.98999f, 939.65002f, 750.70001f);
		EV_CameraAng(0, 0, 60928, 16640, 0);
		miles_motchg(3, 0.2f);
		EV_Wait(20);
		EventSe_Play(1, 1326, 1800);
		EventSe_Volume(1, -30, 1);
		EV_CameraAng(0, 4, 60928, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 61440, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 60416, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 61184, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 60672, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 61440, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 60416, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 61184, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 60672, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 60416, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 61184, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 60416, 16640, 0);
		EventSe_Stop(1);
		EV_Wait(37);
		SMOKE->Data1->Rotation.y = 6;
		SMOKE->Data1->Rotation.x = 6;
		CEcCloud_Stop();
		EventSe_Play(1, 1326, 1800);
		EventSe_Volume(1, 0, 1);
		EV_CameraAng(0, 4, 62720, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 58368, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 62720, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 58368, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 62464, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 58624, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 62720, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 58624, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 62464, 16640, 0);
		EV_Wait(3);
		EV_CameraAng(0, 3, 58624, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 62720, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 58880, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 62720, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 58880, 16640, 0);
		EV_Wait(2);
		EV_SerifPlay(619);
		EV_Msg(msgTbl_ev0030[TextLanguage][3]); //"\aNooooooooooo!"
		SMOKE->Data1->Rotation.y = 3;
		SMOKE->Data1->Rotation.x = 3;
		EV_CameraAng(0, 3, 63488, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 58112, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 63744, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57856, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 63488, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 58112, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 63744, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57856, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 63488, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 58112, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 63744, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57856, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 63744, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57856, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 64000, 16640, 0);
		EV_Wait(1);
		EV_CameraAng(0, 3, 57600, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 64000, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57600, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 64000, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57600, 16640, 0);
		EV_MsgClose();
		EV_CameraAng(0, 3, 64256, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57344, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 64256, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57344, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 64256, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57344, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 64256, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57344, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 64256, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57344, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 64256, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57344, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 64256, 16640, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 57344, 16640, 0);
		EV_Wait(2);
		SMOKE->Data1->Rotation.y = 2;
		SMOKE->Data1->Rotation.x = 2;
		CEcCloud_Start(1.0f, 5);
		EV_Wait(15);
		moveObjectOn(SMOKE, 0.0f, 0.0f, 0.0f, 9999, pmiles);
		miles_motchg(3, 1.0f);
		EV_CameraPos(0, 0, 323.70001f, 931.40002f, 835.40002f);
		EV_CameraAng(0, 0, 0, 0, 0);
		EventSe_Pan(0, -100, 40);
		EV_SetPath(pmiles, &epathtag_cube0030_19, 1.5f, 2);
		EV_Wait(5);
		EV_Wait(28);
		EV_SerifStop();
		EV_ClrPath(pmiles);
		EV_Wait(6);
		EventSe_Pan(0, 100, 1);
		EV_Wait(1);
		EventSe_Pan(0, -100, 50);
		EV_SetAng(pmiles, 0, 0x4000, 4096);
		moveObject(pmiles, 400.0f, 1000.0f, 820.0f, 250.0f, 850.0f, 790.0f, 50);
		EV_Wait(3);
		EV_Wait(28);
		EV_SerifStop();
		EV_Wait(20);
		EventSe_Pan(0, 100, 50);
		EV_SetAng(pmiles, 0, -8960, 4096);
		moveObject(pmiles, 200.0f, 850.0f, 650.0f, 370.0f, 960.0f, 880.0f, 55);
		EV_SerifPlay(620);
		EV_Msg(msgTbl_ev0030[TextLanguage][4]); //"\aAaaaggg...!"
		EV_Wait(35);
		stopObjectAll();
		CEcCloud_Stop();
		if(hogel){
			FreeTask(hogel);
			hogel = 0;
		}
		SMOKE->Data1->Rotation.y = 1;
		SMOKE->Data1->Rotation.x = 1;
		moveObjectOn(SMOKE, 0.0f, 0.0f, 0.0f, 9999, pmiles);
		EV_SetPath(pmiles, &epathtag_cube0030_14, 1.0f, 0);
		EV_CameraPerspective(1, 201, 12561);
		EV_CameraPos(0, 0, 309.97f, 1.6799999f, 1241.9f);
		EV_CameraAng(0, 0, 4897, 59055, 0);
		EventSe_Volume(0, -40, 1);
		EventSe_Volume(1, -20, 1);
		EV_Wait(90);
		EV_SerifPlay(621);
		EV_Msg(msgTbl_ev0030[TextLanguage][5]); //"\aI'm outta control!  \nMayday!  Mayday"...
		EV_Wait(91);
		EV_CameraPos(0, 0, 519.72858f, 144.2f, 1048.5f);
		EV_CameraAng(0, 0, 58657, 10671, 59648);
		EV_CameraChase(pmiles);
		EventSe_Volume(0, -55, 45);
		EventSe_Volume(1, -45, 45);
		moveObject(pmiles, 501.64001f, 130.427f, 1041.0999f, 391.20999f, 28.162399f, 1047.48f, 70);
		EV_SerifPlay(622);
		EV_Msg(msgTbl_ev0030[TextLanguage][6]); //"\aGoin' down!"
		EV_Wait(26);
		EV_CameraChaseFree();
		EV_CameraPos(0, 0, 382.73999f, 23.245001f, 1048.7321f);
		EV_CameraAng(0, 0, 0, 16815, 0);
		EV_CameraPos(0, 40, 233.2f, 10.2f, 1061.0f);
		EV_Wait(40);
		EV_CameraPos(0, 15, 225.658f, 0.80849999f, 1086.5861f);
		EV_CameraAng(0, 15, 5376, 30127, 0);
		EV_CameraChaseFree();
		EV_SerifPlay(623);
		EV_Msg(msgTbl_ev0030[TextLanguage][7]); //"\aAaaaggg...!"
		EV_SetAng(pmiles, -10534, -11885, 10976);
		moveObject(pmiles, 202.06f, -5.7399998f, 1061.3361f, 201.52769f, 170.58f, 1295.58f, 50);
		EV_Wait(50);
		EV_CameraPos(0, 0, 198.558f, 174.8555f, 1290.7419f);
		EV_CameraAng(0, 0, 50119, 40125, 29696);
		moveObject(pmiles, 201.52769f, 170.58f, 1295.58f, 193.36301f, 304.83701f, 1324.21f, 50);
		EV_Wait(1);
		EV_CameraPos(0, 51, 190.72f, 309.978f, 1319.3353f);
		EV_Wait(52);
		EV_CameraPerspective(1, 1, 14564);
		EV_CameraPos(0, 0, 314.94501f, 0.40000001f, 1580.83f);
		EV_CameraAng(0, 0, 4807, 20669, 0);
		EventSe_Volume(0, -95, 100);
		EventSe_Volume(1, -95, 100);
		EV_CameraPos(0, 180, 320.79999f, 0.40000001f, 1522.637f);
		EV_SetPath(pmiles, &epathtag_CUBE0030_4, 0.89999998f, 0);
		EV_SerifPlay(624);
		EV_Msg(msgTbl_ev0030[TextLanguage][8]); //"\aLook out below!"
		EV_SerifWait();
		EV_MsgClose();
		EventSe_Oneshot(1335, 0, 0, 0);
		BLACK = COverlayCreate(0.016666668f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_Wait(70);
		EventSe_Stop(0);
		EventSe_Stop(1);
		EventSe_Stop(2);
		SMOKE->Data1->Rotation.y = 0;
		SMOKE->Data1->Rotation.x = 0;
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		EV_ClrPath(pmiles);
		EV_InitPlayer(0);
		EV_FreeObject(&pmiles);
		CEcCloud_Stop();
		if(SMOKE){
			FreeTask(SMOKE);
			SMOKE = 0;
		}
		if(SMOKE2){
			FreeTask(SMOKE2);
			SMOKE2 = 0;
		}
		if(hogel){
			FreeTask(hogel);
			hogel = 0;
		}
		EventSe_Close();
		if(BLACK){
			FreeTask(BLACK);
			BLACK = 0;
		}
		break;
	}
}