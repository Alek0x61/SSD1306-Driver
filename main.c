#include "include/ssd1306.h"

int main() {
    if (setupSSD1306() == ERROR) {
        perror("Error during SSD1306 setup");
        return ERROR;
    }
    printf("SSD1306 set up successfully\n");

    displayOff();
    print("Hello World!");
    displayOn();

    return 0;
}