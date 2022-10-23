byte customChar[8] = {
  B00011000,
  B00111100,
  B01100110,
  B01100110,
  B01111110,
  B01100110,
  B01100110,
  B00000000};
}

#include <LedControl.h>
LedControl lc=LedControl(12,11,10,1);
void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);
}

void loop() {
  lc.setRow(0, i, a[0]);
  lc.setRow(0, i, a[1]);
  lc.setRow(0, i, a[2]);
  lc.setRow(0, i, a[3]);
  lc.setRow(0, i, a[4]);
  lc.setRow(0, i, a[5]);
  lc.setRow(0, i, a[6]);
  lc.setRow(0, i, a[7]);
}
