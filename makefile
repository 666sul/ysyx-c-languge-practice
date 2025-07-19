



SOURCE= $(wildcard ./*.c)
OBJ=$(patsubst %.c,%.o,$(SOURCE))
TARGET=a.out


.PHONY:clean



$(TARGET):$(OBJ)
	$(CC) -Wall -g -lm  $^


clean:
	$(RM)  $(TARGET) $(OBJ)



show:
###	@echo$(OBJ)






