CC = gcc
CFLAGS = -Wall -Wextra
TARGET = student_record_management
SRCS = main.c academy.c 
OBJS = $(SRCS:.c=.o)
HEADERS = academy.h student.h

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)