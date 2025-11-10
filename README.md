# 2ndBest

A collection of Arduino and embedded systems projects.

## Projects

### IO Test
An Arduino project that demonstrates serial port communication with a countdown sequence.

**Features:**
- Counts down from 100 to 0 continuously
- Sends each number to the serial port
- 0.5-second interval between each number
- Automatic looping

**Location:** `IO test/`

**Quick Start:**
```bash
cd "IO test"
platformio run --target upload
platformio device monitor
```

For detailed information, see [IO test/README.md](IO%20test/README.md)

## Project Structure

```
2ndBest/
├── README.md                  # Main project documentation
└── IO test/                   # Serial communication project
    ├── README.md              # IO test documentation
    ├── platformio.ini         # PlatformIO configuration
    ├── src/
    │   └── main.cpp           # Main Arduino code
    ├── include/               # Header files
    ├── lib/                   # Libraries
    └── test/                  # Tests
```

## Requirements

- [PlatformIO](https://platformio.org/) - Cross-platform build system for embedded development
- Arduino-compatible microcontroller (e.g., Arduino Uno, Mega, etc.)
- USB cable for programming

## Getting Started

1. Install PlatformIO
2. Navigate to the specific project folder (e.g., `IO test`)
3. Build the project:
   ```bash
   platformio run
   ```
4. Upload to your device:
   ```bash
   platformio run --target upload
   ```
5. Monitor serial output:
   ```bash
   platformio device monitor
   ```

## Contributing

Feel free to fork this repository and submit pull requests for any improvements.

## License

This project is open source and available for educational purposes.

## Author

Golnoushm1