SRC=src/
BUILD=build/
INCLUDE=$(SRC)include

all: $(BUILD)cppClient $(BUILD)cClient

build_directory:
	[ -d $(BUILD) ] || mkdir $(BUILD)

$(BUILD)libcore.a: $(SRC)corelibrary.cpp build_directory
	clang++ -c -I$(INCLUDE) -o $@ $<

$(BUILD)cppClient: $(SRC)cppClient.cpp $(BUILD)libcore.a build_directory
	clang++ --std=c++14 -I$(INCLUDE) -lcore -L$(BUILD) -o $@ $<

$(BUILD)libwrapper.so: $(SRC)wrapper.cpp $(BUILD)libcore.a build_directory
	clang++ -dynamiclib -I$(INCLUDE) -lcore -L$(BUILD) -o $@ $<

$(BUILD)cClient: $(SRC)cClient.c $(BUILD)libwrapper.so build_directory
	clang -I$(INCLUDE) -lwrapper -L$(BUILD) -o $@ $<

clean:
	[ -d $(BUILD) ] && rm -r $(BUILD)
