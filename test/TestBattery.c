/**
 * ******************************************************************
 * TestBatteryクラス(test/TestsBattery.c) by 青大ロボコン研P+青工柑
 * 
 * 2019/10/23   新規作成
 * 
 * ******************************************************************
 */

//ヘッダファイルをインクルードする
#include "TestBattery.h"

//非公開の定数の定義
//なし

//非公開操作のプロトタイプ宣言
//なし

//関数の定義
/**
 * 初期設定を行う
 */
void TestBattery_init(TestBattery* this, Battery* batt){

    //メンバー変数、関連端名の初期化
    this->battery = batt;
 
}

/**
 * 実行する
 */
void TestBattery_run(TestBattery* this){

    //電圧を取得し、変数voltに代入する
    int volt = Battery_getVoltage(this->battery);

    //電流を取得し、変数currに代入する
    int curr = Battery_getCurrent(this->battery);

    //(16-1)文字の文字列を保存する文字型配列を宣言する
    char buf[16];

    //フォントの大きさを設定する
    ev3_lcd_set_font(EV3_FONT_MEDIUM);

    //文字列の書式を設定し、文字列をbufに保存する
    snprintf(buf, 16, "V = %d (mV)", volt);

    //文字列を画面(0,0)に表示する
    ev3_lcd_draw_string(buf, 0, 0);

    //文字列の書式を設定し、文字列をbufに保存する
    snprintf(buf, 16, "I = %d (mA)", curr);

    //文字列を画面(0,1*16)に表示する
    ev3_lcd_draw_string(buf, 0, 1*16);

}
