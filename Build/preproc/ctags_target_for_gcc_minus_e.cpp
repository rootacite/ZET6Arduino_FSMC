# 1 "C:\\Users\\14980\\Desktop\\ZET6App\\ZET6App.ino"

# 3 "C:\\Users\\14980\\Desktop\\ZET6App\\ZET6App.ino" 2
# 4 "C:\\Users\\14980\\Desktop\\ZET6App\\ZET6App.ino" 2
# 5 "C:\\Users\\14980\\Desktop\\ZET6App\\ZET6App.ino" 2





long i = 0, j = 0;
bool cntDir = false;

void setup()
{
  do { volatile /*!< Defines 'read / write' permissions */ uint32_t tmpreg; ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) |= ((0x1UL << (6U)) /*!< 0x00000040 */ /*!< I/O port E clock enable */)); /* Delay after an RCC peripheral clock enabling */ tmpreg = ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) & ((0x1UL << (6U)) /*!< 0x00000040 */ /*!< I/O port E clock enable */)); (void)tmpreg /* To avoid gcc/g++ warnings */; } while(0U);
  do { volatile /*!< Defines 'read / write' permissions */ uint32_t tmpreg; ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) |= ((0x1UL << (4U)) /*!< 0x00000010 */ /*!< I/O port C clock enable */)); /* Delay after an RCC peripheral clock enabling */ tmpreg = ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) & ((0x1UL << (4U)) /*!< 0x00000010 */ /*!< I/O port C clock enable */)); (void)tmpreg /* To avoid gcc/g++ warnings */; } while(0U);
  do { volatile /*!< Defines 'read / write' permissions */ uint32_t tmpreg; ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) |= ((0x1UL << (7U)) /*!< 0x00000080 */ /*!< I/O port F clock enable */)); /* Delay after an RCC peripheral clock enabling */ tmpreg = ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) & ((0x1UL << (7U)) /*!< 0x00000080 */ /*!< I/O port F clock enable */)); (void)tmpreg /* To avoid gcc/g++ warnings */; } while(0U);
  do { volatile /*!< Defines 'read / write' permissions */ uint32_t tmpreg; ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) |= ((0x1UL << (2U)) /*!< 0x00000004 */ /*!< I/O port A clock enable */)); /* Delay after an RCC peripheral clock enabling */ tmpreg = ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) & ((0x1UL << (2U)) /*!< 0x00000004 */ /*!< I/O port A clock enable */)); (void)tmpreg /* To avoid gcc/g++ warnings */; } while(0U);
  do { volatile /*!< Defines 'read / write' permissions */ uint32_t tmpreg; ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) |= ((0x1UL << (3U)) /*!< 0x00000008 */ /*!< I/O port B clock enable */)); /* Delay after an RCC peripheral clock enabling */ tmpreg = ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) & ((0x1UL << (3U)) /*!< 0x00000008 */ /*!< I/O port B clock enable */)); (void)tmpreg /* To avoid gcc/g++ warnings */; } while(0U);
  do { volatile /*!< Defines 'read / write' permissions */ uint32_t tmpreg; ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) |= ((0x1UL << (8U)) /*!< 0x00000100 */ /*!< I/O port G clock enable */)); /* Delay after an RCC peripheral clock enabling */ tmpreg = ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) & ((0x1UL << (8U)) /*!< 0x00000100 */ /*!< I/O port G clock enable */)); (void)tmpreg /* To avoid gcc/g++ warnings */; } while(0U);
  do { volatile /*!< Defines 'read / write' permissions */ uint32_t tmpreg; ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) |= ((0x1UL << (5U)) /*!< 0x00000020 */ /*!< I/O port D clock enable */)); /* Delay after an RCC peripheral clock enabling */ tmpreg = ((((RCC_TypeDef *)((0x40000000UL /*!< Peripheral base address in the alias region */ + 0x00020000UL) + 0x00001000UL))->APB2ENR) & ((0x1UL << (5U)) /*!< 0x00000020 */ /*!< I/O port D clock enable */)); (void)tmpreg /* To avoid gcc/g++ warnings */; } while(0U);

  pinMode(102, 0x1);
  pinMode(107, 0x1);

  digitalWrite(102, 0x0);
  digitalWrite(107, 0x0);

  // put your setup code here, to run once:
  MX_FSMC_Init();

  ILI9341_Init();
  ILI9341_GramScan ( 3 );

  pinMode(38 /* the number of the Emm42_En_pin*/, 0x1);
  digitalWrite(38 /* the number of the Emm42_En_pin*/, 0x0);
  pinMode(25 /* the number of the Emm42_Stp_pin*/, 0x1);
  digitalWrite(25 /* the number of the Emm42_Stp_pin*/, 0x0);
  pinMode(96 /* the number of the Emm42_Dir_pin*/, 0x1);
  digitalWrite(96 /* the number of the Emm42_Dir_pin*/, 0x0);

}

void loop()
{
    for(int i=0;i<255;i+=4)
    {
      setColor((((i >> 3) << 11) | ((255-i >> 2) << 5) | (0 >> 3)) /* 将8位R,G,B转化为 16位RGB565格式 */);
    }
    for(int i=255;i>1;i-=4)
    {
      setColor((((i >> 3) << 11) | ((255-i >> 2) << 5) | (0 >> 3)) /* 将8位R,G,B转化为 16位RGB565格式 */);
    }
}
