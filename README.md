# Arduino Dog Feeder

An Arduino-based automated dog feeder designed to dispense food twice per day using a servo motor and a repeating 24-hour feeding schedule.

## Features

- Automatically dispenses food twice per day
- Operates on a repeating 24-hour cycle
- Designed for feeding at approximately 8:00 AM and 4:00 PM
- Uses a servo motor to control the feeding mechanism
- Uses a custom `slowMove()` function for smooth servo movement

## Hardware

- Arduino
- Servo motor
- Automated feeding mechanism

## Technologies

- Arduino C/C++
- Arduino Servo Library

## How It Works

The feeder is designed to operate on a repeating 24-hour schedule with two feeding cycles per day. When the program is started at approximately 8:00 AM, the servo operates the feeding mechanism for the first feeding.

The program then waits 8 hours before operating the feeder again at approximately 4:00 PM. After the second feeding, it waits 16 hours before beginning the next day's cycle at approximately 8:00 AM.

The servo motor is connected to pin 9 and moves through predetermined angles to operate the feeding mechanism.

## Servo Control

A custom `slowMove()` function controls the servo movement. Instead of immediately moving the servo from one position to another, the function changes the servo position one degree at a time with a short delay between each movement. This provides smoother and more controlled operation of the feeding mechanism.

## Project Background

Developed as a hands-on Arduino project while studying Computer Engineering at Regent University.
