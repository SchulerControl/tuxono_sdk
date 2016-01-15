#ifndef FIX_PARAM_H_
#define FIX_PARAM_H_


////////////////////////////////////////////////////////////////////////
// 
// Fix parameters defining the underlying hardware capabilities
//
////////////////////////////////////////////////////////////////////////

typedef struct _TUXONO_FIX_DIGITALIN
{
    uint8_t CountDigIn;
    float VoltageMin;
    float VoltageMax;
    float FrequencyMin;
    float FrequencyMax;
    float PeriodMin;
    float PeriodMax;
    uint32_t CounterValueMax;
} TUXONO_FIX_DIGITALIN;


typedef struct _TUXONO_FIX_MEASURE
{
    uint8_t CountFastIn;
    float FastInVoltageMin;
    float FastInVoltageMax;
    float FastInCurrentMin;
    float FastInCurrentMax;
    float FastInCurrentShunt;
    float FastInImpedanceMin;
    float FastInImpedanceMax;
    float FastUDAC_I_ImpedanceMin;
    float FastUDAC_I_ImpedanceMax;
    uint8_t CountSlowIn;
    float SlowInVoltageMin;
    float SlowInVoltageMax;
    float SlowInImpedanceMin;
    float SlowInImpedanceMax;
    float SlowUDAC_I_ImpedanceMin;
    float SlowUDAC_I_ImpedanceMax;
    float SlowInRefImpedance;
} TUXONO_FIX_MEASURE;


typedef struct _TUXONO_FIX_DIGITALOUT
{
    uint8_t CountSSR;
    float SolidStateRelaisCurrentMax;
    uint8_t CountRelais;
    float RelaisCurrentMax;
    uint8_t CountRelaisSlim;
    float RelaisSlimCurrentMax;
    uint8_t CountSCModuleMixer;
    uint8_t CountSCModule;
    uint8_t CountOptoMOS;
    float OptoMOSVoltageMax;
    float OptoMOSCurrentMax;
} TUXONO_FIX_DIGITALOUT;


typedef struct _TUXONO_FIX_ANALOGOUT
{
    uint8_t CountAnalogOut;
    float VoltageMin;
    float VoltageMax;
    float CurrentMin;
    float CurrentMax;
    float AnalogOutUDAC_Min;
    float AnalogOutUDAC_Max;
} TUXONO_FIX_ANALOGOUT;


typedef struct _TUXONO_FIX_TASTATURIN
{
    uint8_t CountTastaturIn;
} TUXONO_FIX_TASTATURIN;


typedef struct _TUXONO_FIX_PARAM
{
    TUXONO_FIX_DIGITALIN DigitalIn;
    TUXONO_FIX_MEASURE Measure;
    TUXONO_FIX_DIGITALOUT DigitalOut;
    TUXONO_FIX_ANALOGOUT AnalogOut;
    TUXONO_FIX_TASTATURIN TastaturIn;
} TUXONO_FIX_PARAM;

#endif /* FIX_PARAM_H_ */
