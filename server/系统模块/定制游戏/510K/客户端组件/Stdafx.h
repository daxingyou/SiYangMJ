#pragma once

//////////////////////////////////////////////////////////////////////////////////

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN
#endif

#ifndef WINVER
#define WINVER 0x0500
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0400
#endif

#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0410
#endif

#ifndef _WIN32_IE
#define _WIN32_IE 0x0400
#endif

#define _ATL_ATTRIBUTES
#define _AFX_ALL_WARNINGS
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS

//////////////////////////////////////////////////////////////////////////////////

//MFC �ļ�
#include <AfxWin.h>
#include <AfxExt.h>
#include <AfxCmn.h>
#include <AfxDisp.h>
#include <AtlBase.h>
#include <AtlDbcli.h>
#include <AfxDtctl.h>

//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
//���뻷��
#include "..\..\..\SDKCondition.h"
//ƽ̨�ļ�
#include "..\��Ϣ����\CMD_Game.h"
//#include "..\..\..\..\����������Ϸ��\�ͻ������\��Ϸ���\GameFrameHead.h"
//#include "..\..\..\..\������\Include\GameFrameHead.h"

//////////////////////////////////////////////////////////////////////////////////
//������ӿ�


#ifdef SDK_CONDITION

//////////////////////////////////////////////////////////////////////////////////
//��������
//////////////////////////////////////////////////////////////////////////////////
//��������

#include "..\..\..\������\Include\GameFrameHead.h"

#ifndef _DEBUG
#ifndef _UNICODE
#pragma comment (lib,"../../../������/Lib/Ansi/WHImage.lib")
#pragma comment (lib,"../../../������/Lib/Ansi/GameFrame.lib")
#pragma comment (lib,"../../../������/Lib/Ansi/GameEngine.lib")
#pragma comment (lib,"../../../������/Lib/Ansi/SkinControl.lib")
#pragma comment (lib,"../../../������/Lib/Ansi/ServiceCore.lib")
#else
#pragma comment (lib,"../../../������/Lib/Unicode/WHImage.lib")
#pragma comment (lib,"../../../������/Lib/Unicode/GameFrame.lib")
#pragma comment (lib,"../../../������/Lib/Unicode/GameEngine.lib")
#pragma comment (lib,"../../../������/Lib/Unicode/SkinControl.lib")
#pragma comment (lib,"../../../������/Lib/Unicode/ServiceCore.lib")
#endif
#else
#ifndef _UNICODE
#pragma comment (lib,"../../../������/Lib/Ansi/WHImageD.lib")
#pragma comment (lib,"../../../������/Lib/Ansi/GameFrameD.lib")
#pragma comment (lib,"../../../������/Lib/Ansi/GameEngineD.lib")
#pragma comment (lib,"../../../������/Lib/Ansi/SkinControlD.lib")
#pragma comment (lib,"../../../������/Lib/Ansi/ServiceCoreD.lib")
#else
#pragma comment (lib,"../../../������/Lib/Unicode/WHImageD.lib")
#pragma comment (lib,"../../../������/Lib/Unicode/GameFrameD.lib")
#pragma comment (lib,"../../../������/Lib/Unicode/GameEngineD.lib")
#pragma comment (lib,"../../../������/Lib/Unicode/SkinControlD.lib")
#pragma comment (lib,"../../../������/Lib/Unicode/ServiceCoreD.lib")
#endif
#endif

//////////////////////////////////////////////////////////////////////////////////

#else

//////////////////////////////////////////////////////////////////////////////////
//ϵͳ����

#include "..\..\..\..\����������Ϸ��\�ͻ������\��Ϸ���\GameFrameHead.h"

#ifndef _DEBUG
#ifndef _UNICODE
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Ansi/WHImage.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Ansi/GameFrame.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Ansi/GameEngine.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Ansi/SkinControl.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Ansi/ServiceCore.lib")
#else
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Unicode/WHImage.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Unicode/GameFrame.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Unicode/GameEngine.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Unicode/SkinControl.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Unicode/ServiceCore.lib")
#endif
#else
#ifndef _UNICODE
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Ansi/WHImageD.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Ansi/GameFrameD.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Ansi/GameEngineD.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Ansi/SkinControlD.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Ansi/ServiceCoreD.lib")
#else
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Unicode/WHImageD.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Unicode/GameFrameD.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Unicode/GameEngineD.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Unicode/SkinControlD.lib")
#pragma comment (lib,"../../../../����������Ϸ��/���ӿ�/Unicode/ServiceCoreD.lib")
#endif
#endif

//////////////////////////////////////////////////////////////////////////////////

#endif