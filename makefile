CC = gcc
CFLAGS = -D WIRING_PI -D WIRING_PI_I2C
LIBS = -lwiringPi

SRCS = main.c src/ssd1306.c src/wiringpi_controller.c

TARGET = main

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) $(LIBS) -o $(TARGET)

run: $(TARGET)
	./$(TARGET) -d

clean:
	rm -f $(TARGET)

.PHONY: run clean