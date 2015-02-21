LIBS = lm

# Declare the cross compiler as gcc
CC   = gcc

# Declare the objects which I have
objects = main.o thankyou.o

#CFLAGS 

# The commmond line, "main". Notice that, there must begin with "TAB" button.  
# gcc -o $@ $^ means specify the outfile as main main.o thankyou.o
# The $@ is means main 
main: $^
	${CC} -o $@ $^ 

# The commmond line, "clean". Notice that, there must begin with "TAB" button.  
# rm -f main $^ means remove forced for main main.o thankyou.o   
clean:
	rm -f main $^

# The commmond line, "output". Notice that, there must begin with "TAB" button.
# ./main means execution the result of main  
output:
	./main