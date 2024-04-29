CXX = g++

CXXFLAGS = -w

TARGET = simple_mvc

SOURCES = simple_mvc.cpp \
    controller/controller.cpp \
    model/model.cpp \
    view/view.cpp \
    view/view_listener.cpp

all: $(TARGET)

# Default target to build the executable
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -rf $(TARGET)