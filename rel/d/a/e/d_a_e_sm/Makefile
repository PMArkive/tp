#
# Generated By: dol2asm
#

M231_TARGET := $(BUILD_DIR)/rel/d/a/e/d_a_e_sm.plf
M231_LDSCRIPT := $(BUILD_DIR)/rel/d/a/e/d_a_e_sm.lcf
M231_MAP := $(BUILD_DIR)/rel/d/a/e/d_a_e_sm.map

M231_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/e/d_a_e_sm/d_a_e_sm.cpp \

M231_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/e/d_a_e_sm/d_a_e_sm.o \

M231_LIBS := \

M231_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M231_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M231_LDSCRIPT) \
	-unused -map $(M231_MAP) \
	-w off \

$(M231_TARGET): $(M231_O_FILES) $(M231_LIBS)
	@echo [231] creating $(M231_TARGET)
	@echo $(M231_LIBS) $(M231_O_FILES) > build/M231_ofiles
	@python3 tools/lcf.py rel 231 --output $(M231_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M231_LDFLAGS) -o $(M231_TARGET) @build/M231_ofiles

$(BUILD_DIR)/rel/d/a/e/d_a_e_sm/%.o: rel/d/a/e/d_a_e_sm/%.cpp
	@echo [231] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M231_CFLAGS) -c -o $@ $(basename $@).cpp


