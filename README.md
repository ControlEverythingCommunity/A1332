[![A1332](A1332_I2CS.png)](https://www.controleverything.com/content/Hall-Effect?sku=A1332_I2CS)
# A1332
A1332 Angle Position Sensor.

The A1332 is a 360° contactless high-resolution programmable magnetic angle position sensor.

This Device is available from ControlEverything.com [SKU: A1332_I2CS]

https://www.controleverything.com/content/Hall-Effect?sku=A1332_I2CS

This Sample code can be used with Raspberry pi and Arduino.

## Java
Download and install pi4j library on Raspberry pi. Steps to install pi4j are provided at:

http://pi4j.com/install.html

Download (or git pull) the code in pi.

Compile the java program.
```cpp
$> pi4j A1332.java
```

Run the java program.
```cpp
$> pi4j A1332
```

## Python
Download and install smbus library on Raspberry pi. Steps to install smbus are provided at:

https://pypi.python.org/pypi/smbus-cffi/0.5.1

Download (or git pull) the code in pi. Run the program.

```cpp
$> python A1332.py
```

## Arduino
Download and install Arduino Software (IDE) on your machine. Steps to install Arduino are provided at:

https://www.arduino.cc/en/Main/Software

Download (or git pull) the code and double click the file to run the program.

Compile and upload the code on Arduino IDE and see the output on Serial Monitor.

#####The code output is the magnetic angle in degree.
