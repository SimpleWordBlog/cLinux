# 编译器
CC = gcc

# 编译选项,警告信息-编译-C99标准
CFLAGS = -g -std=c99

# 源文件
SRCS = main.c log.c

# 目标文件
OBJS = $(SRCS:.c=.o)

# 目标文件
TARGET = log.o

# 默认目标
all: $(TARGET)

# 生成目标文件
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理规则，删除所有生成的文件
clean:
	rm -f $(OBJS) $(TARGET)