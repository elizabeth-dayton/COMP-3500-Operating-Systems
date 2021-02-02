# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright 2001, 2003, 2006 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = bfd
VERSION = 2.17

SHELL = /bin/sh


srcdir = /home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/po
top_srcdir = /home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd
VPATH = /home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/po

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
POFILES =  fr.po tr.po ja.po es.po sv.po da.po zh_CN.po ro.po rw.po vi.po
GMOFILES =  fr.gmo tr.gmo ja.gmo es.gmo sv.gmo da.gmo zh_CN.gmo ro.gmo rw.gmo vi.gmo
DISTFILES = ChangeLog Makefile.in.in SRC-POTFILES.in BLD-POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of source dir POTFILES.
SRC-POTFILES = \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aix386-core.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aix5ppc-core.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aout0.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aout32.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aout64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aout-adobe.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aout-arm.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aout-cris.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aoutf1.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aout-ns32k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aout-sparcle.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aout-target.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aout-tic30.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/aoutx.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/archive64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/archive.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/archures.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/armnetbsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/bfd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/bfdio.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/bfdwin.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/binary.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/bout.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cache.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cf-i386lynx.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cf-sparclynx.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cisco-core.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff64-rs6000.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-alpha.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-apollo.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-arm.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-aux.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coffcode.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coffgen.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-go32.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-h8300.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-h8500.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-i386.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-i860.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-i960.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cofflink.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-m68k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-m88k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-maxq.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-mips.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-or32.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-rs6000.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-sh.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-sparc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-stgo32.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-svm68k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coffswap.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-tic30.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-tic4x.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-tic54x.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-tic80.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-u68k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-w65.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-we32k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-z80.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/coff-z8k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/corefile.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-alpha.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-arc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-arm.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-avr.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-bfin.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-cr16c.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-cris.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-crx.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-d10v.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-d30v.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-dlx.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-fr30.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-frv.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-h8300.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-h8500.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-hppa.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-i370.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-i386.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-i860.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-i960.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-ia64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-ip2k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-iq2000.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-m10200.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-m10300.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-m32c.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-m32r.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-m68hc11.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-m68hc12.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-m68k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-m88k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-maxq.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-mcore.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-mips.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-mmix.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-msp430.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-mt.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-ns32k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-openrisc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-or32.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-pdp11.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-pj.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-powerpc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-rs6000.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-s390.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-sh.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-sparc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-tic30.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-tic4x.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-tic54x.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-tic80.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-v850.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-vax.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-w65.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-we32k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-xc16x.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-xstormy16.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-xtensa.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-z80.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/cpu-z8k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/demo64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/dwarf1.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/dwarf2.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/ecoff.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/ecofflink.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/ecoffswap.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/efi-app-ia32.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/efi-app-ia64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-am33lin.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-arc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-arm.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-avr.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-bfin.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-cr16c.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-cris.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-crx.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-d10v.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-d30v.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-dlx.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-fr30.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-frv.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-gen.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-h8300.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-hppa.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-hppa.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-i370.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-i386.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-i860.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-i960.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-ip2k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-iq2000.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-m32c.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-m32r.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-m68hc11.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-m68hc12.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-m68hc1x.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-m68k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-m88k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-mcore.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-mips.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-msp430.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-mt.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-openrisc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-or32.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-pj.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-ppc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-s390.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-sh64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-sh64-com.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-sh.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-sh-symbian.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-sparc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-v850.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-vax.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-xc16x.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-xstormy16.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf32-xtensa.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64-alpha.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64-gen.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64-hppa.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64-hppa.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64-mips.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64-mmix.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64-ppc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64-s390.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64-sh64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64-sparc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf64-x86-64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf-bfd.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elfcode.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elfcore.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf-eh-frame.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf-hppa.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elflink.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf-m10200.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf-m10300.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elfn32-mips.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf-strtab.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elf-vxworks.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elfxx-mips.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/elfxx-sparc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/epoc-pe-arm.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/epoc-pei-arm.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/format.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/freebsd.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/genlink.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/go32stub.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/hash.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/hp300bsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/hp300hpux.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/hpux-core.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/i386aout.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/i386bsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/i386dynix.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/i386freebsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/i386linux.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/i386lynx.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/i386mach3.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/i386msdos.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/i386netbsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/i386os9k.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/ieee.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/ihex.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/init.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/irix-core.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/libaout.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/libbfd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/libbfd.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/libcoff.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/libecoff.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/libhppa.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/libieee.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/libnlm.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/liboasys.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/libpei.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/libxcoff.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/linker.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/lynx-core.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/m68k4knetbsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/m68klinux.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/m68knetbsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/m88kmach3.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/m88kopenbsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/mach-o.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/mach-o.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/merge.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/mipsbsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/mmo.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/netbsd.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/newsos3.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/nlm32-alpha.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/nlm32.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/nlm32-i386.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/nlm32-ppc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/nlm32-sparc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/nlm64.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/nlm.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/nlmcode.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/nlmswap.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/nlm-target.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/ns32k.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/ns32knetbsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/oasys.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/opncls.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/osf-core.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pc532-mach.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pdp11.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pe-arm.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pef.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pef.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pef-traceback.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pe-i386.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pei-arm.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/peicode.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pei-i386.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pei-mcore.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pei-mips.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pei-ppc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pei-sh.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pe-mcore.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pe-mips.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pe-ppc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/pe-sh.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/ppcboot.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/reloc16.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/reloc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/riscix.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/sco5-core.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/section.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/simple.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/som.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/som.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/sparclinux.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/sparclynx.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/sparcnetbsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/srec.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/stabs.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/stab-syms.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/sunos.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/syms.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/targets.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/tekhex.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/trad-core.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/vax1knetbsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/vaxbsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/vaxnetbsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/versados.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/version.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/vms.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/vms-gsd.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/vms.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/vms-hdr.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/vms-misc.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/vms-tir.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/xcofflink.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/xcoff-target.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/xsym.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/xsym.h \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/xtensa-isa.c \
	/home/u1/ead0044/Documents/COMP-3500-Operating-Systems/comp3500/project2/cs161/cs161-binutils-1.5/./binutils-2.17/bfd/xtensa-modules.c 

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of build dir POTFILES.
BLD-POTFILES = \
	../bfdver.h \
	../elf32-ia64.c \
	../elf32-target.h \
	../elf64-ia64.c \
	../elf64-target.h \
	../peigen.c \
	../pepigen.c \
	../targmatch.h 

CATALOGS =  fr.gmo tr.gmo ja.gmo es.gmo sv.gmo da.gmo zh_CN.gmo ro.gmo rw.gmo vi.gmo
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

$(srcdir)/$(PACKAGE).pot: $(SRC-POTFILES) $(BLD-POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --files-from=$(srcdir)/SRC-POTFILES.in 
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=.. \
	  --directory=. \
	  --add-comments --keyword=_ --keyword=N_ \
	  --join-existing \
	  --files-from=$(srcdir)/BLD-POTFILES.in
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
	rm -f Makefile Makefile.in *.mo *.msg *.cat *.cat.m
	rm -f SRC-POTFILES BLD-POTFILES 

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES) SRC-POTFILES.in BLD-POTFILES.in

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

SRC-POTFILES: SRC-POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

BLD-POTFILES: BLD-POTFILES.in
	  ( rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	../& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

SRC-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/SRC-POTFILES.in

BLD-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/BLD-POTFILES.in

# Note - The presence of SRC-POTFILES and BLD-POTFILES as dependencies
# here breaks the implementation of the 'distclean' rule for maintainers.
# This is because if 'make distclean' is run in the BFD directory, the
# Makefile there will be deleted before 'distclean' is made here, and so
# the dependency SRC-POTFILES -> SRC-POTFILES.in -> ../Makefile cannot
# be satisfied.
#
# The SRC-POTFILES and BLD-POTFILES dependencies cannot be removed,
# however since it is necessary that these files be built during
# *configure* time, so that configure can insert them into the
# po/Makefile that it is creating, so that the Makefile will have
# the correct dependencies.
Makefile: Make-in ../config.status SRC-POTFILES BLD-POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
