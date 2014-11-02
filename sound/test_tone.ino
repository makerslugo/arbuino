/**
 * https://itp.nyu.edu/physcomp/labs/labs-arduino-digital-and-analog/tone-output-using-an-arduino/
 **/

#include "pitches.h"

int melody[] = {
  NOTE_E6, NOTE_E6, NOTE_E6, NOTE_E6, NOTE_E6, NOTE_E6, NOTE_E6, NOTE_G6, NOTE_C6, NOTE_D6,
  NOTE_E6, NOTE_F6, NOTE_F6, NOTE_F6, NOTE_F6, NOTE_F6, NOTE_E6, NOTE_E6, NOTE_E6, NOTE_E6,
  NOTE_D6, NOTE_D6, NOTE_E6, NOTE_D6, NOTE_G6, NOTE_E6, NOTE_E6, NOTE_E6, NOTE_E6, NOTE_E6,
  NOTE_E6, NOTE_E6, NOTE_G6, NOTE_C6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_F6, NOTE_F6, NOTE_F6,
  NOTE_F6, NOTE_E6, NOTE_E6, NOTE_E6, NOTE_G6, NOTE_G6, NOTE_E6, NOTE_D6, NOTE_C6
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 2, 4, 4, 2, 4, 4, 4, 4,
  1, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 2, 2, 4, 4, 2, 4, 4,
  2, 4, 4, 4, 4, 1, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 1
};

void setup() {
  for (int thisNote = 0; thisNote < 49; thisNote++) {
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);
  }
}

void loop() {
}
