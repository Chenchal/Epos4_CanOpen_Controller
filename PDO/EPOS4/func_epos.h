#ifndef __FUNC_EPOS_H
#define __FUNC_EPOS_H

#include "conf_epos.h"


extern Epos *Controller[];

void Epos_NodeEnable(void);
void Epos_ReceiveDate(void);
void Epos_Conroller_TIMBack(void);
void EPOS_PDOStart(void);
void EPOS_NMT_Reset(void);
void Epos_PosSet(Epos* epos, Uint32 pos);

void Epos_ControlTask(void);

void Node_Initial_Postion(void);

//------
void Epos_init(void);
void Epos_ModeSet(void);
void EPOS_Enable(void);


#define Node_To_Home_Postion(e) Epos_PosSet(e,0)
#endif

