#pragma once

#if defined(LEVEL)
#error "_DARWIN_UNLIMITED_STREAMS specified, but -miphoneos-version-min version does not support it."
#elif
#error "_DARWIN_UNLIMITED_STREAMS specified, but -mmacosx-version-min version does not support it."
#endif

