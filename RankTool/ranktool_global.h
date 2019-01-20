#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(RANKTOOL_LIB)
#  define RANKTOOL_EXPORT Q_DECL_EXPORT
# else
#  define RANKTOOL_EXPORT Q_DECL_IMPORT
# endif
#else
# define RANKTOOL_EXPORT
#endif
