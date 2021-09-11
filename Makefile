TARGET		  	?= main.out
LIBPATH			:= -lgcc -L /usr/local/lib
DYNALIB	        ?= -pthread -lm

CC 				:= gcc

INCDIRS 		:= include \

SRCDIRS			:= control \
                   device \
				   project \
				   output \

INCLUDE			:= $(patsubst %, -I %, $(INCDIRS))

CFILES			:= $(foreach dir, $(SRCDIRS), $(wildcard $(dir)/*.cpp))

CFILENDIR		:= $(notdir  $(CFILES))

COBJS			:= $(patsubst %, obj/%, $(CFILENDIR:.cpp=.o))
OBJS			:= $(COBJS)

VPATH			:= $(SRCDIRS)

.PHONY: clean

$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $^ $(LIBPATH) $(DYNALIB)

$(COBJS) : obj/%.o : %.cpp
	$(CC) -c -O2  $(INCLUDE) -o $@ $<
	
clean:
	rm -rf $(TARGET) $(COBJS)
