#ifndef DIGOUT_CONFIG_H_
#define DIGOUT_CONFIG_H_


typedef struct _TUXONO_DIGOUT_CONFIG
{
	uint8_t ucActiveDigOut;		/* Enable digital output pin - each bit stand for one output channel */
	uint8_t ucInitOutState;		/* Set high digital output pin - each bit stand for one output channel */
} TUXONO_DIGOUT_CONFIG;

#endif /* DIGOUT_CONFIG_H_ */
