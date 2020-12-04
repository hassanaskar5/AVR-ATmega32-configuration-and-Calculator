#ifndef _TIM0_INTERFACE_H
#define _TIM0_INTERFACE_H

void TIM0_init();
void TIM0_enableOverflowinterrupt();
void TIM0_disbleOverflowinterrupt();
        
void TIM0_SetCallBackOvf(pf x);
        
void TIM0_SetCallBack(pf z);
        
        
void TIM0_SetTCNT0(u8 data);
void TIM0_SetOcr(u8 data);

#endif