cat /etc/passwd | sed '/^#/,/$/d' | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | sed -n $FT_LINE1,$FT_LINE2\p | sed 's/$/,/g' | tr '\n' ' ' | sed 's/, $/./' | tr -d '\n'
