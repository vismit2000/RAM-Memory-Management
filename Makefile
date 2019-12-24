exe: main.o compare.o createList.o defrag.o deleteElement.o display_options.o displayFreeList.o initialize.o insert.o populate.o printList.o sizeTotal.o
	@echo "\nCOMPILING..."
	gcc -o exe main.o compare.o createList.o defrag.o deleteElement.o display_options.o displayFreeList.o initialize.o insert.o populate.o printList.o sizeTotal.o
	@echo "\nCOMPILED SUCCESSFULLY...\nEXECUTING PROGRAM..."
	./exe
	rm -rf *o exe

main.o: main.c
	gcc -c main.c

compare.o: compare.c
	gcc -c compare.c

createList.o: createList.c
	gcc -c createList.c

defrag.o: defrag.c
	gcc -c defrag.c

deleteElement.o: deleteElement.c
	gcc -c deleteElement.c

display_options.o: display_options.c
	gcc -c display_options.c

displayFreeList.o: displayFreeList.c
	gcc -c displayFreeList.c

initialize.o: initialize.c
	gcc -c initialize.c

insert.o: insert.c
	gcc -c insert.c

populate.o: populate.c
	gcc -c populate.c

printList.o: printList.c
	gcc -c printList.c

sizeTotal.o: sizeTotal.c
	gcc -c sizeTotal.c


##### A very simple Makefile: #####

# src = $(wildcard *.c)

# exe:
# 	@echo "\nCOMPILING..."
# 	@gcc $(src)
# 	@echo "\nCOMPILED SUCCESSFULLY...\nEXECUTING PROGRAM..."
# 	@./a.out
# 	@rm *.out