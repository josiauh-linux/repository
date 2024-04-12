DESTDIR=/usr/bin

ehco: src/main.c
	gcc src/main.c -o ehco
install: ehco
	cp ehco $(DESTDIR)
	