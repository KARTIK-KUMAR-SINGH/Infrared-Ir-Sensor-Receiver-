#include <IRremote.hpp>  // Use IRremote v4.x+

const int RECV_PIN = 11;     // IR receiver data pin
const int LED_PIN = 7;      // Onboard LED or external
bool ledState = false;
unsigned long lastCode = 0;

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(RECV_PIN, ENABLE_LED_FEEDBACK);  // Start the IR receiver
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (IrReceiver.decode()) {
    unsigned long code = IrReceiver.decodedIRData.decodedRawData;
    Serial.print("Received code: 0x");
    Serial.println(code, HEX);

    // Only toggle LED if this is a new, valid button press
    if (code != 0xFFFFFFFF && code != lastCode) {
      lastCode = code;

      // 👉 Replace with your actual remote button code
      if (code == 0xFD027F80) {
        ledState = !ledState;
        digitalWrite(LED_PIN, ledState);
        Serial.print("LED is now ");
        Serial.println(ledState ? "ON" : "OFF");
      }
    }

    IrReceiver.resume();  // Ready for next signal
  }
}
