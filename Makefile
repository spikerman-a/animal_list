# Makefile
# assume project header and cpp are same name

PROJECT = petOwners
MAIN = main.cpp

debug: $(MAIN) $(PROJECT).cpp $(PROJECT).h
    g++ -g -Wall $(MAIN) $(PROJECT).cpp $(TEXT) -o debug

$(PROJECT): $(MAIN) $(PROJECT).cpp $(PROJECT).h
    g++ -g -Wall $(MAIN) $(PROJECT).cpp $(TEXT) -o output

clean:
    rm debug
    rm output
