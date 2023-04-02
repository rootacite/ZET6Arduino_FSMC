
#include "bsp_ili9341_lcd.h"

#define RGB(R,G,B)	(((R >> 3) << 11) | ((G >> 2) << 5) | (B >> 3))	/* 将8位R,G,B转化为 16位RGB565格式 */
#define RGB565_R(x)  ((x >> 8) & 0xF8)
#define RGB565_G(x)  ((x >> 3) & 0xFC)
#define RGB565_B(x)  ((x << 3) & 0xF8)

void setColor(uint16_t color)
{
    LCD_SetBackColor(color);
    ILI9341_Clear(0,0,LCD_X_LENGTH,LCD_Y_LENGTH);
}

void drawText(int x,int y,const char * str)
{
    ILI9341_DispString_EN(x,y,(char*)str);
}

void setPoint(int x, int y,uint16_t c)
{
    ILI9341_SetPointPixel(x,y,c);
}

void setImage(PFNUpdate UpdateProc)
{
    ILI9341_FillImage ( UpdateProc);
}