/*
 *	Limón Bultrago Efrén Armando
 *	Ing. Comunicaciones y Electronica
 *	Diseño de Microcontroladores
 */

/**
 * @File	OneLed.c
 * @brief	Application entry point.
*/
/*Standar input/output to debug Console*/
#include <stdio.h>
/**Standar integer definition provided by the Compile*/
#include <stdint.h>
#include "MK64F12.h"

int main(void) {
	SIM->SCGC5 = 0x400;
	PORTB->PCR[22] = 0X00000100;
	GPIOB->PDOR = 0X00400000;
	GPIOB->PDDR = 0X00400000;

	while(1) {
		GPIOB->PDOR = 0;
		printf("RED LED ON \n");

		GPIOB->PDOR = 0X00400000;
		GPIOB->PDOR = 0X00000000;
		GPIOB->PDOR = 0X00200000;

		printf("RED LED OFF \n");
	}
	return 0;
}
