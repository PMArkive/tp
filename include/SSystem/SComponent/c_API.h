#ifndef C_API_H
#define C_API_H

#include "dolphin/types.h"

typedef void (*cAPIGph_Mthd)(void);

extern cAPIGph_Mthd g_cAPI_Interface[6];

#endif /* C_API_H */
