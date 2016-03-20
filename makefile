SOUF = cf.c cf.h tempscacov.c
CC = gcc 
OPT = -Wall -o 
tempscacov: $(SOUF)
	@$(CC) $^ $(OPT) $@

.PHONY:clean
clean:
	@rm -rf tempscacov 
