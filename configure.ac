#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([xlreg_c], [0.0.2], [jddixon at gmail dot com])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([config])
LT_INIT
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([src/xlreg.c])
AC_CONFIG_HEADERS([src/config.h])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdint.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 tests/Makefile])
AC_OUTPUT
