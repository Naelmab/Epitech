#!/bin/bash
cat Day02/passwd | sed -r "s/theo1/Wile E. Coyote/g;s/steven1/Daffy Duck/g;s/arnaud1/Porky Pig/g;s/pierre-jean/Marvin le Martien/g" | egrep "Wile E. Coyote|Daffy Duck|Porky Pig|Marvin le Martien" 
