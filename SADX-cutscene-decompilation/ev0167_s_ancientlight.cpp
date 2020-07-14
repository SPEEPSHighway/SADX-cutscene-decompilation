#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0167_s_ancientlight(int state)
{
    ObjectMaster* player = EV_GetPlayer(0);
    ObjectMaster* tikal = 0;

    switch(state){
    case 1:
        EventSe_Init(1);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_InitPlayer(0);
        EV_SetPos(player, -1662.0f, -366.0f, 2200.0f);
        EV_SetAng(player, 0, 19419, 0);
        EV_Wait(1);
        EV_ClrAction(player);
        EV_SetAction(player, &action_s_item_l0, &SONIC_TEXLIST, 0.2f, 0, 16);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        EV_CameraTargetObj(1, 0, player, 0.0f, 5.0f, 0.0f, 0);
        EV_CameraChaseRM(0, 290, player, 8.0f, 0, 0x8000, 0, 18.0f, 0, -47331, 0, 18.0f);
        effect_create2(player, 0, -4.0f, 8.0f, -2.0f, &ef_name);
        effect_create2(player, 1, 4.0f, 8.0f, 4.0f, &ef_name);
        effect_create2(player, 2, 3.0f, 4.0f, -2.0f, &ef_name);
        effect_create2(player, 3, -3.0f, 4.0f, 3.0f, &ef_name);
        effect_create2(player, 5, 1.0f, 7.0f, 2.0f, &ef_name);
        effect_create2(player, 6, 2.0f, 2.0f, -1.0f, &ef_name);
        effect_create2(player, 7, -1.0f, 3.0f, 1.0f, &ef_name);
        effect_create2(player, 8, 4.0f, 6.0f, 3.0f, &ef_name);
        effect_create2(player, 9, 3.0f, 1.0f, -1.0f, &ef_name);
        effect_create2(player, 10, -1.0f, 2.0f, 2.0f, &ef_name);
        EV_Wait(1);
        effect_scl(0, -0.1f, -0.1f);
        effect_scl(1, -0.050000001f, -0.050000001f);
        effect_scl(2, -0.029999999f, -0.029999999f);
        effect_scl(3, -0.079999998f, -0.079999998f);
        effect_scl(5, -0.090000004f, -0.090000004f);
        effect_scl(6, -0.07f, -0.07f);
        effect_scl(7, -0.039999999f, -0.039999999f);
        effect_scl(8, -0.050000001f, -0.050000001f);
        effect_scl(9, -0.090000004f, -0.090000004f);
        effect_scl(10, -0.1f, -0.1f);
        EV_SerifPlay(1718);
        EV_Wait(1);
        EV_Wait(40);
        EV_SerifWait();
        EV_SerifPlay(1623);
        EV_MsgW(0, (msgTbl_ev0167[TextLanguage])[0]);
        tikal = CTikalLight_Create(
            player->Data1->Position.x + 8.5349998f,
            player->Data1->Position.y + 27.0f, 
            player->Data1->Position.z + 13.89f);
        EV_Wait(1);
        EV_SetMode(tikal, 0);
        EV_ClrPath(tikal);
        EV_SetPath(tikal, &epathtbl_ev0167_tk, 2.0f, 2);
        EV_SetAction(player, &action_s_item_l2, &SONIC_TEXLIST, 0.5f, 1, 8);
        EV_Wait(30);
        EV_MsgW(0, (msgTbl_ev0167[TextLanguage])[1]);
        EV_Wait(60);
        EV_MsgW(0, (msgTbl_ev0167[TextLanguage])[2]);
        EV_SerifWait();
        EventSe_Play(0, 760, 1800);
        EV_Wait(10);
        effect_delete(0);
        effect_delete(1);
        effect_delete(2);
        effect_delete(3);
        effect_delete(5);
        effect_delete(6);
        effect_delete(7);
        effect_delete(8);
        effect_delete(9);
        effect_delete(10);
        EV_Wait(1);
        effect_create2(player, 4, 2.0f, 6.0f, 0.0f, &ef_name);
        EV_Wait(1);
        effect_size_change(4, 0.050000001f, 0.050000001f);
        EV_Wait(14);
        effect_size_change(4, -0.050000001f, -0.050000001f);
        EV_Wait(15);
        EV_CameraPos(1, 90, -1650.146f, -358.66f, 2197.9099f);
        EV_CameraAng(1, 90, 64382, 18205, 0);
        EV_SetAction(player, &action_s_item_l1, &SONIC_TEXLIST, 0.5f, 0, 8);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        EventSe_Volume(0, -120, 120);
        EV_Wait(90);
        EV_MsgClose();
        effect_delete(0);
        effect_delete(1);
        effect_delete(2);
        effect_delete(3);
        effect_delete(4);
        effect_delete(5);
        effect_delete(6);
        effect_delete(7);
        effect_delete(8);
        effect_delete(9);
        effect_delete(10);
        EV_ClrPath(tikal);
        FreeTask(tikal);
        tikal = 0;
        EV_Wait(1);
        break;
    case 2:
        EventSe_Close();
        EV_ClrPath(tikal);
        effect_delete(0);
        effect_delete(1);
        effect_delete(2);
        effect_delete(3);
        effect_delete(4);
        effect_delete(5);
        effect_delete(6);
        effect_delete(7);
        effect_delete(8);
        effect_delete(9);
        effect_delete(10);
        EV_InitPlayer(0);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        EV_SerifStop();
        EV_MsgClose();
        if (tikal)
        {
            FreeTask(tikal);
            tikal = 0;
        }
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}