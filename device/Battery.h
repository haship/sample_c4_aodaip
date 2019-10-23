/**
 * ******************************************************************
 * Batteryクラス(device/Battery.h) by 青大ロボコン研P+青工柑
 * 
 * 2019/10/23   新規作成
 * 
 * ******************************************************************
 */

//インクルードガードを設置する
#ifndef BATTERY_H
#define BATTERY_H

// C API ヘッダファイルをインクルードする
#include "ev3api.h"

//関連・依存するクラスのヘッダファイルをインクルードする
//なし

//公開する定数の定義
//なし

//クラスの属性と関連端名を構造体として定義
typedef struct Battery {

    //属性をメンバー変数として定義
    //なし

    //関連端名をポインタ型として定義
    //なし

} Battery;

//公開操作の関数プロトタイプ宣言
void Battery_init(Battery* this);       //初期設定を行う
int Battery_getVoltage(Battery* this);  //電流(mA)を取得する
int Battery_getCurrent(Battery* this);  //電圧(mV)を取得する

#endif//BATTERY_H
