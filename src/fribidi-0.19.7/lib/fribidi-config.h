/* @configure_input@ */
/* Not copyrighted, in public domain. */
#ifndef FRIBIDI_CONFIG_H
#define FRIBIDI_CONFIG_H

#define FRIBIDI "fribidi"
#define FRIBIDI_NAME "fribidi"
#define FRIBIDI_BUGREPORT "@PACKAGE_BUGREPORT@"

#define FRIBIDI_VERSION "0.19.7"
#define FRIBIDI_MAJOR_VERSION 0
#define FRIBIDI_MINOR_VERSION 19
#define FRIBIDI_MICRO_VERSION 7
#define FRIBIDI_INTERFACE_VERSION @FRIBIDI_INTERFACE_VERSION@
#define FRIBIDI_INTERFACE_VERSION_STRING "@FRIBIDI_INTERFACE_VERSION@"

/* Define to 1 if you want charset conversion codes in the library */
#define FRIBIDI_CHARSETS 1

/* Define to 1 if you want to use glib */
#define FRIBIDI_USE_GLIB 0

/* The size of a `int', as computed by sizeof. */
#define FRIBIDI_SIZEOF_INT 4

#endif /* FRIBIDI_CONFIG_H */
