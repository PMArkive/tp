#
# Generated By: dol2asm
#

M384_TARGET := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_ykw.plf
M384_LDSCRIPT := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_ykw.lcf
M384_MAP := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_ykw.map

M384_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/npc/d_a_npc_ykw/d_a_npc_ykw.cpp \

M384_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/npc/d_a_npc_ykw/d_a_npc_ykw.o \

M384_LIBS := \

M384_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M384_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M384_LDSCRIPT) \
	-unused -map $(M384_MAP) \
	-w off \

$(M384_TARGET): $(M384_O_FILES) $(M384_LIBS)
	@echo [384] creating $(M384_TARGET)
	@echo $(M384_LIBS) $(M384_O_FILES) > build/M384_ofiles
	@python3 tools/lcf.py rel 384 --output $(M384_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M384_LDFLAGS) -o $(M384_TARGET) @build/M384_ofiles

$(BUILD_DIR)/rel/d/a/npc/d_a_npc_ykw/%.o: rel/d/a/npc/d_a_npc_ykw/%.cpp
	@echo [384] building $@
	@mkdir -p $(@D)
	@$(ICONV) -f UTF-8 -t CP932 < $< > $(basename $@).cpp
	@$(CC) $(CFLAGS) $(M384_CFLAGS) -c -o $@ $(basename $@).cpp


