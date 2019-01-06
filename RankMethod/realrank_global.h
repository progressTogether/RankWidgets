#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(REALRANK_LIB)
#  define REALRANK_EXPORT Q_DECL_EXPORT
# else
#  define REALRANK_EXPORT Q_DECL_IMPORT
# endif
#else
# define REALRANK_EXPORT
#endif
