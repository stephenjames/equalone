//
//  DispatchMainThread.h
//  EQCoreLib
//
//  Created by Sébastien MIZRAHI on 11/01/2019.
//  Copyright © 2019 V3D. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

void
dispatch_sync_main_thread(dispatch_block_t block);
void
dispatch_async_main_thread(dispatch_block_t block);

NS_ASSUME_NONNULL_END
