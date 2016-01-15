#ifndef MEASURE_CONFIG_H_
#define MEASURE_CONFIG_H_


#define MEASURE_FASTVAL_COUNT_MAX 	4
#define MEASURE_SLOWVAL_COUNT_MAX 	16


enum _MEASURE_UPDATERATE
{
	ADC_120HZ_MODE		= 0,
	ADC_100HZ_MODE		= 1,
	ADC_33HZ3_MODE		= 2,
	ADC_20HZ_MODE		= 3,
	ADC_16HZ6_MODE		= 4,
	ADC_16HZ7_MODE		= 5,												/* Default - optimum precision on 50 Hz environments */
	ADC_13HZ3_MODE		= 6,	
	ADC_9HZ5_MODE		= 7,	
};	
typedef uint8_t MEASURE_UPDATERATE;	
	
	
enum _MEASURE_FAST_CHANNEL	
{	
	CHANNEL_DISABLE 	= 0,	
	CHANNEL_VOLTAGE		= 1,	
	CHANNEL_IMPEDANCE	= 2,	
};	
typedef uint8_t MEASURE_CHANNEL_SETUP;	
	
	
enum _MEASURE_AVERAGING_LEN
{	
	AVERAGING_LEN_1  		= 0,											/* No averaging */ 
	AVERAGING_LEN_2  		= 1,											/* Averaging 2 samples */
	AVERAGING_LEN_4  		= 2,											/* Averaging 4 samples */
	AVERAGING_LEN_8  		= 3,											/* Averaging 8 samples */
	AVERAGING_LEN_16 		= 4,											/* Averaging 16 samples */
	AVERAGING_LEN_32 		= 5,											/* Averaging 32 samples */
	AVERAGING_LEN_64 		= 6,											/* Averaging 64 samples */
};	
typedef uint8_t MEASURE_AVERAGING_LEN;	

	
enum _MEASURE_AMPLIFIER_GAIN	
{	
	AMPLIFIER_GAIN_1_8 		= 0,											/* For measurement range +- 20.0 V - just theoretically, hardware limited */
	AMPLIFIER_GAIN_1_4 		= 1,											/* For measurement range +- 10 V */
	AMPLIFIER_GAIN_1_2 		= 2,											/* For measurement range +- 5 V */
	AMPLIFIER_GAIN_1   		= 3,											/* For measurement range +- 2.5 V */
	AMPLIFIER_GAIN_2   		= 4,											/* For measurement range +- 1.25 V */
	AMPLIFIER_GAIN_4   		= 5,											/* For measurement range +- 625 mV */
	AMPLIFIER_GAIN_8   		= 6,											/* For measurement range +- 312.5 mV */
	AMPLIFIER_GAIN_16  		= 7,											/* For measurement range +- 156.25 mV */
	AMPLIFIER_GAIN_32  		= 8,											/* For measurement range +- 78.125 mV */
	AMPLIFIER_GAIN_64  		= 9,											/* For measurement range +- 39.0625 mV */
	AMPLIFIER_GAIN_128 		= 10											/* For measurement range +- 19,53125 mV */
};	
typedef uint8_t MEASURE_AMPLIFIER_GAIN;	
	
	
typedef struct _TUXONO_MEASURE_CONFIG	
{	
	MEASURE_UPDATERATE ADCUpdateRate;										/* Update rate of ADC */
	uint8_t bLoopLinear;													/* Ture for loop linear through all measurement channels. False for measure alternating one fast and one slow channel (Tuxono L only) */
	uint8_t bCurrentCh1and2;												/* Measure current on channels 1 and 2 */ 
		
	MEASURE_CHANNEL_SETUP FastChannelSetup[MEASURE_FASTVAL_COUNT_MAX];		/* Channel setup */
	MEASURE_AVERAGING_LEN ucADCFastFilterLen[MEASURE_FASTVAL_COUNT_MAX];	/* Average filter Len */
	MEASURE_AMPLIFIER_GAIN ADCFastGain[MEASURE_FASTVAL_COUNT_MAX];			/* PGA GAIN for 128, 64, 32, 16, 8, 4, 2, 1, 1/2, 1/4, and 1/8 */
	float fDacMux4Values[MEASURE_FASTVAL_COUNT_MAX];						/* PTFast Current 0 ... 2,5 mA */
	uint16_t usMux4SettleTimeMS;											/* MUX4 hardware settle time */
		
	MEASURE_CHANNEL_SETUP SlowChannelSetup[MEASURE_SLOWVAL_COUNT_MAX];		/* Channel setup */
	MEASURE_AVERAGING_LEN ucADCSlowFilterLen[MEASURE_SLOWVAL_COUNT_MAX];	/* Average filter Len */
	MEASURE_AMPLIFIER_GAIN ADCSlowGain[MEASURE_SLOWVAL_COUNT_MAX];			/* PGA GAIN for 128, 64, 32, 16, 8, 4, 2, 1, 1/2, 1/4, and 1/8 */
	float fDacMux16Values[MEASURE_SLOWVAL_COUNT_MAX];						/* PT1000 Current 0 ... 2,5 mA */
	uint16_t usMux16SettleTimeMS;											/* MUX16 hardware settle time */
} TUXONO_MEASURE_CONFIG;

#endif /* MEASURE_CONFIG_H_ */
