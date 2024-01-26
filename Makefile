CC ?= gcc
CFLAGS = -Wall -Wextra
BIN_DIR = ./bin
CFLAGS = -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib/ -lglfw -lm

run:
	${CC} src/main.c lib/glad/glad.c -Ilib src/engine/*.c -o ${BIN_DIR}/main ${CFLAGS} ${LDFLAGS}
	${BIN_DIR}/main 