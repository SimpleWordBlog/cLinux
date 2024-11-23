# 编译器
CC := gcc

# 路径设置(固定值，推荐设为立即变量)
# 这里是相对于项目根目录的路径【不是相对于makefile】
MAIN_DIR := .
SRC_DIR := ./src
HEADER_DIR := ./header
LOG_DIR := ./lib/log

# 编译选项，添加调试信息和用到的头文件目录
CFLAGS := -g -I$(HEADER_DIR) -I$(LOG_DIR)

# 目标可执行文件
TARGET := main

# 自动生成源文件(所有.c)
# shell查找的路径是相当于makefile所在的路径【前面我们已经定义好了SRC_DIR相对于makefile的路径/】
SRC := $(MAIN_DIR)/main.c $(shell find $(SRC_DIR) -name "*.c")

# 使用模板替换生成目标文件(所有.o)，包含了log.o
LOG_OBJ= $(LOG_DIR)/log.o
OBJS := $(SRC:.c=.o) 
OBJS += $(LOG_OBJ)


# 默认规则,该伪目标依赖TARGET
all: $(TARGET)

# 链接生成可执行文件(所有.o->exe)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# log.o生成依赖该目录下的makefile
$(LOG_OBJ):
	make -C $(LOG_DIR)

# 编译规则，生成 .o 文件并指定头文件目录,.O结尾的文件匹配此规则
# log.o已经生成，不会匹配此规则
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理规则，删除所有生成的文件
clean:
	rm -f $(OBJS) $(TARGET) $(LOG_OBJ)
