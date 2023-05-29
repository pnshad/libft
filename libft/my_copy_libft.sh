#!/bin/bash

mkdir -p /Users/Offline/offlien\ -\ playground/libft_new/libft 

for file in ft_*.c
do
  cp -f "$file" /Users/Offline/offlien\ -\ playground/libft_new/libft/
done

cp -f libft.h /Users/Offline/offlien\ -\ playground/libft_new/libft/
