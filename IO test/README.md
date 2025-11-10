# IO Test Project

## Description
This Arduino project demonstrates serial port communication by counting down from 100 to 0 and continuously looping the sequence. Each number is sent to the serial port for half a second before the next number is displayed.

## Code Functions

### `setup()`
Initializes the Arduino system and runs once at startup.

**Functions called:**
- `Serial.begin(9600)` - Initializes serial communication at 9600 baud rate, enabling communication with the Serial Monitor
- `randomSeed(analogRead(0))` - Seeds the random number generator (though not currently used in the main loop)

### `loop()`
Runs continuously after setup() completes. Contains the main countdown logic.

**Logic:**
- Uses a `for` loop to iterate from 100 down to 0
- For each iteration:
  - `Serial.println(i)` - Sends the current number to the serial port
  - `delay(500)` - Pauses for 500 milliseconds (0.5 seconds)
- Once the countdown reaches 0, the loop automatically repeats back to 100

### `myFunction(int x, int y)`
A helper function that adds two integers together.

**Parameters:**
- `x` - First integer
- `y` - Second integer

**Returns:**
- The sum of x and y

## Serial Output
The serial port will continuously display:
```
100
99
98
...
2
1
0
100
99
...
```

Each number appears for 0.5 seconds before the next number is displayed.

## How to Use

### Building the Project
```bash
platformio run
```

### Uploading to Device
```bash
platformio run --target upload
```

### Monitoring Serial Output
```bash
platformio device monitor
```

Make sure your serial monitor is set to **9600 baud rate** to properly view the output.

### Cleaning the Project
```bash
platformio run --target clean
```

## Hardware Requirements
- Arduino-compatible microcontroller (e.g., Arduino Uno, Arduino Mega, etc.)
- USB cable for programming and serial communication
- Serial monitor software or PlatformIO Serial Monitor

## Dependencies
- Arduino.h (included in PlatformIO Arduino framework)

## Notes
- The countdown timing is controlled by the `delay(500)` function
- Each complete countdown cycle (100 to 0) takes approximately 50.5 seconds
- The `randomSeed()` function is initialized but not actively used; it can be removed or utilized for future enhancements
