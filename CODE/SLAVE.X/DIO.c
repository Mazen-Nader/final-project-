/*
 * File:   DIO.c
 * Author: Safaa
 *
 * Created on April 10, 2020, 5:50 PM
 */


#include <xc.h>
#include "DIO.h"
#include <avr/interrupt.h>
/*void _setPIN(int pinNum) {
    //PORTA |= (1 << pinNum);
  }*/

/*void _resetPIN(int pinNum) {
    PORTA &= ~(1 << pinNum);
}*/
int isPressedA(int pinNum) {
    if (PINA & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}

int isPressedB(int pinNum) {
    if (PINB & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}

int isPressedC(int pinNum) {
    if (PINC & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}

int isPressedD(int pinNum) {
    if (PIND & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}

void setPINA(int pinNum) {
    PORTA |= (1 << pinNum);
}

void setPINB(int pinNum) {
    PORTB |= (1 << pinNum);
}

void setPINC(int pinNum) {
    PORTC |= (1 << pinNum);
}

void setPIND(int pinNum) {
    PORTD |= (1 << pinNum);
}

void resPINA(int pinNum) {
    PORTA &= ~(1 << pinNum);
}

void resPINB(int pinNum) {
    PORTB &= ~(1 << pinNum);
}

void resPINC(int pinNum) {
    PORTC &= ~(1 << pinNum);
}

void resPIND(int pinNum) {
    PORTD &= ~(1 << pinNum);
}

void setPORTA() {
    PORTA = 0xFF;
}

void setPORTB() {
    PORTB = 0xFF;
}

void setPORTC() {
    PORTC = 0xFF;
}

void setPORTD() {
    PORTD = 0xFF;
}

void resPORTA() {
    PORTA = 0x00;
}

void resPORTB() {
    PORTB = 0x00;
}

void resPORTC() {
    PORTC = 0x00;
}

void resPORTD() {
    PORTD = 0x00;
}

void PINAas(int pinNum, int dir) {
    if (dir == out)
        DDRA |= (1 << pinNum);
    else
        DDRA &= ~(1 << pinNum);
}

void PINBas(int pinNum, int dir) {
    if (dir == out)
        DDRB |= (1 << pinNum);
    else
        DDRB &= ~(1 << pinNum);
}

void PINCas(int pinNum, int dir) {
    if (dir == out)
        DDRC |= (1 << pinNum);
    else
        DDRC &= ~(1 << pinNum);
}

void PINDas(int pinNum, int dir) {
    if (dir == out)
        DDRD |= (1 << pinNum);
    else
        DDRD &= ~(1 << pinNum);
}

void PORTAas(int dir) {
    switch (dir) {
        case out:
            DDRA = 0xFF;
            break;
        case in:
            DDRA = 0x00;
            break;

    }
}

void PORTBas(int dir) {
    switch (dir) {
        case out:
            DDRB = 0xFF;
            break;
        case in:
            DDRB = 0x00;
            break;

    }
}

void PORTCas(int dir) {
    switch (dir) {
        case out:
            DDRC = 0xFF;
            break;
        case in:
            DDRC = 0x00;
            break;

    }
}

void PORTDas(int dir) {
    switch (dir) {
        case out:
            DDRD = 0xFF;
            break;
        case in:
            DDRD = 0x00;
            break;

    }
}

void toggleA(int pinNum) {
    PORTA ^= (1 << pinNum);
}

void toggleB(int pinNum) {
    PORTB ^= (1 << pinNum);
}

void toggleC(int pinNum) {
    PORTC ^= (1 << pinNum);
}

void toggleD(int pinNum) {
    PORTD ^= (1 << pinNum);
}

void INT0_init_R () {

    

        MCUCR |= (1 << ISC01) | (1 << ISC00); // Rising Edge
        GICR |= (1 << INT0);

    }

    void INT1_init_R () {

        

            MCUCR |= (1 << ISC11) | (1 << ISC10); // Rising Edge
            GICR |= (1 << INT1);

        }

        void INT2_init_R () {

            MCUCSR |= (1 << ISC2); // Rising Edge
            GICR |= (1 << INT2);

        }

void ADC_init() {
    ADMUX |= (1<<REFS0); // Channel 0
    SFIOR |= (1<<ADTS1);
    ADCSRA |= (1 << ADEN) | (1<<ADATE)|(1 << ADIE) | (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);
}

void startConv() {
    ADCSRA |= (1 << ADSC);
}

int getADCdata() {
    int data = 0;
    data = ADC;
    return data;
}