default:
	gcc -Wall -o prog main.c input.c student.c
debug:
	gcc -Wall -o prog -g main.c input.c student.c
clean:
	rm -f prog
