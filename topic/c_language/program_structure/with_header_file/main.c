#include "i2c.h"
#include "lcd.h"

int main()
{
    i2c_transmit(0x47);
    int buf = i2c_receive();

    lcd_action();
    
}