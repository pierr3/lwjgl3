/*
 * Copyright LWJGL. All rights reserved.
 * License terms: http://lwjgl.org/license.php
 */

#define DISABLE_WARNINGS() \
	__pragma(warning(push, 0))

#define ENABLE_WARNINGS() \
	__pragma(warning(pop))

#ifndef __cplusplus
	#define inline __inline
#endif
