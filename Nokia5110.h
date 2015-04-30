 #ifndef __LCD5110_H
 #define __LCD5110_H

#include "energia.h"
#include <Arduino.h>

// RST P8.2
#define LCD_RST_OUT		P8DIR |= BIT2
#define LCD_RST_H		P8OUT |= BIT2
#define LCD_RST_L		P8OUT &= ~BIT2
// CE P8.1
#define LCD_CE_OUT		P8DIR |= BIT1
#define LCD_CE_H		P8OUT |= BIT1
#define LCD_CE_L		P8OUT &= ~BIT1
// DC P3.7
#define LCD_DC_OUT		P3DIR |= BIT7
#define LCD_DC_H		P3OUT |= BIT7
#define LCD_DC_L		P3OUT &= ~BIT7
// DIN P4.0
#define LCD_DIN_OUT		P4DIR |= BIT0
#define LCD_DIN_H		P4OUT |= BIT0
#define LCD_DIN_L		P4OUT &= ~BIT0
// CLK P4.3
#define LCD_CLK_OUT		P4DIR |= BIT3
#define LCD_CLK_H		P4OUT |= BIT3
#define LCD_CLK_L		P4OUT &= ~BIT3

	
#define F2D(f)			(int)f,(int)((f-(int)f)*100)

class Nokia5110
{
public:
	Nokia5110();
	void init(void);
	void set_XY(unsigned char X, unsigned char Y);
	void clear(void);
	void writeChar(unsigned char X,unsigned char Y,unsigned char c);
	void writeString_en(unsigned char X,unsigned char Y,unsigned char *s);
	void writeNumber(unsigned char x,unsigned char y, unsigned long number);
	void writeImage(const unsigned char * cp);
	void printf (unsigned char poX, unsigned char poY,char *fmt, ...);
	unsigned char min_x,min_y,max_x,max_y;
private:
	void IO_Config();
	void writeByte(unsigned char dt, unsigned char command);
};

#endif
