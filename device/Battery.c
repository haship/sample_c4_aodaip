/**
 * ******************************************************************
 * Batteryクラス(device/Battery.c) by 青大ロボコン研P+青工柑
 * 
 * 2019/10/23   新規作成
 * 
 * ******************************************************************
 */

//ヘッダファイルをインクルードする
#include "Battery.h"

//非公開の定数の定義
//なし

//非公開操作の関数プロトタイプ宣言
//なし

//関数の定義
/**
 * 初期設定を行う
 */
void Battery_init(Battery* this){
    //処理なし
}

/**
 * 電圧(mV)を取得する
 */
int Battery_getVoltage(Battery* this){
    return ev3_battery_voltage_mV();
}

/**
 * 電流(mA)を取得する
 */
int Battery_getCurrent(Battery* this){
    return ev3_battery_current_mA();
}
