#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(1000); // Optional: pause to stabilize serial monitor
  
  WiFi.mode(WIFI_STA);
  Serial.print("\nESP32 MAC Address: ");
  Serial.println(WiFi.macAddress());
}

void loop() {
  // Do nothing
}


// ### Steps to Run
// 1. Open the [Arduino IDE](https://arduino.cc).
// 2. Paste the code above into a new sketch.
// 3. Select your ESP32 board and correct COM port.
// 4. Upload the code to your ESP32.
// 5. Open the **Serial Monitor** (set baud rate to `115200`) and press the `EN`/`RST` button on your board if nothing appears right away.

// <VideoWrapper>
//   Watch a quick guide on finding the MAC address using the Arduino IDE:
//   <Video srcId="0.6.2" />
// </VideoWrapper>

// <FollowUp>
// If you need to **change the MAC address** or fetch it for a **specific interface (like Bluetooth or AP mode)**, let me know and I can share the code for that.
// </FollowUp>
