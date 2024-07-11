# pH_Orp_Board
## A 16 bits, two-channels, analog to digital convertion board with galavnic isolation to measure pH and Orp levels in pools and similar environments

This project is based on the original project from Roberto Buti: https://github.com/reef-pi/pH-Board.<br />
This modified version features a double input for simultaneous pH and Orp measurements on the same board, based on the ADS1115 IC.<br />
This board is an ideal companion to the PoolMaster project: https://github.com/Loic74650/PoolMaster.<br />
The 5Volts power supply to this board should be low noise and low drift (sorry no spec).<br /><br />
A alternative (and likely better) routing of the board was performed by @Gixy31 and is available here: https://github.com/Gixy31/ESP32-PoolMaster/tree/main/pH_Orp%20Board%20V2

<br />
<p align="center"> <img src="/Docs/Schema.jpg" width="802" title="Overview"> </p>
Schematics <br /><br />

<br />
<p align="center"> <img src="/Docs/Board_Front.jpg" width="802" title="Overview"> </p>
PCB front <br /><br />

<br />
<p align="center"> <img src="/Docs/Board_Back.jpg" width="802" title="Overview"> </p>
PCB back <br /><br />

<br />
<p align="center"> <img src="/Docs/PoolMasterIntegration.png" width="802" title="Overview"> </p>
PoolMaster dashboard with pH_Orp_Board integrated<br /><br />

<br />
<p align="center"> <img src="/Docs/Sketch.jpg" width="802" title="Overview"> </p>
Basic sketch provided in this repository to test the PCB with this library: <br /><br />
https://lygte-info.dk/project/ADS1115Library%20UK.html<br /><br />
