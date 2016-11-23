#pragma once

#include "resource.h"
#include "../felicalib/src/include/felicalib.h"

#define SYSTEM_CODE 0x88B4  //固定
#define SERVICE_CODE 0x000B //固定
#define READ_BLOCK_LENGTH 0x10

enum {
	NOP,
	TIMER_UPDATE,
	NFC_READER_ENABLED,
	NFC_READER_DISABLED
};

extern pasori *pPasori;	// pasori ポインタ

extern bool openFelicaReader();
extern bool closeFelicaReader();
extern bool felicaCardStatusUpdate(int event, HWND hwnd);
