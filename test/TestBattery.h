/**
 * ******************************************************************
 * TestBatteryクラス(test/TestsBattery.h) by 青大ロボコン研P+青工柑
 * 
 * 2019/10/23   新規作成
 * 
 * ******************************************************************
 */
//インクルードガードを設置する
#ifndef TESTBATTERY_H
#define TESTBATTERY_H

//C API ヘッダファイルをインクルード
#include "ev3api.h"

//関連・依存するクラスのヘッダファイルをインクルード
#include "../device/Battery.h"

//公開する定数の定義
//なし

//クラスの属性と関連端名を構造体として定義
typedef struct TestBattery {

    //属性をメンバー変数として定義
    //なし

    //関連端名をポインタ型として定義
    Battery* battery;

} TestBattery;

//公開操作の関数プロトタイプ宣言
void TestBattery_init(TestBattery* this, Battery* batt);    //初期設定を行う
void TestBattery_run(TestBattery* this);                    //実行する

#endif//TESTBATTERY_H
