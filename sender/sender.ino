#include <ArduinoJson.h>
// Required library: ArduinoJson (https://arduinojson.org/)

const int capacity = JSON_OBJECT_SIZE(4);
StaticJsonDocument<capacity> doc;
unsigned int count = 0;

// the setup routine runs once when you press reset:
void setup()
{
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop()
{
  doc["value"].set(42);
  doc["lat"].set(48.748010);
  doc["lon"].set(2.293491);
  doc["count"].set(count);

  serializeJson(doc, Serial);
  Serial.println();

  delay(500);
  count += 1;
}
