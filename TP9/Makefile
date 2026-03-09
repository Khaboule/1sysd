.PHONY: all clean

# Changer cette ligne en l'adapter à chaque TP
PROGS=city city2
CC=gcc
CFLAGS=
LDFLAGS=
# Rien à changer à partir d'ici

all: $(PROGS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LDFLAGS)

%.s: %.c
	$(CC) -S $<

clean:
	rm -f $(PROGS) *.s core
