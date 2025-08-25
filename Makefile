all: doc kernel

doc:
	make -C Documentation pdf

kernel:
	make -C source

clean:
	make -C Documentation clean
	make -C source clean

.PHONY:all doc kernel clean
