#define F_CPU 48000000
#define _BV(bit) (1 << (bit))

#define  MMIO(addr) (*(volatile uint32_t*)addr)

//  UART Registers
#define U0RBR MMIO(0x40008000)
#define U0THR MMIO(0x40008000)
#define U0DLL MMIO(0x40008000)
#define U0DLM MMIO(0x40008004)
#define U0IER MMIO(0x40008004)
#define U0FCR MMIO(0x40008008)
#define U0IIR MMIO(0x40008008)
#define U0LCR MMIO(0x4000800C)
#define U0LSR MMIO(0x40008014)

//  IOCON Registers
#define IOCON_PIO0_2 MMIO(0x4004401C)
#define IOCON_PIO0_3 MMIO(0x4004402C)
#define IOCON_PIO0_4 MMIO(0x40044030)
#define IOCON_PIO0_5 MMIO(0x40044034)
#define IOCON_PIO0_8 MMIO(0x40044060)
#define IOCON_PIO1_5 MMIO(0x400440A0)
#define IOCON_PIO1_6 MMIO(0x400440A4)
#define IOCON_PIO1_7 MMIO(0x400440A8)

//  SYSCON Registers
#define PRESETCTRL    MMIO(0x40048004)
#define SYSPLLCTRL    MMIO(0x40048008)
#define SYSPLLSTAT    MMIO(0x4004800C)
#define SYSOSCCTRL    MMIO(0x40048020)
#define SYSPLLCLKSEL  MMIO(0x40048040)
#define SYSPLLCLKUEN  MMIO(0x40048044)
#define MAINCLKSEL    MMIO(0x40048070)
#define MAINCLKUEN    MMIO(0x40048074)
#define SYSAHBCLKCTRL MMIO(0x40048080)
#define UARTCLKDIV    MMIO(0x40048098)
#define PDRUNCFG      MMIO(0x40048238)

//  GPIO Registers
#define GPIO0DIR  MMIO(0x50008000)
#define GPIO0DATA MMIO(0x50003FFC)
#define GPIO1DIR  MMIO(0x50018000)
#define GPIO1DATA MMIO(0x50013FFC)

////////////////////////////////////////////////////////////////////////////////
//  Timer Registers
////////////////////////////////////////////////////////////////////////////////

//  Timer 16B0
#define TMR16B0IR  MMIO(0x4000C000)
#define TMR16B0TCR MMIO(0x4000C004)
#define TMR16B0TC  MMIO(0x4000C008)
#define TMR16B0PR  MMIO(0x4000C00C)
#define TMR16B0MCR MMIO(0x4000C014)
#define TMR16B0MR0 MMIO(0x4000C018)

//  Timer 16B1
#define TMR16B1IR  MMIO(0x40010000)
#define TMR16B1TCR MMIO(0x40010004)
#define TMR16B1TC  MMIO(0x40010008)
#define TMR16B1PR  MMIO(0x4001000C)
#define TMR16B1MCR MMIO(0x40010014)
#define TMR16B1MR0 MMIO(0x40010018)

//  Timer 32B0
#define TMR32B0IR  MMIO(0x40014000)
#define TMR32B0TCR MMIO(0x40014004)
#define TMR32B0TC  MMIO(0x40014008)
#define TMR32B0PR  MMIO(0x4001400C)
#define TMR32B0MCR MMIO(0x40014014)
#define TMR32B0MR0 MMIO(0x40014018)

//  Timer 32B1
#define TMR32B1IR  MMIO(0x40018000)
#define TMR32B1TCR MMIO(0x40018004)
#define TMR32B1TC  MMIO(0x40018008)
#define TMR32B1PR  MMIO(0x4001800C)
#define TMR32B1MCR MMIO(0x40018014)
#define TMR32B1MR0 MMIO(0x40018018)

//  Timer bit definitions
#define MR0INT     0

//  SYS Tick Variables
#define SYST_CSR MMIO(0xE000E010)
#define SYST_RVR MMIO(0xE000E014)
#define SYST_CVR MMIO(0xE000E018)

#define ISER MMIO(0xE000E100)
#define ICER MMIO(0xE000E180)
#define ISPR MMIO(0xE000E200)
#define ICPR MMIO(0xE000E280)

#define I2C0CONSET  MMIO(0x40000000)
#define I2C0STAT    MMIO(0x40000004)
#define I2C0DAT     MMIO(0x40000008)
#define I2C0ADR0    MMIO(0x4000000C)
#define I2C0SCLH    MMIO(0x40000010)
#define I2C0SCLL    MMIO(0x40000014)
#define I2C0CONCLR  MMIO(0x40000018)


