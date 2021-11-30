DOXY_FILE = Microcontoller Based LPG Gas Leakage Detector using GSM Module
BUILD_FILE = html

FixPath = $(subst /,\,$1)

doc:
	doxygen ./$(DOXY_FILE)

clean:
	rm -rf $(call FixPath,$(BUILD_FILE)/*)
