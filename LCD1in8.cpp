/*****************************************************************************
* | File      	:   LCD1in8.cpp
* | Author      :   Waveshare team
* | Function    :   Contorl lcd Show
* | Info        :
*----------------
* | This version:   V1.0
* | Date        :   2018-05-02
* | Info        :   Basic version
*
******************************************************************************/
#include "pxt.h"
#include "LCD_Driver.h"

using namespace pxt;

//% weight=20 color=#436EEE icon="\uf108"
namespace LCD1IN8 {
	LCD_Driver *LCD;
	
    //%
    void LCD_Init() {
        LCD->LCD_Init();
    }
	
    //%
    void LCD_Clear() {
        LCD->LCD_Clear(WHITE);
    }
	
    //%
    void LCD_WriteReg(UBYTE reg) {
        LCD->LCD_WriteReg(reg);
    }
	
    //%
    void LCD_WriteData(UBYTE value) {
	LCD->LCD_WriteData_8Bit(value);
    }
    
    //%
    void LCD_Filling(int Color) {
        LCD->LCD_Clear(Color);
    }
	
	//%
    void LCD_Display() {
        LCD->LCD_Display();
    }
    
    //%
    void LCD_DisplayWindows(int Xstart, int Ystart, int Xend, int Yend) {
        LCD->LCD_DisplayWindows(Xstart, Ystart, Xend, Yend);
    }
	
    //%
    void LCD_SetBL(int Lev) {
        LCD->LCD_SetBL(Lev);
    }
	
    //%
    void SetScrollOffset(int offset) {
        LCD->SetScrollOffset(offset);
    }

    //%
    void DefineScrollArea(int start, int end) {
        LCD->DefineScrollArea(start, end);
    }	
	
    //%
    void CreateSprite(int id, int width, int height, String data) {
        LCD->CreateSprite(id, width, height, data);
    }		
	 
    //%
    void PlotSprite(int id, int x, int y) {
        LCD->PlotSprite(id, x, y);
    }		 
	
    //%
    void DrawPoint(int x, int y, int Color, DOT_PIXEL Dot) {
        LCD->LCD_DrawPoint(x, y, Dot, Color);
    }

    //%
    void DisChar_1207(int Xchar, int Ychar, int Char_Offset, int Color){
        LCD->LCD_DisChar_1207(Xchar, Ychar, Char_Offset, Color);
    }
}

