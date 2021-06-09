// #pragma stuff
int main(void) {
  // call initializations
  
  // set the pin you want to use to OCx

  T2CONbits.TCKPS = x;     // set the timer prescaler so that you can use the largest PR2 value as possible without going over 65535 and the frequency is 50Hz
  // possible values for TCKPS are 0 for 1:1, 1 for 1:2, 2 for 1:4, 3 for 1:8, 4 for 1:16, 5 for 1:32, ...
  PR2 = 1999;              // max value for PR2 is 65535
  TMR2 = 0;                // initial TMR2 count is 0
  OCxCONbits.OCM = 0b110;  // PWM mode without fault pin; other OCxCON bits are defaults
  OCxRS = y;             // duty cycle = OCxRS/(PR2+1)
  OCxR = y;              // initialize before turning OCx on; afterward it is read-only
  T2CONbits.ON = 1;        // turn on Timer2
  OCxCONbits.ON = 1;       // turn on OCx
  
  // the rest of your code
  
  // set OCxRS to get between a 0.5ms and 2.5ms pulse out of the possible 20ms (50Hz)
}

