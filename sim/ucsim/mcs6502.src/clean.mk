# mcs6502.src/clean.mk

# Deleting all files created by building the program
# --------------------------------------------------
clean:
	rm -f *core *[%~] *.[oa] *.map
	rm -f .[a-z]*~
	rm -f smcs6502$(EXEEXT) smcs6502.exe
	rm -f ucsim_mcs6502$(EXEEXT) ucsim_mcs6502.exe
	$(MAKE) -C test -f clean.mk clean


# Deleting all files created by configuring or building the program
# -----------------------------------------------------------------
distclean: clean
	rm -f config.cache config.log config.status
	rm -f Makefile *.dep
	rm -f *.obj *.list *.lst *.hex
	$(MAKE) -C test -f clean.mk distclean


# Like clean but some files may still exist
# -----------------------------------------
mostlyclean: clean


# Deleting everything that can reconstructed by this Makefile. It deletes
# everything deleted by distclean plus files created by bison, etc.
# -----------------------------------------------------------------------
realclean: distclean

# End of mcs6502.src/clean.mk
