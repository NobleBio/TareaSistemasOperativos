CC = g++
CXXFLAGS = -std=c++11 -fopenmp $(shell pkg-config --cflags opencv4)
LIBS = $(shell pkg-config --libs opencv4)

SRC_DIR = .
BUILD_DIR = build
OUTPUT_DIR = output

TARGET = $(OUTPUT_DIR)/grisOpenMP

all: $(TARGET)

$(TARGET): $(BUILD_DIR)/grisOpenMP.o
	mkdir -p $(OUTPUT_DIR)
	$(CC) $^ -o $@ $(LIBS) -fopenmp

$(BUILD_DIR)/grisOpenMP.o: $(SRC_DIR)/grisOpenMP.cpp
	mkdir -p $(BUILD_DIR)
	$(CC) -c $< -o $@ $(CXXFLAGS)

clean:
	rm -rf $(BUILD_DIR)/*.o $(OUTPUT_DIR) $(TARGET)
