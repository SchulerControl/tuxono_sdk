#ifndef ANALOG_OUT_CONFIG_H_
#define ANALOG_OUT_CONFIG_H_


#define ANALOG_OUT_MAX_CHANNEL_COUNT_MAX	6


enum _ANOUT_PIN_SETUP
{
	ANOUT_PIN_DISABLE = 0,
	ANOUT_PIN_VOLTAGE = 1,											/* Voltage out +- 10 V */
	ANOUT_PIN_CURRENT = 2,											/* Current out 0..20 mA */
}; 
typedef uint8_t ANOUT_PIN_SETUP;


typedef struct _TUXONO_ANALOGOUT_CONFIG
{
	ANOUT_PIN_SETUP PinConfig[ANALOG_OUT_MAX_CHANNEL_COUNT_MAX];	/* Analog out pin setup */
	float fValue[ANALOG_OUT_MAX_CHANNEL_COUNT_MAX];					/* Analog out voltage or current value */
	uint8_t bExtensionModuleError;
} TUXONO_ANALOGOUT_CONFIG;

#endif /* ANALOG_OUT_CONFIG_H_ */
