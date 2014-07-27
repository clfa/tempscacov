SOUF=cf.c cf.h
OPT=-Wall -g -o 
TemptureTrans:cf.o TemptureTrans.c
	gcc cf.o $@.c $(OPT) $@
cf.o:$(SOUF)
	gcc -c cf.c
.PHONY:clean
clean:
	-rm *.o TemptureTrans
