OBJ = pascal.o screen.o main.o
APPNAME = pascal 

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)
	
%.o : %.c
	gcc -c -o $@ $< 
	
clean :
	rm $(OBJ) $(APPNAME)