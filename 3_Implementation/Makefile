PROJ_NAME = TemperatureSensorBasedCoolingSystem

BUILD_DIR = build

# All Source code files
SRC = main.c\
src/getTemperature.c\
src/init_adc.c\

# All header file paths
INC = -I inc

# Find out the OS and configure the variables accordingly
ifdef OS
   FixPath = $(subst /,\,$1)
   CC = avr-gcc.exe
   AVR_OBJ_CPY = avr-objcopy.exe
else 
   ifeq ($(shell uname), Linux)
      FixPath = $1				
	  CC = avr-gcc
	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif

# Command to make to consider these names as targets and not as file names in folder
.PHONY:all analysis clean doc

all:$(BUILD_DIR)
# Compile the code and generate the ELF file
	$(CC) -g -Wall -Os -mmcu=atmega328  $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)

$(BUILD_DIR):
# Create directory to store the built files
	mkdir $(BUILD_DIR)

analysis: $(SRC)
# Analyse the code using Cppcheck command line utility
	cppcheck --enable=all $^

doc:
# Build the code code documentation using Doxygen command line utility
	make -C documentation

clean:
# Remove all the build files and generated document files
	rm -rf $(call FixPath,$(BUILD_DIR)/*)
	make -C documentation clean