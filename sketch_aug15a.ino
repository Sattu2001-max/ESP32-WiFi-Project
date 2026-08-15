#include <WiFi.h>

const char* ssid = "motorola edge 50 pro_8410";
const char* password = "xxxxxxxxx";
void setup() {
  Serial.begin(115200);
  delay(1000);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected!");
  Serial.print("IP Address:10.90.1.121 ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Nothing needed here
}
// Define the internal LED pin for ESP32 DevKit V1
/*#define LED_PIN 2 

void setup() {
  // Configure the GPIO pin as an output
  pinMode(LED_PIN, OUTPUT); 
}

void loop() {
  // Turn the LED on (HIGH voltage level)
  digitalWrite(LED_PIN, HIGH); 
  delay(1000); // Wait for 1 second (1000 milliseconds)
  
  // Turn the LED off (LOW voltage level)
  digitalWrite(LED_PIN, LOW); 
  delay(1000); // Wait for 1 second
}*/
/*#define PIR_PIN 13       // GPIO pin connected to PIR OUT pin
#define LED_PIN 2        // Built-in LED pin on ESP32 DevKit V1

void setup() {
  Serial.begin(5200);
  
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  
  Serial.println("Warming up PIR sensor...");
  delay(10000); // Give sensor ~10 seconds to stabilize
  Serial.println("PIR Sensor Ready!");
}

void loop() {
  int motionState = digitalRead(PIR_PIN);

  if (motionState == HIGH) {
    digitalWrite(LED_PIN, HIGH); // Turn on built-in LED
    Serial.println("Motion detected!");
  } else {
    digitalWrite(LED_PIN, LOW);  // Turn off built-in LED
    Serial.println("No motion.");
  }

  delay(500); // Polling delay
}*/
