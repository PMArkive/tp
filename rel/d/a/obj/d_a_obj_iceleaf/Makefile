#
# Generated By: dol2asm
#

M482_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_iceleaf.plf
M482_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_iceleaf.lcf
M482_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_iceleaf.map

M482_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_iceleaf/unknown_translation_unit_bss.cpp \
	rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf.cpp \

M482_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_iceleaf/unknown_translation_unit_bss.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_iceleaf/d_a_obj_iceleaf.o \

M482_LIBS := \

M482_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M482_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M482_LDSCRIPT) \
	-unused -map $(M482_MAP) \
	-w off \

$(M482_TARGET): $(M482_O_FILES) $(M482_LIBS)
	@echo [482] creating $(M482_TARGET)
	@echo $(M482_LIBS) $(M482_O_FILES) > build/M482_ofiles
	@python3 tools/lcf.py rel 482 --output $(M482_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M482_LDFLAGS) -o $(M482_TARGET) @build/M482_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_iceleaf/%.o: rel/d/a/obj/d_a_obj_iceleaf/%.cpp
	@echo [482] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M482_CFLAGS) -c -o $@ $(basename $@).cpp


