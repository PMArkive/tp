#
# Generated By: dol2asm
#

M475_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_hbombkoya.plf
M475_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_hbombkoya.lcf
M475_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_hbombkoya.map

M475_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_hbombkoya/d_a_obj_hbombkoya.cpp \

M475_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_hbombkoya/d_a_obj_hbombkoya.o \

M475_LIBS := \

M475_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M475_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M475_LDSCRIPT) \
	-unused -map $(M475_MAP) \
	-w off \

$(M475_TARGET): $(M475_O_FILES) $(M475_LIBS)
	@echo [475] creating $(M475_TARGET)
	@echo $(M475_LIBS) $(M475_O_FILES) > build/M475_ofiles
	@python3 tools/lcf.py rel 475 --output $(M475_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M475_LDFLAGS) -o $(M475_TARGET) @build/M475_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_hbombkoya/%.o: rel/d/a/obj/d_a_obj_hbombkoya/%.cpp
	@echo [475] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M475_CFLAGS) -c -o $@ $(basename $@).cpp


