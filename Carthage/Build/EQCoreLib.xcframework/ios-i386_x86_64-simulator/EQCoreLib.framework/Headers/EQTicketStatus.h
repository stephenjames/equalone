//
//  EQTicketStatus.h
//  EQCoreLib
//
//  Created by David Rodrigues on 22/05/2014.
//  Copyright (c) 2014 V3D. All rights reserved.
//

enum EQTicketStatus {
    kTicketStatusOpen = 1 << 0,     // 0...00001 ==> 1
    kTicketStatusClose = 1 << 1,    // 0...00010 ==> 2
    kTicketStatusReopen = 1 << 2    // 0...00100 ==> 4
};
typedef enum EQTicketStatus EQTicketStatus;