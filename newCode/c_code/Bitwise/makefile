driver:driver.o apiBinary.o header.h 
	cc -o driver driver.o apiBinary.o header.h 
driver.o:driver.c 
	cc -c driver.c 
apiBinary.o:apiBinary.c 
	cc -c apiBinary.c 
clean:
	rm driver.o apiBinary.o
