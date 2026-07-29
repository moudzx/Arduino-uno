#define BUZZER 8

// Note frequencies
#define C4 262
#define D4 294
#define E4 330
#define F4 349
#define G4 392
#define A4 440
#define B4 494
#define C5 523
#define D5 587
#define E5 659
#define F5 698
#define G5 784

int melody[] = {
  G4, G4, A4, G4, C5, B4,
  G4, G4, A4, G4, D5, C5,
  G4, G4, G5, E5, C5, B4, A4,
  F5, F5, E5, C5, D5, C5
};

int durations[] = {
  4, 4, 2, 2, 2, 1,
  4, 4, 2, 2, 2, 1,
  4, 4, 2, 2, 2, 2, 1,
  4, 4, 2, 2, 2, 1
};

void setup() {
  int notes = sizeof(melody) / sizeof(melody[0]);

  for (int i = 0; i < notes; i++) {
    int duration = 1000 / durations[i];
    tone(BUZZER, melody[i], duration);
    delay(duration * 1.3);
    noTone(BUZZER);
  }
}

void loop() {
}
