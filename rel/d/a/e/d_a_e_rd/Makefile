#
# Generated By: dol2asm
#

M70_TARGET := $(BUILD_DIR)/rel/d/a/e/d_a_e_rd.plf
M70_LDSCRIPT := $(BUILD_DIR)/rel/d/a/e/d_a_e_rd.lcf
M70_MAP := $(BUILD_DIR)/rel/d/a/e/d_a_e_rd.map

M70_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/e/d_a_e_rd/d_a_e_rd.cpp \

M70_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/e/d_a_e_rd/d_a_e_rd.o \

M70_LIBS := \

M70_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M70_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M70_LDSCRIPT) \
	-unused -map $(M70_MAP) \
	-w off \

$(M70_TARGET): $(M70_O_FILES) $(M70_LIBS)
	@echo [ 70] creating $(M70_TARGET)
	@echo $(M70_LIBS) $(M70_O_FILES) > build/M70_ofiles
	@python3 tools/lcf.py rel 70 --output $(M70_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M70_LDFLAGS) -o $(M70_TARGET) @build/M70_ofiles

$(BUILD_DIR)/rel/d/a/e/d_a_e_rd/%.o: rel/d/a/e/d_a_e_rd/%.cpp
	@echo [ 70] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M70_CFLAGS) -c -o $@ $(basename $@).cpp


