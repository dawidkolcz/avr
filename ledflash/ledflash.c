//ledflash.c

#include<avr/io.h>
#include<util/delay.h>

#define LED_PIN PB0

int main(void){
  DDRB = 0b00000001;
  PORTB = 0b00000000;
  for(;;){
    PORTB ^= _BV(LED_PIN);
    _delay_ms(500);
  }
}
