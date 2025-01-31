#pragma once
//======================================================================
//  MyAvr.h
//======================================================================
#include <avr/io.h>
#include <stdint.h>
#include <stdbool.h>
#include <avr/interrupt.h>

//======================================================================
//  global F_CPU for delays, or any timing calculations
//======================================================================
#define F_CPU 3333333ul

#include <util/delay.h>

typedef uint8_t  u8;
typedef uint16_t u16;




