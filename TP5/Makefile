.PHONY: all clean

# Changer cette ligne en l'adapter à chaque TP
PROGS=tabptr2
CC=gcc
CFLAGS=
LDFLAGS=-lm
# Rien à changer à partir d'ici

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

%.s: %.c
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.s
