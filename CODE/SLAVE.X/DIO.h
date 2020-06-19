/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H
#define out   1
#define in    0
#define rising 1
#define falling 2




//check button and return 1 if pressed
int isPressedA(int pinNum);
int isPressedB(int pinNum);
int isPressedC(int pinNum);
int isPressedD(int pinNum);
//take pin number that connected to button
//return 1 if pressed and 0 if not


//set pin high in port
void setPINA(int pinNum);
void setPINB(int pinNum);
void setPINC(int pinNum);
void setPIND(int pinNum);
//take pin that will be high

//set pin low in port
void resPINA(int pinNum);
void resPINB(int pinNum);
void resPINC(int pinNum);
void resPIND(int pinNum);
//take pin that will be low


//set all port high
void setPORTA() ;
void setPORTB() ;
void setPORTC() ;
void setPORTD() ;
//take nothing

//set all port low
void resPORTA() ;
void resPORTB();
void resPORTC();
void resPORTD();


//set pin in port as input or output 
void PINAas(int pinNum,int dir);
void PINBas(int pinNum,int dir);
void PINCas(int pinNum,int dir);
void PINDas(int pinNum,int dir);
//take pin number and out/in

//set all port as input or output
void PORTAas (int dir);
void PORTBas (int dir);
void PORTCas (int dir);
void PORTDas (int dir);
//take out/in

//toggle
void toggleA (int pinNum);
void toggleB (int pinNum);
void toggleC (int pinNum);
void toggleD (int pinNum);

//interrupt intialization 
void INT0_init_R ();
void INT1_init_R ();
void INT2_init_R ();

//ADC
void ADC_init();
void startConv();
int getADCdata();




#include <xc.h> // include processor files - each processor file is guarded.  

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

