#ifndef PWM_CONFIG_H_
#define PWM_CONFIG_H_


#define PWM_CHANNEL_COUNT_MAX 	8


enum _PWM_FREQUENCY
{
	PWM_FREQ_32MEG				= 1,					/* 31,25 ns .. 1,0254 ms */
	PWM_FREQ_16MEG 				= 2,					/* 62,5 ns 	.. 2,0508 ms */
	PWM_FREQ_8MEG 				= 3,					/* 125 ns 	.. 4,1015 ms */
	PWM_FREQ_4MEG 				= 4,					/* 250 ns 	.. 8,203 ms	*/
	PWM_FREQ_500k 				= 5,					/* 2 us 	.. 65,625 ms */
	PWM_FREQ_125k 				= 6,					/* 8 us 	.. 262,5 ms */
	PWM_FREQ_31k25 				= 7,					/* 32 us 	.. 1,050 s */
};
typedef uint8_t PWM_FREQUENCY;


typedef struct _TUXONO_PWM_CONFIG
{
	PWM_FREQUENCY ClockFrequency; 						/* PWM counter frequency */
	uint16_t  usPeriodeClocks;  						/* Number of clocks in one PWM period */
	uint8_t   ucActivePWM;								/* Enable PWM output each bit stand for one output channel */
	uint16_t  usPWMValue[PWM_CHANNEL_COUNT_MAX];    	/* PWM value determines the ratio of the high and low phase */
} TUXONO_PWM_CONFIG;

#endif /* PWM_CONFIG_H_ */
