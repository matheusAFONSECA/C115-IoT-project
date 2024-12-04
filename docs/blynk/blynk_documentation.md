# Blynk Documentation

This documentation outlines the configurations of widgets and the design of dashboards utilized in Blynk, including both the web and mobile applications.

---

## Index

1. [Datastream Configurations](#datastream-configurations)  
2. [App Dashboard](#app-dashboard)  
    - [Widgets Configuration (App)](#widgets-configuration-app)  
3. [Web Dashboard](#web-dashboard)  
    - [Widgets Configuration (Web)](#widgets-configuration-web)  

---

## Datastream Configurations

### What is a Datastream?

A datastream in Blynk is a virtual connection between the application and the hardware device. It facilitates the exchange of data between sensors or actuators and the dashboard. Each datastream can be assigned a unique virtual pin (VPin) or hardware pin, enabling seamless communication.

### Why Configure Datastreams on the Web Application?

Datastream configurations were primarily performed on the web application due to its simplicity and user-friendly interface. Additionally, authentication tokens, essential for secure communication between the application and the device, can only be generated via the web platform.

![Datastreams](/docs/blynk/images/datastream/datastream.png)

### Example Configurations

Below are examples of two configured datastreams. These represent how data flows from sensors or devices to specific virtual pins in the Blynk platform.

- **Datastream A0**  
  ![Datastream A0](/docs/blynk/images/datastream/datstream_A0.png)

- **Datastream V0**  
  ![Datastream V0](/docs/blynk/images/datastream/datastream_V0.png)

---

## App Dashboard

### Overview

Blynk provides tools to create optimized dashboards specifically designed for mobile applications. These dashboards offer an intuitive interface for monitoring and controlling devices in real time.

The app dashboard used in this project was designed to display the historical and real-time data of irrigation systems and water level sensors. Key features include:
- Real-time values read by sensors.
- Historical data visualized in charts.
- A status indicator for the ESP8266 device.
- System notifications.

#### Example Dashboards

- **App Dashboard (Online)**  
  ![App Dashboard Online](/docs/blynk/images/app/dashboard/app_dashboard.jpg)

- **App Dashboard (Offline)**  
  ![App Dashboard Offline](/docs/blynk/images/app/dashboard/app_dashboard_offline.jpg)

---

### Widgets Configuration (App)

Below are the configurations of each widget used in the mobile application dashboard.

- **Water Level Chart**  
  ![Chart - Water Level](/docs/blynk/images/app/config/app_chart_nivel.jpg)

- **Soil Moisture Chart**  
  ![Chart - Soil Moisture](/docs/blynk/images/app/config/app_chart_umidade.jpg)

- **Water Level Meter**  
  ![Meter - Water Level](/docs/blynk/images/app/config/app_medidor_nivel.jpg)

- **Soil Moisture Meter**  
  ![Meter - Soil Moisture](/docs/blynk/images/app/config/app_medidor_umidade.jpg)

---

## Web Dashboard

### Overview

The Blynk platform also enables the creation of web-based dashboards, which offer functionality similar to the mobile application but tailored for larger screens. This makes it easier to manage and monitor devices from desktop environments. The widgets on the web dashboard follow the same principles as those used in the app dashboard.

#### Example Dashboard

![Web Dashboard](/docs/blynk/images/web/web_dashboard.png)

---

### Widgets Configuration (Web)

Below are the widget configurations used in the web dashboard:

- **Historical Data Chart**  
  ![Chart - Historical Data](/docs/blynk/images/web/config/web_chart.png)

- **Water Level Label**  
  ![Label - Water Level](/docs/blynk/images/web/config/web_label_nivel.png)

- **Soil Moisture Label**  
  ![Label - Soil Moisture](/docs/blynk/images/web/config/web_lebel_umidade.png)

---
