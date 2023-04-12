String webpageCode = R"***(
  <!DOCTYPE html>

<head>
    <title> Display of all Parameters </title>
</head>
<html>
<!----------------------------CSS---------------------------->
<style>
    body {
        background-color: rgb(185, 235, 255)
    }

    .dashboard {
        display: flex;
        flex-direction: column;
    }

    .part1 {
        display: flex;
        flex-direction: row;
        height: 100%;
        width: 100%;
        justify-content: space-around;

    }

    .part2 {
        display: flex;
        flex-direction: row;
        width: 100%;
        justify-content: space-around;
    }

    h3 {
        font-family: arial;
        text-align: center;
        background-color: lightpink;
        padding: 10px;
        max-width: 50%;
        margin: auto;
        border-radius: 12px;
        color: blueviolet;
        font-size: 30px;
    }

    h4 {
        font-family: arial;
        text-align: center;
        color: white;
    }

    .card {
        max-width: 450px;
        min-width: 100px;
        /* width: 280px; */
        /* background: rgba(255, 0, 0, 0.521); */
        padding: 10px;
        font-weight: bold;
        font: 23px calibri;
        text-align: center;
        box-sizing: border-box;
        margin: 20px;
        border: 2px solid blueviolet;
        border-radius: 19px;
        background-color: white;
        /* box-shadow: 0px 2px 15px 15px rgba(0, 0, 0, 0.75); */
    }

    :root {
        --base-percent-width: 100%;

        --percent-width: calc(var(--base-percent-width) /1);
    }

    .outer {
        position: relative;
        height: 100px;
        width: 93%;
        border: 5px solid blueviolet;
        border-radius: 12px;
        /* margin: auto; */
    }

    .inner {
        height: 100%;
        width: var(--percent-width);
        background-color: aqua;
        border-radius: 10px;
        border-right: 1px dashed blueviolet;
    }

    .outer:before {
        content: "";
        position: absolute;
        top: 6px;
        left: 6px;
        height: 88px;
        background-color: aqua;
        border-radius: 5px;
    }

    .outer:after {
        content: "";
        position: absolute;
        right: -23px;
        top: 28px;
        width: 15px;
        height: 50px;
        background-color: blueviolet;
        border-bottom-right-radius: 90px;
        border-top-right-radius: 90px;
    }

    .Notification_heading {
        font: 33px calibri;
        border-bottom: 2px solid blueviolet;
        color: blueviolet;
        text-align: right;
        padding-right: 65px;
        margin-bottom: 10px;
    }

    .Notifications {
        padding-left: 10px;
        background-color: white;
        color: blueviolet;
        text-align: left;
        border-top: 2px solid white;
        border-bottom: 2px solid white;
        margin-top: 3px;
        margin-bottom: 3px;
    }

    .status_box {
        display: flex;
        justify-content: space-around;
    }

    .status_box_1 {
        width: 39%;
    }

    .status_box_2 {
        width: 30%;
        border: 2px solid rebeccapurple;
        text-align: right;
        border-radius: 12px;
        /* background-color: white; */
    }

    .percentbox {
        width: 100%;
        text-align: center;
        font-size: 90px;
    }

    .levelbox {
        background-color: lightblue;
    }

    .info {
        /* border: 2px solid blueviolet; */
        margin-bottom: 10px;
        border-radius: 15px;
        background-color: lightpink;
        width: 95%;
        text-align: center;
        font-size: 23px;
        padding: 5px;
    }

    .bedno {
        padding: 5px;
        width: fit-content;
        border: 2px solid blueviolet;
        border-radius: 12px;
        background-color: white;
        color: blueviolet;
    }
</style>
<!----------------------------HTML--------------------------->

<body>
    <h3>Saline Monitoring System</h3>
    <div class="bedno">
        Bed Number: 01
    </div>
    <div class="dashboard">
        <div class="part1">
            <div class="card">
                <div
                    style="border-bottom: 2px solid blueviolet; color: blueviolet; font-weight: bold; padding-left: 12px; padding-right: 12px">
                    Total Volume of Saline Bottle: </div>
                <h2>
                    <span id="TotalVolumeValue" style="color:rgb(241, 75, 9)">0</span>
                    <span style="color:rgb(241, 75, 9)"> ml</span>

                </h2>
            </div>
            <div class="card">
                <div
                    style="border-bottom: 2px solid blueviolet; color: blueviolet; font-weight: bold; padding-left: 12px; padding-right: 12px">
                    Fluid Level in
                    Saline Bottle: </div>
                <h2>
                    <span style="color:rgb(241, 75, 9)" id="LoadCellValue">0</span>
                    <span style="color:rgb(241, 75, 9)">ml</span>
                </h2>
            </div>
            <div class="card">
                <div
                    style="border-bottom: 2px solid blueviolet; color: blueviolet; font-weight: bold; padding-left: 12px; padding-right: 12px">
                    Estimated Time saline Bottle empties</div>
                <h2>
                    <span id="EstimatedTimeValue" style="color:rgb(241, 75, 9)" id="LoadCellValue">0 </span>
                    <span style="color:rgb(241, 75, 9)" id="LoadCellValue">Min</span>
                </h2>
            </div>
            <div class="status_box_1">
                <div class="info">Liquid Left in Saline Bottle</div>
                <div id="outerbox" class="outer">
                    <div id="innerbox" class="inner">

                    </div>
                </div>
                <div id="percentboxID" class="percentbox"></div>
            </div>
        </div>
        <div class="part2">
            <div class="card">
                <div
                    style="border-bottom: 2px solid blueviolet; color: blueviolet; font-weight: bold; padding-left: 12px; padding-right: 12px">
                    Drops Count </div>
                <h2>
                    <div style="color:rgb(241, 75, 9)" id="LoadCellValue">0 </div>
                    <div style="color:rgb(241, 75, 9)" id="LoadCellValue"> Drops/Min</div>
                </h2>
            </div>
            <div class="card">
                <div
                    style="border-bottom: 2px solid blueviolet; color: blueviolet; font-weight: bold; padding-left: 12px; padding-right: 12px">
                    Flow Rate </div>
                <h2>
                    <div id="FlowRateValue" style="color:rgb(241, 75, 9)" id="LoadCellValue">0</div>
                    <div style="color:rgb(241, 75, 9)" id="LoadCellValue"> ml/min</div>
                </h2>
            </div>
            <div class="card">
                <div
                    style="border-bottom: 2px solid blueviolet; color: blueviolet; font-weight: bold; padding-left: 12px; padding-right: 12px">
                    Drop Factor </div>
                <h2>
                    <div id="DropFactorValue" style="color:rgb(241, 75, 9)" id="LoadCellValue">0</div>
                    <div style="color:rgb(241, 75, 9)" id="LoadCellValue"> drops/ml</div>
                </h2>
            </div>
            <div class="card">
                <div
                    style="border-bottom: 2px solid blueviolet; color: blueviolet; font-weight: bold; padding-left: 12px; padding-right: 12px">
                    Infusion Time: </div>
                <h2>
                    <div id="InfusionTimeValue" style="color:rgb(241, 75, 9)" id="LoadCellValue">0</div>
                    <div style="color:rgb(241, 75, 9)" id="LoadCellValue">Min</div>
                </h2>
            </div>
            <div class="status_box_2">
                <div class="Notification_heading">Notifications</div>
                <div class="Notifications">No Notifications Yet !</div>
            </div>
        </div>
    </div>
    <h4>
        <button onclick="help()">Help</button><br><br>
        <div id="myDIV"> </div>
    </h4>
    <!-------------------------JavaScript------------------------->
    <script>
        const elementInner = document.getElementById('innerbox');
        const styleInner = window.getComputedStyle(elementInner);
        const percentInner = styleInner.getPropertyValue('width');
        const elementOuter = document.getElementById('outerbox');
        const styleOuter = window.getComputedStyle(elementOuter);
        const percentOuter = styleOuter.getPropertyValue('width');
        const percentbox = document.getElementById('percentboxID');
        percentbox.innerHTML = Math.round(parseInt(percentInner) / parseInt(percentOuter) * 100) + "%";
        //___________
        function getAllValues() {
            getDropFactorValue();
            getFlowRateValue();
            getInfusionTimeValue();
            getTotalVolumeValue();
            getLoadCellValue();
            getPercentageValue();

        }
        setInterval(function () {
            getAllValues();
        }, 10);
        setInterval(function () {
            getEstimatedTimeValue();
        }, 240000);
        //-------------------------------------------------------
        function getLoadCellValue() {
            var valRequest = new XMLHttpRequest();
            valRequest.onreadystatechange = function () {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("LoadCellValue").innerHTML =
                        this.responseText;
                }
            };
            valRequest.open("GET", "readLoadCellValue", true);
            valRequest.send();
        }
        function getTotalVolumeValue() {
            var valRequest = new XMLHttpRequest();
            valRequest.onreadystatechange = function () {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("TotalVolumeValue").innerHTML =
                        this.responseText;
                }
            };
            valRequest.open("GET", "readTotalVolumeValue", true);
            valRequest.send();
        }
        //-------------------------------------------------------
        function getInfusionTimeValue() {
            var valRequest = new XMLHttpRequest();
            valRequest.onreadystatechange = function () {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("InfusionTimeValue").innerHTML =
                        this.responseText;
                }
            };
            valRequest.open("GET", "readInfusionTimeValue", true);
            valRequest.send();
        }
        //-------------------------------------------------------

        function getDropFactorValue() {
            var valRequest = new XMLHttpRequest();
            valRequest.onreadystatechange = function () {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("DropFactorValue").innerHTML =
                        this.responseText;
                }
            };
            valRequest.open("GET", "readDropFactorValue", true);
            valRequest.send();
        }
        // ------------------------------------------------------
        function getFlowRateValue() {
            var valRequest = new XMLHttpRequest();
            valRequest.onreadystatechange = function () {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("FlowRateValue").innerHTML =
                        this.responseText;
                }
            };
            valRequest.open("GET", "readFlowRateValue", true);
            valRequest.send();
        }
        function getEstimatedTimeValue() {
            var valRequest = new XMLHttpRequest();
            valRequest.onreadystatechange = function () {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("EstimatedTimeValue").innerHTML =
                        this.responseText;
                }
            };
            valRequest.open("GET", "readEstimatedTimeValue", true);
            valRequest.send();
        }
        //-------------------------------------------------------
        function getPercentageValue() {
            var valRequest = new XMLHttpRequest();
            valRequest.onreadystatechange = function () {
                if (this.readyState == 4 && this.status == 200) {
                    document.getElementById("percentboxID").innerHTML =
                        this.responseText;
                }
            };
            valRequest.open("GET", "readPercentageValue", true);
            valRequest.send();
        }
        //-------------------------------------------------------
        function help() {
            var x = document.getElementById("myDIV");
            var message = "connected successfully :)";
            if (x.innerHTML == "") x.innerHTML = message;
            else x.innerHTML = "";
        }
    </script>
</body>

</html>
)***";

#include <ESP32Servo.h>
#include <analogWrite.h>
// #include <tone.h>
#include <ESP32Tone.h>
#include <ESP32PWM.h>

#include <WiFi.h>
#include <WiFiClient.h>
#include <WebServer.h>

#include <ESP32Servo.h>

Servo myservo;  // create servo object to control a servo
// 16 servo objects can be created on the ESP32

int pos = 0;  // variable to store the servo position
// Recommended PWM GPIO pins on the ESP32 include 2,4,12-19,21-23,25-27,32-33
int servoPin = 13;

// void setup() {
// 	// Allow allocation of all timers
// 	ESP32PWM::allocateTimer(0);
// 	ESP32PWM::allocateTimer(1);
// 	ESP32PWM::allocateTimer(2);
// 	ESP32PWM::allocateTimer(3);
// 	myservo.setPeriodHertz(50);    // standard 50 hz servo
// 	myservo.attach(servoPin, 500, 2400); // attaches the servo on pin 18 to the servo object
// 	// using default min/max of 1000us and 2000us
// 	// different servos may require different min/max settings
// 	// for an accurate 0 to 180 sweep
// }

// void loop() {

// 	for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
// 		// in steps of 1 degree
// 		myservo.write(pos);    // tell servo to go to position in variable 'pos'
// 		delay(15);             // waits 15ms for the servo to reach the position
// 	}
// 	for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
// 		myservo.write(pos);    // tell servo to go to position in variable 'pos'
// 		delay(15);             // waits 15ms for the servo to reach the position
// 	}
// }



// #include<SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#define i2c_Address 0x3c

#define SCREEN_WIDTH 128  // OLED display width, in pixels
#define SCREEN_HEIGHT 64  // OLED display height, in pixels
#define OLED_RESET -1
Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
#include <HX711_ADC.h>  // https://github.com/olkal/HX711_ADC
#include <SPI.h>
#include <RF24.h>
#include <nRF24L01.h>
int ledr = 32;  // conect LED to Arduino pin 13
int ledg = 33;



HX711_ADC LoadCell(5, 17);  // parameters: dt pin, sck pin
int i ; 
int percent;
int v ; 
int FR;
int df;
int it = 0;
int selected4 = 0;
int selected3 = 0;
int selected2 = 0;
int selected1 = 0;
int selected = 0;
int entered = -1;
int entered1 = -1;

int k;
const int IR_Pin = 32; // the pin for the IR sensor
int count = 0; // initialize the drop count to 0



RF24 radio(4, 16);  // declaring CE and CSN pins
const byte address[] = "node1";

void rot(void) {

  for (pos = 0; pos <= 180; pos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);  // tell servo to go to position in variable 'pos'
    delay(150);          // waits 15ms for the servo to reach the position
  }
  // for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
  // 	myservo.write(pos);    // tell servo to go to position in variable 'pos'
  // 	delay(15);             // waits 15ms for the servo to reach the position
  // }
  // delay(100);
}
void radiofunc(int i) {
  radio.write(&i, sizeof(i));
  delay(100);
}

void func(void){
display.clearDisplay();
    int l = LoadCell.update();   // retrieves data from the load cell
    i = LoadCell.getData();  // get output value

    int IR_Value = digitalRead(IR_Pin); // read the value of the IR sensor
    if (IR_Value == HIGH) { // if the sensor detects a drop
      count++; // increment the drop count
      Serial.print("Drops counted: ");
      Serial.println(count); // print the drop count to the serial monitor
      delay(100); // wait for 1 second before detecting the next drop
    }

    if ((i/v)*100 == 10) {
      // rot();
      pos = 5;
      myservo.write(pos);
      delay(50);
    } else {
      pos = 175;
      myservo.write(pos);
      delay(50);
    }

    Serial.println(i);
    radiofunc(i);
    // delay(200);
    display.setTextColor(SH110X_WHITE);
    display.setCursor(0,0);
    display.setTextSize(1);
    display.print("Saline Level:");
 if(i<0){
    i = i * (-1);
    display.setTextSize(1);
    display.setCursor(95,0);
    display.print(0);
    display.print("ml");
    }else{
    display.setTextSize(1);
    display.setCursor(95, 0);
    display.print(i);
    display.print("ml");
    }
    display.setCursor(0,10);
    display.setTextSize(1);
    display.print("_____________________");
    display.setCursor(0, 30);
    percent = 100/v * 100 ; 
    display.print("Fluid left: ");
    display.print(percent);
    display.setTextColor(SH110X_BLACK, SH110X_WHITE);
    display.setCursor(95, 32);
    display.print("YAH!");
    display.setTextColor(SH110X_WHITE);
    display.setCursor(0, 50);
    display.print("/");
    display.setTextColor(SH110X_BLACK, SH110X_WHITE);
    display.print("                    ");  //20 space
   display.display();
}
void displaymenu(void) {

  int down = digitalRead(12);
  int up = digitalRead(14);
  int enter = digitalRead(27);
  int back = digitalRead(26);
  int nit;

  // if (up == LOW && down == LOW) {
  // };


  const char *options4[1] = {
    " Next"
  };
  const char *options3[3] = {
    " 100",
    " 500 ",
    " 1000 ",
  };
  const char *options2[4] = {
    " +10 ",
    " -10 ",
    " set",
  };
  const char *options1[4] = {
    " 16",
    " 18",
    " 20",
  };
  const char *options[3] = {
    " PROCEED",
    " RESTART"
  };
  if (up == LOW) {
    if (entered == -1) {
      if (selected == 1) {
        selected = 1;
      } else {
        selected = selected + 1;
      }
    } else if (entered == 0) {
      if (selected1 == 2) {
        selected = 2;
      } else {
        selected1 = selected1 + 1;
      }
    } else if (entered == 4) {
      if (selected3 == 2) {
        selected3 = 2;
      } else {
        selected3 = selected3 + 1;
      }
    } else if (entered == 1 || entered == 2 || entered == 3) {
      if (selected2 == 2) {
        selected = 2;
      } else {
        selected2 = selected2 + 1;
      }
    }
    delay(200);
  };
  if (down == LOW) {
    if (entered == -1) {
      if (selected == 0) {
        selected = 0;
      } else {
        selected = selected - 1;
      }
    }

    else if (entered == 0) {
      if (selected1 == 0) {
        selected1 = 0;
      } else {
        selected1 = selected1 - 1;
      }
    } else if (entered == 4) {
      if (selected3 == 0) {
        selected3 = 0;
      } else {
        selected3 = selected3 - 1;
      }
    }
    if (entered == 1 || entered == 2 || entered == 3) {
      if (selected2 == 0) {
        selected2 = 0;
      } else {
        selected2 = selected2 - 1;
      }
    }
    delay(200);
  };
  if (enter == LOW) {
    if (entered == 1 || entered == 2 || entered == 3) {
      if (selected2 == 2) {
        entered = 4;
        delay(200);
      } else if (selected2 == 0) {
        it = it + 10;
        delay(200);
      } else if (selected2 == 1) {
        if(it != 0){
          it = it - 10;
        }
        delay(200);
      }
    }
    else if(entered == 5){
      if(selected4 == 0){
        entered = 6 ; 
      }
    }
     else if (entered == 4) {
      if(selected3 == 0){
        v = 100 ; 
        entered = 5 ; 
        delay(200);
      }
      else if(selected3 == 1){
        v = 500 ; 
        entered = 5 ; 
        delay(200);
      }
      else if(selected3 == 2){
        v = 1000 ; 
        entered = 5 ; 
        delay(200);
      }
      delay(200);
    } else if (entered == 0) {
      entered = selected1 + 1;
      delay(200);
    } else if (entered == -1) {
      entered = selected;
    }
    delay(200);
  }
  if (back == LOW) {
    entered = -1;
  };


  // ===================================================================================================
  if (entered == -1) {
    // defalt display
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SH110X_WHITE);
    display.setCursor(12, 0);
    display.println(F("Saline Monitoring"));
    display.setCursor(45, 10);
    display.println("System");
    // display.setCursor(0, 15);
    // display.println("_____________________");
    // display.setCursor(0, 25);
    // display.println("Please Hang Saline & ");
    // display.setCursor(0, 35);
    // display.println("Insert the drip      chamber");
    int x = 0;
    for (int i = 0; i < 3; i++) {
      display.setTextSize(1.9);
      display.setCursor(x, 51);
      x += 65;
      if (i == selected) {
        display.setTextColor(SH110X_BLACK, SH110X_WHITE);
        display.println(options[i]);
      } else if (i != selected) {
        display.setTextColor(SH110X_WHITE);
        display.println(options[i]);
      }
    }
  }
  //  else if (entered == 1) {

  // }
  // ===================================================================================================================
  else if (entered == 0) {
    display.clearDisplay();
    display.setCursor(0, 0);
    display.setTextSize(1);
    display.setTextColor(SH110X_WHITE);
    display.println("_____________________");
    display.setCursor(0, 10);
    display.setTextSize(1);
    display.print("Select Drop Factor");
    display.setCursor(0, 20);
    display.setTextSize(1);
    display.print("(in drops/ml):");
    display.setCursor(0, 30);
    display.setTextSize(1);
    display.println("_____________________");
    int x = 0;
    for (int j = 0; j < 4; j++) {
      display.setTextSize(2);
      display.setCursor(x, 40);
      x += 45;
      if (j == selected1) {
        display.setTextColor(SH110X_BLACK, SH110X_WHITE);
        display.println(options1[j]);
      } else if (j != selected1) {
        display.setTextColor(SH110X_WHITE);
        display.println(options1[j]);
      }
    }
    delay(1000);


    display.display();
  } else if (entered == 1 || entered == 2 || entered == 3) {
    display.clearDisplay();
    display.setCursor(0, 1);
    display.setTextSize(1);
    display.setTextColor(SH110X_WHITE);
    if (selected1 == 0) {
      display.print("Drop Factor :");
      df = 16;
      display.print(df);
    }
    if (selected1 == 1) {
      display.print("Drop Factor :");
      df = 18;
      display.print(df);
    }
    if (selected1 == 2) {
      display.print("Drop Factor :");
      df = 20;
      display.print(df);
    }
    display.setCursor(0, 5);
    display.println("_____________________");
    display.setCursor(10, 15);
    display.println("set Infusion Time :");
    display.setCursor(0, 20);
    display.println("_____________________");
    display.setCursor(41, 28);
    // display.setTextColor(SH110X_BLACK, SH110X_WHITE);
    display.setTextSize(2);
    display.print(it);
    display.print(" ");
    display.print("min");
    // display.setTextColor(SH110X_WHITE);
    display.setTextSize(1);
    display.setCursor(0, 41);
    display.println("_____________________");
    int x = 10;
    for (int n = 0; n < 3; n++) {
      display.setTextSize(1);
      display.setCursor(x, 55);
      x += 35;
      if (n == selected2) {
        display.setTextColor(SH110X_BLACK, SH110X_WHITE);
        display.println(options2[n]);
      } else if (n != selected2) {
        display.setTextColor(SH110X_WHITE);
        display.println(options2[n]);
      }
    }

    display.display();
  }
  // ====================================================================================================================================
  else if (entered == 4) {
    display.clearDisplay();
    display.setTextColor(SH110X_WHITE);
    display.setCursor(0, 0);
    display.setTextSize(1);
    display.print("Please select total");
    display.setCursor(0, 10);
    display.print("Volume of Saline     Bottle :");
    display.setCursor(0, 30);
    display.println("_____________________");
    int x = 10;
    for (int o = 0; o < 3; o++) {
      display.setTextSize(1);
      display.setCursor(x, 45);
      x += 35;
      if (o == selected3) {
        display.setTextColor(SH110X_BLACK, SH110X_WHITE);
        display.println(options3[o]);
      } else if (o != selected3) {
        display.setTextColor(SH110X_WHITE);
        display.println(options3[o]);
      }
    }
    display.setTextColor(SH110X_WHITE);
    display.setCursor(0,55);
    display.println("_____________________");

    display.display();
  } else if (entered == 5) {
    display.clearDisplay();
    display.setCursor(0, 0);
    display.setTextColor(SH110X_WHITE);
    display.setTextSize(1);
    display.print("Drop factor: ");
    display.setCursor(70,0);
    display.print(df);
    display.print("gtt/ml");
    display.setCursor(0,5);
    display.print("_____________________");
    display.setCursor(0, 16);
    display.print("Infusion Time: ");
    display.setCursor(87,16);
    display.print(it);
    display.print("min");
    display.setCursor(0,21);
    display.print("_____________________");
    display.setCursor(0, 32);
    FR = v * df / it;
    display.print("Flow Rate: ");
    display.setCursor(60,32);
    display.print(FR);
    display.print("gtts/min");
    display.setCursor(0,37);
    display.print("_____________________");
    int x = 0;
    for (int p = 0; p < 1; p++) {
      display.setTextSize(1.9);
      display.setCursor(x, 51);
      x += 65;
      if (p == selected4) {
        display.setTextColor(SH110X_BLACK, SH110X_WHITE);
        display.println(options4[p]);
      } else if (p != selected4) {
        display.setTextColor(SH110X_WHITE);
        display.println(options4[p]);
      }
    }
    display.display();
  }
  else if(entered == 6){

//     display.clearDisplay();
//     int l = LoadCell.update();   // retrieves data from the load cell
//     i = LoadCell.getData();  // get output value

//     int IR_Value = digitalRead(IR_Pin); // read the value of the IR sensor
//     if (IR_Value == LOW) { // if the sensor detects a drop
//       count++; // increment the drop count
//       Serial.print("Drops counted: ");
//       Serial.println(count); // print the drop count to the serial monitor
//       delay(100); // wait for 1 second before detecting the next drop
//     }

//     if (i >= 50) {
//       // rot();
//       pos = 175;
//       myservo.write(pos);
//       delay(50);
//     } else {
//       pos = 5;
//       myservo.write(pos);
//       delay(50);
//     }

//     Serial.println(i);
//     radiofunc(i);
//     // delay(200);
//     display.setTextColor(SH110X_WHITE);
//     display.setCursor(0,0);
//     display.setTextSize(1);
//     display.print("Saline Level:");
//  if(i<0){
//     i = i * (-1);
//     display.setTextSize(1);
//     display.setCursor(95,0);
//     display.print(0);
//     display.print("ml");
//     }else{
//     display.setTextSize(1);
//     display.setCursor(95, 0);
//     display.print(i);
//     display.print("ml");
//     }
//     display.setCursor(0,10);
//     display.setTextSize(1);
//     display.print("_____________________");
//     display.setCursor(0, 30);
//     percent = 100/v * 100 ; 
//     display.print("Fluid left: ");
//     display.print(percent);
//     display.setTextColor(SH110X_BLACK, SH110X_WHITE);
//     display.setCursor(95, 32);
//     display.print("YAH!");
//     display.setTextColor(SH110X_WHITE);
//     display.setCursor(0, 50);
//     display.print("/");
//     display.setTextColor(SH110X_BLACK, SH110X_WHITE);
//     display.print("                    ");  //20 space
//    display.display();
//   }
func();}
  display.display();
}
WebServer server(80);
const char* ssid = "OPPO A5s";
const char* password = "12345678";
//---------------------------------------------------

void setup() {
  Serial.begin(9600);
  //-------------------------------------------------
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi");
  while(WiFi.waitForConnectResult() != WL_CONNECTED)
  {
    delay(500); Serial.print(".");
  }
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  //-------------------------------------------------
  server.on("/", handleRoot);
  server.on("/readFlowRateValue", handlegetFlowRatevalue);
  server.on("/readDropFactorValue", handlegetDropFactorvalue);
  server.on("/readInfusionTimeValue", handlegetInfusionTimeValue);
  server.on("/readTotalVolumeValue", handlegetTotalVolumeValue);
  server.on("/readLoadCellValue", handlegetLoadCellValue);
  server.on("/readEstimatedTimeValue", handlegetEstimatedTimeValue);
  server.on("/readPercentageValue", handlegetPercentageValue);
  server.begin();
  Serial.println("HTTP server started");

  pinMode(IR_Pin, INPUT); // set the IR sensor pin to input mode
  // Serial.begin(9600); // start serial communication at 9600 bps

  ESP32PWM::allocateTimer(0);
  ESP32PWM::allocateTimer(1);
  ESP32PWM::allocateTimer(2);
  ESP32PWM::allocateTimer(3);
  myservo.setPeriodHertz(50);           // standard 50 hz servo
  myservo.attach(servoPin, 500, 2400);  // attaches the servo on pin 18 to the servo object
  delay(100);

  pinMode(12, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(27, INPUT_PULLUP);
  pinMode(26, INPUT_PULLUP);

  delay(100);
  LoadCell.tare();
  LoadCell.begin();                // start connection to HX711
  LoadCell.start(10);            // load cells gets 2000ms of time to stabilize
  LoadCell.setCalFactor(2142.14);  // calibration factor for load cell => strongly dependent on your individual setup

  delay(100);
  radio.begin();  // initializes the operations of the chip
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  delay(100);
  radio.stopListening();
  delay(100);

  display.begin(i2c_Address, true);
  display.clearDisplay();
  // Draw a single pixel in white
  display.drawPixel(10, 10, SH110X_WHITE);
  display.display();
  delay(100);
}




void loop() {
  displaymenu();
  server.handleClient(); delay(1);
  delay(100);
}

//=============================================
//Handle functions executed upon client request
//=============================================
void handleRoot()
{
 server.send(200, "text/html", webpageCode);
}
//---------------------------------------
void handlegetEstimatedTimeValue()
{
 String EstimatedTime = String(it-2);
 server.send(200, "text/plane", EstimatedTime);
 
}
//---------------------------------------
void handlegetLoadCellValue()
{
 String LoadCellData = String(i);
 server.send(200, "text/plane", LoadCellData);
 
}
//---------------------------------------
void handlegetTotalVolumeValue()
{
 String TotalVolume = String(v);
 server.send(200, "text/plane", TotalVolume);
 
}
void handlegetInfusionTimeValue()
{
 String InfusionTime = String(it);
 server.send(200, "text/plane", InfusionTime);
 
}
void handlegetDropFactorvalue()
{
 String DropFactor = String(df);
 server.send(200, "text/plane", DropFactor);
 
}
void handlegetFlowRatevalue()
{
 
 String FlowRate = String(FR);
 server.send(200, "text/plane", FlowRate);
}
void handlegetPercentageValue()
{
 
 String percentageValue = String(percent);
 server.send(200, "text/plane", percentageValue);
}

//============
//Webpage Code
//============
