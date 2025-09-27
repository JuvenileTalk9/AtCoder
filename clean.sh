#!/bin/bash

while read file; do
    echo "remove: $file"
    rm "$file"
done < <(find . -name a.out)
