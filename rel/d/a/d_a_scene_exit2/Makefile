#
# Generated By: dol2asm
#

M117_TARGET := $(BUILD_DIR)/rel/d/a/d_a_scene_exit2.plf
M117_LDSCRIPT := $(BUILD_DIR)/rel/d/a/d_a_scene_exit2.lcf
M117_MAP := $(BUILD_DIR)/rel/d/a/d_a_scene_exit2.map

M117_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/d_a_scene_exit2/unknown_translation_unit_bss.cpp \
	rel/d/a/d_a_scene_exit2/d_a_scene_exit2.cpp \

M117_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/d_a_scene_exit2/unknown_translation_unit_bss.o \
	$(BUILD_DIR)/rel/d/a/d_a_scene_exit2/d_a_scene_exit2.o \

M117_LIBS := \

M117_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M117_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M117_LDSCRIPT) \
	-unused -map $(M117_MAP) \
	-w off \

$(M117_TARGET): $(M117_O_FILES) $(M117_LIBS)
	@echo [117] creating $(M117_TARGET)
	@echo $(M117_LIBS) $(M117_O_FILES) > build/M117_ofiles
	@python3 tools/lcf.py rel 117 --output $(M117_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M117_LDFLAGS) -o $(M117_TARGET) @build/M117_ofiles

$(BUILD_DIR)/rel/d/a/d_a_scene_exit2/%.o: rel/d/a/d_a_scene_exit2/%.cpp
	@echo [117] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M117_CFLAGS) -c -o $@ $(basename $@).cpp


