# Arduino-Gas-Analyser

![Screenshot (682)](https://user-images.githubusercontent.com/118633170/205687610-3d7a633c-6095-4610-8e5c-546e094b3047.png)


If you have hard-time 3d printing stuff and other materials which i have provided in this project please refer the professionals for the help, [JLCPCB](https://jlcpcb.com/RNA) is one of the best company from shenzhen china they provide, PCB manufacturing, PCBA and 3D printing services to people in need, they provide good quality products in all sectors

[JLCPCB](https://jlcpcb.com/RNA)


Please use the following link to register an account in [JLCPCB](https://jlcpcb.com/RNA)

https://jlcpcb.com/RNA


Pcb Manufacturing

----------

2 layers

4 layers

6 layers

jlcpcb.com/RNA



PCBA Services

[JLCPCB](https://jlcpcb.com/RNA) have 350k+ Components In-stock. You don’t have to worry about parts sourcing, this helps you to save time and hassle, also keeps your costs down.

Moreover, you can pre-order parts and hold the inventory at [JLCPCB](https://jlcpcb.com/RNA), giving you peace-of-mind that you won't run into any last minute part shortages. jlcpcb.com/RNA



3d printing

-------------------

SLA -- MJF --SLM -- FDM -- & SLS. easy order and fast shipping makes [JLCPCB](https://jlcpcb.com/RNA) better companion among other manufactures try out [JLCPCB](https://jlcpcb.com/RNA) 3D Printing servies

[JLCPCB](https://jlcpcb.com/RNA) 3D Printing starts at $1 &Get $54 Coupons for new users

![Screenshot (686)](https://user-images.githubusercontent.com/118633170/205687659-6fdbea28-8b8e-44ed-b35d-02e9992c34ac.png)

MQ2 is one of the commonly used gas sensors in MQ sensor series. It is a Metal Oxide Semiconductor (MOS) type Gas Sensor also known as Chemiresistors as the detection is based upon change of resistance of the sensing material when the Gas comes in contact with the material. Using a simple voltage divider network, concentrations of gas can be detected.

It can detect the gases and smoke anywhere from 200 to 10000ppm.

![Screenshot (684)](https://user-images.githubusercontent.com/118633170/205687795-6eeb842d-4557-490f-a2c5-8ac4ed9d4e39.png)

![Screenshot (688)](https://user-images.githubusercontent.com/118633170/205687832-3603096a-af86-44bf-89f6-241a690c4992.png)
![Screenshot (687)](https://user-images.githubusercontent.com/118633170/205687853-e4240eb3-9ec4-45cb-878b-048471f8306e.png)



all the other basic sensor modules, this MQ-2 Gas and smoke sensor module has four pins, two of which are for VCC and Gnd and the other two can simultaneously output analog and digital data. To power the circuit we are using the 5V pin of the arduino because the operating voltage range of this module is 5V with ±0.1% tolerance. As you can see in the image above the module has two onboard LEDs. The power LED turns on when power is applied to the board and the Dout LED turns on when the trigger value set by the potentiometer is reached. This board also has a comparator OP-Amp onboard that is responsible for converting the incoming analog signal from the gas sensor to a digital signal. We also have a sensitivity adjustment Trim-pot, with that we can adjust the sensitivity of the device. Finally we have some resistor capacitors for decoupling and filtering.

his mesh structure also provides resistance against dust and other suspended particulars and it only lets in the gaseous elements from the atmosphere. If we decap the sensor we can see the sensor is made out of two major elements. First one is the heating element which is made out of nichrome wire and other is the sensing element that is made out of a platinum wire with a coating of tin dioxide. Now we don't want you to cut and damage you sensor, so we have done that for you, the below image shows the mesh decapped from the actual sensor

When you are working with this type of gas sensor there is a pre heat time or stabilization time that is required for this device to work properly. And if you check on the datasheet of the device you can see it says it requires a pre-heat time of 24 hours. So, Does this mean that it needs to be powered on for 24 hours constantly before usage?

![Screenshot (691)](https://user-images.githubusercontent.com/118633170/205687934-fc644c70-2e0c-467f-91d0-3de5da52bf27.png)
![Screenshot (690)](https://user-images.githubusercontent.com/118633170/205687955-a5811fb8-0d92-4b93-860b-f948ded5eb21.png)


The obvious answer to this question is a big fat NO. It simply means that to obtain typical performance data that is shown in the datasheet, you need to run it constantly for 24 hours. And it's been measured after 24h in their lab. So, if you want to be within specification you must observe that 24h preheating time. Given the small size of the sensor, thermal equilibrium will be almost surely reached within 30 min. And it would probably take just a few minutes to be within a few percent of the data provided by the datasheet.

The 24 hours preheat time will only matter if you want a very accurate measure of gas concentration, and you also have to have a good calibration of your sensor, as well as some means to compensate for other environmental factors like temperature, humidity, etc.

![Screenshot (692)](https://user-images.githubusercontent.com/118633170/205687989-9bd4ce35-c360-4ef9-ab9e-c349ce75d883.png)


The MQ-2 Gas sensor can be used for both Detecting the gas and also for Measuring Butane and Hydrogen Gas level in PPM. Do note that detecting the gas and measuring its concentration in PPM is completely two different things. This article mainly focuses on detecting the gas level and increase in its concentration. If you want to exactly calculate the gas level in PPM the procedure is different, however we will also slightly touch on it.

