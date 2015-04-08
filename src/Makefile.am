## Process this file with automake to produce Makefile.in

TESTS = check_xlreg
check_PROGRAMS = check_xlreg
check_xlreg_SOURCES = check_xlreg.c ${top_builddir}/src/xlreg.h
check_xlreg_CFLAGS = @CHECK_CFLAGS@
check_xlreg_LDADD = $(top_builddir}/src/libxlreg_C.la @CHECK_LIBS@
