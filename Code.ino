#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8); // Initialize the LCD with the appropriate pins

int sensorPin1 = 4; // Pin connected to first IR sensor
int sensorPin2 = 3; // Pin connected to second IR sensor
int sensorPin3 = 2; // Pin connected to third IR sensor

int slotsLeft = 3; // Total number of parking slots

bool carDetected1 = false;
bool carDetected2 = false;
bool carDetected3 = false;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);

  lcd.begin(16, 2); // Initialize the LCD: 16 columns and 2 rows
  lcd.print(" Parking Slots "); // Display initial message
  lcd.setCursor(0, 1); // Move cursor to the second row
  lcd.print(slotsLeft); // Display initial slots left count
}

void loop() {
  int sensorValue1 = digitalRead(sensorPin1);
  int sensorValue2 = digitalRead(sensorPin2);
  int sensorValue3 = digitalRead(sensorPin3);
  Serial.print(sensorValue1);
  Serial.print(" ");
  Serial.print(sensorValue2);
  Serial.print(" ");
  Serial.println(sensorValue3);

  if (sensorValue1 == HIGH && !carDetected1) {
    // Car detected in slot 1
    delay(100); // Debounce delay
    carDetected1 = true;
    slotsLeft--;
  } else if (sensorValue1 == LOW && carDetected1) {
    // Car not detected in slot 1
    delay(100); // Debounce delay
    carDetected1 = false;
    slotsLeft++;
  }

  if (sensorValue2 == HIGH && !carDetected2) {
    // Car detected in slot 2
    delay(100); // Debounce delay
    carDetected2 = true;
    slotsLeft--;
  } else if (sensorValue2 == LOW && carDetected2) {
    // Car not detected in slot 2
    delay(100); // Debounce delay
    carDetected2 = false;
    slotsLeft++;
  }

  if (sensorValue3 == HIGH && !carDetected3) {
    // Car detected in slot 3
    delay(100); // Debounce delay
    carDetected3 = true;
    slotsLeft--;
  } else if (sensorValue3 == LOW && carDetected3) {
    // Car not detected in slot 3
    delay(100); // Debounce delay
    carDetected3 = false;
    slotsLeft++;
  }

  // Ensure that the slotsLeft count does not go below 0 or above the total slots
  slotsLeft = constrain(slotsLeft, 0, 3);

  // Update LCD display with slots left count
  lcd.setCursor(0, 1); // Move cursor to the second row
  lcd.print("Slots Left:   "); // Clear the previous count
  lcd.setCursor(12, 1);
  lcd.print(slotsLeft); // Display updated slots left count

  delay(100); // Add a small delay to prevent flickering
}
