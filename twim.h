#pragma once
//======================================================================
//  twim.h - Twi0, master - avr mega0, tiny0/1, da
//======================================================================
#include "MyAvr.h"

typedef void (*twim_callbackT)(void);

void twim_address       (u8 address);
void twim_off           ();
void twim_on            ();
bool twim_isBusy        ();
bool twim_lastResultOK  ();
void twim_callback      (twim_callbackT callbackFunction);
void twim_writeRead     (const u8* writeBuffer, u16 writeLength, u8* readBuffer, u16 readLength);
void twim_writeWrite    (const u8* writeBuffer, u16 writeLength, const u8* writeBuffer2, u16 writeLength2);
void twim_write         (const u8* writeBuffer, u16 writeLength);
void twim_read          (u8* readBuffer, u16 readLength);
bool twim_waitUS        (u16 microseconds);
void twim_defaultPins   ();
void twim_altPins       ();

                        __attribute((always_inline)) inline static
void twim_baud          (uint32_t cpuHz, uint32_t twiHz)
                        {
                        int32_t v = cpuHz/twiHz/2 - 5;
                        TWI0.MBAUD = v >= 0 ? v : 0;
                        }
