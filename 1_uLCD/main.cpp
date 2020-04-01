#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
      uLCD.rectangle(32,32,96,96,WHITE);
      uLCD.text_width(2); 
      uLCD.text_height(2);
      uLCD.printf("\n107061213\n"); //Default Green on black text
      
}