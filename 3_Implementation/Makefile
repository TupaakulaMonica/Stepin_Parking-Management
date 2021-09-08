SRC = main.c\
src/parking.c\


INC = inc

c.exe : $(SRC) $(TEST_SRC)
	gcc $^ -I$(INC) -o $@

run: c.exe
	./c.exe

clean :
	del c.exe
