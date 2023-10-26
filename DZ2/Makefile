SRC=$(wildcard src/*c)
OBJ=$(pathsubst %c, %o, $(SRC))
OBJ1=$(pathsubst %c, %o, $(SRC))
INC=inc/
FILESWMAIN=$(wildcard exesrc/*c)

CFLAGS=-I $(INC)
EXE=exe/app.elf

all: $(EXE)

%.elf: $(OBJ)
	gcc $(OBJ) -o $@
	
%.0: %.c
	gcc -c $< $(CFLAGS) -o $@
	
test: $(EXE)

%.elf: $(OBJ1)
	gcc $(OBJ1) -o $@
	
%.0: %.c
	gcc -c $< $(CFLAGS) -o $@
	
clean:
	rm -f $(OBJ) $(OBJ1) $(EXE)
