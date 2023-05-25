#!/bin/bash

mkdir libft_new

for file in ft_*.c
do
  cp "$file" libft_new/
done

cp libft.h libft_new/
