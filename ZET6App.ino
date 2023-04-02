
#include "Inc/fsmc.hpp"
#include "Inc/bsp_ili9341_lcd.h"
#include "Inc/screen.hpp"

#define Emm42_En_Pin PC6  // the number of the Emm42_En_pin
#define Emm42_Stp_Pin PB9 // the number of the Emm42_Stp_pin
#define Emm42_Dir_Pin PG0 // the number of the Emm42_Dir_pin

long i = 0, j = 0;
bool cntDir = false;

void setup()
{
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  pinMode(PG6, OUTPUT);
  pinMode(PG11, OUTPUT);

  digitalWrite(PG6, LOW);
  digitalWrite(PG11, LOW);

  // put your setup code here, to run once:
  MX_FSMC_Init();

  ILI9341_Init();
  ILI9341_GramScan ( 3 );

  pinMode(Emm42_En_Pin, OUTPUT);
  digitalWrite(Emm42_En_Pin, LOW);
  pinMode(Emm42_Stp_Pin, OUTPUT);
  digitalWrite(Emm42_Stp_Pin, LOW);
  pinMode(Emm42_Dir_Pin, OUTPUT);
  digitalWrite(Emm42_Dir_Pin, LOW);
  
}

void loop()                
{
    for(int i=0;i<255;i+=4)
    {
      setColor(RGB(i,255-i,0));
    }
    for(int i=255;i>1;i-=4)
    {
      setColor(RGB(i,255-i,0));
    }
}

