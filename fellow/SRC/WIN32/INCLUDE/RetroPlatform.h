/* @(#) $Id: RetroPlatform.h,v 1.23 2013-02-09 09:59:37 carfesh Exp $ */
/*=========================================================================*/
/* Fellow                                                                  */
/*                                                                         */
/* This file contains RetroPlatform specific functionality to register as  */
/* guest and interact with the host.                                       */
/*                                                                         */
/* Author: Torsten Enderling (carfesh@gmx.net)                             */
/*                                                                         */
/* Copyright (C) 1991, 1992, 1996 Free Software Foundation, Inc.           */
/*                                                                         */
/* This program is free software; you can redistribute it and/or modify    */
/* it under the terms of the GNU General Public License as published by    */
/* the Free Software Foundation; either version 2, or (at your option)     */
/* any later version.                                                      */
/*                                                                         */
/* This program is distributed in the hope that it will be useful,         */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of          */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           */
/* GNU General Public License for more details.                            */
/*                                                                         */
/* You should have received a copy of the GNU General Public License       */
/* along with this program; if not, write to the Free Software Foundation, */
/* Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.          */
/*=========================================================================*/

#ifndef RETROPLATFORM_H
#define RETROPLATFORM_H

#ifdef RETRO_PLATFORM

#include "gfxdrv.h"
#include "RetroPlatformIPC.h"

extern void  RetroPlatformEmulationStart(void);
extern void  RetroPlatformEmulationStop(void);
extern void  RetroPlatformEndOfFrame(void);
extern void  RetroPlatformEnter(void);
extern ULO   RetroPlatformGetClippingOffsetLeft(void);
extern ULO   RetroPlatformGetClippingOffsetTop(void);
extern BOOLE RetroPlatformGetEmulationState(void);
extern ULO   RetroPlatformGetEscapeKey(void);
extern BOOLE RetroPlatformGetMode(void);
extern BOOLE RetroPlatformGetMouseCaptureRequestedByHost(void);
extern HWND  RetroPlatformGetParentWindowHandle(void);
extern void  RetroPlatformPostEscaped(void);
extern BOOLE RetroPlatformSendActivate(const BOOLE, const LPARAM);
extern BOOLE RetroPlatformSendClose(void);
extern BOOLE RetroPlatformSendEnable(const BOOLE);
extern BOOLE RetroPlatformSendFloppyDriveContent(const ULO, const STR *szImageName, const BOOLE);
extern BOOLE RetroPlatformSendFloppyDriveLED(const ULO, const BOOLE, const BOOLE);
extern BOOLE RetroPlatformSendFloppyDriveReadOnly(const ULO, const BOOLE);
extern BOOLE RetroPlatformSendFloppyDriveSeek(const ULO, const ULO);
extern BOOLE RetroPlatformSendFloppyTurbo(const BOOLE);
extern BOOLE RetroPlatformSendGameportActivity(const ULO, const ULO);
extern BOOLE RetroPlatformSendInputDevice(const DWORD, const DWORD, const DWORD,  const WCHAR *, const WCHAR *);
extern BOOLE RetroPlatformSendMouseCapture(const BOOLE);
extern BOOLE RetroPlatformSendScreenMode(HWND);
extern void  RetroPlatformSetClippingOffsetLeft(const ULO);
extern void  RetroPlatformSetClippingOffsetTop(const ULO);
extern void  RetroPlatformSetEscapeKey(const char *);
extern void  RetroPlatformSetEscapeKeyHoldTime(const char *);
extern BOOLE RetroPlatformSetEscapeKeyTargetHoldTime(const BOOLE);
extern void  RetroPlatformSetHostID(const char *);
extern void  RetroPlatformSetMode(const BOOLE);
extern void  RetroPlatformSetScreenMode(const char *);
extern void  RetroPlatformSetWindowInstance(HINSTANCE);
extern void  RetroPlatformShutdown(void);
extern void  RetroPlatformStartup(void);

#define RETRO_PLATFORM_MAX_PAL_LORES_WIDTH  376
#define RETRO_PLATFORM_MAX_PAL_LORES_HEIGHT 288
#define RETRO_PLATFORM_OFFSET_ADJUST_LEFT   384
#define RETRO_PLATFORM_OFFSET_ADJUST_TOP    52

#endif

#endif