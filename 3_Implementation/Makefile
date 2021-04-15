ROJECT_NAME=quiz

INC= inc
SSRC=src

BUILD = build

SRC=main.c \
src/edit_score.c \
src/show_record.c \
src/reset_score.c 

# TEST_SRC=test_complex.c\
# unity.c


#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all:$(SRC) $(INC)
	gcc -I$(INC) -I$(SSRC) $(SRC) -o $(PROJECT_NAME).$(EXEC)

run:$(PROJECT_NAME)
	./$(PROJECT_NAME).$(EXEC)


# Document the code using Doxygen
doc:
	make -C ./documentation

coverage:$(PROJECT_NAME)
	gcc -fprofile-arcs -ftest-coverage $(SRC) -o $(PROJECT_NAME).$(EXEC)
	./${PROJECT_NAME}.$(EXEC)
	gcov -a $(SRC)

valgrind:$(PROJECT_NAME)
	valgrind --track-origins=yes ./${PROJECT_NAME}.$(EXEC)

cppcheck:$(SRC)
	cppcheck $(SRC)

clean:$(SRC)
	rm -r *gcov *gcda *gch

# test:$(BUILD)
# 	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
# 	./$(TEST_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
