/**
 ******************************************************************************
 ** �t�@�C���� : app.c
 **
 ** �T�v : 2�֓|���U�q���C���g���[�X���{�b�g��TOPPERS/HRP2�pC�T���v���v���O����
 **
 ** ���L : sample_c4 (sample_c3��Bluetooth�ʐM�����[�g�X�^�[�g�@�\��ǉ�)
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

/* �֐��v���g�^�C�v�錾 */
static void user_system_create(void);

/* �I�u�W�F�N�g��ÓI�Ɋm�ۂ��� */
Battery         gBattery;
TestBattery     gTestBattery;

/* �����ݒ���s�� */
static void user_system_create(void){
    Battery_init(&gBattery);
    TestBattery_init(&gTestBattery, &gBattery);
}

/* ���C���^�X�N */
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

