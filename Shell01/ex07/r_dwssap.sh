cat /etc/passwd | grep -v '#' | cut -d ":" -f 1 | awk "NR%2==0" | rev | sort -r | awk -v F1=$FT_LINE1 -v F2=$FT_LINE2 "NR>=F1 && NR<=F2" | xargs | sed -e 's/ /, /g' | sed 's/$/./g' | tr -d '\n'
