___
**ESD** - Electrostatic Discharge, < 30 volts can damage pc components
___
### Power supply
- **Types**
	- AT - obsolete
	- ATX - obsolete
	- ATX12V - 'most' common, has dedicated power to CPU
	- EPS12V - used for high-end desktop models
- **Connectors**
	- 20/24 pin - motherboard
	- SATA - disk drives
	- Molex - hard drives, optical drives, etc
	- Berg - floppy drives
	- 4/8 pin - auxiliary power for GPU, CPU
	- 6/8 pin - PCIe power connector
- **Voltage** 
	- 3.3V
	- 5V
	- 12V
---
### Motherboard
- **Connections**
	- Chipset - control how system hardware interacts with the CPU, limits how much RAM  can be added
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
### CPU
- **Architectures**
	- PGA - pin grid array, pins are in the CPU package
	- LGA - land grid array, pins are in the socket
 ---
### Memory - cnp
- **ROM**
	Directly accessed by the CPU, stores basic operation instructions such as boot
	- ROM - Read-Only Memory
	- PROM - Programmable ROM
	- EPROM - Erasable PROM, erased by UV light exposure
	- EEPROM - Electrically EPROM, used for BIOS
		- Flash Memroy is an upgrade from EEPROM
- **RAM**
	Acessed by programs used by the CPU
	- DRAM - Dynamic RAM, used for main memory
	- SRAM - Static RAM, cache memory, low power, much faster than DRAM
	- SDRAM - Synchronous Dynamic RAM, high transfer rates
	- DDR SDRAM - Double Data Rate SDRAM, each gen is faster, uses less power, has more pins, etc. 
- **Modules**
	Memory modules can be single-sided or double-sided.
	- DIP - Dual Inline Package
	- SIMM - Single Inline Memory Module, small circuit board that holds sevelra memory chips
	- DIMM - Dual Inline Memory Module, holds SDRAM chips
	- SODIMM - Small Outline DIMM, used on laptops, printers and small devices
 - **Memory errors**
	 - Nonparity - doesn't check for errors, most common for home and business workstations
	 - Parity - contains eight bits for data and one for error checking (parity bit)
	 - ECC - Error Correction Code memory can detec multiple bit errors and correct single bit errors, used on financial or data analytics servers
 ___
### Hard Disk Drives
- **Magnetic**
	- HDD
		- 1.8'
		- 2.5'
		- 3.5'
	- Tape - used for archiving
 - **Solid State**
	- Disc drive - like HDD, 1,8', 2.5' ,3.5'
	- Expasion cards - plugged directly into the motherboard
	- mSata (M.2) - use a special socket
![[Pasted image 20231012092135.png]]