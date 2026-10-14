
 #include "SPI_H_files.h"   
void SPI_Slave_Init()                                    /* SPI Initialize function */
{
    DDRB &= ~((1<<MOSI)|(1<<SCK)|(1<<SS));        /* Make MOSI, SCK, SS pin direction as input pins */
    DDRB |= (1<<MISO);                            /* Make MISO pin as output pin */
    SPCR = (1<<SPE);                            /* Enable SPI in slave mode */
}

char SPI_Slave_Transmit(char data)                    /* SPI transmit data function */
{
    SPDR = data;                                /* Write data to SPI data register */
    while(!(SPSR & (1<<SPIF)));                    /* Wait till transmission complete */
    return(SPDR);                                /* return received data */
}

char SPI_Slave_Receive()                                /* SPI Receive data function */
{
    while(!(SPSR & (1<<SPIF)));                    /* Wait till reception complete */
    return(SPDR);                                /* return received data */
}



void SPI_Master_Init()                                /* SPI Initialize function */
{
    DDRB |= (1<<MOSI)|(1<<SCK)|(1<<SS);		/* Make MOSI, SCK, 0th pin direction as output pins */
	DDRB &= ~(1<<MISO);						/* Make MISO pin as input pin */
	PORTB |= (1<<SS);						/* Disable slave initially by making high on SS pin */
	SPCR = (1<<SPE)|(1<<MSTR)|(1<<SPR0);	/* Enable SPI, Enable in master mode, with Fosc/16 SCK frequency */
	SPSR &= ~(1<<SPI2X);					/* Disable speed doubler */
}

void SPI_Master_Write(char data)					/* SPI write data function */
{
	char flush_buffer;
	SPDR = data;							/* Write data to SPI data register */
	while(!(SPSR & (1<<SPIF)));				/* Wait till transmission complete */
	flush_buffer = SPDR;					/* Flush received data */
/* Note: SPIF flag is cleared by first reading SPSR (with SPIF set) and then accessing SPDR hence flush buffer used here to access SPDR after SPSR read */
}

char SPI_Master_Read()								/* SPI read data function */
{
	SPDR = 0xFF;
	while(!(SPSR & (1<<SPIF)));				/* Wait till reception complete */
	return(SPDR);							/* return received data */
}
