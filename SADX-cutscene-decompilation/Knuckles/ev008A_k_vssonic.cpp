#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev008A_k_vssonic(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		G_EME = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_SetPos(player, 193.56f, 70.980003f, 356.53f);
		EV_SetAng(player, 4496, 32557, 64480);
		EV_CreatePlayer(2, Sonic_Main, 55.93f, 73.160004f, 289.95999f, 160, 61161, 65508);
		EV_CreatePlayer(3, Tails_Main, 50.759998f, 73.230003f, 305.75f, 65390, 24588, 65442);
		EV_CreateObject(&G_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 2.0f, 1, 0);
		sonic = EV_GetPlayer(2);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, &action_s_s0034_sonic, &SONIC_TEXLIST, 1.0f, 1, 16);
		tails = EV_GetPlayer(3);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetMode(G_EME, 0);
		EV_SetPos(G_EME,
			sonic->Data1->Position.x - 1.2f,
			sonic->Data1->Position.y + 3.5999999f,
			sonic->Data1->Position.z + 2.0f);
		EV_SetAng(G_EME, 0, 0, 0);
		EV_Wait(1);
		EV_SetAction(G_EME, &action_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 1, 0);
		BGM_Play(MusicIDs_theknkls);
		EV_CameraPerspective(0, 1, 9102);
		EV_CameraPos(0, 0, 187.57001f, 78.400002f, 291.57001f);
		EV_CameraTargetObj(0, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPos(0, 90, 186.21001f, 78.510002f, 293.03f);
		EV_MovePoint2(player, 178.87f, 72.650002f, 302.98999f, 1.75f, 0.059999999f);
		EV_WaitMove(player);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(player, 160, 32997, 65508);
		EV_CameraTargetFree();
		EV_CameraAng(0, 120, 572, 24934, 0);
		EV_CameraPos(0, 120, 186.21001f, 78.510002f, 293.03f);
		EV_Wait(15);
		EV_LookObject(player, sonic, 0.0f, 6.0f, 0.0f);
		EV_Wait(15);
		EV_CameraPos(0, 30, 205.03f, 78.400002f, 286.85001f);
		EV_CameraAng(0, 30, 572, 19046, 0);
		EV_Wait(30);
		EV_CameraPos(0, 120, 210.83f, 78.07f, 285.34f);
		EV_CameraAng(0, 120, 572, 19046, 0);
		EV_Wait(15);
		EV_CameraPos(0, 0, 90.870003f, 76.459999f, 293.20001f);
		EV_CameraAng(0, 0, 828, 17510, 0);
		EV_SerifPlay(1063);
		EV_Msg(msgTbl_ev008A[TextLanguage][0]); //"\aThere's Sonic!   \nEggman was right."
		EV_SerifWait();
		EV_MsgClose();
		EV_SetFace(player, "CEFD");
		EV_Wait(10);
		EV_CameraPos(0, 0, 182.35001f, 73.190002f, 288.23999f);
		EV_CameraAng(0, 0, 4412, 29542, 0);
		EV_CameraPos(0, 60, 180.67999f, 75.650002f, 293.45999f);
		EV_SerifPlay(1064);
		EV_Msg(msgTbl_ev008A[TextLanguage][1]); //"\aWhat's that in his hand?"
		EV_Wait(30);
		EV_ClrFace(player);
		EV_Wait(15);
		EV_CameraPos(0, 0, 72.790001f, 78.370003f, 302.76001f);
		EV_CameraAng(0, 0, 65084, 10598, 0);
		EV_CameraPos(0, 15, 65.150002f, 77.989998f, 298.01999f);
		EV_CameraAng(0, 15, 65084, 10598, 0);
		EV_Msg(msgTbl_ev008A[TextLanguage][2]); //"\aIt looks like a piece of \nthe Master"...
		EV_Wait(15);
		EV_CameraPos(0, 60, 63.450001f, 77.900002f, 296.97f);
		EV_Wait(40);
		EV_MsgClose();
		EV_CameraPos(0, 0, 183.89f, 74.489998f, 292.14001f);
		EV_CameraAng(0, 0, 2364, 26726, 0);
		EV_CameraPos(1, 110, 196.67f, 78.190002f, 292.07001f);
		EV_CameraAng(1, 110, 316, 20070, 0);
		EV_SerifPlay(1065);
		if (!VoiceLanguage)
		{
			EV_SetFace(player, "FCEFD");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(player, "FD");
		}
		EV_Msg(msgTbl_ev008A[TextLanguage][3]); //"\aHe has no right to have that!"
		EV_Wait(105);
		EV_ClrFace(player);
		EV_Wait(5);
		EV_MsgClose();
		EV_CameraPos(0, 0, 88.949997f, 76.089996f, 277.57001f);
		EV_CameraAng(0, 0, 828, 21862, 0);
		EV_CameraPos(0, 100, 77.730003f, 77.120003f, 284.07001f);
		EV_SetPos(player, 87.870003f, 72.709999f, 252.82001f);
		EV_SetAng(player, 65390, 57079, 65442);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(tails, 65430, 0x8000, 18);
		EV_FreeObject(&G_EME);
		EV_Wait(10);
		EV_LookObject(tails, player, 0.0f, 6.0f, 0.0f);
		EV_Wait(15);
		EV_CameraPerspective(0, 60, 9102);
		EV_CameraPos(0, 45, 56.619999f, 77.449997f, 307.81f);
		EV_CameraTargetObj(0, 35, sonic, 0.0f, 6.0f, 0.0f, 0);
		EV_Wait(15);
		EV_SetAction(sonic, &action_s_s0038_sonic, &SONIC_TEXLIST, 1.0f, 1, 16);
		EV_Wait(30);
		EV_CameraTargetFree();
		EV_CameraAng(0, 10, 316, 62822, 0);
		EV_Wait(10);
		throughplayer_on(player);
		throughplayer_on(sonic);
		EV_CameraPos(0, 100, 51.48f, 76.839996f, 327.13f);
		EV_Wait(20);
		EV_CameraAng(1, 0, 1420, 62858, 0);
		EV_CameraPos(1, 0, 83.980003f, 78.0f, 261.87f);
		EV_CameraPerspective(0, 50, 10923);
		EV_SerifPlay(1066);
		EV_Msg(msgTbl_ev008A[TextLanguage][4]); //"\aHey, Knuckles!"
		EV_Wait(10);
		EV_SetPos(sonic, 55.93f, 73.160004f, 289.95999f);
		EV_SetAng(sonic, 65390, 24588, 65442);
		EV_Wait(10);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_SetPos(tails, 55.759998f, 73.230003f, 320.75f);
		EV_SetAng(tails, 65390, 24588, 65442);
		EV_Wait(10);
		EV_MsgClose();
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, 57.369999f, 77.57f, 284.06f);
		EV_CameraTargetObj(0, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPerspective(0, 1, 9102);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV008A_KN_PUNCH);
		EV_Wait(20);
		EV_CameraPerspective(0, 1, 1820);
		EV_Wait(10);
		EV_SetAction(sonic, &action_s_s0035_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		moveObject(sonic,
			sonic->Data1->Position.x,
			sonic->Data1->Position.y,
			sonic->Data1->Position.z,
			sonic->Data1->Position.x - 25.0f,
			sonic->Data1->Position.y,
			sonic->Data1->Position.z - 25.0f,
			35);
		EV_Wait(7);
		EV_CameraPerspective(0, 1, 9102);
		EV_CameraPos(0, 0, 56.41f, 77.769997f, 311.87f);
		EV_CameraTargetObj(0, 0, player, 0.0f, 6.0f, 0.0f, 63488);
		EV_Wait(40);
		EV_CameraTargetFree();
		EV_CameraPos(0, 60, 38.540001f, 76.279999f, 321.75f);
		EV_CameraAng(0, 60, 1042, 63736, 63488);
		EV_Wait(10);
		EV_LookObject(player, sonic, 0.0f, 6.0f, 0.0f);
		EV_LookObject(tails, player, 0.0f, 6.0f, 0.0f);
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_SetAng(sonic, 65390, 3314, 65442);
		EV_SetPos(sonic, 30.93f, 70.0f, 264.95999f);
		EV_SetPos(tails,
			tails->Data1->Position.x - 20.0f,
			tails->Data1->Position.y,
			tails->Data1->Position.z + 20.0f);
		EV_WaitAction(sonic);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 1.0f, 1, 4);
		EV_SetAng(sonic, 65390, 3314, 65442);
		EV_Wait(30);
		EV_CameraPos(0, 0, 28.93f, 77.699997f, 285.53f);
		EV_CameraAng(0, 0, 1042, 63736, 63488);
		EV_CameraPos(1, 45, 30.120001f, 78.400002f, 278.67001f);
		EV_SetAng(player, 65390, 35266, 65442);
		EV_SetPos(player, 42.959999f, 73.43f, 301.29001f);
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "FF");
		EV_SerifPlay(1067);
		EV_Msg(msgTbl_ev008A[TextLanguage][5]); //"\aWhoa! What do you think \nyou're doin"...
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		throughplayer_off(player);
		throughplayer_off(sonic);
		EV_CameraPerspective(0, 1, 7282);
		EV_CameraPos(0, 0, -5.3800001f, 92.459999f, 247.06f);
		EV_CameraAng(0, 0, 62710, 42476, 0);
		EV_CameraPos(0, 130, -14.98f, 95.669998f, 240.62f);
		EV_SetAction(sonic, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 16);
		if (!VoiceLanguage)
		{
			EV_SetFace(player, "FCD");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(player, "FBBBBF");
		}
		EV_Wait(5);
		EV_SerifPlay(1068);
		EV_Msg(msgTbl_ev008A[TextLanguage][6]); //"\aAll right!   Put 'em up!"
		EV_Wait(30);
		if (!VoiceLanguage)
		{
			EV_ClrFace(player);
		}
		EV_SerifPlay(1069);
		if (VoiceLanguage == 1)
		{
			EV_ClrFace(player);
		}
		EV_SetAction(player, &action_k_k0012_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 2);
		EV_SetAction(player, &action_k_k0013_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Msg(msgTbl_ev008A[TextLanguage][7]); //"\aHand over the Emerald now!"
		if (!VoiceLanguage)
		{
			EV_SetFace(player, "FCDFE");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(player, "FD");
		}
		EV_Wait(90);
		EV_ClrFace(player);
		EV_CameraPos(0, 0, 40.040001f, 78.589996f, 319.81f);
		EV_CameraAng(0, 0, 246, 64748, 0);
		EV_CameraPos(0, 180, 34.049999f, 78.589996f, 319.51001f);
		EV_SerifPlay(1070);
		EV_Msg(msgTbl_ev008A[TextLanguage][8]); //"\aThat's not gonna happen,\nbuddy!"
		EV_SetFace(sonic, "FDFE");
		EV_Wait(36);
		if (VoiceLanguage == 1)
		{
			EV_ClrFace(sonic);
		}
		EV_Wait(4);
		EV_MsgClose();
		if (!VoiceLanguage)
		{
			EV_ClrFace(sonic);
		}
		EV_Wait(60);
		dsStop_all();
		break;
	case 2:
		dsStop_all();
		stopObjectAll();
		throughplayer_off(player);
		throughplayer_off(sonic);
		EV_SetPos(player, 28.0f, 80.0f, 220.0f);
		EV_SetAng(player, 0, -39936, 0);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_FreeObject(&G_EME);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}