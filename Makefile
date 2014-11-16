# I can't be arsed to figure out CMake when regular make works fine for now.
# This uses http://en.sfml-dev.org/forums/index.php?topic=9037.0 as a guide.

LIBS = -lsfml-graphics -lsfml-window -lsfml-system
CXX = g++
EXECUTABLE = Karellan

all: main.o Space.o SpaceViewer.o
	$(CXX) main.o Space.o SpaceViewer.o -o $(EXECUTABLE) $(LIBS)

%.o: %.cpp
	$(CXX) -c $< -o $@
