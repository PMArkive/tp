#
# Generated By: dol2asm
#

M621_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_smallkey.plf
M621_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_smallkey.lcf
M621_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_smallkey.map

M621_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_smallkey/unknown_translation_unit_bss.cpp \
	rel/d/a/obj/d_a_obj_smallkey/d_a_obj_smallkey.cpp \

M621_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_smallkey/unknown_translation_unit_bss.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_smallkey/d_a_obj_smallkey.o \

M621_LIBS := \

M621_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M621_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M621_LDSCRIPT) \
	-unused -map $(M621_MAP) \
	-w off \

$(M621_TARGET): $(M621_O_FILES) $(M621_LIBS)
	@echo [621] creating $(M621_TARGET)
	@echo $(M621_LIBS) $(M621_O_FILES) > build/M621_ofiles
	@python3 tools/lcf.py rel 621 --output $(M621_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M621_LDFLAGS) -o $(M621_TARGET) @build/M621_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_smallkey/%.o: rel/d/a/obj/d_a_obj_smallkey/%.cpp
	@echo [621] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M621_CFLAGS) -c -o $@ $(basename $@).cpp


