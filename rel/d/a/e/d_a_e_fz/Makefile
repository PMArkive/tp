#
# Generated By: dol2asm
#

M191_TARGET := $(BUILD_DIR)/rel/d/a/e/d_a_e_fz.plf
M191_LDSCRIPT := $(BUILD_DIR)/rel/d/a/e/d_a_e_fz.lcf
M191_MAP := $(BUILD_DIR)/rel/d/a/e/d_a_e_fz.map

M191_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/e/d_a_e_fz/d_a_e_fz.cpp \

M191_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/e/d_a_e_fz/d_a_e_fz.o \

M191_LIBS := \

M191_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M191_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M191_LDSCRIPT) \
	-unused -map $(M191_MAP) \
	-w off \

$(M191_TARGET): $(M191_O_FILES) $(M191_LIBS)
	@echo [191] creating $(M191_TARGET)
	@echo $(M191_LIBS) $(M191_O_FILES) > build/M191_ofiles
	@python3 tools/lcf.py rel 191 --output $(M191_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M191_LDFLAGS) -o $(M191_TARGET) @build/M191_ofiles

$(BUILD_DIR)/rel/d/a/e/d_a_e_fz/%.o: rel/d/a/e/d_a_e_fz/%.cpp
	@echo [191] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M191_CFLAGS) -c -o $@ $(basename $@).cpp


