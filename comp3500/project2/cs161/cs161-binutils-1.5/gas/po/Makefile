# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright 2003, 2006 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = gas
VERSION = 2.17

SHELL = /bin/sh


srcdir = /home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/po
top_srcdir = /home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas
VPATH = /home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/po

prefix = /home/u1/ead0044/cs161/tools
exec_prefix = ${prefix}
datadir = $(prefix)/share
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = /usr/bin/install -c -m 644
MKINSTALLDIRS = $(srcdir)/../../mkinstalldirs

CC = gcc
GENCAT = @GENCAT@
GMSGFMT = PATH=../src:$$PATH /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = PATH=../src:$$PATH /usr/bin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -g -O2 -Wno-error
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  fr.po tr.po es.po rw.po
GMOFILES =  fr.gmo tr.gmo es.gmo rw.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/app.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/as.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/as.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/asintl.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/atof-generic.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/bignum.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/bit_fix.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/cgen.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/cond.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/e-crisaout.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/e-criself.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/e-i386aout.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/e-i386coff.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/e-i386elf.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/e-mipsecoff.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/e-mipself.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-aout.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-aout.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-coff.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-coff.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-ecoff.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-ecoff.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-elf.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-elf.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-evax.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-evax.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-ieee.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-ieee.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-som.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/obj-som.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-alpha.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-alpha.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-arc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-arc.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-arm.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-arm.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-avr.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-avr.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-bfin.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-bfin.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-cris.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-cris.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-crx.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-crx.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-d10v.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-d10v.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-d30v.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-d30v.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-dlx.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-dlx.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-fr30.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-fr30.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-frv.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-frv.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-h8300.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-h8300.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-hppa.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-hppa.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-i370.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-i370.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-i386.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-i386.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-i860.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-i860.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-i960.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-i960.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-ia64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-ia64.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-ip2k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-ip2k.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-m32c.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-m32c.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-m32r.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-m32r.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-m68hc11.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-m68hc11.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-m68k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-m68k.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-mcore.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-mcore.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-mips.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-mips.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-mmix.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-mmix.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-mn10200.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-mn10200.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-mn10300.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-mn10300.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-msp430.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-msp430.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-ns32k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-ns32k.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-openrisc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-openrisc.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-or32.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-or32.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-pdp11.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-pdp11.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-pj.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-pj.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-ppc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-ppc.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-s390.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-s390.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-sh64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-sh64.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-sh.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-sh.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-sparc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-sparc.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-tic30.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-tic30.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-tic54x.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-tic54x.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-v850.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-v850.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-vax.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-vax.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-xc16x.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-xc16x.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-xstormy16.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-xstormy16.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-xtensa.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-xtensa.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-z80.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-z80.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-z8k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/config/tc-z8k.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/depend.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/dw2gencfi.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/dw2gencfi.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/dwarf2dbg.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/dwarf2dbg.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/ecoff.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/ecoff.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/ehopt.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/emul.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/emul-target.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/expr.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/expr.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/flonum-copy.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/flonum.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/flonum-konst.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/flonum-mult.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/frags.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/frags.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/hash.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/hash.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/input-file.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/input-file.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/input-scrub.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/itbl-lex.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/itbl-ops.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/itbl-ops.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/listing.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/listing.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/literal.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/macro.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/macro.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/messages.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/obj.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/output-file.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/output-file.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/read.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/read.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/sb.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/sb.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/stabs.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/struc-symbol.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/subsegs.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/subsegs.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/symbols.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/symbols.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/tc.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/write.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/gas/write.h

CATALOGS =  fr.gmo tr.gmo es.gmo rw.gmo
CATOBJEXT = .gmo
INSTOBJEXT = .mo

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=$(srcdir)/`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-yes

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-data: install-data-yes
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
