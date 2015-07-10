/*
 * compositehid.h
 *
 *  Created on: Jul 9, 2015
 *      Author: gsantha
 */

#ifndef COMPOSITEHID_H_
#define COMPOSITEHID_H_

#define MAX_PACKET_SIZE   0x40              // Max size of the USB packets Full Speed is 64 bytes
#define HID_PACKET_SIZE	0x01
#define HID_REPORTOUT_SIZE 0x01
typedef struct {
    uint8_t buffer[MAX_PACKET_SIZE];
    uint16_t size;
} databuffer_t;

typedef struct {
	uint8_t connected:1;
	uint8_t hostsentreport:1;
	uint8_t txcomplete:1;
	uint8_t txdataupdated:1;
	uint8_t nc:4;
}usbstate_t;


uint32_t rxhandler(void *pvCBData, uint32_t ui32Event, uint32_t ui32MsgData, void *pvMsgData);
uint32_t txhandler(void *pvCBData, uint32_t ui32Event, uint32_t ui32MsgData, void *pvMsgData);
uint32_t compositehandler(void *pvCBData, uint32_t ui32Event, uint32_t ui32MsgData, void *pvMsgData);
uint32_t dfudetach_callback(void *pvCBData, uint32_t ui32Event, uint32_t ui32MsgData, void *pvMsgData);



#endif /* COMPOSITEHID_H_ */
