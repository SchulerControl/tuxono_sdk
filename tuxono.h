#ifndef TUXONO_H_
#define TUXONO_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#include "fix_param.h"
#include "digout_config.h"
#include "input_config.h"
#include "measure_config.h"
#include "pwm_config.h"
#include "monitor_config.h"
#include "analog_out_config.h"
#include "io_device_ids_config.h"
#include "ex_digout_config.h"

#include "input_data.h"
#include "measure_data.h"
#include "monitor_data.h"
#include "ex_input_data.h"



////////////////////////////////////////////////////////////////////////
// 
// Return codes for all communication / configuration / data functions
//
////////////////////////////////////////////////////////////////////////

#define TUXONO_OK				0
#define TUXONO_COMM_ERROR		-1
#define TUXONO_DATA_ERROR		-2
#define TUXONO_DEVICE_BUSY		-3



////////////////////////////////////////////////////////////////////////
// 
// Init/Close communication channel
//
////////////////////////////////////////////////////////////////////////

int tuxono_InitCommunication(void);
void tuxono_CloseCommunication(void);



////////////////////////////////////////////////////////////////////////
// 
// Get/Set configuration data
//
////////////////////////////////////////////////////////////////////////

int tuxono_GetFixParam(TUXONO_FIX_PARAM *fixparam);

int tuxono_GetDigitalOutConfig(TUXONO_DIGOUT_CONFIG *digoutconfig);
int tuxono_SetDigitalOutConfig(TUXONO_DIGOUT_CONFIG *digoutconfig);

int tuxono_GetInputConfig(TUXONO_INPUT_CONFIG *inputconfig);
int tuxono_SetInputConfig(TUXONO_INPUT_CONFIG *inputconfig);

int tuxono_GetMeasureConfig(TUXONO_MEASURE_CONFIG *measureconfig);
int tuxono_SetMeasureConfig(TUXONO_MEASURE_CONFIG *measureconfig);

int tuxono_GetMonitorConfig(TUXONO_MONITOR_CONFIG *monitorconfig);
int tuxono_SetMonitorConfig(TUXONO_MONITOR_CONFIG *monitorconfig);

int tuxono_GetPWMConfig(TUXONO_PWM_CONFIG *pwmconfig);
int tuxono_SetPWMConfig(TUXONO_PWM_CONFIG *pwmconfig);

int tuxono_GetAnalogOutConfig(TUXONO_ANALOGOUT_CONFIG *analogoutconfig);
int tuxono_SetAnalogOutConfig(TUXONO_ANALOGOUT_CONFIG *analogoutconfig);

int tuxono_GeIODeviceIDsConfig(TUXONO_IODEVICE_IDS_CONFIG *iodeviceidsconfig);

int tuxono_GetExDigitalOutConfig(TUXONO_EX_DIGOUT_CONFIG *exdigoutconfig);
int tuxono_SetExDigitalOutConfig(TUXONO_EX_DIGOUT_CONFIG *exdigoutconfig);



////////////////////////////////////////////////////////////////////////
// 
// Get runtime data
//
////////////////////////////////////////////////////////////////////////

int tuxono_GetInputData(TUXONO_INPUT_DATA *inputdata);
int tuxono_GetMeasureData(TUXONO_MEASURE_DATA *measuredata);
int tuxono_GetMonitorData(TUXONO_MONITOR_DATA *monitordata);
int tuxono_GetExInputData(TUXONO_EX_INPUT_DATA *exinputdata);

#ifdef __cplusplus
}
#endif

#endif /* TUXONO_H_ */
