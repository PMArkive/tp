#
# Generated By: dol2asm
#

M560_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv8KekkaiTrap.plf
M560_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv8KekkaiTrap.lcf
M560_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv8KekkaiTrap.map

M560_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_lv8KekkaiTrap/d_a_obj_lv8KekkaiTrap.cpp \

M560_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv8KekkaiTrap/d_a_obj_lv8KekkaiTrap.o \

M560_LIBS := \

M560_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M560_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M560_LDSCRIPT) \
	-unused -map $(M560_MAP) \
	-w off \

$(M560_TARGET): $(M560_O_FILES) $(M560_LIBS)
	@echo [560] creating $(M560_TARGET)
	@echo $(M560_LIBS) $(M560_O_FILES) > build/M560_ofiles
	@python3 tools/lcf.py rel 560 --output $(M560_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M560_LDFLAGS) -o $(M560_TARGET) @build/M560_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv8KekkaiTrap/%.o: rel/d/a/obj/d_a_obj_lv8KekkaiTrap/%.cpp
	@echo [560] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M560_CFLAGS) -c -o $@ $(basename $@).cpp


