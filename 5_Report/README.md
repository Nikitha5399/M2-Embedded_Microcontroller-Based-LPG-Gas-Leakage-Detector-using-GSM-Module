## INTRODUCTION
The presence of dangerous LPG leakage in the cars, service station or in the storage tank environment can be detected using the Ideal Gas Sensor. This LPG gas leakage detector unit can be easily integrated into a unit that can sound an alarm or give a visual suggestion of the LPG concentration. The sensor has both admirable sensitivity and rapid response time. This sensor can also be used to sense other gases like iso-butane, propane, LNG and even cigarette smoke.

The output of the sensor goes LOW as soon as the LPG sensor senses any gas leakage from the storage. This is detected by the microcontroller and the LED & buzzer is turned ON. After the delay of few milliseconds, the exhaust fan is also turned ON for throwing the gas out and it continues sending message as ‘GAS LEAKAGE’ to a mobile number which is pre-defined.
## FEATURES
- The sensor has both admirable sensitivity and rapid response time.
- This sensor can also be used to sense other gases like iso-butane, propane, LNG and even cigarette smoke.
- The output of the sensor goes LOW as soon as the LPG sensor senses any gas leakage from the storage.
- Easy to use.
## STATE OF ART/RESEARCH
![image](https://user-images.githubusercontent.com/94245015/144088408-5831066c-a48d-4419-8517-bab65da67e2d.png)
# SWOT ANALYSIS

# STRENGTH 

 - Detection and Prevention of any sort of gas leakage.

- Cost Efficient and less Complex circuit.

- No environmental effect or no effect of physical conditions.

- It is use in vehicles and as well as in houses as LPG leakage detection.

# WAEKNESS

- It work only when at 5v power supply.

- It's sensitivity depends on Humidity and temperature.

# OPPORTUNITIES

- Gas detectors can be used to detect combustible, flammable and toxic gases, and oxygen depletion. 
- This type of device is used widely in industry and can be found in locations, such as on oil rigs, to monitor manufacturing processes and emerging technologies such as         
  photovoltaic. 
- They may be used in firefighting.

# THREATS
- Inhaling leaked gas in an indoor space, such as your home can result in a lack of oxygen in the air and lead to hypoxia.
- That can, in turn, lead to severe headaches, fatigue, decreased vision, short breaths, and even loss of consciousness.
# 4W & 1H
# WHY
- The purpose of this system is to detect gas leakage, neutralize it, and prevent the explosion.
# WHEN
- Gas detectors can be used to detect combustible, flammable and toxic gases, and oxygen depletion.
# WHERE
- They are commonly used to detect toxic or explosive gases and measure gas concentration.- When gas leaks do occur, they pose serious risks of carbon monoxide poisoning in       people and animals. 
# WHO
- Gas sensors are employed in factories and manufacturing facilities to identify gas leaks, and to detect smoke and carbon monoxide in homes and also in vehicles.
# HOW
- If it detects a gas leak, the LED will light up, the buzzer will activate, then the system will send a notification message stating that there has been an LPG gas leak. If       no LPG gas leak is detected, the system will continue to detect the gas level through the LPG gas sensor until it detects an LPG gas leak.
# HIGH LEVEL REQUIREMENTS 
  - Sensor to detects the gas leakage.
  - GSM module to send a message to a registered mobile number.
  - Buzzer to alert the fire has produced.
# LOW LEVEL REQUIREMENTS
  - LED to display the message.
# UML Diagram
![image](https://user-images.githubusercontent.com/94245015/144085458-2517ac04-787c-4457-915c-46914492302a.png)
| **S.NO** | **Components**                    | **Description** | **Quantity** | **Link** |  
|----------|-----------------------------------|-----------------|--------------|----------|
|   1      | ATmega328 | Microcontroller | 1 | https://www.electronicscomp.com/atmega328p-microcontroller-india?search=atmega328 |
|   2      | ADC  | Analog to Digital Converter | 1 | https://www.electronicscomp.com/adc0804-8-bit-analog-to-digital-a-d-converter-ic-dip-20-package?search=analog%20to%20digital%20converter
|   3      | Exhaust Fan| Which reduces the concentration of LPG gas  | 1 | https://www.amazon.in/Havells-FHVVEDXOWH08-Ventil-200mm-White/dp/B00KIDSU8S/ref=asc_df_B00KIDSU8S/?tag=googleshopdes-21&linkCode=df0&hvadid=396989272059&hvpos=&hvnetw=g&hvrand=17817879117604266861&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=1007741&hvtargid=pla-404767017039&ext_vrnc=hi&th=1 |
|   4      | Gas Sensor |	MQ-135/MQ7/MQ6/MQ5/MQ2 | 1 |	https://amzn.to/2WLIPFL |
|   5      | LCD Display |	JHD162A 16x2 LCD Display |	1	| https://amzn.to/2YVEF0W |
|   6      | Transistor | BC548 | 2 | https://www.electronicscomp.com/bc548-npn-general-purpose-transistor-30v-100ma-to-92-package?search=BC548 |
|   7      | Resistor   | 1k ohm | 3 | https://www.electronicscomp.com/1k-ohm-half-watt-resistance?search=1k%20ohm%20resistor |
|   8      | GSM Module	| SIM800/900 UART GSM Module | 1 |	https://amzn.to/3cqDL06 |
|   9      |	Buzzer 	| Sound/Alarm	| 1	| https://www.electronicscomp.com/active-buzzer-module-5v-india?search=buzzer |
| 10 |	Bread Board	| - |	1	| https://www.electronicscomp.com/400-points-half-size-solderless-breadboard?search=bread%20board&limit=50 |
| 11 |	Jumper Wires |	Connecting Wires |	20 | https://amzn.to/2L8Xc1p | 
| 12 | Arduino Board | Arduino UNO R3 Development Board	| 1	| https://amzn.to/3bjpPDS |
![image](https://user-images.githubusercontent.com/94245015/144033489-b0d1b180-5273-4bca-8828-fed46b83cd5b.png)

# Block Diagram for Connection between Microcontroller and GSM Module
![image](https://user-images.githubusercontent.com/94245015/144033701-be3dccbb-c657-4dfe-ad0d-52dbcb6fb85b.png)
# BLOCK DIAGRAM
# Class Diagram
![image](https://user-images.githubusercontent.com/94245015/144086415-aa8fd5c6-10e0-4c22-975d-940475ad6d91.png)
# Component Diagram
![image](https://user-images.githubusercontent.com/94245015/143805428-404acfe2-d3b8-46d1-be12-b9cfa04588a9.png)
# Flow Chart
![image](https://user-images.githubusercontent.com/94245015/143779074-3eb5fa13-50f0-4645-bf46-716d4c8a1183.png)
# HIGH LEVEL TEST PLAN

| **Test ID** | **Description**                                              | **Expected Input** | **Actual Output | **Expected Output** |   
|-------------|--------------------------------------------------------------|--------------------|-----------------|---------------------|
|  H1      | Monitor gas leakage using gas sensor | MQ5 gas sensor module detects the gas leakage | Alert the people with buzzer |  Alert the people with buzzer |
|  H2      | To send the values to webpage | GSM module collect the value to web page| Web page is created | WeWeb page is created |

# LOW LEVEL TEST PLAN
| **Test ID** | **Description**                                              | **Expected Input** | **Actual Output | **Expected Output** |   
|-------------|--------------------------------------------------------------|--------------------|-----------------|---------------------|
|  L1     | To print the value in LCD board | MQ5 gas sensor measures the gas leakage | Display the message |  Display the message |
|  H2     | To detect the gas leakage | Buzzer sound | LED ON/OFF | LED ON/OFF |
![image](https://user-images.githubusercontent.com/94245015/144355117-2de11e18-767a-42bd-b6dd-1a99e51c0f22.png)
# GAS DETECTION
![image](https://user-images.githubusercontent.com/94245015/144356003-e88a1e07-d3e8-4b55-8fda-1d79018bd135.png)



