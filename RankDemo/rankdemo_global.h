#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(RANKDEMO_LIB)
#  define RANKDEMO_EXPORT Q_DECL_EXPORT
# else
#  define RANKDEMO_EXPORT Q_DECL_IMPORT
# endif
#else
# define RANKDEMO_EXPORT
#endif
