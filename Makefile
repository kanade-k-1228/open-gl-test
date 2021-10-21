CC     := g++
CFLAGS := -Wall
TARGET := main
SRCS   := main.cpp
OBJS   := $(SRCS:.cpp=.o)
INCDIR := -I./inc
LIBDIR := 
LIBS   := -lglut -lGLU -lGL -lm

all: clean $(OBJS) $(TARGET)
	-rm -f $(OBJS)

clean:
	-rm -f $(OBJS) $(TARGET) *.d

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LIBS) -o $(TARGET)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

