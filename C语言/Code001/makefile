# 编译器
CC := gcc

# 编译选项，添加调试信息
CFLAGS := -g

# 路径设置(固定值，推荐设为立即变量)
MAIN_DIR := .
SRC_DIR := ./src
HEADER_DIR := ./header

# 目标可执行文件
TARGET := main

# 自动生成源文件(所有.c)
SRC := $(MAIN_DIR)/main.c $(shell find $(SRC_DIR) -name "*.c")

# 使用模板替换生成目标文件(所有.o)
OBJ := $(SRC:.c=.o)

# 默认规则,该伪目标依赖TARGET
all: $(TARGET)

# 链接生成可执行文件(所有.o->exe)
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

# 编译规则，生成 .o 文件并指定头文件目录,.O结尾的文件匹配次规则
%.o: %.c
	$(CC) $(CFLAGS) -I$(HEADER_DIR) -c $< -o $@

# 清理规则，删除所有生成的文件
clean:
	rm -f $(OBJ) $(TARGET)
