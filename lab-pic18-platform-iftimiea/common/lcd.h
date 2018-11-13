/**********************************************************************
* File name: lcd.h
* 
* REVISION HISTORY:
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Author            Date      		Comments on this revision
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Serge Hould		29 March 2018		8 bit LCD lib for LAB-X1 board
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*
* ADDITIONAL NOTES:
*
**********************************************************************/
#ifndef LCD_H
#define LCD_H

/*****	USEFUL LCD COMMAND MACROS  *****/
#define cursor_right()  lcd_cmd( 0x14 )
#define cursor_left()   lcd_cmd( 0x10 )
#define display_shift() lcd_cmd( 0x1C )
#define home_clr()      lcd_cmd( 0x01 ) 
#define home_it()       lcd_cmd( 0x02 ) 
#define line_2()        lcd_cmd( 0xC0 ) // (0xC0)

/******	LCD FUNCTION PROTOYPES ******/

//void Init_LCD( void );		        
void LCDInit(void);					// initialize display
void lcd_cmd( char );	        	// write command to lcd
void lcd_data( char );		    	// write data to lcd
void LCDClear(void);
void LCDPut(char );
void LCDPos(int );
void LCDL2Home(void);
void LCDL1Home(void);

#endif