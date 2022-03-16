#ifndef INTERFACECLASS_GLOBAL_H
#define INTERFACECLASS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(INTERFACECLASS_LIBRARY)            // KJ: Määritellään DLL projektifilessä.
#  define INTERFACECLASS_EXPORT Q_DECL_EXPORT  // KJ: Tämä voimassa DLL:ssä
#else
#  define INTERFACECLASS_EXPORT Q_DECL_IMPORT  // KJ: Tämä voimassa EXE:ssä, koska EXE:n projektifilessä
#endif                                         // ei ole INTRFACECLASS_LIBRARYä määriteltynä.

#endif // INTERFACECLASS_GLOBAL_H
