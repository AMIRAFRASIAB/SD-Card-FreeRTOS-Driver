
# SD Card SPI Driver (FreeRTOS-Compatible)

This project provides an SPI-based SD card interface compatible with FatFs and FreeRTOS.  
Follow these steps to integrate the code into your STM32 project.

---

## 📥 Setup Instructions

1. **Clone the Repository**
   
2. **Add Source Folders to Your Project**
   - Add the `FatFs` and `SD_Engine` folders to your project include paths and source tree.

3. **Copy External Driver Files**
   - Copy the `SD_SPI_Driver` and `SD_Config` folders **outside of the Git repository** into your own project directory.

4. **Configure SD Card Settings**
   - Open `sd_card_config.h` and modify the pin mappings, SPI settings, and defines to match your hardware

5. **Customize the SPI Driver**
   - In `spi_rtos_driver.c`, modify the functions to match your hardware SPI peripheral

6. **Enjoy**

---

## 🛠️ Requirements

- STM32 microcontroller with SPI peripheral
- FreeRTOS
- FatFs filesystem library
- LL drivers

