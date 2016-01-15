#ifndef EX_DIGOUT_CONFIG_H_
#define EX_DIGOUT_CONFIG_H_


typedef struct _TUXONO_EX_DIGOUT_CONFIG
{
	uint8_t bRelais1;			/* Not available on Tuxono S */
	uint8_t bRelais2;			/* Not available on Tuxono S */
	uint8_t bRelais3;			/* Not available on Tuxono S */
	uint8_t bRelais4;			/* Not available on Tuxono S */
	uint8_t bRelais5;			/* Not available on Tuxono S */
	uint8_t bRelais6;			/* Not available on Tuxono S */

	uint8_t bModul1a;			/* Not available on Tuxono S */
	uint8_t bModul1b;			/* Not available on Tuxono S */
	uint8_t bModul2a;			/* Not available on Tuxono S */
	uint8_t bModul2b;			/* Not available on Tuxono S */

	uint8_t bLEDLiveMess;		/* LED placed on measurement board, controlled by measurement microcontroller */

	uint8_t LEDLive;			/* Marked as 'live' - Tuxono L: for general usage - Tuxono S: for general usage */
//	uint8_t LED12;				/* DO NOT UNCOMMENT! Tuxono L: used as active indicator for MOSFET out 2 - Tuxono S: marked as LED '1' used as active indicator for extension module 1 */
	uint8_t LED13;				/* Tuxono L: for general usage - Tuxono S: marked as LED '2' used as active indicator for extension module 2 */
	uint8_t LED14;				/* Tuxono L: for general usage - Tuxono S: marked as LED '3' used as active indicator for MOSFET out 1 */
	uint8_t LED15;				/* Tuxono L: for general usage - Tuxono S: marked as LED '4' used as active indicator for MOSFET out 2 */
	uint8_t LED16;				/* Tuxono L: for general usage - Tuxono S: marked as LED '5' used as active indicator for MOSFET out 2 */
	uint8_t LED17;				/* Tuxono L: for general usage - Tuxono S: for general usage */
	uint8_t LED18;				/* Tuxono L: for general usage - Tuxono S: not available on Tuxono S */
} TUXONO_EX_DIGOUT_CONFIG;

#endif /* EX_DIGOUT_CONFIG_H_ */
