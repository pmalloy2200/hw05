CC = clang
CFLAGS = -Wall -O0 -g
LFLAGS = -O0 -g
LIBS = -lm

calcradius: calcradius.o area.o perimeter.o distance.o
	$(CC) $(LFLAGS) -o $@ $^ $(LIBS)
area.o perimeter.o distance.o: geom.h

clean:
	rm -f *.o
veryclean: clean
	rm -f calcradius
