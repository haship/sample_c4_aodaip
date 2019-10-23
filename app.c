/**
 ******************************************************************************
 ** ファイル名 : app.c
 **
 ** 概要 : 2輪倒立振子ライントレースロボットのTOPPERS/HRP2用Cサンプルプログラム
 **
 ** 注記 : sample_c4 (sample_c3にBluetooth通信リモートスタート機能を追加)
 ******************************************************************************
 **/

#include "ev3api.h"
#include "app.h"
#include "balancer.h"
#include "device/Battery.h"
#include "test/TestBattery.h"

#if defined(BUILD_MODULE)
#include "module_cfg.h"
#else
#include "kernel_cfg.h"
#endif

#define DEBUG

#ifdef DEBUG
#define _debug(x) (x)
#else
#define _debug(x)
#endif

/* 関数プロトタイプ宣言 */
static void user_system_create(void);

/* オブジェクトを静的に確保する */
Battery         gBattery;
TestBattery     gTestBattery;

/* 初期設定を行う */
static void user_system_create(void){
    Battery_init(&gBattery);
    TestBattery_init(&gTestBattery, &gBattery);
}

/* メインタスク */
void main_task(intptr_t unused)
{
    user_system_create();

    while(true){

        if(ev3_button_is_pressed(BACK_BUTTON)) break;

        TestBattery_run(&gTestBattery);

        tslp_tsk(250);
    }
}

void bt_task(intptr_t unused)
{}

