#
# Generated By: dol2asm
#

M698_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_zrTuraraRock.plf
M698_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_zrTuraraRock.lcf
M698_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_zrTuraraRock.map

M698_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_zrTuraraRock/d_a_obj_zrTuraraRock.cpp \

M698_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_zrTuraraRock/d_a_obj_zrTuraraRock.o \

M698_LIBS := \

M698_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M698_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M698_LDSCRIPT) \
	-unused -map $(M698_MAP) \
	-w off \

$(M698_TARGET): $(M698_O_FILES) $(M698_LIBS)
	@echo [698] creating $(M698_TARGET)
	@echo $(M698_LIBS) $(M698_O_FILES) > build/M698_ofiles
	@python3 tools/lcf.py rel 698 --output $(M698_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M698_LDFLAGS) -o $(M698_TARGET) @build/M698_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_zrTuraraRock/%.o: rel/d/a/obj/d_a_obj_zrTuraraRock/%.cpp
	@echo [698] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M698_CFLAGS) -c -o $@ $(basename $@).cpp


