#
# Generated By: dol2asm
#

M558_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv7PropellerY.plf
M558_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv7PropellerY.lcf
M558_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv7PropellerY.map

M558_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_lv7PropellerY/d_a_obj_lv7PropellerY.cpp \

M558_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv7PropellerY/d_a_obj_lv7PropellerY.o \

M558_LIBS := \

M558_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M558_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M558_LDSCRIPT) \
	-unused -map $(M558_MAP) \
	-w off \

$(M558_TARGET): $(M558_O_FILES) $(M558_LIBS)
	@echo [558] creating $(M558_TARGET)
	@echo $(M558_LIBS) $(M558_O_FILES) > build/M558_ofiles
	@python3 tools/lcf.py rel 558 --output $(M558_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M558_LDFLAGS) -o $(M558_TARGET) @build/M558_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv7PropellerY/%.o: rel/d/a/obj/d_a_obj_lv7PropellerY/%.cpp
	@echo [558] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M558_CFLAGS) -c -o $@ $(basename $@).cpp


