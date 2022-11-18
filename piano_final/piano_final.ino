#include <MIDI.h>

// Recurso
// https://roboticsbackend.com/arduino-object-oriented-programming-oop/

// Programa que recebe os sinais dos pinos do Arduino
// e os codifica na saída MIDI, através da Serial, 
// com seu valor correspondente

// OITAVA 4 / NATURAIS
const int buttonC4Pin = 13; // Número dos pinos dos push buttons
const int buttonCs4Pin = 12;
const int buttonD4Pin = 11;
const int buttonDs4Pin = 10;
const int buttonE4Pin = 9;
const int buttonF4Pin = 8;
const int buttonFs4Pin = 7;
const int buttonG4Pin = 6;
const int buttonGs4Pin = 5;
const int buttonA4Pin = 4;
const int buttonAs4Pin = 3;
const int buttonB4Pin = 2;

static bool buttonC4valueOld = LOW;
static bool buttonCs4valueOld = LOW;
static bool buttonD4valueOld = LOW;
static bool buttonDs4valueOld = LOW;
static bool buttonE4valueOld = LOW;
static bool buttonF4valueOld = LOW;
static bool buttonFs4valueOld = LOW;
static bool buttonG4valueOld = LOW;
static bool buttonGs4valueOld = LOW;
static bool buttonA4valueOld = LOW;
static bool buttonAs4valueOld = LOW;
static bool buttonB4valueOld = LOW;

MIDI_CREATE_DEFAULT_INSTANCE();

void setup() {
  
  pinMode(buttonC4Pin, INPUT);
  pinMode(buttonCs4Pin, INPUT);
  pinMode(buttonD4Pin, INPUT);
  pinMode(buttonDs4Pin, INPUT);
  pinMode(buttonE4Pin, INPUT);
  pinMode(buttonF4Pin, INPUT);
  pinMode(buttonFs4Pin, INPUT);
  pinMode(buttonG4Pin, INPUT);
  pinMode(buttonGs4Pin, INPUT);
  pinMode(buttonA4Pin, INPUT);
  pinMode(buttonAs4Pin, INPUT);
  pinMode(buttonB4Pin, INPUT);

  // Iniciar o MIDI e escutar no canal 1
  MIDI.begin(1);

  // Inicia a porta serial
  Serial.begin(115200);

}

void loop() {
  // Lê o valor do estado do push sbutton
  bool buttonC4valueNew = digitalRead(buttonC4Pin);
  bool buttonCs4valueNew = digitalRead(buttonCs4Pin);
  bool buttonD4valueNew = digitalRead(buttonD4Pin);
  bool buttonDs4valueNew = digitalRead(buttonDs4Pin);
  bool buttonE4valueNew = digitalRead(buttonE4Pin);
  bool buttonF4valueNew = digitalRead(buttonF4Pin);
  bool buttonFs4valueNew = digitalRead(buttonFs4Pin);
  bool buttonG4valueNew = digitalRead(buttonG4Pin);
  bool buttonGs4valueNew = digitalRead(buttonGs4Pin);
  bool buttonA4valueNew = digitalRead(buttonA4Pin);
  bool buttonAs4valueNew = digitalRead(buttonAs4Pin);
  bool buttonB4valueNew = digitalRead(buttonB4Pin);

  if (buttonC4valueNew != buttonC4valueOld) {
    if (buttonC4valueNew == HIGH) {
      MIDI.sendNoteOn(60, 127, 1);
    } else {
      MIDI.sendNoteOff(60, 0, 1);
    }
    buttonC4valueOld = buttonC4valueNew;
  }

  if (buttonCs4valueNew != buttonCs4valueOld) {
    if (buttonCs4valueNew == HIGH) {
      MIDI.sendNoteOn(61, 127, 1);
    } else {
      MIDI.sendNoteOff(61, 0, 1);
    }
    buttonCs4valueOld = buttonCs4valueNew;
  }

  if (buttonD4valueNew != buttonD4valueOld) {
    if (buttonD4valueNew == HIGH) {
      MIDI.sendNoteOn(62, 127, 1);
    } else {
      MIDI.sendNoteOff(62, 0, 1);
    }
    buttonD4valueOld = buttonD4valueNew;
  }

  if (buttonDs4valueNew != buttonDs4valueOld) {
    if (buttonDs4valueNew == HIGH) {
      MIDI.sendNoteOn(63, 127, 1);
    } else {
      MIDI.sendNoteOff(63, 0, 1);
    }
    buttonDs4valueOld = buttonDs4valueNew;
  }

  if (buttonE4valueNew != buttonE4valueOld) {
    if (buttonE4valueNew == HIGH) {
      MIDI.sendNoteOn(64, 127, 1);
    } else {
      MIDI.sendNoteOff(64, 0, 1);
    }
    buttonE4valueOld = buttonE4valueNew;
  }

  if (buttonF4valueNew != buttonF4valueOld) {
    if (buttonF4valueNew == HIGH) {
      MIDI.sendNoteOn(65, 127, 1);
    } else {
      MIDI.sendNoteOff(65, 0, 1);
    }
    buttonF4valueOld = buttonF4valueNew;
  }

  if (buttonFs4valueNew != buttonFs4valueOld) {
    if (buttonFs4valueNew == HIGH) {
      MIDI.sendNoteOn(66, 127, 1);
    } else {
      MIDI.sendNoteOff(66, 0, 1);
    }
    buttonFs4valueOld = buttonFs4valueNew;
  }

  if (buttonG4valueNew != buttonG4valueOld) {
    if (buttonG4valueNew == HIGH) {
      MIDI.sendNoteOn(67, 127, 1);
    } else {
      MIDI.sendNoteOff(67, 0, 1);
    }
    buttonG4valueOld = buttonG4valueNew;
  }

  if (buttonGs4valueNew != buttonGs4valueOld) {
    if (buttonGs4valueNew == HIGH) {
      MIDI.sendNoteOn(68, 127, 1);
    } else {
      MIDI.sendNoteOff(68, 0, 1);
    }
    buttonGs4valueOld = buttonGs4valueNew;
  }

  if (buttonA4valueNew != buttonA4valueOld) {
    if (buttonA4valueNew == HIGH) {
      MIDI.sendNoteOn(69, 127, 1);
    } else {
      MIDI.sendNoteOff(69, 0, 1);
    }
    buttonA4valueOld = buttonA4valueNew;
  }

  if (buttonAs4valueNew != buttonAs4valueOld) {
    if (buttonAs4valueNew == HIGH) {
      MIDI.sendNoteOn(70, 127, 1);
    } else {
      MIDI.sendNoteOff(70, 0, 1);
    }
    buttonAs4valueOld = buttonAs4valueNew;
  }

  if (buttonB4valueNew != buttonB4valueOld) {
    if (buttonB4valueNew == HIGH) {
      MIDI.sendNoteOn(71, 127, 1);
    } else {
      MIDI.sendNoteOff(71, 0, 1);
    }
    buttonB4valueOld = buttonB4valueNew;
  }

}
