#
# Generated By: dol2asm
#

M260_TARGET := $(BUILD_DIR)/rel/d/a/d_a_formation_mng.plf
M260_LDSCRIPT := $(BUILD_DIR)/rel/d/a/d_a_formation_mng.lcf
M260_MAP := $(BUILD_DIR)/rel/d/a/d_a_formation_mng.map

M260_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/d_a_formation_mng/d_a_formation_mng.cpp \

M260_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/d_a_formation_mng/d_a_formation_mng.o \

M260_LIBS := \

M260_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M260_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M260_LDSCRIPT) \
	-unused -map $(M260_MAP) \
	-w off \

$(M260_TARGET): $(M260_O_FILES) $(M260_LIBS)
	@echo [260] creating $(M260_TARGET)
	@echo $(M260_LIBS) $(M260_O_FILES) > build/M260_ofiles
	@python3 tools/lcf.py rel 260 --output $(M260_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M260_LDFLAGS) -o $(M260_TARGET) @build/M260_ofiles

$(BUILD_DIR)/rel/d/a/d_a_formation_mng/%.o: rel/d/a/d_a_formation_mng/%.cpp
	@echo [260] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M260_CFLAGS) -c -o $@ $(basename $@).cpp


