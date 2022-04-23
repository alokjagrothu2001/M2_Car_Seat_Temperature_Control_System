# REPORT
# Abstract
The Seat Heating and Monitoring System is capable of keeping and maintaining car seat to the desired temperature. The button sensor in this project checks if the passenger is sitting in the seat or not, and once seated, the passenger must select the temperature according to his or her needs, after which the seat begins to heat and the corresponding temperature is displayed on the LCD. The operation of the heat or temperature control system has been coded in embedded c and the working is demonstrated using a simuation software called SimulIDE. This system will be done in 3 steps or in 3 activities. When the two switches are closed, the first LED glows indicating the actuation of the system and the heater. Then the analog input from the temperature sensor is received and it digitize that using ADC. The digitized temperature input is visualized using Pulse Width Modulation(PWM).
# Requirements
# Introduction
The seat heating or temperature control system is capable of maintaining the temperature of the seat in the vehicle.In the European continent,the temperature is very low i.e. (negative temperatures) so, seat heater is an essential device which keeps the person warm. In this project the button sensor checks whether the person is seated or not and after the person is seated the person have to set the temperature according to his/her requirement and then the seat starts heating and the corresponding temperature is displayed on LCD. In this project the main aim is to design and develop the system which is capable of monitoring the presence of the person and temperature monitoring and adjusting and displaying the corresponding value.
# Research
- The primary cause for the significant sales of car seat heaters is the rising number of vehicle sales. However, due to the covid-19 pandemic, there has been a severe drop in worldwide car sales, and there is still concern due to the mounting cases of covid-19 in several parts of the world. Approx 3 million units of drop have been observed when compared with 2019. 
- Aside from the worries, manufacturers are concentrating on new product launches and developments in automobile seat heaters in order to deliver the best possible comfort to the customers. Automobile industries want the Customers to make the  demand for automobile seat heaters more since they provide relief from painful backs and deliver rapid warmth.

Ref-: https://www.globenewswire.com/news-release/2020/06/22/2051336/0/en/Automotive-Seat-Heater-Market-Report-Trends-Forecast-and-Competitive-Analysis.html
# Cost
The kits are simple and easy to install, It is straightforward, and the cost is surprisingly affordable (under $499 for most applications). If you live in a place where cold climate is most of a day, seat heaters are a nice add-on your dealership can install for a modest fee.
# Features
* The system will detect the person and determine his/her existance.
* The co-passenger or driver is capable of accessing the temperature and also can modify the temperature according to there requirement.
* Mostly used in Europe and canada.
* Low cost 
# Defining the System
The operation of the heat or temperature control system has been coded in embedded c and the working is demonstrated using a simuation software called SimulIDE. The system is done in 3 steps or in 3 activities. When the two switches are closed, the first LED glows indicating the actuation of the system and the heater. Then the analog input from the temperature sensor is received and digitize using ADC. The digitized temperature input is visualized using Pulse Width Modulation(PWM).
# SWOT ANALYSIS

## Strength -:
* Sets the temperature according to user need.
* User friendly
* low cost

## Weakness -:
* It is best for those countries where the room temperature will be below -6 degree Celsius.

## Opportunities -:
* Can be interfaced with automatic gear control unit(AGC).
* Can be implementaed along with Air conditioner (AC).

## Threats -:
* Not suitable for average or high temperature environment.
* This device cannot be used in equatorial regions.

# 4 W's and 1'H
* WHAT: Heat Monitoring System.
* WHERE: Used in automotive industry and mostly in European Countries.
* WHEN: At low temperature.
* WHY: For being warm and comfortable.
* HOW: Operates by varying the temperature according to the user.
# Detail Requirements
## Low Level Requirements
| Requirements | Description |
| --- | --- |
| LLR1\_1 | ATmega328 |
| LLR2\_1 | LM35 and ADC |
| LLR2\_2 | ADC with PWM |
| LLR3\_1 | LCD or LED&#39;S |
## High Level Requirements
| Requirements | Description |
| --- | --- |
| HLR1 | Microcontroller |
| HLR2 | Temperature Sensor |
| HLR3 | LCD Display or LED&#39;s(different coloured) |
# Required Components
ATmega328, LM35 and ADC,ADC with PWM,LCD or LED&#39;S
The overall circuit assembled on the breadboard. The microcontroller is interfaced with 16X2 LCD. 16X2 LCD Display There are various ways to interface the LCD display to microcontroller based on the coding technique and the platform used.

The LCD has 16 pins.

Pin no 1 and 2 are GND and Vcc respectively, and are used to power up the LCD.

The Pin no 3 VEE, which can be used to adjust the contrast of LCD by varying the potentiometer. We shall connect it to ground in our setup.

Pin no 4, 5 and 6 are the control pins of LCD and they decide the working of LCD. We shall connect these pins to PORT D of microcontroller.

Pin 4 is RS (Register Select) and is connected to PIN 17 (PD3/INT1), Pin 5 is RW (Read / Write) and is connected to PIN 18 (PD4) and Pin 6 is E (Enable) which is connected to PIN 19 (PD5) of the microcontroller. Pin 7 to 14 are D0-D7 which are the data lines. They are connected to PORT A of the microcontroller (PIN 40-13).

The pin 15 and 16 are for LCD back light and those pins will be connected to Vcc And Gnd.
# Block Diagram![Block Diagram](https://user-images.githubusercontent.com/101423374/164446716-71e9b46e-8c20-4473-ab2f-5ee02a44b877.JPG)
# Flowchart 
![flowchart](https://user-images.githubusercontent.com/101423374/164446845-504f217f-6872-470c-a7a8-0a1197eafe3f.JPG)
# Behavioural Diagram
![Behavioural Diagram](https://user-images.githubusercontent.com/101423374/164452026-ce0b9bd8-844f-4ee7-8aa6-70cd2958d77a.JPG)
# TEST PLAN
## HIGH LEVEL TEST PLAN
|TEST Cases NO.|DESCRIPTION|EXPECTED INPUT|EXPECTED OUTPUT|TESTING (PASS/FAIL) |
|:--:|:--:|:--:|:--:|:--:|
|H_01|Activity 1| Both switches are On| Read ADC value| PASS|
|H_02|Activity 2| One switch is On and another switch is Off| NO Output| PASS|
|H_03|Activity 3| Both switches are  Off| NO Output |PASS|

## LOW LEVEL TEST PLAN
|TEST Cases NO.|DESCRIPTION|EXPECTED INPUT|EXPECTED OUTPUT|TESTING (PASS/FAIL) |
|:--:|:--:|:--:|:--:|:--:|
|L_01|Is the user able to get into contents| exp in| exp out| PASS|
|L_02|Is the user able to get working of LCD| exp in| exp out| PASS|
|L_03|Is the user able to get working of buttons| exp in| exp out |PASS|

# Output
![Pwm_20%](https://user-images.githubusercontent.com/101423374/164541847-a5dd0448-54d7-458f-a9d2-a8f5b2bb4a11.JPG)
# Challenges Faced and How Was It Overcome
1. `Issue while running Makefile` - Make sure you have included all the files with .o extension and also include correct path for the test file
2. `Issue with workflows` - Check you folder structure where all the files and makefile is present and include the path correctly
3. `Issue with simulation in SimulIDE` - Make a circuit in SimulIDE and save it, then load the firmware into the microcontroller
