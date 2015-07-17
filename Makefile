all:geteuid.c
	gcc geteuid.c -fPIC  -shared -o geteuid
clean:
	rm -f hello
