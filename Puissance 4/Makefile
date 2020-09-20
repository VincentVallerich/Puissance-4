#declaration des variables
CC=gcc
EXEC=Puissance4.exe
SRC=$(wildcard *.c) #selectionne tout les .c du dossier courant
OBJ=$(SRC:.c=.o) #les fichiers objets = fichier.c en .o

all: $(EXEC) clean

#executable a creer : dependances (ensemble des .c dans le dossier)
#compilateur -option (generation de liens) selection cible selection_liste_des_dependances
$(EXEC):$(OBJ)
	$(CC) -o $@ $^ 

#transformer les .c en .o
#compilateur -option (compilation) -option cible premiere_dependance
%.o:%.c
	$(CC) -c -o $@ $<

#indique que le main .o utilise les dependance des fichiers .h suivants
main.o: check.h

#permet d'executer les instructions (clean) quoi qu'il arrive
.PHONY: clean

#instruction pour supprimer les fichiers objet intermediaire (en .o)
clean:
	@rm -rf *.o