
#define F_CPU 8000000UL

#include <avr/io.h>
#include <avr/interrupt.h>
#include "DIO.h"
#include <util/delay.h>

#include <avr/io.h>
#define SS      4
#define MOSI    5
#define MISO    6
#define SCK     7

char a;

char SPI_read() {
    while (!(SPSR & (1 << SPIF)));
    unsigned char data = SPDR; // Signed value
    return data;
}

void SPI_Slave_init() {
    // Data Direction Configuration
    DDRB |= (1 << MISO);
    SPCR |= (1 << SPE) | (1 << SPR1) | (1 << SPR0); //| (1 << SPIE);
}

int main(void) {
     PORTCas(out);

SPI_Slave_init() ;

    while (1) {
        a=SPI_read();
        if(a=='O')
            setPINC(0);
        else if (a=='F')
            resPINC(0);
        else if (a=='Y')
            setPINC(1);
        else if (a=='N')
            resPINC(1);
            
    }
}
