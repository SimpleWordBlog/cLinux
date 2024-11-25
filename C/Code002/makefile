# 编译器
CC = gcc

# 编译选项：开启全部警告，使用c99标准
CFLAGS = -g -Wall -std=c99

OBJS =  main.o

TARGET =  main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) *.o