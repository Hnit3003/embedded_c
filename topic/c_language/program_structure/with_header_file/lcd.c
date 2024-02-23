#include "i2c.h"

/*Definition lcd_init*/
void lcd_action(void)
{
    /*body of lib2_func2*/
    i2c_transmit(0x08);
    int data = i2c_receive();
    
}