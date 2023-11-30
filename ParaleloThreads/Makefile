CC = g++
CXXFLAGS = -std=c++11 -pthread $(shell pkg-config --cflags opencv4)
LIBS = $(shell pkg-config --libs opencv4)

SRC_DIR = .
BUILD_DIR = build
OUTPUT_DIR = output

TARGET = $(OUTPUT_DIR)/grisThread

all: $(TARGET)

$(TARGET): $(BUILD_DIR)/grisThread.o
	mkdir -p $(OUTPUT_DIR)
	$(CC) $^ -o $@ $(LIBS)

$(BUILD_DIR)/grisThread.o: $(SRC_DIR)/grisThread.cpp
	mkdir -p $(BUILD_DIR)
	$(CC) -c $< -o $@ $(CXXFLAGS)

clean:
	rm -rf $(BUILD_DIR)/*.o $(OUTPUT_DIR) $(TARGET)
