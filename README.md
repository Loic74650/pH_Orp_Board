# pH_Orp_Board
## A 16 bits, two-channels, analog to digital convertion board with galavnic isolation to measure pH and Orp levels in pools and similar environments

This project is based on the original project from Roberto Buti: https://github.com/reef-pi/pH-Board.<br />
This modified version features a double input for simultaneous pH and Orp measurements on the same board, based on the ADS1115 IC<br />

<br />
<p align="center"> <img src="/Docs/Schema.jpg" width="802" title="Overview"> </p> <br /><br />
Schematics

<br />
<p align="center"> <img src="/Docs/Board_Front.jpg" width="802" title="Overview"> </p> <br /><br />
PCB front

<br />
<p align="center"> <img src="/Docs/Board_Back.jpg" width="802" title="Overview"> </p> <br /><br />
PCB back

<br />
<p align="center"> <img src="/Docs/ADC_Test_pH_Board.jpg" width="802" title="Overview"> </p> <br /><br />
Measured voltages of the two input channels using a square wave input with various amplitudes over time. The two different channel gains are visible.
Measurements were carring out using the basic sketch provided on this repository. See below.

<br />
<p align="center"> <img src="/Docs/Sketch.jpg" width="802" title="Overview"> </p> <br /><br />
Basic sketch provided on this repository to test the PCB.
