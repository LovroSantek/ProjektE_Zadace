#!/bin/bash

imeSkripte=$(basename "$0")
obrnutoImeSkripte=$(echo "$imeSkripte" | rev)

tac "$0" | rev > "$obrnutoImeSkripte"

chmod +x "$obrnutoImeSkripte"

echo "Success!" 
