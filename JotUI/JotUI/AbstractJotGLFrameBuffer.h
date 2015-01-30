//
//  AbstractJotGLFrameBuffer.h
//  JotUI
//
//  Created by Adam Wulf on 1/29/15.
//  Copyright (c) 2015 Adonit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JotGLContext.h"

@interface AbstractJotGLFrameBuffer : NSObject{
    GLuint framebufferID;
}

@property (readonly) GLuint framebufferID;

@end