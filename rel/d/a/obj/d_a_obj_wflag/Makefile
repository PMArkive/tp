#
# Generated By: dol2asm
#

M687_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_wflag.plf
M687_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_wflag.lcf
M687_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_wflag.map

M687_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag.cpp \

M687_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag.o \

M687_LIBS := \

M687_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M687_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M687_LDSCRIPT) \
	-unused -map $(M687_MAP) \
	-w off \

$(M687_TARGET): $(M687_O_FILES) $(M687_LIBS)
	@echo [687] creating $(M687_TARGET)
	@echo $(M687_LIBS) $(M687_O_FILES) > build/M687_ofiles
	@python3 tools/lcf.py rel 687 --output $(M687_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M687_LDFLAGS) -o $(M687_TARGET) @build/M687_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_wflag/%.o: rel/d/a/obj/d_a_obj_wflag/%.cpp
	@echo [687] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M687_CFLAGS) -c -o $@ $(basename $@).cpp


