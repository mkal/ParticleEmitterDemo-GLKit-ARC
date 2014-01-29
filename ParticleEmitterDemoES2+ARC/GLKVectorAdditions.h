//
//  GLKVectorAdditions.h
//  ParticleEmitterDemoES2+ARC
//
//  Created by Tom Bradley on 28/01/2014.
//  Copyright (c) 2014 Tom Bradley. All rights reserved.
//

#ifndef ParticleEmitterDemoES2_ARC_GLKVectorAdditions_h
#define ParticleEmitterDemoES2_ARC_GLKVectorAdditions_h


// Return an initialized GLKVector2
static const GLKVector2 GLKVector2Zero = {0.0f, 0.0f};

// Macro which returns a random value between -1 and 1
#define RANDOM_MINUS_1_TO_1() ((random() / (GLfloat)0x3fffffff )-1.0f)

// Macro which returns a random number between 0 and 1
#define RANDOM_0_TO_1() ((random() / (GLfloat)0x7fffffff ))

// Macro which converts degrees into radians
#define DEGREES_TO_RADIANS(__ANGLE__) ((__ANGLE__) / 180.0 * M_PI)

// Macro that allows you to clamp a value within the defined bounds
#define CLAMP(X, A, B) ((X < A) ? A : ((X > B) ? B : X))

#endif