#ifndef INPUT_DATA_H_
#define INPUT_DATA_H_


#define INPUT_PIN_COUNT_MAX		8


enum _INPUTERROR
{
	INPUTERROR_NONE				= 0,
	INPUTERROR_OVERFLOW			= 1,
	INPUTERROR_UNDERFLOW		= 2,
	INPUTERROR_LOW_RES			= 3
};
typedef uint8_t INPUTERROR;


typedef struct _TUXONO_INPUT_DATA
{
	uint8_t  u8PinState;  								/* Each bit for each pin */
	uint16_t usCounterValues[INPUT_PIN_COUNT_MAX];
	uint32_t uiPeriod[INPUT_PIN_COUNT_MAX];      		/* Measured period in µs - resolution is 32 µs */
	uint32_t uiFrequency[INPUT_PIN_COUNT_MAX];   		/* Measured frequency in Hz - resolution 8 Hz */
	INPUTERROR InputErrors[INPUT_PIN_COUNT_MAX];
} TUXONO_INPUT_DATA;

#endif /* INPUT_DATA_H_ */
