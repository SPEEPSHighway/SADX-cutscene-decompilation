#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventList.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		CutsceneDataList_[0x0001]->Function = ev0001_s_intro;
		CutsceneDataList_[0x0002]->Function = ev0002_s_chaos0defeated;
		CutsceneDataList_[0x0003]->Function = ev0003_s_tailscrash;
		CutsceneDataList_[0x0006]->Function = ev0006_s_poolsidewithtails;
		CutsceneDataList_[0x0007]->Function = ev0007_s_egghornetintro;
		CutsceneDataList_[0x0008]->Function = ev0008_s_chaos1;
		CutsceneDataList_[0x0009]->Function = ev0009_s_aftercasinopolis;
		CutsceneDataList_[0x000B]->Function = ev000B_s_beforechaos4;
		CutsceneDataList_[0x000C]->Function = ev000C_s_afterchaos4;
		CutsceneDataList_[0x000D]->Function = ev000D_s_tornado1;
		CutsceneDataList_[0x0011]->Function = ev0011_s_fallingtoSS;
		CutsceneDataList_[0x0012]->Function = ev0012_s_meetingamy;
		CutsceneDataList_[0x0013]->Function = ev0013_s_beforetwinklepark;
		CutsceneDataList_[0x0014]->Function = ev0014_s_aftertwinklepark;
		CutsceneDataList_[0x0015]->Function = ev0015_s_chasingzero;
		CutsceneDataList_[0x0016]->Function = ev0016_s_zeroboardsec;
		CutsceneDataList_[0x0017]->Function = ev0017_s_tailsreunion;
		CutsceneDataList_[0x001A]->Function = ev001A_s_eggmantakesbirdie;
		CutsceneDataList_[0x001B]->Function = ev001B_s_aftergamma;
		CutsceneDataList_[0x001C]->Function = ev001C_s_beforechaos6;
		CutsceneDataList_[0x001D]->Function = ev001D_s_afterchaos6;
		CutsceneDataList_[0x001E]->Function = ev001E_s_lostworld;
		CutsceneDataList_[0x0020]->Function = ev0020_s_mural;
		CutsceneDataList_[0x0021]->Function = ev0021_s_enterpast;
		CutsceneDataList_[0x0022]->Function = ev0022_s_pastaltar;
		CutsceneDataList_[0x0023]->Function = ev0023_s_afterpast;
		CutsceneDataList_[0x0024]->Function = ev0024_s_eggviper;
		CutsceneDataList_[0x0026]->Function = ev0026_s_outro;
		CutsceneDataList_[0x002B]->Function = ev002B_s_beforechaos0;
		CutsceneDataList_[0x0165]->Function = ev0165_s_crystalring;
		CutsceneDataList_[0x0166]->Function = ev0166_s_lightshoes;
		CutsceneDataList_[0x0167]->Function = ev0167_s_ancientlight;
		CutsceneDataList_[0x0176]->Function = ev0176_s_icestone;
		CutsceneDataList_[0x0179]->Function = ev0179_s_idcard;
		CutsceneDataList_[0x017A]->Function = ev017A_s_angelislandwall;
		CutsceneDataList_[0x0180]->Function = ev0180_s_redmountainintro;
	}
}