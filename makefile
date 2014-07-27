SOUF = cf.c cf.h TemperatureTrans.c
CC = gcc 
OPT = -Wall -o 
TemperatureTrans: $(SOUF)
	@$(CC) $^ $(OPT) $@

.PHONY:clean
clean:
	@rm -rf TemperatureTrans
