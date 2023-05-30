#!/bin/bash

# Crea la cartella libft_push_ready se non esiste
mkdir -p libft_push_ready

# Copia i file ft*.c dalla cartella libft nella cartella di destinazione libft_push_ready
cp -f libft/ft*.c libft_push_ready/

# Copia il file libft.h nella cartella di destinazione libft_push_ready
cp -f libft/libft.h libft_push_ready/

# Copia il file Makefile nella cartella di destinazione libft_push_ready
cp -f libft/Makefile libft_push_ready/
