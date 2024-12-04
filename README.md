# C115-IoT-project
Repository dedicated to the C115 - Connected Devices project, a course within the Computer Engineering program at INATEL - Intituto Nacional de Telecomunicaçẽos. This project focuses on the development of an IoT application, aiming to consolidate and apply the knowledge acquired throughout the course.

## Index

- [Overview](#overview)
- [Project Concept](#project-concept)
- [Documentation](#documentation)
- [Author](#author)

## Overview

This project integrates hardware and software components using potentiometers to simulate sensor actions. The sensors transmit their data through an ESP8266 microcontroller, with the information displayed via the Blynk platform. The Blynk setup enables data visualization on both a web dashboard and a mobile application. 

The Arduino IDE, equipped with specific libraries for Blynk, was employed to develop the communication code between the hardware and software, ensuring seamless data exchange. This implementation highlights the project's emphasis on IoT integration and real-time monitoring.

## Project Concept

The central idea of this project is to simulate an IoT-based irrigation system. The system uses a water level sensor to monitor the water volume in a tank. Based on this data, the system determines whether irrigation can proceed. Soil moisture sensors assess the soil's condition, identifying areas requiring irrigation. The system then makes informed decisions to allocate water to the areas in need.

An additional feature of the project is a graphical interface that allows users to monitor soil moisture and water levels over time. This visualization enables users to adjust irrigation parameters or manage water stock in the reservoir according to the soil’s requirements and other water usage demands.

## Documentation

The project is accompanied by two detailed documentation files, outlining the configuration of the Blynk platform and the hardware design:

- [Blynk Documentation](/docs/blynk/blynk_documentation.md)
- [Hardware Documentation](/docs/hardware/hardware_documentation.md)

## Author

### [Matheus Fonseca](https://github.com/matheusAFONSECA)

Undergraduate student in the eighth (8th) semester of Computer Engineering at the National Institute of Telecommunications (Inatel). I participated in a Scientific Initiation at the Cybersecurity and Internet of Things Laboratory (CS&ILAB), where, in the Park Here project, I developed skills in computer vision applied to parking systems, focusing on license plate recognition and vehicle identification. Additionally, I served as a teaching assistant for Physics 1, 2, and 3, helping with practical classes, report writing, and answering theoretical questions. Currently, I am an intern at the Inatel Competence Center (ICC) in the PDI SW department.