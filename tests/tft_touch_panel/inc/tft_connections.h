#ifndef _TFT_CONNECTIONS_
#define _TFT_CONNECTIONS_

// INCLUDE SECTION
#include "board.h"
#include "vtft.h"
#include "gl.h"
#include "tp.h"
#include "tft8.h"
#ifdef FT5xx6
#include "ft5xx6.h"
#elif defined(Stmpe811)
#include "stmpe811.h"
#elif defined(Tsc2003)
#include "tsc2003.h"
#endif
#include "main_screen.h"
// EOF INCLUDE SECTION

// NOTE - invalid structures if no display size is defined
const tft8_board_t invalid_struct = { 0 };
#ifdef FT5xx6
const ft5xx6_controller_t invalid_controller = { 0 };
#endif

// ---------------------------------------------------
// TODO -- Select desired TFT size if not prevously defined
//         in toolchain flags
//         Everything else is set automatically based on this
#if !defined(disp_size_7) || !defined(disp_size_5) || \
    !defined(disp_size_4) || !defined(disp_size_3)
// #define _TFT_DISPLAY_7_
// #define _TFT_DISPLAY_5_
// #define _TFT_DISPLAY_4_
// #define _TFT_DISPLAY_3_
#endif
// ---------------------------------------------------

#ifdef disp_size_7
#define _TFT_DISP_WIDTH_ 800
#define _TFT_DISP_HEIGHT_ 480
#define _TFT_TP_ROTATE_ TP_ROTATE_180
#ifdef FT5xx6
#define _TFT_BOARD_ TFT_BOARD_7_CAPACITIVE
#define _TFT_TP_CONTROLLER_ FT5X26_CONTROLLER
#elif defined(Stmpe811)
#define _TFT_BOARD_ TFT_BOARD_7_RESISTIVE
#define _TFT_TP_CONTROLLER_ 0
#elif defined(Tsc2003)
#define _TFT_BOARD_ TFT_BOARD_7_RESISTIVE
#define _TFT_TP_CONTROLLER_ 0
#endif
#elif defined(disp_size_5)
#define _TFT_DISP_WIDTH_ 800
#define _TFT_DISP_HEIGHT_ 480
#define _TFT_TP_ROTATE_ TP_ROTATE_180
#ifdef FT5xx6
#define _TFT_BOARD_ TFT_BOARD_5_CAPACITIVE
#define _TFT_TP_CONTROLLER_ FT5X06_CONTROLLER
#elif defined(Stmpe811)
#define _TFT_BOARD_ TFT_BOARD_5_RESISTIVE
#define _TFT_TP_CONTROLLER_ 0
#elif defined(Tsc2003)
#define _TFT_BOARD_ TFT_BOARD_5_RESISTIVE
#define _TFT_TP_CONTROLLER_ 0
#endif
#elif defined(disp_size_4)
#define _TFT_DISP_WIDTH_ 480
#define _TFT_DISP_HEIGHT_ 272
#ifdef FT5xx6
#define _TFT_TP_ROTATE_ TP_ROTATE_0
#define _TFT_BOARD_ TFT_BOARD_4_CAPACITIVE
#define _TFT_TP_CONTROLLER_ FT5X16_CONTROLLER
#elif defined(Stmpe811)
#define _TFT_TP_ROTATE_ TP_ROTATE_180
#define _TFT_BOARD_ TFT_BOARD_4_RESISTIVE
#define _TFT_TP_CONTROLLER_ 0
#elif defined(Tsc2003)
#define _TFT_TP_ROTATE_ TP_ROTATE_180
#define _TFT_BOARD_ TFT_BOARD_4_RESISTIVE
#define _TFT_TP_CONTROLLER_ 0
#endif
#elif defined(disp_size_3)
#define _TFT_DISP_WIDTH_ 320
#define _TFT_DISP_HEIGHT_ 240
#define _TFT_TP_ROTATE_ TP_ROTATE_180
#ifdef FT5xx6
#define _TFT_BOARD_ TFT_BOARD_3_CAPACITIVE
#define _TFT_TP_CONTROLLER_ FT5X46_CONTROLLER
#elif defined(Stmpe811)
#define _TFT_BOARD_ TFT_BOARD_3_RESISTIVE
#define _TFT_TP_CONTROLLER_ 0
#elif defined(Tsc2003)
#define _TFT_BOARD_ TFT_BOARD_3_RESISTIVE
#define _TFT_TP_CONTROLLER_ 0
#endif
#else
#define _TFT_DISP_WIDTH_ 0
#define _TFT_DISP_HEIGHT_ 0
#define _TFT_TP_ROTATE_ TP_ROTATE_0
#define _TFT_BOARD_ invalid_struct
#define _TFT_TP_CONTROLLER_ invalid_controller
#endif

#endif // _TFT_CONNECTIONS__
