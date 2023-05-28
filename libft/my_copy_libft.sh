#!/bin/bash

mkdir -p /Users/Offline/offlien\ -\ playground/new_copy

for file in ft_*.c
do
  cp -f "$file" /Users/Offline/offlien\ -\ playground/new_copy/
done

cp -f libft.h /Users/Offline/offlien\ -\ playground/new_copy/
