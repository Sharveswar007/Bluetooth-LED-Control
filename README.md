Bluetooth LED Control using Arduino UNO & HC-05 
📌 Overview
This project allows you to control an LED using an Android app via Bluetooth. The Arduino UNO communicates with the HC-05 Bluetooth module, which receives commands from the app to turn the LED ON or OFF.

🛠️ Components Required
Component	Quantity	Price (Approx)
Arduino UNO	1	₹500 - ₹800
HC-05 Bluetooth Module	1	₹300 - ₹500
LED	1	₹10
Jumper Wires	5-6	₹50
9V Battery + Adapter (Optional)	1	₹100 - ₹200
⚡ Circuit Connections
HC-05 to Arduino:
VCC → 5V
GND → GND
TX → RX (Pin 10 on Arduino)
RX → TX (Pin 11 on Arduino)
LED to Arduino:
Positive (Anode, Long leg) → Pin 9
Negative (Cathode, Short leg) → GND
📜 Arduino Code
Upload this code to your Arduino UNO using the Arduino IDE:
📱 Android App Setup
1️⃣ Connect your phone’s Bluetooth to the HC-05 module (Default PIN: 1234 or 0000).
2️⃣ Open the custom Android app you created.
3️⃣ Click the "Connect" button and select HC-05.
4️⃣ Press ON to turn on the LED and OFF to turn it off.

📤 Uploading to GitHub
Follow these steps to upload your project to GitHub using GitHub Desktop:
1️⃣ Open GitHub Desktop.
2️⃣ Select your project folder.
3️⃣ Click Commit & Push to upload.

🎯 Future Improvements
Add multiple LED control.
Integrate voice commands for LED control.
Build an iOS version of the app.
