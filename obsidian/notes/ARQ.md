### Chapter 1
---
**ESD** - Electrostatic Discharge, < 30 volts can damage pc components

---
#### Power supply

- **Types**
	- AT - obsolete
	- ATX - obsolete
	- ATX12V - 'most' common, has dedicated power to CPU
	- EPS12V - used for high-end desktop models
- **Connectors**
	- 20/24 pin - motherboard
	- SATA - desk drives
	- Molex - hard drives, optical drives, etc
	- Berg - floppy drives
	- 4/8 pin - auxiliary power for GPU, CPU
	- 6/8 pin - PCIe power connector
- **Voltage** 
	- 3.3V
	- 5V
	- 12V
---
#### Motherboard

- **Connections**
	- Chiptset - control how system hardware interacts with the CPU, limits how much RAM  can be added
	- BIOS - boot the system and manage the flow of data to every component
	- UEFI - newer BIOS, specifies a different firmware 
	- IDE - old disk drives, 40 pin connector
	- Internal USB - 19 pin for USB 3, 9 pin for USB 1.1 and 2
- **Chipset**
	- Northbridge - high speed data: RAM, GPU, CPU, PCIe
	- Southbridge - slow speed data: HDD, BIOS, PCI, peripherals
 - **Form factors**
	 - ATX - most used, 20 pin connector
	 - Micro ATX - used in small pcs
	 - ITX - small, uses little power
	 - Mini ITX - used in thin clients
---
#### CPU

- **Architectures**
	- PGA - pin grid array, pins are in the CPU package
	- LGA - land grid array, pins are in the socket
 ---
#### Memory

- **ROM**
	- Directly accessed by the CPU, stores basic operation instructions such as boot
	- ROM - Read-Only Memory
	- PROM - Programmable ROM
	- EPROM - Erasable PROM, erased by UV light exposure
	- EEPROM - Electrically EPROM, aka Flash ROM, used for BIOS

- **RAM**
	- Acessed by programs used by the CPU
	- DRAM - Dynamic RAM, used for main memory
	- SRAM - Static RAM, cache memory, low power, much faster than DRAM
	- SDRAM - Synchronous Dynamic RAM, high transfer rates
	- DDR SDRAM - Double Data Rate SDRAM, each gen is faster, uses less power, has more pins, etc. 
	- GDDR SDRAM - Graphics, used with dedicated GPU, each gen is the same as above, produces massive amounts of data
 