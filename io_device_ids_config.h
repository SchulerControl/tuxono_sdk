#ifndef IO_DEVICE_IDS_CONFIG_H_
#define IO_DEVICE_IDS_CONFIG_H_


typedef struct _TUXONO_IODEVICE_IDS_CONFIG
{
  char Company[20];
  char DeviceType[10];
  uint32_t SerialNumber;
  uint16_t HardwareVersion;
  uint16_t SoftwareVersion;
} TUXONO_IODEVICE_IDS_CONFIG;

#endif /* IO_DEVICE_IDS_CONFIG_H_ */
