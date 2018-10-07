#include "AQMonitor.h"

void setup()
{ 
    Serial.begin(115200);
    while (! Serial) {
        delay(1);
    }
    ScanAndConnect();
    settings.begin();
    led.begin();
    aqSensors.begin();
    webServer.begin();
    systemCheck.begin();
}

void loop() {
    webServer.loop();
    aqSensors.loop();
    settings.loop();
    led.loop();
    systemCheck.loop();
    delay(100);
}
