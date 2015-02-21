LIBS = lm

# Declare the objects which I have
OBJS = main.o thankyou.o

#CFLAGS 

# The commmond line, "main". Notice that, there must begin with "TAB" button.  
# gcc -o $@ ${OBJS} means specify the outfile as main main.o thankyou.o
# The $@ is means main 
main: ${OBJS}
	gcc -o $@ ${OBJS} 

# The commmond line, "clean". Notice that, there must begin with "TAB" button.  
# rm -f main ${OBJS} means remove forced for main main.o thankyou.o   
clean:
	rm -f main ${OBJS} 

# The commmond line, "output". Notice that, there must begin with "TAB" button.
# ./main means execution the result of main  
output:
	./main