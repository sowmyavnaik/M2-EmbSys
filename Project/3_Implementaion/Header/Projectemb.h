/**
 * @file Projectemb.h
 * @author
 * @brief 
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef PROJECTEMB_H_
#define PROJECTEMB_H_

#ifndef __AVR_ATmega16__
#define __AVR_ATmega16__
#endif


#include <avr/io.h>     
#include <math.h>       
#include <util/delay.h> 
#include <stdlib.h>     
#include <string.h>     

void get_key(void);

void run_key_function(void);

void display(void);
/**
 * @brief password display
 * 
 * @param digit 
 */

void show_digit(char digit);
/**
 * @brief showing password
 * 
 */

void verify_password(void);
/**
 * @brief verify password
 * 
 * @param strng 
 */

void uart_send_string(char strng[50]);

void uart_send_char(char a);

void eeprom_wrt(int addr,char dta);

char eeprom_rd(int addr);


