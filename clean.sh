#!/bin/bash

while read file; do
    rm "$file"
done < <(find . -name a.out)
