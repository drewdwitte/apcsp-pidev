#!/bin/bash
echo -e "Content-type: text/html\n\n"
for i in "rpi01" "rpi02" "rpi03" "rpi04" "rpi05" "rpi06" "rpi07" "rpi08" "$
do
        ping -c 1 -W 1 $i > /dev/null 2>&1
        if [ $? -eq 0 ]; then
        echo "<li>$i</li>" "<li>This rpi is alive</li>"
        else
         echo"<li> $i</li>" "<li>This rpi is dead</li>"
        fi
done


