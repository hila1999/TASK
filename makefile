CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=basicClassification.o advancedClassificationLoop.o
OBJECTS_LIB_R=basicClassification.o advancedClassificationRecursion.o
FLAGS= -Wall -g

all:recursived recursives loopd loops maindrec maindloop mains

mains: $(OBJECTS_MAIN) libclassrec.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
maindloop: $(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN)  ./libclassrec.so
recursived:libclassrec.so 
libclassrec.so : $(OBJECTS_LIB_R)
	$(CC) -shared -o libclassrec.so $(OBJECTS_LIB_R)
loopd: libclassloops.so
libclassloops.so:$(OBJECTS_LIB)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LIB)
loops: libclassloops.a
libclassloops.a : $(OBJECTS_LIB)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB)
recursives: libclassrec.a
libclassrec.a:$(OBJECTS_LIB_R)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_R)

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h  
	$(CC) $(FLAGS) -c advancedClassificationLoop.c 
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h  
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c 
main.o: main.c NumClass.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o  *.txt *.a *.so mains maindloop maindrec
