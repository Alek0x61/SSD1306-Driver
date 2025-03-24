#ifndef SSD1306_H
#define SSD1306_H

#include <stdio.h>
#include <unistd.h>

#include "../globalConfig.h"
#include "wiringpi_controller.h"

void sendCommand(unsigned char cmd);
void sendData(unsigned char data);
void initOLED();
void changePage(int page);
void clearDisplay();
void displayOff();
void displayOn();
char setupSSD1306();
void changeVerticalPosition(int x);

void printOverflow(const char *str);
void printOnCoordinates(const char *str, int x, int y);
void print(const char *str);

#endif 
