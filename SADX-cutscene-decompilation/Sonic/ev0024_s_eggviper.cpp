#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0024_s_eggviper(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);

	ObjectMaster* KURAYAMI = 0;
	ObjectMaster* IWA = 0;
	ObjectMaster* IWA2 = 0;
	ObjectMaster* IWA3 = 0;

	switch (state) {
	case 1:
		SetBankDir(84);
		EventSe_Init(5);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_finaleg2);
		KURAYAMI = COverlayCreate(1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_Wait(1);
		EV_EggViperArawaru(-65.989998f, -49840.496f, -0.46700001f, 0xFFFFC001);
		EV_SetPos(player, -632.42999f, -49934.164f, 0.34f);
		EV_SetAng(player, 0, 0x4000, 0);
		EV_CameraPos(1, 0, -650.78003f, -49921.641f, -0.75f);
		EV_CameraAng(1, 0, 63488, 48128, 0);
		EV_CameraChase(player);
		COverlaySetSpeed(KURAYAMI, -0.0062500001f);
		EV_MovePoint2(player, -389.41f, -49940.68f, -3.9400001f, 0.80000001f, 1.1f);
		EV_Wait(80);
		EV_CameraChaseFree();
		EV_CameraPos(1, 0, -350.33499f, -49936.27f, -30.290001f);
		EV_CameraAng(1, 0, 2560, 21504, 0);
		EV_WaitMove(player);
		EV_ClrAction(player);
		EV_PlayPad(0, &e0024s);
		EV_Wait(60);
		EV_SetPos(player, -378.05969f, -49940.66f, -2.4122f);
		EV_CameraPos(1, 0, -299.854f, -49939.512f, 10.88f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 5.0f, 0.0f, 0);
		EV_CameraChase(player);
		EV_ClrAction(player);
		EV_PlayPad(0, &e0024s);
		EV_Wait(50);
		EV_CameraChaseFree();
		EV_Wait(30);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, -303.81f, -49999.723f, 1.456f);
		EV_CameraAng(1, 0, 3584, 17408, 0);
		EV_SetAction(player, &action_s_s0042_sonic, &SONIC_TEXLIST, 1.0f, 0, 8); //Shows up too early (during ball animation) and doesn't loop.
		EV_Wait(80);
		EV_CameraPos(1, 0, -327.017f, -49992.781f, 3.267f);
		EV_CameraAng(1, 0, 4864, 48640, 0);
		EV_Wait(60);
		EV_CameraPos(1, 0, -82.628998f, -49858.246f, -91.050003f);
		EV_CameraAng(1, 0, 3840, 35328, 0);
		EV_CameraPos(1, 60, -128.22f, -49858.238f, -79.630997f);
		EV_Wait(58);
		EV_CameraPos(1, 0, -188.09399f, -49821.82f, 31.158001f);
		EV_CameraAng(1, 0, 64768, 52736, 0);
		EV_CameraPos(1, 120, -177.354f, -49857.902f, 30.438999f);
		EV_CameraAng(1, 120, 3840, 53248, 0);
		EV_Wait(60);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_EggViperEggmanToujou(); //Reveal cockpit
		EV_EggViperEggmanShaberu(); //Start Eggman talking
		EV_Wait(60);
		EV_SerifPlay(601);
		EV_Msg(msgTbl_ev0024[TextLanguage][0]); //"\aWell, if it isn't my pal \nSonic!"
		EV_Wait(1);
		EV_SerifWait();
		EV_SerifPlay(602);
		EV_Msg(msgTbl_ev0024[TextLanguage][1]); //"\aI'm surprised you made it\nthis far. "
		EV_Wait(1);
		EV_SerifWait();
		EV_EggViperEggmanShaberiYame(); //Stop Eggman talking
		EV_Wait(5);
		EV_MsgClose();
		EV_EggViperEggmanHikkomu();  //Hide cockpit
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(80);
		EventSe_Play(0, 1336, 1800);
		EV_EggViperJoushou();
		EventSe_Volume(0, -4, 300);
		EV_CameraAng(1, 120, 6912, 49152, 0);
		EV_Wait(200);
		EventSe_Oneshot(1335, 0, 0, 0);
		IWA = EggViperDebrisGenerator(10.071f, -49500.234f, 7.2740002f, 3.0f, 0.40000001f, 80.0f, 15);
		IWA2 = EggViperDebrisGenerator(91.514999f, -49500.16f, -16.011f, 3.0f, 0.40000001f, 50.0f, 30);
		IWA3 = EggViperDebrisGenerator(-122.556f, -49500.234f, 174.875f, 3.0f, 0.40000001f, 50.0f, 10);
		EV_SerifPlay(603);
		EV_Msg(msgTbl_ev0024[TextLanguage][2]); //"\aHold it right there, \nEggman!"
		RumbleA(0, 10);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 7168, 49408, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6912, 49152, 65280);
		EV_MsgClose();
		EV_CameraAng(1, 2, 6656, 48896, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 6912, 49152, 65280);
		EV_Wait(1);
		RumbleA(0, 0);
		EV_CameraPos(1, 0, -325.29401f, -49997.578f, -20.613001f);
		EV_CameraAng(1, 0, 4096, 35584, 0);
		EV_CameraChase(player);
		EV_MovePoint2(player, -198.84f, -50000.0f, -6.0500002f, 1.5f, 2.0f);
		EV_Wait(1);
		RumbleA(0, 10);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_Wait(1);
		EV_CameraAng(1, 2, 3840, 35840, 256);
		EV_Wait(1);
		RumbleA(0, 0);
		EV_CameraAng(1, 2, 4352, 35328, 65280);
		EV_EggViperKesu();
		EV_WaitMove(player);
		COverlaySetSpeed(KURAYAMI, 0.0125f);
		EV_Wait(160);
		EventSe_Play(1, 744, 1800);
		EV_SetPos(player, 260.0f, 100.0f, 0.0f);
		EV_Wait(10);
		COverlaySetSpeed(KURAYAMI, -0.016666668f);
		EV_Wait(30);
		EV_SetAction(player, &action_s_s0042_sonic, &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_CameraChaseFree();
		EV_CameraOn();
		EV_CameraPos(1, 0, 271.72501f, 15.634f, -10.011f);
		EV_CameraAng(1, 0, 1792, 23296, 65280);
		EV_CameraPos(1, 200, 268.664f, 16.318001f, -7.5310001f);
		EV_CameraAng(1, 200, 1792, 24064, 65280);
		EV_Wait(100);
		EventSe_Stop(1);
		break;
	case 2:
		EventSe_Close();
		EV_CameraOff();
		EV_PadOn();
		FreeTask(KURAYAMI);
		KURAYAMI = 0;
		EV_SetPos(player, 260.0f, 13.0f, 0.0f);
		RumbleA(0, 0);
		EV_EggViperKesu();
		FreeTask(IWA);
		IWA = 0;
		FreeTask(IWA2);
		IWA2 = 0;
		FreeTask(IWA3);
		IWA3 = 0;
		EV_InitPlayer(0);
		break;
	}
}