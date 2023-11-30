CC = g++
CXXFLAGS = -std=c++11 $(shell pkg-config --cflags opencv4)
LIBS = $(shell pkg-config --libs opencv4)

SRC_DIR = .
BUILD_DIR = build
OUTPUT_DIR = output

TARGET_SEQUENTIAL = $(OUTPUT_DIR)/escalaGrises

all: $(TARGET_SEQUENTIAL)

$(TARGET_SEQUENTIAL): $(BUILD_DIR)/escalaGrises.o
	mkdir -p $(OUTPUT_DIR)
	$(CC) $^ -o $@ $(LIBS)

$(BUILD_DIR)/escalaGrises.o: $(SRC_DIR)/escalaGrises.cpp
	mkdir -p $(BUILD_DIR)
	$(CC) -c $< -o $@ $(CXXFLAGS)

clean:
	rm -rf $(BUILD_DIR)/*.o $(OUTPUT_DIR) $(TARGET_SEQUENTIAL)
