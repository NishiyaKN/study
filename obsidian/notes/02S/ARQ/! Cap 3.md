## POST
Means power-on self-test, and is a **hardware check** performed by the BIOS on boot. Whenever some hardware fails, it will beep x times corresponding to the hardware fail beep code defined by the manufacturer 

## BIOS
Is a ROM chip on the motherboard that contains a small program, which controls communication between the OS and the hardware.
It's settings are saved on a CMOS memory chip.
When booted, the BIOS look for the configuration set on the CMOS.
CMOS uses a watch battery

## UEFI
Unified Extensible Firmware Interface, provides additional features and better security compared with legacy BIOS.
Can run on 32-bit and 64-bit systems, suppor larger boot drives and have things like secure boot.

## Security features
- Passwords - allows for different levels of access to the BIOS settings
- Drive encryption
- LoJack - locate, lock and delete
- TPM - Trusted Platform Module - chip that stores encyption keys, digital certificates, password and data. Used by BitLocker's full disk encryption
- Secure boot - computer will only boot an OS trusted by the motherboard manufacturer

___
## Power Fluctuation Types
Unsteady voltages 
 - Blackout - Complete loss of AC power
 - Brownout - Drops below 80% of the normal voltage level or is overloaded
 - Noise - Interferences form generators and lightning (poor quality power)
 - Spike - Sudden increase of voltage, over 100% of normal levels, caused by lightning or when electrical system comes backs
 - Power surge - Dramatic increase in voltage, lasts for a few nanoseconds
___
## Power Protection Devices
- Surge protector - protects from surge and spikes, diverts extra voltage to the ground
- UPS - Uninterruptible power supply, supplies a **consistent** level of power to a device. Helps on blackouts or brownouts. 
- SPS- Standby power supply, provides a backup battery when voltage drops below the normal level. Not reliable as UPS since it takes time to switch and if may fail.
___
## CPU Architectures
CPU executes programs (sequence of stored instructions) by following a specific instrcutions set:
- RISC - Reduced Instruction Set Computer, have very small instructions, designed to execute them rapidly. E.g, ARM, PowerPC.
- CISC - Complex Instruction Set Computer, uses a broad set of instructions, fewer steps. E.g., Intel x86.
___
## CPU Operation
- Hyper-Threading - multiple pieces of code (threads) are executed simultaneously in the CPU. It's like there are multiple CPUs
- HyperTransport - high-speed connection between the CPU and Northbridge chip

The amount of data that a CPU can process at one time depends on the size of the [[FSB]]. 