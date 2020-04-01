#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);
PwmOut PWM1(D6);

int main()
{
      uLCD.rectangle(32,32,96,96,WHITE); //start x,y; end x,y
      uLCD.text_width(2); 
      uLCD.text_height(2);
      uLCD.printf("\n107061213\n"); //Default Green on black text

      PWM1.period(0.001);
      PWM1 = 0;
      /*while(1){
          if(PWM1 == 0){
              for(float i=0;i<=1;i+=0.1){
                  PWM1+=0.1;
                  wait(0.1);
              }
          }
          if(PWM1 == 1){
              for(i=1;i>=0;i-=0.1){
                  PWM1-=0.1;
                  wait(0.1);
              }
          }
      }*/
}