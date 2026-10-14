#ifndef SPI_H_files_H_
#define SPI_H_files_H_

#include <io.h>                        /* Include AVR std. library file */

#define MOSI 5                         /* Define SPI bus pins */
#define MISO 6
#define SCK 7
#define SS 4
#define SS_Enable PORTB &= ~(1<<SS)    /* Define Slave enable */
#define SS_Disable PORTB |= (1<<SS)    /* Define Slave disable */
                                                                                
void SPI_Slave_Init();                 /* SPI Initialize function */
char SPI_Slave_Transmit(char data);    /* SPI transmit data function */
char SPI_Slave_Receive();              /* SPI Receive data function */

void SPI_Master_Init();                 /* SPI initialize function */
void SPI_Master_Write(char);            /* SPI write data function */
char SPI_Master_Read();                 /* SPI read data function */

#endif 