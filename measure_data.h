#ifndef MEASURE_DATA_H_
#define MEASURE_DATA_H_


#define MEASURE_FASTVAL_COUNT_MAX 	4
#define MEASURE_SLOWVAL_COUNT_MAX 	16


enum _MODULE_TYPE  
{
  Typ_0   							= 0,		// 0
  typ_301 							= 1,		// 1
  Typ_432,
  Typ_560,
  Typ_750,
  Typ_1000,
  Typ_1210,
  Typ_1500,
  Typ_1780,
  Typ_2150,
  Typ_2490,
  Typ_3010,
  Typ_3650,
  Typ_4320,
  Typ_5110,
  Typ_6340,
  Typ_7150,
  Typ_8250,
  Typ_10000,
  Typ_12100,
  Typ_15000,
  Typ_17800,
  Typ_21500,
  Typ_26100,
  Typ_33200,
  Typ_42200,
  Typ_68100,									// 26
  Typ_100000,									// 27
  Typ_NoModule,									// 28
  Typ_Error										// 29
};
typedef uint8_t MODULE_TYPE;


typedef struct _TUXONO_MEASURE_DATA
{
	float fADCFastValues[MEASURE_FASTVAL_COUNT_MAX];
	float fADCSlowValues[MEASURE_SLOWVAL_COUNT_MAX];
	MODULE_TYPE Mux16ModuleType[MEASURE_SLOWVAL_COUNT_MAX];
} TUXONO_MEASURE_DATA;

#endif /* MEASURE_DATA_H_ */
