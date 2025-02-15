
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _VHT_SIG_B_MU20_INFO_H_
#define _VHT_SIG_B_MU20_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_VHT_SIG_B_MU20_INFO 1


struct vht_sig_b_mu20_info {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t length                                                  : 16,  
                      mcs                                                     :  4,  
                      tail                                                    :  6,  
                      mu_user_number                                          :  3,  
                      reserved_0                                              :  3;  
#else
             uint32_t reserved_0                                              :  3,  
                      mu_user_number                                          :  3,  
                      tail                                                    :  6,  
                      mcs                                                     :  4,  
                      length                                                  : 16;  
#endif
};


 

#define VHT_SIG_B_MU20_INFO_LENGTH_OFFSET                                           0x00000000
#define VHT_SIG_B_MU20_INFO_LENGTH_LSB                                              0
#define VHT_SIG_B_MU20_INFO_LENGTH_MSB                                              15
#define VHT_SIG_B_MU20_INFO_LENGTH_MASK                                             0x0000ffff


 

#define VHT_SIG_B_MU20_INFO_MCS_OFFSET                                              0x00000000
#define VHT_SIG_B_MU20_INFO_MCS_LSB                                                 16
#define VHT_SIG_B_MU20_INFO_MCS_MSB                                                 19
#define VHT_SIG_B_MU20_INFO_MCS_MASK                                                0x000f0000


 

#define VHT_SIG_B_MU20_INFO_TAIL_OFFSET                                             0x00000000
#define VHT_SIG_B_MU20_INFO_TAIL_LSB                                                20
#define VHT_SIG_B_MU20_INFO_TAIL_MSB                                                25
#define VHT_SIG_B_MU20_INFO_TAIL_MASK                                               0x03f00000


 

#define VHT_SIG_B_MU20_INFO_MU_USER_NUMBER_OFFSET                                   0x00000000
#define VHT_SIG_B_MU20_INFO_MU_USER_NUMBER_LSB                                      26
#define VHT_SIG_B_MU20_INFO_MU_USER_NUMBER_MSB                                      28
#define VHT_SIG_B_MU20_INFO_MU_USER_NUMBER_MASK                                     0x1c000000


 

#define VHT_SIG_B_MU20_INFO_RESERVED_0_OFFSET                                       0x00000000
#define VHT_SIG_B_MU20_INFO_RESERVED_0_LSB                                          29
#define VHT_SIG_B_MU20_INFO_RESERVED_0_MSB                                          31
#define VHT_SIG_B_MU20_INFO_RESERVED_0_MASK                                         0xe0000000



#endif    
