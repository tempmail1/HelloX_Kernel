//***********************************************************************/
//    Author                    : Garry
//    Original Date             : Dec,23 2006
//    Module Name               : DRVENTRY.CPP
//    Module Funciton           : 
//                                This file countains a driver entry array,each
//                                device driver embedded in OS kernel,must have
//                                one entry in this array.OS kernel will load the
//                                drivers using this array.
//
//    Last modified Author      :
//    Last modified Date        :
//    Last modified Content     :
//                                1.
//                                2.
//    Lines number              :
//***********************************************************************/

#ifndef __STDAFX_H__
#include "..\include\StdAfx.h"
#endif

#ifdef __CFG_DRV_KEYBOARD
#include "..\drivers\x86\KEYBRD.H"     //Header file for key board driver.
#endif

#ifdef __CFG_FS_FAT32
#include "..\fs\FAT32.H"      //Header file for FAT32 file system dirver.
#endif

#ifdef __CFG_FS_NTFS
#include "..\fs\NTFS.H"
#endif

#ifdef __CFG_DRV_IDE
#include "..\drivers\x86\IDEHD.H"      //IDE interface harddisk controller driver.
#endif

#ifdef __CFG_DRV_MOUSE
#include "..\drivers\x86\MOUSE.H"
#endif

#ifdef __CFG_DRV_COM
#include "..\drivers\x86\com.h"
#endif

#ifdef __CFG_DRV_USART
#include "..\drivers\stm32\usart.h"
#endif

//
//Driver entry array for all inline device drivers.
//Inline device drivers means these drivers' source code is put together
//with operating system kernel,and should be compiled together.
//Developers can add or eleminate inline device drivers by turn on or turn
//off configuration switch.
//New inline device drivers can be added into system,the only operation is
//put your source code into /drivers directory and add one entry in the following
//array.Please remember that the loading sequence may corelated each other,so you
//must put the driver entry in proper order.For example,file system driver's entry
//point should be put ahead of storage device driver's entry point.
//
__DRIVER_ENTRY DriverEntryArray[] = {
#ifdef __CFG_DRV_KEYBOARD
	KBDriverEntry,     //Key board driver entry.
#endif

#ifdef __CFG_DRV_MOUSE
	MouseDrvEntry,     //Mouse device driver entry.
#endif

#ifdef __CFG_FS_FAT32
	FatDriverEntry,    //FAT32 file system driver.
#endif

#ifdef __CFG_FS_NTFS
	NtfsDriverEntry,   //NTFS file system driver.
#endif

#ifdef __CFG_DRV_IDE
	IDEHdDriverEntry,  //IDE harddisk driver.
#endif

#ifdef __CFG_DRV_COM
	COMDrvEntry,
#endif

#ifdef __CFG_DRV_USART //Only available under STM32.
	UsartDrvEntry,
#endif
	NULL               //Terminator of the driver entry array.
};

