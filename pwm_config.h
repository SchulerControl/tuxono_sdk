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
	PWM_FREQUENCY ClockFrequency; 						/* PWM counter frequency for all channels */
	uint16_t  usPeriodeClocks;  						/* Number of clocks in one PWM period for all channels */
	
	/*
	 * Tuxono S:
	 * 
	 * Channel/Bit 1: OUT_MODUL1						Extension module 1								(not used with RS485)
	 * Channel/Bit 2: OUT_MODUL2						Extension module 2								(not used with RS485)
	 * Channel/Bit 3: OUT_MODUL_1_ON_B					Extension module 1 - switch channel B			(not used with RS485)
	 * Channel/Bit 4: OUT_MODUL_2_SWITCH				Extension module 2 - MOD_2_SWITCH				(do not use with RS485!)
	 * Channel/Bit 5: OUT_OPTO_MOS1 					Optically decoupled MOSFET 1
	 * Channel/Bit 6: OUT_OPTO_MOS2						Optically decoupled MOSFET 2
	 * Channel/Bit 7: OUT_OPTO_MOS3 					Optically decoupled MOSFET 3
	 * Channel/Bit 8: OUT_LED_MESS 						Measurement LED - controlled by XMEGA himself
	 */

	/*
	 * Tuxono L:
	 * 
	 * Channel/Bit 1: OUT_SSR1							SolidStateRelais 1
	 * Channel/Bit 2: OUT_SSR2							SolidStateRelais 2
	 * Channel/Bit 3: OUT_SSR3							SolidStateRelais 3
	 * Channel/Bit 4: OUT_SSR4							SolidStateRelais 4
	 * Channel/Bit 5: OUT_MODUL3 						Extension module 3								(not used with RS485)
	 * Channel/Bit 6: OUT_MODUL4						Extension module 4								(not used with RS485)
	 * Channel/Bit 7: OUT_OPTO_MOS1 					Optically decoupled MOSFET 1
	 * Channel/Bit 8: OUT_OPTO_MOS2 					Optically decoupled MOSFET 2
	 */

	uint8_t   ucActivePWM;								/* Enable PWM output each bit stand for one output channel */
	uint16_t  usPWMValue[PWM_CHANNEL_COUNT_MAX];    	/* PWM value determines the ratio of the high and low phase */
} TUXONO_PWM_CONFIG;

#endif /* PWM_CONFIG_H_ */
