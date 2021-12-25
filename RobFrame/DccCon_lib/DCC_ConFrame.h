// 20210109 bit
#pragma once
#ifndef DCC_ConFrame_H
#define DCC_ConFrame_H
#ifdef DCC_ConFrame_C
#define Extern 
#else
#define Extern extern
#endif

#include "..\..\..\Dcc_lib\Base\dcc_con_base.h"

Extern dccRobotState stStatePG, stStateSens, stStateConVal, stStateRef, stStateCmd; // initial states
Extern dccJoints stJoints; // armswi
#undef Extern

#ifndef __Gravity
#define __Gravity 9.8
#endif
#ifndef __ControlT
#define __ControlT 0.004
#endif
#ifndef __MRobot
#define __MRobot (40.0 + 2.0)
#endif
#ifndef __MUpper
#define __MUpper 14.0
#endif
#ifndef __MArm
#define __MArm 5.0
#endif
#ifndef __MShank
#define __MShank 2.0
#endif
#ifndef __MThigh
#define __MThigh 9.0
#endif
#ifndef __MFoot
#define __MFoot 1.0
#endif
#ifndef __LArm
#define __LArm 0.4
#endif
#ifndef __LShank
#define __LShank 3.2
#endif
#ifndef __LThigh
#define __LThigh 3.2
#endif
#ifndef __AnkleWidth
#define __AnkleWidth 0.16
#endif
#ifndef __AnkleHeight
#define __AnkleHeight 0.112
#endif
#ifndef __ShouderWidth
#define __ShouderWidth 0.4
#endif



#endif