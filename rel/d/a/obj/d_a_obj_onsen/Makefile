#
# Generated By: dol2asm
#

M586_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_onsen.plf
M586_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_onsen.lcf
M586_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_onsen.map

M586_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_onsen/d_a_obj_onsen.cpp \

M586_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_onsen/d_a_obj_onsen.o \

M586_LIBS := \

M586_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M586_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M586_LDSCRIPT) \
	-unused -map $(M586_MAP) \
	-w off \

$(M586_TARGET): $(M586_O_FILES) $(M586_LIBS)
	@echo [586] creating $(M586_TARGET)
	@echo $(M586_LIBS) $(M586_O_FILES) > build/M586_ofiles
	@python3 tools/lcf.py rel 586 --output $(M586_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M586_LDFLAGS) -o $(M586_TARGET) @build/M586_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_onsen/%.o: rel/d/a/obj/d_a_obj_onsen/%.cpp
	@echo [586] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M586_CFLAGS) -c -o $@ $(basename $@).cpp


